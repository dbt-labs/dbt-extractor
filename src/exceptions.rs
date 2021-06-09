use std::fmt;
use std::fmt::Display;
use std::str::Utf8Error;

#[derive(Debug, Clone)]
pub enum TypeError {
    BadSourceExtraction,
    Utf8Err(Utf8Error),
    BadBoolean(String),
    UnknownNodeType(String),
    BadAssignment(String, String),
    MissingValue(String, String),
}

impl Display for TypeError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            TypeError::BadSourceExtraction =>
                write!(f, "BadSourceExtraction"),
            TypeError::Utf8Err(e) =>
                e.fmt(f),
            TypeError::BadBoolean(s) =>
                write!(f, "Unknown Boolean value: {}", s),
            TypeError::UnknownNodeType(s) =>
                write!(f, "Unknown node type: {}", s),
            TypeError::BadAssignment(outer, inner) =>
                write!(f, "{} cannot be assigned a {}", outer, inner),
            TypeError::MissingValue(outer, inner) =>
                write!(f, "{} is missing the required value {}", outer, inner),
        }
    }
}