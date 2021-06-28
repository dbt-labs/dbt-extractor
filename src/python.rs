use crate::extractor::{extract_from_source, ConfigVal, Extraction};
use pyo3::create_exception;
use pyo3::exceptions::PyException;
use pyo3::prelude::*;
use pyo3::types::{PyDict, PyList, PySet};
use pyo3::wrap_pyfunction;
use std::collections::HashMap;
use std::fmt::Display;

create_exception!(dbt_extractor, ExtractionError, PyException);

// Can't export ConfigVal directly: https://github.com/PyO3/pyo3/issues/417
fn convert_config(py: Python, v: ConfigVal) -> PyObject {
    match v {
        ConfigVal::StringC(s) => s.to_object(py),
        ConfigVal::BoolC(b) => b.to_object(py),
        ConfigVal::ListC(v) => v
            .into_iter()
            .map(|x| convert_config(py, x))
            .collect::<Vec<PyObject>>()
            .to_object(py),
        ConfigVal::DictC(d) => d
            .into_iter()
            .map(|(k, v)| (k, convert_config(py, v)))
            .collect::<HashMap<String, PyObject>>()
            .to_object(py),
    }
}

// Transation between rust extraction type and Python dictionary
fn pythonize(py: Python, extraction: Extraction) -> PyResult<PyObject> {
    let refs: Vec<Vec<String>> = extraction
        .refs
        .into_iter()
        .map(|x| match x {
            (a, Some(b)) => vec![a, b],
            (a, None) => vec![a],
        })
        .collect();
    let sources: &PySet = PySet::new(py, &extraction.sources[..])?;
    let py_configs: Vec<(String, PyObject)> = extraction
        .configs
        .into_iter()
        .map(|(k, v)| (k, convert_config(py, v)))
        .collect();
    let configs: &PyList = PyList::new(py, &py_configs[..]);

    let dict = PyDict::new(py);
    dict.set_item("refs", refs)?;
    dict.set_item("sources", sources)?;
    dict.set_item("configs", configs)?;
    Ok(dict.to_object(py))
}

// Naively converts a Result to a PyResult by using the string
// representation of the Rust exception as the message for ExtractionError.
fn to_py_result<T, E: Display>(r: Result<T, E>) -> PyResult<T> {
    match r {
        Ok(v) => Ok(v),
        Err(e) => Err(ExtractionError::new_err(format!("{}", e))),
    }
}

// The python function exposing this rust implementation.
// `PyResult` raises Python exceptions. Calling code should catch and continue.
#[pyfunction]
pub fn py_extract_from_source(source: &str) -> PyResult<PyObject> {
    let gil = Python::acquire_gil();
    let py = gil.python();

    to_py_result(extract_from_source(source)).and_then(|x| pythonize(py, x))
}

#[pymodule]
fn dbt_extractor(py: Python, m: &PyModule) -> PyResult<()> {
    m.add("ExtractionError", py.get_type::<ExtractionError>())
        .unwrap();

    m.add_wrapped(wrap_pyfunction!(py_extract_from_source))
        .unwrap();

    Ok(())
}
