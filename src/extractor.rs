use crate::exceptions::{ParseError, SourceError, TypeError};
#[cfg(test)]
use quickcheck::{Arbitrary, Gen};
use rayon::prelude::*;
use std::collections::HashMap;
use std::str::from_utf8;
use std::str::FromStr;
use tree_sitter::{Node, Tree};
use RefVersion::*;

// final result
// this is snug fit for the shape of the data
#[derive(Clone, Debug, PartialEq)]
pub struct Extraction {
    pub refs: Vec<DbtRef>,
    pub sources: Vec<(String, String)>,
    pub configs: Vec<(String, ConfigVal)>,
}

#[cfg(test)]
impl Arbitrary for Extraction {
    fn arbitrary(g: &mut Gen) -> Extraction {
        Extraction {
            refs: Vec::<DbtRef>::arbitrary(g),
            sources: Vec::<(String, String)>::arbitrary(g),
            configs: Vec::<(String, ConfigVal)>::arbitrary(g),
        }
    }

    fn shrink(&self) -> Box<dyn Iterator<Item = Extraction>> {
        Box::new(
            (
                self.refs.clone(),
                self.sources.clone(),
                self.configs.clone(),
            )
                .shrink()
                .map(|(refs, sources, configs)| Extraction {
                    refs,
                    sources,
                    configs,
                }),
        )
    }
}

impl Extraction {
    // monoidal mappend: takes two Extraction values and immutably merges them into a single Extraction value
    // id element: Extraction::new()
    // associative: x.mappend(y).mappend(z) === x.mappend(y.mappend(z))
    // left identity: Extraction::new().mappend(x) === x
    // right identity: x.mappend(Extraction::new()) === x
    pub fn mappend(&self, other: &Extraction) -> Extraction {
        Extraction {
            refs: [&self.refs[..], &other.refs[..]].concat(),
            sources: [&self.sources[..], &other.sources[..]].concat(),
            configs: [&self.configs[..], &other.configs[..]].concat(),
        }
    }

    pub fn populate(
        refs: Option<Vec<DbtRef>>,
        sources: Option<Vec<(String, String)>>,
        configs: Option<Vec<(String, ConfigVal)>>,
    ) -> Extraction {
        Extraction {
            refs: refs.unwrap_or(vec![]),
            sources: sources.unwrap_or(vec![]),
            configs: configs.unwrap_or(vec![]),
        }
    }
}

impl Default for Extraction {
    fn default() -> Self {
        Self::populate(None, None, None)
    }
}

// untyped ast
#[derive(Clone, Debug, PartialEq)]
enum ExprU {
    RootU(Vec<ExprU>),
    StringU(String),
    BoolU(bool),
    ListU(Vec<ExprU>),
    DictU(HashMap<String, ExprU>),
    KwargU(String, Box<ExprU>),
    FnCallU(String, Vec<ExprU>),
    IntU(i64),
    DoubleU(f64),
}

// typed ast
#[derive(Clone, Debug, PartialEq)]
enum ExprT {
    RootT(Vec<ExprT>),
    StringT(String),
    BoolT(bool),
    // lists are heterogeneous
    ListT(Vec<ExprT>),
    DictT(HashMap<String, ExprT>),
    // built-in function types
    // args represented as positional regardless of kwargs in source
    RefT(DbtRef),
    SourceT(String, String),
    ConfigT(Vec<(String, ConfigVal)>),
    IntT(i64),
    DoubleT(f64),
}

// wrappers for config return types
#[derive(Clone, Debug, Eq, PartialEq)]
pub enum ConfigVal {
    StringC(String),
    BoolC(bool),
    ListC(Vec<ConfigVal>),
    DictC(HashMap<String, ConfigVal>),
}

#[cfg(test)]
impl Arbitrary for ConfigVal {
    fn arbitrary(g: &mut Gen) -> ConfigVal {
        let kind = usize::arbitrary(g) % 4;
        let list_size = usize::arbitrary(g) % 4;
        let dict_size = usize::arbitrary(g) % 4;

        match kind {
            0 => ConfigVal::StringC(String::arbitrary(g)),
            1 => ConfigVal::BoolC(bool::arbitrary(g)),
            2 => ConfigVal::ListC(vec![ConfigVal::arbitrary(g); list_size]),
            3 => ConfigVal::DictC(
                vec![(String::arbitrary(g), ConfigVal::arbitrary(g)); dict_size]
                    .into_iter()
                    .collect(),
            ),
            _ => panic!(),
        }
    }

    fn shrink(&self) -> Box<dyn Iterator<Item = ConfigVal>> {
        match self {
            ConfigVal::StringC(s) => Box::new(s.shrink().map(ConfigVal::StringC)),
            ConfigVal::BoolC(b) => Box::new(b.shrink().map(ConfigVal::BoolC)),
            ConfigVal::ListC(v) => Box::new(v.shrink().map(ConfigVal::ListC)),
            ConfigVal::DictC(m) => Box::new(m.shrink().map(ConfigVal::DictC)),
        }
    }
}

#[derive(Clone, Debug, PartialEq)]
pub struct DbtRef {
    pub name: String,
    pub package: Option<String>,
    pub version: Option<RefVersion>,
}

#[derive(Clone, Debug, PartialEq)]
pub enum RefVersion {
    StringRV(String),
    IntRV(i64),
    DoubleRV(f64),
}

#[cfg(test)]
impl Arbitrary for RefVersion {
    fn arbitrary(g: &mut Gen) -> RefVersion {
        let kind: usize = usize::arbitrary(g) % 2;

        match kind {
            0 => StringRV(String::arbitrary(g)),
            1 => IntRV(i64::arbitrary(g)),
            // DoubleRV intentionally excluded because NaN isn't even partially equal to itself
            _ => panic!(),
        }
    }

    fn shrink(&self) -> Box<dyn Iterator<Item = Self>> {
        Box::new(std::iter::empty())
    }
}

#[cfg(test)]
impl Arbitrary for DbtRef {
    fn arbitrary(g: &mut Gen) -> DbtRef {
        DbtRef {
            name: String::arbitrary(g),
            package: if bool::arbitrary(g) {
                None
            } else {
                Some(String::arbitrary(g))
            },
            version: if bool::arbitrary(g) {
                None
            } else {
                Some(RefVersion::arbitrary(g))
            },
        }
    }

    fn shrink(&self) -> Box<dyn Iterator<Item = Self>> {
        Box::new(
            (
                self.name.clone(),
                self.package.clone(),
                self.version.clone(),
            )
                .shrink()
                .map(|(name, package, version)| DbtRef {
                    name,
                    package,
                    version,
                }),
        )
    }
}

// values that represent types
// generally used to pass type information to exceptions
#[derive(Clone, Debug, Eq, PartialEq)]
pub enum ExprType {
    String,
    Bool,
    List,
    Dict,
    FnCall,
    Root,
    Kwarg,
    Int,
    Double,
}

impl ToString for ExprType {
    fn to_string(&self) -> String {
        match self {
            ExprType::String => "string".to_owned(),
            ExprType::Bool => "bool".to_owned(),
            ExprType::List => "list".to_owned(),
            ExprType::Dict => "dict".to_owned(),
            ExprType::FnCall => "fn_call".to_owned(),
            ExprType::Root => "root".to_owned(),
            ExprType::Kwarg => "kwarg".to_owned(),
            ExprType::Int => "int".to_owned(),
            ExprType::Double => "double".to_owned(),
        }
    }
}

impl ExprType {
    fn from(expr: &ExprU) -> ExprType {
        match expr {
            ExprU::StringU(..) => ExprType::String,
            ExprU::BoolU(..) => ExprType::Bool,
            ExprU::ListU(..) => ExprType::List,
            ExprU::DictU(..) => ExprType::Dict,
            ExprU::FnCallU(..) => ExprType::FnCall,
            ExprU::RootU(..) => ExprType::Root,
            ExprU::KwargU(..) => ExprType::Kwarg,
            ExprU::IntU(..) => ExprType::Int,
            ExprU::DoubleU(..) => ExprType::Double,
        }
    }
}

// change the error of a result value
// frequently used to wrap exceptions lower on the hierarchy into their parent type
fn map_err<A, E1, E2>(r: Result<A, E1>, f: fn(E1) -> E2) -> Result<A, E2> {
    match r {
        Ok(a) => Ok(a),
        Err(e) => Err(f(e)),
    }
}

// checks for tree-sitter `error` and `missing` values
fn error_anywhere(node: &Node) -> bool {
    if node.has_error() {
        return true;
    };

    for child in node.children(&mut node.walk()) {
        error_anywhere(&child);
    }

    false
}

// in the tree-sitter grammar some elements are named, those are the string values used to retrieve children.
fn child_by_field_name<'a>(node: &'a Node, name: &str) -> Result<Node<'a>, SourceError> {
    node.child_by_field_name(name)
        .ok_or(SourceError::MissingValue(
            node.kind().to_owned(),
            name.to_owned(),
        ))
}

// tree-sitter returns a concrete syntax tree. only named elements form the abstract syntax tree.
fn named_children(node: Node) -> Vec<Node> {
    // calling allocating a new cursor every time is less effecient, but juggling lifetimes also sucks.
    node.named_children(&mut node.walk()).collect()
}

// tree-sitter nodes do not contain all necessary text values. This maps back to source to retrieve them.
fn text_from_node<'a>(source: &'a [u8], node: &Node) -> Result<&'a str, SourceError> {
    match from_utf8(&source[node.start_byte()..node.end_byte()]) {
        Ok(s) => Ok(s),
        Err(e) => Err(SourceError::Utf8Err(e)),
    }
}

// generally used to strip quotes off strings from the source file
fn strip_first_and_last(s: &str) -> String {
    let chars = &mut s.chars();
    chars.next();
    chars.next_back();
    chars.as_str().to_owned()
}

// transforms the tree-sitter tree structure which relies on a lot of string matching
// into the more structured ExprU type. This allows the rust compiler to be much more helpful.
fn to_ast(source: &[u8], node: Node) -> Result<ExprU, SourceError> {
    let kind = node.kind();
    match kind {
        "source_file" => {
            let x: Result<Vec<ExprU>, SourceError> = named_children(node)
                .into_iter()
                .map(|child| to_ast(source, child))
                .collect();

            match x {
                Ok(children) => Ok(ExprU::RootU(children)),
                Err(_) => Err(SourceError::TreeSitterError),
            }
        }

        "lit_string" => match text_from_node(source, &node) {
            Ok(s) => Ok(ExprU::StringU(strip_first_and_last(s))),
            Err(_) => Err(SourceError::TreeSitterError),
        },

        "bool" => match text_from_node(source, &node) {
            Ok("True") => Ok(ExprU::BoolU(true)),
            Ok("False") => Ok(ExprU::BoolU(false)),
            Ok(s) => Err(SourceError::BadBoolean(s.to_owned())),
            Err(_) => Err(SourceError::TreeSitterError),
        },

        "kwarg" => {
            let key = text_from_node(source, &child_by_field_name(&node, "key")?)?;
            let value = child_by_field_name(&node, "value")?;
            Ok(ExprU::KwargU(
                key.to_owned(),
                Box::new(to_ast(source, value)?),
            ))
        }

        "dict" => {
            let mut dict = HashMap::new();
            for pair in named_children(node) {
                let key_node = child_by_field_name(&pair, "key")?;
                let key = strip_first_and_last(text_from_node(source, &key_node)?);
                let value_node = child_by_field_name(&pair, "value")?;
                let value = to_ast(source, value_node)?;

                dict.insert(key, value);
            }
            Ok(ExprU::DictU(dict))
        }

        "list" => {
            let mut list = vec![];
            for elem in named_children(node) {
                list.push(to_ast(source, elem)?);
            }
            Ok(ExprU::ListU(list))
        }

        "fn_call" => {
            let name = text_from_node(source, &child_by_field_name(&node, "fn_name")?)?;
            let arg_list = child_by_field_name(&node, "argument_list")?;
            let mut args = vec![];
            for arg in named_children(arg_list) {
                args.push(to_ast(source, arg)?)
            }
            Ok(ExprU::FnCallU(name.to_owned(), args))
        }

        "integer" => text_from_node(source, &node)
            .map_or(None, |s| i64::from_str(s).ok())
            .map(ExprU::IntU)
            .ok_or(SourceError::TreeSitterError),

        "float" => text_from_node(source, &node)
            .map_or(None, |s| f64::from_str(s).ok())
            .map(ExprU::DoubleU)
            .ok_or(SourceError::TreeSitterError),

        s => Err(SourceError::UnknownNodeType(s.to_owned())),
    }
}

fn kwargs_last(args: &[ExprU]) -> bool {
    let mut seen_kwarg = false;
    for arg in args {
        match arg {
            ExprU::KwargU(_, _) => seen_kwarg = true,
            _ => {
                if seen_kwarg {
                    return false;
                }
            }
        }
    }
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
            .map(type_check_configs)
            .collect::<Result<Vec<ConfigVal>, TypeError>>()
            .map(ConfigVal::ListC),

        ExprU::DictU(m) => m
            .into_iter()
            .map(|(key, elem)| type_check_configs(elem).map(|typed| (key, typed)))
            .collect::<Result<HashMap<String, ConfigVal>, TypeError>>()
            .map(ConfigVal::DictC),

        unsupported => Err(TypeError::UnsupportedConfigValue(ExprType::from(
            &unsupported,
        ))),
    }
}

// Attempts to convert the untypted ast into the typed ast, returning errors when necessary.
fn type_check(ast: ExprU) -> Result<ExprT, TypeError> {
    match ast {
        ExprU::RootU(exprs) => {
            let x: Result<Vec<ExprT>, TypeError> = exprs.into_par_iter().map(type_check).collect();
            x.map(ExprT::RootT)
        }

        ExprU::StringU(v) => Ok(ExprT::StringT(v)),

        ExprU::BoolU(v) => Ok(ExprT::BoolT(v)),

        // Throw away names.
        // In the step before getting here, names will be checked for correctness.
        ExprU::KwargU(_, value) => {
            match *value {
                ExprU::FnCallU(name, _) => Err(TypeError::BadAssignment(
                    "kwarg".to_owned(),
                    ["fn_call", &name].join(" "),
                )),
                // No intermediary kwarg type. Just return the underlying value.
                _ => type_check(*value),
            }
        }

        ExprU::DictU(m) => {
            let x = m
                .iter()
                .map(|(k, vu)| type_check(vu.clone()).map(|vt| (k.clone(), vt)))
                .collect::<Result<HashMap<String, ExprT>, TypeError>>()?;
            Ok(ExprT::DictT(x))
        }

        ExprU::ListU(elems) => {
            let mut list = vec![];
            for elem in elems {
                if let ExprU::FnCallU(name, _) = elem {
                    return Err(TypeError::BadAssignment(
                        "list element".to_owned(),
                        ["fn_call", &name].join(" "),
                    ));
                }
                list.push(type_check(elem)?);
            }
            Ok(ExprT::ListT(list))
        }

        ExprU::FnCallU(name, args) => {
            if !kwargs_last(&args) {
                return Err(TypeError::KwargsAreNotLast);
            };
            match &name[..] {
                "ref" => {
                    let mut arg_stack = args.clone();
                    arg_stack.reverse();

                    // The first param must be there, and must be a string.
                    let p1: String = match arg_stack.pop() {
                        None => Err(TypeError::ArgumentMismatch {
                            expected: vec![1, 2, 3],
                            found: 0,
                        }),
                        Some(ExprU::StringU(s)) => Ok(s.clone()),
                        Some(a) => Err(TypeError::TypeMismatch {
                            expected: ExprType::String,
                            got: ExprType::from(&a),
                        }),
                    }?;

                    // The second param is optional and if it is a string we
                    // handle it here, otherwise it should be a kwarg handled
                    // below.
                    let p2: Option<String> = match arg_stack.pop() {
                        None => None,
                        Some(ExprU::StringU(s)) => Some(s.clone()),
                        Some(x) => {
                            arg_stack.push(x);
                            None
                        }
                    };

                    // If there are two string params, the first is the package
                    // and the second is the name. If there is one, it's just the
                    // name. This little match sorts that out.
                    let (name, package) = match (p1, p2) {
                        (a, Some(b)) => (b, Some(a)),
                        (a, None) => (a, None),
                    };

                    // Now deal with additional params. There should be at most
                    // one, and it must be a kwarg with key 'v' or 'version'.
                    let version = match arg_stack.pop() {
                        Some(ExprU::KwargU(k, v)) => match k.as_str() {
                            "v" | "version" => match *v {
                                ExprU::StringU(s) => Ok(Some(StringRV(s.clone()))),
                                ExprU::IntU(i) => Ok(Some(IntRV(i))),
                                ExprU::DoubleU(d) => Ok(Some(DoubleRV(d))),
                                e => Err(TypeError::TypeMismatch {
                                    expected: ExprType::Kwarg,
                                    got: ExprType::from(&e),
                                }),
                            },
                            _ => Err(TypeError::UnexpectedKwarg(k)),
                        },
                        Some(x) => Err(TypeError::TypeMismatch {
                            expected: ExprType::Kwarg,
                            got: ExprType::from(&x),
                        }),
                        None => Ok(None),
                    }?;

                    // Final check to ensure there were no unexpected parameters.
                    match arg_stack.pop() {
                        Some(ExprU::KwargU(k, _)) => Err(TypeError::UnexpectedKwarg(k)),
                        Some(e) => Err(TypeError::TypeMismatch {
                            expected: ExprType::Kwarg,
                            got: ExprType::from(&e),
                        }),
                        None => Ok(()),
                    }?;

                    Ok(ExprT::RefT(DbtRef {
                        name,
                        package,
                        version,
                    }))
                }

                "source" => {
                    let source_args = args.clone();
                    if args.len() != 2 {
                        return Err(TypeError::ArgumentMismatch {
                            expected: vec![2],
                            found: args.len(),
                        });
                    }
                    let source_name = match &source_args[0] {
                        ExprU::KwargU(name, value) if name == "source_name" => match &**value {
                            // source_name if called by kwarg can only be a string literal
                            ExprU::StringU(s) => Ok(s),
                            // error on everything else
                            other_type => Err(TypeError::TypeMismatch {
                                expected: ExprType::String,
                                got: ExprType::from(other_type),
                            }),
                        },
                        ExprU::KwargU(name, _) if name != "source_name" => {
                            Err(TypeError::UnexpectedKwarg(name.to_owned()))
                        }
                        // source_name if called positionally can only be a string literal
                        ExprU::StringU(s) => Ok(s),
                        // error on everything else
                        other_type => Err(TypeError::TypeMismatch {
                            expected: ExprType::String,
                            got: ExprType::from(other_type),
                        }),
                    }?;
                    let table_name = match &source_args[1] {
                        ExprU::KwargU(name, value) if name == "table_name" => match &**value {
                            // source table_name if called by kwarg can only be string a literal
                            ExprU::StringU(s) => Ok(s),
                            // error on everything else
                            other_type => Err(TypeError::TypeMismatch {
                                expected: ExprType::String,
                                got: ExprType::from(other_type),
                            }),
                        },
                        ExprU::KwargU(name, _) if name != "table_name" => {
                            Err(TypeError::UnexpectedKwarg(name.to_owned()))
                        }
                        // source table_name if called positionally can only be string a literal
                        ExprU::StringU(s) => Ok(s),
                        // error on everything else
                        other_type => Err(TypeError::TypeMismatch {
                            expected: ExprType::String,
                            got: ExprType::from(other_type),
                        }),
                    }?;
                    Ok(ExprT::SourceT(
                        source_name.to_owned(),
                        table_name.to_owned(),
                    ))
                }

                "config" => {
                    if args.is_empty() {
                        return Err(TypeError::ArgumentMismatch {
                            expected: vec![],
                            found: args.len(),
                        });
                    }
                    let excluded = vec!["post-hook", "post_hook", "pre-hook", "pre_hook"];
                    let typed_args = args
                        .into_iter()
                        .map(|arg| {
                            match arg {
                                // error on these specific kwargs that this extractor can't handle yet
                                ExprU::KwargU(key, _) if excluded.contains(&&key[..]) => {
                                    Err(TypeError::ExcludedKwarg(key))
                                }
                                ExprU::KwargU(key, value) => {
                                    // valid config value types are smaller than the whole set
                                    // so we're using this specialized function to return a narrower type
                                    // instead of `type_check` which returns ExprT
                                    let typed_value = type_check_configs(*value)?;
                                    Ok((key, typed_value))
                                }
                                other_type => Err(TypeError::TypeMismatch {
                                    expected: ExprType::Kwarg,
                                    got: ExprType::from(&other_type),
                                }),
                            }
                        })
                        .collect::<Result<Vec<(String, ConfigVal)>, TypeError>>()?;
                    Ok(ExprT::ConfigT(typed_args))
                }

                name => Err(TypeError::UnrecognizedFunction(name.to_owned())),
            }
        }

        ExprU::IntU(i) => Ok(ExprT::IntT(i)),

        ExprU::DoubleU(d) => Ok(ExprT::DoubleT(d)),
    }
}

// extract refs sources and configs from the typed ast.
// there is no error in the return type because we have caught them all at this point
// that invariant is encoded in the ExprT input type.
// implemented like `fold` over a tree structure.
fn extract_from(ast: ExprT) -> Extraction {
    match ast {
        ExprT::RootT(exprs) =>
        // immutably rolls all the results up into one
        {
            exprs
                .into_par_iter()
                .map(extract_from)
                .reduce(Extraction::default, |b, a| b.mappend(&a))
        }
        ExprT::RefT(x) => Extraction::populate(Some(vec![x]), None, None),
        ExprT::SourceT(x, y) => Extraction::populate(None, Some(vec![(x, y)]), None),
        ExprT::ConfigT(configs) => Extraction::populate(None, None, Some(configs)),
        // otherwise, there's nothing to extract
        _ => Extraction::default(),
    }
}

// go go gadget tree-sitter!
fn run_tree_sitter(source_bytes: &[u8]) -> Result<Tree, SourceError> {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_jinja2::language())
        .expect("Error loading jinja2 grammar");
    let tree = parser
        .parse(source_bytes, None)
        .ok_or(SourceError::ParseFailure)?;
    if error_anywhere(&tree.root_node()) {
        // we may want to know what this error is. Could use a different function to walk
        // the tree and collect error information instead of just detecting errors.
        Err(SourceError::TreeSitterError)
    } else {
        Ok(tree)
    }
}

// public entry point
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

// use property testing to verify monoid laws
#[cfg(test)]
mod monoid_laws {
    use super::*;
    use quickcheck_macros::quickcheck;

    #[quickcheck]
    fn extractor_left_and_right_identity(x: Extraction) -> bool {
        let mempty = Extraction::default();
        x == mempty.mappend(&x) && x == x.mappend(&mempty)
    }

    #[quickcheck]
    fn extractor_associativity(x: Extraction, y: Extraction, z: Extraction) -> bool {
        x.mappend(&y).mappend(&z) == x.mappend(&y.mappend(&z))
    }
}

// unit tests for private function `type_check`
#[cfg(test)]
mod type_check_tests {
    use super::*;

    fn get_results(sources: Vec<&str>) -> Vec<(&str, Result<ExprT, ParseError>)> {
        sources
            .into_iter()
            .map(|source| {
                let source_bytes = source.as_bytes().to_vec();
                let ast = run_tree_sitter(&source_bytes)
                    .and_then(|tree| to_ast(&source_bytes, tree.root_node()));
                let typed_ast = map_err(ast, ParseError::SourceE)
                    .and_then(|ast| map_err(type_check(ast), ParseError::TypeE));
                (source, typed_ast)
            })
            .collect()
    }

    fn assert_all_type_check(sources: Vec<&str>) {
        for result in get_results(sources) {
            if let (source, Err(e)) = result {
                println!("source:         {}", source);
                println!("produced error: {}", e);
                panic!("get_results did not error");
            }
        }
    }

    fn assert_none_type_check(sources: Vec<&str>) {
        for result in get_results(sources) {
            if let (source, Ok(ast)) = result {
                println!("expected error from source.");
                println!("source: {}", source);
                println!("produced ast: {:?}", ast);
                panic!("get_results did not error");
            }
        }
    }

    fn assert_produces_tree(source: &str, expect: ExprT) {
        match &get_results(vec![source])[0] {
            (_, Ok(ast)) => assert_eq!(*ast, expect),
            (source, Err(e)) => {
                println!("source:         {}", source);
                println!("produced error: {}", e);
                panic!("get_results did not error");
            }
        }
    }

    fn assert_fails_with(source: &str, expect: ParseError) {
        match &get_results(vec![source])[0] {
            (source, Ok(ast)) => {
                println!("expected error from source.");
                println!("source: {}", source);
                println!("produced ast: {:?}", ast);
                panic!("get_results did not error");
            }
            (_, Err(e)) => assert_eq!(*e, expect),
        }
    }

    #[test]
    fn recognizes_ref_source_config() {
        assert_all_type_check(vec![
            "select * from {{ ref('my_table') }}",
            "select * from {{ ref('my_table', v=2) }}",
            "{{ config(key='value') }}",
            "{{ source('a', 'b') }}",
        ])
    }

    #[test]
    fn recognizes_multiple_jinja_calls() {
        assert_all_type_check(vec![
            "{{ ref('x', v='a') }} {{ ref('y', v=2.0) }}",
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
            "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}",
        ])
    }

    #[test]
    fn config_fails_non_kwarg_inputs() {
        assert_none_type_check(vec![
            "{{ config('value') }}",
            "{{ config(True) }}",
            "{{ config(['v1,','v2']) }}",
            "{{ config({'k': 'v'}) }}",
        ])
    }

    #[test]
    fn source_keyword_args() {
        assert_all_type_check(vec![
            "{{ source(source_name='src', table_name='table') }}",
            "{{ source('src', table_name='table') }}",
            "{{ source('src', 'table') }}",
        ])
    }

    #[test]
    fn bad_source_keyword_args() {
        assert_none_type_check(vec![
            "{{ source(source_name='src', BAD_NAME='table') }}",
            "{{ source(BAD_NAME='src', table_name='table') }}",
            "{{ source(BAD_NAME='src', BAD_NAME='table') }}",
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
        assert_all_type_check(vec!["{{ ref('two', 'args') }}", "{{ ref('one arg') }}"])
    }

    #[test]
    fn ref_bad_inputs_fail() {
        assert_none_type_check(vec![
            "{{ ref('too', 'many', 'strings') }}",
            "{{ ref() }}",
            "{{ ref(kwarg='is_wrong') }}",
            "{{ ref(['list is wrong']) }}",
            "{{ ref('too', 'many', v='version', v='strings') }}",
            "{{ ref('too', 'many', version='version', v='strings') }}",
        ])
    }

    #[test]
    fn nested_fn_calls_fail() {
        assert_none_type_check(vec![
            "{{ [ref('my_table')] }}",
            "{{ [config(x='y')] }}",
            "{{ config(x=ref('my_table')) }}",
            "{{ source(ref('my_table')) }}",
        ])
    }

    #[test]
    fn config_excluded_kwargs() {
        assert_none_type_check(vec![
            "{{ config(pre_hook='x') }}",
            "{{ config(pre-hook='x') }}",
            "{{ config(post_hook='x') }}",
            "{{ config(post-hook='x') }}",
        ])
    }

    #[test]
    fn jinja_expressions_fail_everywhere() {
        assert_none_type_check(vec![
            "{% config(x='y') %}",
            "{% if(whatever) do_something() %}",
            "doing stuff {{ ref('str') }} stuff {% expression %}",
            "{{ {% psych! nested expression %} }}",
        ])
    }

    #[test]
    fn top_level_kwargs_are_rejected() {
        assert_none_type_check(vec!["{{ kwarg='value' }}"])
    }

    #[test]
    fn multi_block_with_jinja_expression_rejected() {
        assert_none_type_check(vec![
            r#"
{{ config(key='value') }}
with
something as (
    select whatever from {{ ref('my_table') }}
where {% is_incremental() %} and my_bool
),
other as (
    there's like ten more of these as blocks.
)"#,
        ])
    }

    // this triggers "missing" not "error" nodes from tree-sitter
    // checks that we've examined the whole tree-sitter tree for
    // all the kinds of errors it could return.
    #[test]
    fn fails_on_open_jinja_brackets() {
        assert_none_type_check(vec!["{{ ref()", "{{ True", "{{", "{{ 'str' "])
    }

    #[test]
    fn ref_ast() {
        assert_produces_tree(
            "{{ ref('my_table') }}",
            ExprT::RootT(vec![ExprT::RefT(DbtRef {
                name: "my_table".to_string(),
                package: None,
                version: None,
            })]),
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
            join {{ ref('a', 'b', v="c") }}
            "#,
            ExprT::RootT(vec![
                ExprT::RefT(DbtRef {
                    name: "x".to_string(),
                    package: None,
                    version: None,
                }),
                ExprT::RefT(DbtRef {
                    name: "b".to_string(),
                    package: Some("a".to_string()),
                    version: Some(StringRV("c".to_string())),
                }),
            ]),
        )
    }

    #[test]
    fn config_ast() {
        let mut dict = HashMap::new();
        dict.insert(
            "dict".to_string(),
            ConfigVal::ListC(vec![ConfigVal::StringC("value".to_string())]),
        );

        let config = vec![
            ("k1".to_string(), ConfigVal::DictC(dict)),
            ("k2".to_string(), ConfigVal::StringC("str".to_string())),
        ];

        assert_produces_tree(
            "{{ config(k1={'dict': ['value']}, k2='str') }}",
            ExprT::RootT(vec![ExprT::ConfigT(config)]),
        )
    }

    #[test]
    fn source_ast() {
        assert_produces_tree(
            "{{ source('x', table_name='y') }}",
            ExprT::RootT(vec![ExprT::SourceT("x".to_string(), "y".to_string())]),
        )
    }

    #[test]
    fn jinja_expression_ast() {
        assert_fails_with(
            "{% expression %}",
            ParseError::SourceE(SourceError::TreeSitterError),
        )
    }

    #[test]
    fn kwarg_order() {
        assert_fails_with(
            "{{ source(source_name='kwarg', 'positional') }}",
            ParseError::TypeE(TypeError::KwargsAreNotLast),
        )
    }
}
