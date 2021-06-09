use crate::exceptions::TypeError;
use std::collections::HashMap;
use std::str::{
    from_utf8,
};
use tree_sitter::{
    Node,
    Tree,
};

#[derive(Clone, Debug)]
pub struct Extraction {
    refs: Vec<String>,
    sources: Vec<(String, String)>,
    configs: Vec<HashMap<String, String>>,
}

// typed ast data type
// TODO model kwargs
#[derive(Clone, Debug)]
enum ExprT {
    StringT(String),
    BoolT(bool),
    // lists are heterogeneous
    ListT(Vec<ExprT>),
    DictT(HashMap<String, ExprT>),
    // all represented as positional arguments regardless of kwargs in source
    FnCall(String, Vec<ExprT>),
    Root(Vec<ExprT>),
}

fn text_from_node<'a>(source: &'a Vec<u8>, node: &Node) -> Result<&'a str, TypeError> {
    match from_utf8(&source[node.start_byte()..node.end_byte()]) {
        Ok(s) => Ok(s),
        Err(e) => Err(TypeError::Utf8Err(e)),
    }
}

fn strip_first_and_last(s: &str) -> String {
    if s.len() <= 2 {
        "".to_owned()
    } else {
        s[1..s.len()-1].to_string()
    }
}

fn named_children(node: Node) -> Vec<Node> {
    // calling allocating a new cursor every time is less effecient, but juggling lifetimes also sucks.
    node.named_children(&mut node.walk()).collect()
}

fn child_by_field_name<'a, 'b>(node: &'a Node, name: &'b str) -> Result<Node<'a>, TypeError> {
    node.child_by_field_name(name)
        .ok_or(TypeError::MissingValue(node.kind().to_owned(), name.to_owned()))
}

fn type_check(source_bytes: &Vec<u8>, tree: Tree) -> Result<ExprT, TypeError> {
    _type_check(source_bytes, tree.root_node())
}

fn _type_check(source: &Vec<u8>, node: Node) -> Result<ExprT, TypeError> {
    let kind = node.kind();
    match kind {
        "source_file" => {
            let x: Result<Vec<ExprT>, TypeError> = 
            named_children(node)
                    .into_iter()
                    .map(|child| _type_check(source, child))
                    .collect();

            match x {
                Ok(children) => Ok(ExprT::Root(children)),
                Err(_)       => Err(TypeError::BadSourceExtraction),
            }
        },

        "lit_string" => {
            match text_from_node(&source, &node) {
                Ok(s)  => Ok(ExprT::StringT(strip_first_and_last(s))),
                Err(_) => Err(TypeError::BadSourceExtraction),
            }
        },

        "bool" => {
            match text_from_node(&source, &node) {
                Ok("True")  => Ok(ExprT::BoolT(true)),
                Ok("False") => Ok(ExprT::BoolT(false)),
                Ok(s)       => Err(TypeError::BadBoolean(s.to_owned())),
                Err(_)      => Err(TypeError::BadSourceExtraction),
            }
        },

        // Throw away names. 
        // In the step before getting here, names will be checked for correctness.
        "kwarg" => {
            let value = child_by_field_name(&node, "value")?;
            match value.kind() {
                "fn_call" => Err(TypeError::BadAssignment("kwarg".to_owned(), "fn_call".to_owned())),
                // No intermediary kwarg type. Just return the underlying value.
                _         => _type_check(source, value),
            }
        },

        "dict" => {
            let mut dict = HashMap::new();
            for pair in named_children(node) {
                let key_node = child_by_field_name(&pair, "key")?;
                let key = strip_first_and_last(text_from_node(&source, &key_node)?);
                let value_node = child_by_field_name(&pair, "key")?;
                let value = _type_check(source, value_node)?;

                dict.insert(key, value);
            }
            // TODO stub
            Ok(ExprT::DictT(dict))
        },

        s => Err(TypeError::UnknownNodeType(s.to_owned()))
    }
}

pub fn extract_from_source(source: &str) -> Result<Extraction, TypeError> {
    let source_bytes: Vec<u8> = source.as_bytes().to_vec();
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_jinja2::language()).expect("Error loading jinja2 grammar");
    let tree = parser.parse(source, None).unwrap();

    type_check(&source_bytes, tree)?;

    Ok(Extraction {
        refs: vec![],
        sources: vec![],
        configs: vec![],
    })
}
