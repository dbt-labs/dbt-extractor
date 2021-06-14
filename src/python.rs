use crate::extractor::{
    ConfigVal,
    Extraction,
    extract_from_source
};
use pyo3::prelude::*;
use std::collections::HashMap;

// The types that python expects from the extractor
#[pyclass]
pub struct PyExtraction {
    pub refs: Vec<Vec<String>>,
    pub sources: Vec<Vec<String>>,
    // TODO let's see if ConfigVal actually get's sent across to python correctly.
    pub configs: HashMap<String, ConfigVal>,
}

// Transation between rust extraction type and python extraction type
fn pythonize(extraction: Extraction) -> PyExtraction {
    PyExtraction {
        refs: extraction.refs.into_iter().map(|x| match x {
            (a, Some(b)) => vec![a, b],
            (a, None) => vec![a]
        }).collect(),
        sources: extraction.sources.into_iter().map(|(a, b)| vec![a, b]).collect(),
        configs: extraction.configs,
    }
}

// The python function exposing this rust implementation
// Using `Option` for result type since `PyResult` raises Python exceptions.
#[pyfunction]
pub fn py_extract_from_source(source: &str) -> Option<PyExtraction> {
    match extract_from_source(source).map(pythonize) {
        // explicitly throwing away error value
        Err(_) => None,
        Ok(value) => Some(value),
    }
}
