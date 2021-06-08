use tree_sitter::{
    Node,
    Tree,
};

// typed ast data type
// TODO model kwargs
#[derive(Clone, Debug)]
pub enum ExprT {
    StringT(String),
    BoolT(bool),
    // lists are heterogeneous
    ListT(Vec<ExprT>),
    DictT(Vec<(String, ExprT)>),
    // all represented as positional arguments regardless of kwargs in source
    FnCall(String, Vec<ExprT>)
}

type Root = Vec<ExprT>;

pub fn type_check(tree: &Tree) -> Result<ExprT, String> {
    _type_check(&tree.root_node())
}

fn _type_check(node: &Node) -> Result<ExprT, String> {
    let kind = node.kind();
    match kind {
        "lit_string" => Ok(ExprT::StringT("stub".to_owned())),
        "bool" => Ok(ExprT::BoolT(false)),
        _ => Err("unknown node type".to_owned())
    }
}