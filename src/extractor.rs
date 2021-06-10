use crate::exceptions::{
    ParseError,
    SourceError,
    TypeError,
};
use std::collections::HashMap;
use std::str::{
    from_utf8,
};
use tree_sitter::Node;


// final result
// slightly looser types than ExprT to match dbt
#[derive(Clone, Debug, Eq, PartialEq)]
pub struct Extraction {
    refs: Vec<(String, Option<String>)>,
    sources: Vec<(String, String)>,
    // TODO is ExprT really the right type to put here?
    configs: HashMap<String, ExprT>,
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
        configs: Option<HashMap<String, ExprT>>
    ) -> Extraction {
        Extraction {
            refs: refs.unwrap_or(vec![]),
            sources: sources.unwrap_or(vec![]),
            configs: configs.unwrap_or(HashMap::new()),
        }
    }
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
    ConfigT(HashMap<String, ExprT>),
}

fn map_err<A, E1, E2>(r: Result<A, E1>, f: fn(E1) -> E2) -> Result<A, E2> {
    match r {
        Ok(a)  => Ok(a),
        Err(e) => Err(f(e)),
    }
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
                Err(_)       => Err(SourceError::BadSourceExtraction),
            }
        },

        "lit_string" => {
            match text_from_node(&source, &node) {
                Ok(s)  => Ok(ExprU::StringU(strip_first_and_last(s))),
                Err(_) => Err(SourceError::BadSourceExtraction),
            }
        },

        "bool" => {
            match text_from_node(&source, &node) {
                Ok("True")  => Ok(ExprU::BoolU(true)),
                Ok("False") => Ok(ExprU::BoolU(false)),
                Ok(s)       => Err(SourceError::BadBoolean(s.to_owned())),
                Err(_)      => Err(SourceError::BadSourceExtraction),
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
                                ExprU::KwargU(key, value) =>
                                    // TODO this allows way too much like ref() values.
                                    // fix the extraction type for configs and do the checks here.
                                    type_check(*value).and_then(|v| Ok((key, v))),
                                _ =>
                                    Err(TypeError::TypeMismatch { expected: "keyword argument".to_owned() }),
                            }
                        })
                        .collect::<Result<HashMap<String, ExprT>, TypeError>>()?;
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

pub fn extract_from_source(source: &str) -> Result<Extraction, ParseError> {
    // run tree-sitter parser
    let source_bytes: Vec<u8> = source.as_bytes().to_vec();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_jinja2::language()).expect("Error loading jinja2 grammar");
    let tree = parser.parse(source, None).unwrap();

    // convert to internal ast
    let ast = map_err(to_ast(&source_bytes, tree.root_node()), ParseError::SourceE)?;
    
    // type check ast
    let typed_ast = map_err(type_check(ast), ParseError::TypeE)?;

    // extract
    Ok(extract_from(typed_ast))
}
