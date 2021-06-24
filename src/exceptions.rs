use crate::extractor::ExprType;
use std::str::Utf8Error;
use thiserror::Error;


// Top-level error type in the hierarchy
#[derive(Error, Debug, Clone, Eq, PartialEq)]
pub enum ParseError {
    #[error("Source Error: ")]
    SourceE(#[from] SourceError),
    #[error("Type Error: ")]
    TypeE(#[from] TypeError),
}

// Errors from tree-sitter -> ExprU
#[derive(Error, Debug, Clone, Eq, PartialEq)]
pub enum SourceError {
    #[error("Tree Sitter Error")]
    TreeSitterError,
    #[error("Utf8 Error: ")]
    Utf8Err(#[from] Utf8Error),
    #[error("Unknown Boolean value: {0}")]
    BadBoolean(String),
    #[error("Unknown node type: {0}")]
    UnknownNodeType(String),
    #[error("{0} is missing the required value {1}")]
    MissingValue(String, String),
    #[error("Parse Failure")]
    ParseFailure,
}

// errors from ExprU -> ExprT
#[derive(Error, Debug, Clone, Eq, PartialEq)]
pub enum TypeError {
    #[error("{0} cannot be assigned a {1}")]
    BadAssignment(String, String),
    #[error("Keyword arguments must come at the end of the argument list.")]
    KwargsAreNotLast,
    #[error("Expected {} arguments. Found {found}.", expected_arity(expected))]
    ArgumentMismatch { expected: Vec<usize>, found: usize },
    #[error("Expected {}. Got {}.", .expected.to_string(), .expected.to_string())]
    TypeMismatch { expected: ExprType, got: ExprType },
    #[error("Found unrecognized function named {0}.")]
    UnrecognizedFunction(String),
    #[error("Found unexpected keyword argument {0}.")]
    UnexpectedKwarg(String),
    #[error("Excluded keyword argument found: {0}.")]
    ExcludedKwarg(String),
    #[error("Config value cannot be of the type {}.", .0.to_string())]
    UnsupportedConfigValue(ExprType),
}


// -- helper functions --


// expected_arity(vec![1,4,3,2]) == "1 to 4"
// expected_arity(vec![1,4]) == "1 to 4"
// expected_arity(vec![3]) == "3"
// expected_arity(vec![]) == "any"
fn expected_arity(expected: &Vec<usize>) -> String {
    let mut _sorted = expected.clone();
    _sorted.sort();
    let sorted = _sorted;

    match expected.len() {
        x if x == 1 => 
            sorted[0].to_string(),
        x if x > 1 => 
            vec![sorted[0].to_string(), "to".to_owned(), sorted[x-1].to_string()].join(" "),
        _ => 
            "any".to_owned(),
    }
}

#[cfg(test)]
mod tests {

    #[test]
    // if you change this test, change the comments on the function to match
    fn test_expected_arity() {
        use super::expected_arity;
        assert_eq!(expected_arity(&vec![1,4,3,2]), "1 to 4");
        assert_eq!(expected_arity(&vec![1,4]), "1 to 4");
        assert_eq!(expected_arity(&vec![3]), "3");
        assert_eq!(expected_arity(&vec![]), "any");
    }

}