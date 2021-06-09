use std::fmt;
use std::fmt::Display;

#[derive(Debug, Clone)]
pub enum TypeError {
    BadSourceExtraction,
    BadBoolean(String),
    UnknownNodeType(String),
}

impl Display for TypeError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            TypeError::BadSourceExtraction => write!(f, "BadSourceExtraction"),
            TypeError::BadBoolean(s)       => write!(f, "Unknown Boolean value: {}", s),
            TypeError::UnknownNodeType(s)  => write!(f, "Unknown node type: {}", s)
        }
    }
}