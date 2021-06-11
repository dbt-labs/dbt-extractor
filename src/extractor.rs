use crate::exceptions::{
    ParseError,
    SourceError,
    TypeError,
};
use std::collections::HashMap;
use std::str::{
    from_utf8,
};
use tree_sitter::{
    Node,
    Tree,
};


// final result
// slightly looser types than ExprT to match dbt
#[derive(Clone, Debug, Eq, PartialEq)]
pub struct Extraction {
    refs: Vec<(String, Option<String>)>,
    sources: Vec<(String, String)>,
    // TODO is ExprT really the right type to put here?
    configs: HashMap<String, ConfigVal>,
}

impl Extraction {
    // monoidal mappend
    pub fn mappend(&self, other: &Extraction) -> Extraction {
        Extraction {
            refs: [&self.refs[..], &other.refs[..]].concat(),
            sources: [&self.sources[..], &other.sources[..]].concat(),
            configs: self.configs.clone().into_iter().chain(other.configs.clone()).collect(),
        }
    }

    pub fn new() -> Extraction {
        Extraction::populate(None, None, None)
    }

    pub fn populate(
        refs: Option<Vec<(String, Option<String>)>>,
        sources: Option<Vec<(String, String)>>,
        configs: Option<HashMap<String, ConfigVal>>
    ) -> Extraction {
        Extraction {
            refs: refs.unwrap_or(vec![]),
            sources: sources.unwrap_or(vec![]),
            configs: configs.unwrap_or(HashMap::new()),
        }
    }
}

// typed ast
#[derive(Clone, Debug, Eq, PartialEq)]
// TODO make private
pub enum ExprT {
    RootT(Vec<ExprT>),
    StringT(String),
    BoolT(bool),
    // lists are heterogeneous
    ListT(Vec<ExprT>),
    DictT(HashMap<String, ExprT>),
    // built-in function types
    // args represented as positional regardless of kwargs in source
    RefT(String, Option<String>),
    SourceT(String, String),
    ConfigT(HashMap<String, ConfigVal>),
}

// wrappers for config return types
#[derive(Clone, Debug, Eq, PartialEq)]
pub enum ConfigVal {
    StringC(String),
    BoolC(bool),
    ListC(Vec<ConfigVal>),
    DictC(HashMap<String, ConfigVal>),
}

// untyped ast
#[derive(Clone, Debug, Eq, PartialEq)]
enum ExprU {
    RootU(Vec<ExprU>),
    StringU(String),
    BoolU(bool),
    ListU(Vec<ExprU>),
    DictU(HashMap<String, ExprU>),
    KwargU(String, Box<ExprU>),
    FnCallU(String, Vec<ExprU>),
}

fn map_err<A, E1, E2>(r: Result<A, E1>, f: fn(E1) -> E2) -> Result<A, E2> {
    match r {
        Ok(a)  => Ok(a),
        Err(e) => Err(f(e)),
    }
}

fn error_anywhere(node: &Node) -> bool {
    if node.has_error() {
        return true
    };

    for child in node.children(&mut node.walk()) {
        error_anywhere(&child);
    };

    false
}

fn child_by_field_name<'a, 'b>(node: &'a Node, name: &'b str) -> Result<Node<'a>, SourceError> {
    node.child_by_field_name(name)
        .ok_or(SourceError::MissingValue(node.kind().to_owned(), name.to_owned()))
}

fn named_children(node: Node) -> Vec<Node> {
    // calling allocating a new cursor every time is less effecient, but juggling lifetimes also sucks.
    node.named_children(&mut node.walk()).collect()
}

fn text_from_node<'a>(source: &'a Vec<u8>, node: &Node) -> Result<&'a str, SourceError> {
    match from_utf8(&source[node.start_byte()..node.end_byte()]) {
        Ok(s) => Ok(s),
        Err(e) => Err(SourceError::Utf8Err(e)),
    }
}

fn strip_first_and_last(s: &str) -> String {
    if s.len() <= 2 {
        "".to_owned()
    } else {
        s[1..s.len()-1].to_string()
    }
}

fn to_ast(source: &Vec<u8>, node: Node) -> Result<ExprU, SourceError> {
    let kind = node.kind();
    match kind {
        "source_file" => {
            let x: Result<Vec<ExprU>, SourceError> = 
            named_children(node)
                    .into_iter()
                    .map(|child| to_ast(source, child))
                    .collect();

            match x {
                Ok(children) => Ok(ExprU::RootU(children)),
                Err(_)       => Err(SourceError::TreeSitterError),
            }
        },

        "lit_string" => {
            match text_from_node(&source, &node) {
                Ok(s)  => Ok(ExprU::StringU(strip_first_and_last(s))),
                Err(_) => Err(SourceError::TreeSitterError),
            }
        },

        "bool" => {
            match text_from_node(&source, &node) {
                Ok("True")  => Ok(ExprU::BoolU(true)),
                Ok("False") => Ok(ExprU::BoolU(false)),
                Ok(s)       => Err(SourceError::BadBoolean(s.to_owned())),
                Err(_)      => Err(SourceError::TreeSitterError),
            }
        },

        "kwarg" => {
            let key = text_from_node(source, &child_by_field_name(&node, "key")?)?;
            let value = child_by_field_name(&node, "value")?;
            Ok(ExprU::KwargU(key.to_owned(), Box::new(to_ast(source, value)?)))
        },

        "dict" => {
            let mut dict = HashMap::new();
            for pair in named_children(node) {
                let key_node = child_by_field_name(&pair, "key")?;
                let key = strip_first_and_last(text_from_node(&source, &key_node)?);
                let value_node = child_by_field_name(&pair, "value")?;
                let value = to_ast(source, value_node)?;

                dict.insert(key, value);
            }
            Ok(ExprU::DictU(dict))
        },

        "list" => {
            let mut list = vec![];
            for elem in named_children(node) {
                list.push(to_ast(source, elem)?);
            }
            Ok(ExprU::ListU(list))
        },

        "fn_call" => {
            let name = text_from_node(source, &child_by_field_name(&node, "fn_name")?)?;
            let arg_list = child_by_field_name(&node, "argument_list")?;
            let mut args = vec![];
            for arg in named_children(arg_list) {
                args.push(to_ast(source, arg)?)
            }
            Ok(ExprU::FnCallU(name.to_owned(), args))
        },

        s => Err(SourceError::UnknownNodeType(s.to_owned()))
    }
}

fn kwargs_last(args: &Vec<ExprU>) -> bool {
    let mut seen_kwarg = false;
    for arg in args {
        match arg {
            ExprU::KwargU(_, _) => 
                seen_kwarg = true,
            _ => 
                if seen_kwarg {
                    return false
                } else {
                    ()
                },
        }
    };
    true
}

// for now, configs are constrained to a subset of types. This function checks
// for those types specifically returning a type that maintains that invariant
fn type_check_configs(expr: ExprU) -> Result<ConfigVal, TypeError> {
    match expr {
        ExprU::BoolU(v) => Ok(ConfigVal::BoolC(v)),

        ExprU::StringU(v) => Ok(ConfigVal::StringC(v)),

        ExprU::ListU(elems) => elems
            .into_iter()
            .map(|elem| type_check_configs(elem))
            .collect::<Result<Vec<ConfigVal>, TypeError>>()
            .map(|typed_elems| ConfigVal::ListC(typed_elems)),

        ExprU::DictU(m) => m
            .into_iter()
            .map(|(key, elem)| type_check_configs(elem).map(|typed| (key, typed)))
            .collect::<Result<HashMap<String, ConfigVal>, TypeError>>()
            .map(|typed_elems| ConfigVal::DictC(typed_elems)),
            
        // TODO use exprU -> string function here instead of dummy
        _unsupported => Err(TypeError::UnsupportedConfigValue("TODO".to_string())),
    }
}

fn type_check(ast: ExprU) -> Result<ExprT, TypeError> {
    match ast {
        ExprU::RootU(exprs) => {
            let x: Result<Vec<ExprT>, TypeError> = 
                exprs
                    .into_iter()
                    .map(type_check)
                    .collect();
            x.map(ExprT::RootT)
        },

        ExprU::StringU(v) => Ok(ExprT::StringT(v)),

        ExprU::BoolU(v) => Ok(ExprT::BoolT(v)),

        // Throw away names. 
        // In the step before getting here, names will be checked for correctness.
        ExprU::KwargU(_, value) => {
            match *value {
                ExprU::FnCallU(name, _) => Err(TypeError::BadAssignment("kwarg".to_owned(), ["fn_call", &name].join(" "))),
                // No intermediary kwarg type. Just return the underlying value.
                _ => type_check(*value),
            }
        },

        ExprU::DictU(m) => {
            let x = m.iter()
                .map(|(k, vu)| type_check(vu.clone()).map(|vt| (k.clone(), vt)))
                .collect::<Result<HashMap<String, ExprT>, TypeError>>()?;
            Ok(ExprT::DictT(x))
        },

        ExprU::ListU(elems) => {
            let mut list = vec![];
            for elem in elems {
                match elem  {
                    ExprU::FnCallU(name, _) => 
                        return Err(TypeError::BadAssignment("list element".to_owned(), ["fn_call", &name].join(" "))),
                    _ => 
                        ()
                }
                list.push(type_check(elem)?);
            }
            Ok(ExprT::ListT(list))
        },

        ExprU::FnCallU(name, args) => {
            if !kwargs_last(&args) {
                return Err(TypeError::KwargsAreNotLast)
            };
            match &name[..] {
                "ref" => {
                    if args.len() != 1 && args.len() != 2 {
                        return Err(TypeError::ArgumentMismatch { expected: "1 or 2".to_owned(), found: args.len() } )
                    }
                    let typed_args = args
                        .into_iter()
                        .map(|arg| {
                            match arg {
                                ExprU::StringU(s) => Ok(s),
                                // TODO typeof function
                                _ => Err(TypeError::TypeMismatch { expected: "String".to_owned() } )
                            }
                        })
                        .collect::<Result<Vec<String>, TypeError>>()?;
                    Ok(ExprT::RefT(typed_args[0].clone(), typed_args.get(1).map(|x| x.to_owned())))
                },

                "source" => {
                    let source_args = args.clone();
                    if args.len() != 2 {
                        return Err(TypeError::ArgumentMismatch { expected: "2".to_owned(), found: args.len() } )
                    }
                    let source_name = match &source_args[0] {
                        ExprU::KwargU(name, value) if name == "source_name" =>
                            match &**value {
                                ExprU::StringU(s) => Ok(s),
                                _ => Err(TypeError::TypeMismatch { expected: "String".to_owned() } ),
                            }
                        ExprU::KwargU(name, _) if name != "source_name" =>
                            Err(TypeError::UnexpectedKwarg(name.to_owned())),
                        ExprU::StringU(s) =>
                            Ok(s),
                        _ => 
                            Err(TypeError::TypeMismatch { expected: "String or keyword argument source_name".to_owned() } ),
                    }?;
                    let table_name = match &source_args[1] {
                        ExprU::KwargU(name, value) if name == "table_name" =>
                        match &**value {
                            ExprU::StringU(s) => Ok(s),
                            _ => Err(TypeError::TypeMismatch { expected: "String".to_owned() } ),
                        }
                        ExprU::KwargU(name, _) if name != "table_name" =>
                            Err(TypeError::UnexpectedKwarg(name.to_owned())),
                        ExprU::StringU(s) =>
                            Ok(s),
                        _ => 
                            Err(TypeError::TypeMismatch { expected: "String or keyword argument table_name".to_owned() } ),
                    }?;
                    Ok(ExprT::SourceT(source_name.to_owned(), table_name.to_owned()))
                },

                "config" => {
                    if args.len() < 1 {
                        return Err(TypeError::ArgumentMismatch { expected: "any".to_owned(), found: args.len() } )
                    }
                    let excluded = vec!["post-hook", "post_hook", "pre-hook", "pre_hook"];
                    let typed_args = args
                        .into_iter()
                        .map(|arg| {
                            match arg {
                                ExprU::KwargU(key, _) if excluded.contains(&&key[..]) =>
                                    Err(TypeError::ExcludedKwarg(key)),
                                ExprU::KwargU(key, value) => {
                                    // valid config value types are smaller than the whole set
                                    // so we're using this specialized function instead of `type_check`
                                    let typed_value = type_check_configs(*value)?;
                                    Ok((key, typed_value))
                                },
                                _ =>
                                    Err(TypeError::TypeMismatch { expected: "keyword argument".to_owned() }),
                            }
                        })
                        .collect::<Result<HashMap<String, ConfigVal>, TypeError>>()?;
                    Ok(ExprT::ConfigT(typed_args))
                },

                name => Err(TypeError::UnrecognizedFunction(name.to_owned())),
            }
        },
    }
}

fn extract_from(ast: ExprT) -> Extraction {
    match ast {
        ExprT::RootT(exprs) => 
            exprs.into_iter().fold(Extraction::new(), |b, a| b.mappend(&extract_from(a))),
        ExprT::RefT(x, y) =>
            Extraction {
                refs: vec![(x, y)],
                sources: vec![],
                configs: HashMap::new(),
            },
        ExprT::SourceT(x, y) =>
            Extraction {
                refs: vec![],
                sources: vec![(x, y)],
                configs: HashMap::new(),
            },
        ExprT::ConfigT(configs) =>
            Extraction {
                refs: vec![],
                sources: vec![],
                configs: configs,
            },
        // otherwise, there's nothing to extract
        _ =>
            Extraction::new()
    }
}

fn run_tree_sitter(source_bytes: &Vec<u8>) -> Result<Tree, SourceError> {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_jinja2::language()).expect("Error loading jinja2 grammar");
    let tree = parser.parse(source_bytes, None).ok_or(SourceError::ParseFailure)?;
    if error_anywhere(&tree.root_node()) {
        Err(SourceError::TreeSitterError)
    } else {
        Ok(tree)
    }
}

pub fn extract_from_source(source: &str) -> Result<Extraction, ParseError> {
    // convert text to bytes
    let source_bytes = source.as_bytes().to_vec();
    
    // run tree sitter on source
    let tree = map_err(run_tree_sitter(&source_bytes), ParseError::SourceE)?;

    // convert to internal ast
    let ast = map_err(to_ast(&source_bytes, tree.root_node()), ParseError::SourceE)?;
    
    // type check ast
    let typed_ast = map_err(type_check(ast), ParseError::TypeE)?;

    // extract
    Ok(extract_from(typed_ast))
}

#[cfg(test)]
mod typecheck_tests {
    use super::*;

    fn get_results(sources: Vec<&str>) -> Vec<(&str, Result<ExprT, ParseError>)> {
        sources.into_iter().map(|source| {
            let source_bytes = source.as_bytes().to_vec();
            let ast = run_tree_sitter(&source_bytes)
                .and_then(|tree| to_ast(&source_bytes, tree.root_node()));
            let typed_ast = map_err(ast, ParseError::SourceE)
                .and_then(|ast| map_err(type_check(ast), ParseError::TypeE));
            (source, typed_ast)
        }).collect()
    }

    fn assert_all_type_check(sources: Vec<&str>) {
        for result in get_results(sources) {
            match result {
                (_, Ok(_)) => assert!(true),
                (source, Err(e)) => {
                    println!("source:         {}", source);
                    println!("produced error: {}", e);
                    assert!(false)
                },
            }
        } 
    }

    fn assert_none_type_check(sources: Vec<&str>) {
        for result in get_results(sources) {
            match result {
                (source, Ok(ast)) => {
                    println!("expected error from source.");
                    println!("source: {}", source);
                    println!("produced ast: {:?}", ast);
                    assert!(false)
                },
                (_, Err(_)) => assert!(true),
            }
        } 
    }

    fn assert_produces_tree(source: &str, expect: ExprT) {
        match &get_results(vec![source])[0] {
            (_, Ok(ast)) => assert_eq!(*ast, expect),
            (source, Err(e)) => {
                println!("source:         {}", source);
                println!("produced error: {}", e);
                assert!(false)
            },
        } 
    }

    fn assert_fails_with(source: &str, expect: ParseError) {
        match &get_results(vec![source])[0] {
            (source, Ok(ast)) => {
                println!("expected error from source.");
                println!("source: {}", source);
                println!("produced ast: {:?}", ast);
                assert!(false)
            },
            (_, Err(e)) => assert_eq!(*e, expect),
        }
    }

    #[test]
    fn recognizes_ref_source_config() {
        assert_all_type_check(vec![
            "select * from {{ ref('my_table') }}",
            "{{ config(key='value') }}",
            "{{ source('a', 'b') }}",
        ])
    }

    #[test]
    fn recognizes_multiple_jinja_calls() {
        assert_all_type_check(vec![
            "{{ ref('x') }} {{ ref('y') }}",
            "{{ config(key='value') }} {{ config(k='v') }}",
            "{{ source('a', 'b') }} {{ source('c', 'd') }}",
        ])
    }

    #[test]
    fn fails_on_other_fn_names() {
        assert_none_type_check(vec![
            "select * from {{ reff('my_table') }}",
            "{{ fn(key='value') }}",
            "{{ REF('a', 'b') }}",
        ])
    }

    #[test]
    fn test_config_all_inputs() {
        assert_all_type_check(vec![
            "{{ config(key='value') }}",
            "{{ config(key=True) }}",
            "{{ config(key=False) }}",
            "{{ config(key=['v1,','v2']) }}",
            "{{ config(key={'k': 'v'}) }}",
            "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}"
        ])
    }

    #[test]
    fn config_fails_non_kwarg_inputs() {
        assert_none_type_check(vec![
            "{{ config('value') }}",
            "{{ config(True) }}",
            "{{ config(['v1,','v2']) }}",
            "{{ config({'k': 'v'}) }}"
        ])
    }

    #[test]
    fn source_keyword_args() {
        assert_all_type_check(vec![
            "{{ source(source_name='src', table_name='table') }}",
            "{{ source('src', table_name='table') }}",
            "{{ source('src', 'table') }}"
        ])
    }

    #[test]
    fn bad_source_keyword_args() {
        assert_none_type_check(vec![
            "{{ source(source_name='src', BAD_NAME='table') }}",
            "{{ source(BAD_NAME='src', table_name='table') }}",
            "{{ source(BAD_NAME='src', BAD_NAME='table') }}"
        ])
    }

    #[test]
    fn source_must_have_2_args() {
        assert_none_type_check(vec![
            "{{ source('one isnt enough') }}",
            "{{ source('three', 'is', 'too many') }}",
            "{{ source('one', 'two', 'three', 'four') }}",
            "{{ source('extra', source_name='src', table_name='table') }}",
        ])
    }

    #[test]
    fn source_args_must_be_strings() {
        assert_none_type_check(vec![
            "{{ source(True, False) }}",
            "{{ source(key='str', key2='str2') }}",
            "{{ source([], []) }}",
            "{{ source({}, {}) }}",
        ])
    }

    #[test]
    fn ref_accepts_one_and_two_strings() {
        assert_all_type_check(vec![
            "{{ ref('two', 'args') }}",
            "{{ ref('one arg') }}"
        ])
    }

    #[test]
    fn ref_bad_inputs_fail() {
        assert_none_type_check(vec![
            "{{ ref('too', 'many', 'strings') }}",
            "{{ ref() }}",
            "{{ ref(kwarg='is_wrong') }}",
            "{{ ref(['list is wrong']) }}"
        ])
    }

    #[test]
    fn nested_fn_calls_fail() {
        assert_none_type_check(vec![
            "{{ [ref('my_table')] }}",
            "{{ [config(x='y')] }}",
            "{{ config(x=ref('my_table')) }}",
            "{{ source(ref('my_table')) }}"
        ])
    }

    #[test]
    fn config_excluded_kwargs() {
        assert_none_type_check(vec![
            "{{ config(pre_hook='x') }}",
            "{{ config(pre-hook='x') }}",
            "{{ config(post_hook='x') }}",
            "{{ config(post-hook='x') }}"
        ])
    }

    #[test]
    fn jinja_expressions_fail_everywhere() {
        assert_none_type_check(vec![
            "{% config(x='y') %}",
            "{% if(whatever) do_something() %}",
            "doing stuff {{ ref('str') }} stuff {% expression %}",
            "{{ {% psych! nested expression %} }}"
        ])
    }

    #[test]
    fn top_level_kwargs_are_rejected() {
        assert_none_type_check(vec![
            "{{ kwarg='value' }}"
        ])
    }

    #[test]
    fn multi_block_with_jinja_expression_rejected() {
        assert_none_type_check(vec![r#"
{{ config(key='value') }}
with
something as (
    select whatever from {{ ref('my_table') }}
where {% is_incremental() %} and my_bool
),
other as (
    there's like ten more of these as blocks.
)"#
        ])
    }

    // this triggers "missing" not "error" nodes from tree-sitter
    // checks that we've examined the whole tree-sitter tree for
    // all the kinds of errors it could return.
    #[test]
    fn fails_on_open_jinja_brackets() {
        assert_none_type_check(vec![
            "{{ ref()",
            "{{ True",
            "{{",
            "{{ 'str' "
        ])
    }

    #[test]
    fn ref_ast() {
        assert_produces_tree(
            "{{ ref('my_table') }}"
            ,
            ExprT::RootT(
                vec![ExprT::RefT("my_table".to_string(), None)]
            )
        )
    }

    #[test]
    fn buried_refs_ast() {
        assert_produces_tree(
            r#"
            select
                field1,
                field2,
                field3
            from {{ ref('x') }}
            join {{ ref('y') }}
            "#
            ,
            ExprT::RootT(vec![
                ExprT::RefT("x".to_string(), None), 
                ExprT::RefT("y".to_string(), None)])
        )
    }

    #[test]
    fn config_ast() {
        let mut dict = HashMap::new();
        dict.insert("dict".to_string(), ConfigVal::ListC(vec![ConfigVal::StringC("value".to_string())]));

        let mut config = HashMap::new();
        config.insert("k1".to_string(), ConfigVal::DictC(dict));
        config.insert("k2".to_string(), ConfigVal::StringC("str".to_string()));

        assert_produces_tree(
            "{{ config(k1={'dict': ['value']}, k2='str') }}"
            ,
            ExprT::RootT(vec![
                ExprT::ConfigT(config)
            ])
        )
    }

    #[test]
    fn source_ast() {
        assert_produces_tree(
            "{{ source('x', table_name='y') }}"
            ,
            ExprT::RootT(vec![
                ExprT::SourceT("x".to_string(), "y".to_string())
            ])
        )
    }

    #[test]
    fn jinja_expression_ast() {
        assert_fails_with(
            "{% expression %}"
            ,
            ParseError::SourceE(SourceError::TreeSitterError)
        )
    }

    #[test]
    fn kwarg_order() {
        assert_fails_with(
            "{{ source(source_name='kwarg', 'positional') }}"
            ,
            ParseError::TypeE(TypeError::KwargsAreNotLast)
        )
    }
}