mod exceptions;
mod extractor;

// define public interface via re-exports
pub use exceptions::*;
pub use extractor::{
    ExprT, // TODO pick better type?
    Extraction,
    extract_from_source
};