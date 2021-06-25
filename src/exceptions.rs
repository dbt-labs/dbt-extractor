use crate::extractor::ExprType;
use std::str::Utf8Error;
use thiserror::Error;

// Top-level error type in the hierarchy
#[derive(Error, Debug, Clone, Eq, PartialEq)]
pub enum ParseError {
    #[error("Source Error: {0}")]
    SourceE(#[from] SourceError),
    #[error("Type Error: {0}")]
    TypeE(#[from] TypeError),
}

// Errors from tree-sitter -> ExprU
#[derive(Error, Debug, Clone, Eq, PartialEq)]
pub enum SourceError {
    #[error("Syntax error in source")]
    TreeSitterError,
    #[error("Utf8 Error: {0}")]
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
    #[error("Expected {}. Got {}.", .expected.to_string(), .got.to_string())]
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
        x if x == 1 => sorted[0].to_string(),
        x if x > 1 => vec![
            sorted[0].to_string(),
            "to".to_owned(),
            sorted[x - 1].to_string(),
        ]
        .join(" "),
        _ => "any".to_owned(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn exception_messages_render_as_expected() {
        use ExprType::*;
        use ParseError::*;
        use SourceError::*;
        use TypeError::*;

        let examples = [
            (
                SourceE(TreeSitterError),
                "Source Error: Syntax error in source",
            ),
            // excluding Utf8Err for now,
            (
                SourceE(BadBoolean("TrueFalse".to_owned())),
                "Source Error: Unknown Boolean value: TrueFalse",
            ),
            (
                SourceE(UnknownNodeType("not_a_node".to_owned())),
                "Source Error: Unknown node type: not_a_node",
            ),
            (
                SourceE(MissingValue("kwarg".to_owned(), "key".to_owned())),
                "Source Error: kwarg is missing the required value key",
            ),
            (SourceE(ParseFailure), "Source Error: Parse Failure"),
            (
                // TODO this exception shouldn't be taking String args
                TypeE(BadAssignment("kwarg".to_owned(), "fn_call".to_owned())),
                "Type Error: kwarg cannot be assigned a fn_call",
            ),
            (
                TypeE(KwargsAreNotLast),
                "Type Error: Keyword arguments must come at the end of the argument list.",
            ),
            (
                TypeE(ArgumentMismatch {
                    expected: vec![1, 2],
                    found: 0,
                }),
                "Type Error: Expected 1 to 2 arguments. Found 0.",
            ),
            (
                TypeE(TypeMismatch {
                    expected: Kwarg,
                    got: String,
                }),
                "Type Error: Expected kwarg. Got string.",
            ),
            (
                TypeE(UnrecognizedFunction("refsourceconfig".to_owned())),
                "Type Error: Found unrecognized function named refsourceconfig.",
            ),
            (
                TypeE(UnexpectedKwarg("boop".to_owned())),
                "Type Error: Found unexpected keyword argument boop.",
            ),
            (
                TypeE(ExcludedKwarg("pre-hook".to_owned())),
                "Type Error: Excluded keyword argument found: pre-hook.",
            ),
            (
                TypeE(UnsupportedConfigValue(FnCall)),
                "Type Error: Config value cannot be of the type fn_call.",
            ),
        ];

        // actually make the assertions
        for (e, msg) in &examples {
            assert_eq!(format!("{}", e), msg.to_owned())
        }
    }

    #[test]
    // if you change this test, change the comments on the function to match
    fn test_expected_arity() {
        assert_eq!(expected_arity(&vec![1, 4, 3, 2]), "1 to 4");
        assert_eq!(expected_arity(&vec![1, 4]), "1 to 4");
        assert_eq!(expected_arity(&vec![3]), "3");
        assert_eq!(expected_arity(&vec![]), "any");
    }
}
