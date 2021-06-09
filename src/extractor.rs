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
#[derive(Clone, Debug)]
pub struct Extraction {
    refs: Vec<String>,
    sources: Vec<(String, String)>,
    configs: Vec<HashMap<String, String>>,
}

// untyped ast
#[derive(Clone, Debug)]
enum ExprU {
    RootU(Vec<ExprU>),
    StringU(String),
    BoolU(bool),
    ListU(Vec<ExprU>),
    DictU(HashMap<String, ExprU>),
    KwargU(Box<ExprU>, Box<ExprU>),
    // built-in function types
    FnCallU(String, Vec<ExprU>),
}

// typed ast
#[derive(Clone, Debug)]
enum ExprT {
    RootT(Vec<ExprT>),
    StringT(String),
    BoolT(bool),
    // lists are heterogeneous
    ListT(Vec<ExprT>),
    DictT(HashMap<String, ExprT>),
    // built-in function types
    // args represented as positional regardless of kwargs in source
    RefT(Vec<ExprU>),
    SourceT(Vec<ExprU>),
    ConfigT(Vec<ExprU>),
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
            Ok(ExprU::KwargU(Box::new(ExprU::StringU(key.to_owned())), Box::new(to_ast(source, value)?)))
        },

        "dict" => {
            let mut dict = HashMap::new();
            for pair in named_children(node) {
                let key_node = child_by_field_name(&pair, "key")?;
                let key = strip_first_and_last(text_from_node(&source, &key_node)?);
                let value_node = child_by_field_name(&pair, "key")?;
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

fn kwargs_last(args: &Vec<Node>) -> bool {
    let mut seen_kwarg = false;
    for arg in args {
        if seen_kwarg && arg.kind() != "kwarg" {
            return false
        } else if arg.kind() == "kwarg" {
            seen_kwarg = true;
        }
    }
    true
}

fn named_children(node: Node) -> Vec<Node> {
    // calling allocating a new cursor every time is less effecient, but juggling lifetimes also sucks.
    node.named_children(&mut node.walk()).collect()
}



fn type_check(source_bytes: &Vec<u8>, tree: Tree) -> Result<ExprT, TypeError> {
    _type_check(source_bytes, tree.root_node())
}

fn _type_check(source: &Vec<u8>, node: Node) -> Result<ExprT, TypeError> {
    // let kind = node.kind();
    // match kind {
    //     "source_file" => {
    //         let x: Result<Vec<ExprT>, TypeError> = 
    //         named_children(node)
    //                 .into_iter()
    //                 .map(|child| _type_check(source, child))
    //                 .collect();

    //         match x {
    //             Ok(children) => Ok(ExprT::RootT(children)),
    //             Err(_)       => Err(TypeError::BadSourceExtraction),
    //         }
    //     },

    //     "lit_string" => {
    //         match text_from_node(&source, &node) {
    //             Ok(s)  => Ok(ExprT::StringT(strip_first_and_last(s))),
    //             Err(_) => Err(TypeError::BadSourceExtraction),
    //         }
    //     },

    //     "bool" => {
    //         match text_from_node(&source, &node) {
    //             Ok("True")  => Ok(ExprT::BoolT(true)),
    //             Ok("False") => Ok(ExprT::BoolT(false)),
    //             Ok(s)       => Err(TypeError::BadBoolean(s.to_owned())),
    //             Err(_)      => Err(TypeError::BadSourceExtraction),
    //         }
    //     },

    //     // Throw away names. 
    //     // In the step before getting here, names will be checked for correctness.
    //     "kwarg" => {
    //         let value = child_by_field_name(&node, "value")?;
    //         match value.kind() {
    //             "fn_call" => Err(TypeError::BadAssignment("kwarg".to_owned(), "fn_call".to_owned())),
    //             // No intermediary kwarg type. Just return the underlying value.
    //             _         => _type_check(source, value),
    //         }
    //     },

    //     "dict" => {
    //         let mut dict = HashMap::new();
    //         for pair in named_children(node) {
    //             let key_node = child_by_field_name(&pair, "key")?;
    //             let key = strip_first_and_last(text_from_node(&source, &key_node)?);
    //             let value_node = child_by_field_name(&pair, "key")?;
    //             let value = _type_check(source, value_node)?;

    //             dict.insert(key, value);
    //         }
    //         // TODO stub
    //         Ok(ExprT::DictT(dict))
    //     },

    //     "list" => {
    //         let mut list = vec![];
    //         for elem in named_children(node) {
    //             if elem.kind() == "fn_call" {
    //                 return Err(TypeError::BadAssignment("list element".to_owned(), "fn_call".to_owned()))
    //             }
    //             let e = _type_check(source, elem)?;
    //             list.push(e);
    //         }
    //         Ok(ExprT::ListT(list))
    //     },

        // "fn_call" => {
        //     let name = text_from_node(source_bytes, child_by_field_name(&node, "fn_name")?)?;
        //     let arg_list = child_by_field_name(node, "argument_list")
        //     let arg_count = arg_list.named_child_count();
        //     let args = named_children(arg_list)?;
        //     if not kwargs_last(args) {
        //         return Err(TypeError::KwargsAreNotLast)
        //     }

        // },

    // }
}

pub fn extract_from_source(source: &str) -> Result<Extraction, ParseError> {
    let source_bytes: Vec<u8> = source.as_bytes().to_vec();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_jinja2::language()).expect("Error loading jinja2 grammar");
    let tree = parser.parse(source, None).unwrap();

    // TODO compose these
    map_err(to_ast(&source_bytes, tree.root_node()), ParseError::SourceE)?;
    map_err(type_check(&source_bytes, tree), ParseError::TypeE)?;

    Ok(Extraction {
        refs: vec![],
        sources: vec![],
        configs: vec![],
    })
}
