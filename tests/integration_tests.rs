// in Rust "integration test" just means using the
// library from the outside like our users would

use dbt_extractor::{
    ExprT,
    Extraction,
    extract_from_source,
};
use std::collections::HashMap;


fn assert_extraction(source: &str, expected: Extraction) {
    match extract_from_source(source) {
        Ok(x) => assert_eq!(x, expected),
        Err(e) => print!("expected: {:?}\n     got: {:?}", expected, e),
    }
}

#[test]
fn test_ref() {
    assert_extraction(
        "{{ ref('my_table') }} {{ ref('other_table')}}"
        ,
        Extraction::populate(
            Some(vec![
                ("my_table".to_string(), None),
                ("other_table".to_string(), None),
            ]),
            None,
            None,
        )
    );
}

#[test]
fn test_config() {
    let mut configs = HashMap::new();
    configs.insert("key".to_string(), ExprT::StringT("value".to_string()));
    
    assert_extraction(
        "{{ config(key='value') }}"
        ,
        Extraction::populate(
            None,
            None,
            Some(configs),
        )
    )
}

#[test]
fn test_source() {
    assert_extraction(
        "{{ source('package', 'table') }} {{ source('x', 'y') }}"
        ,
        Extraction::populate(
            None,
            Some(vec![
                ("package".to_string(), "table".to_string()),
                ("x".to_string(), "y".to_string()),
            ]),
            None,
        )
    );
}

#[test]
fn test_all() {
    let mut configs = HashMap::new();
    configs.insert("k".to_string(), ExprT::StringT("v".to_string()));
    configs.insert("x".to_string(), ExprT::BoolT(true));
    
    assert_extraction(
        "{{ source('package', 'table') }} {{ ref('x') }} {{ config(k='v', x=True) }}"
        ,
        Extraction::populate(
            Some(vec![
                ("x".to_string(), None),
            ]),
            Some(vec![
                ("package".to_string(), "table".to_string()),
            ]),
            Some(configs),
        )
    );
}

// TODO wow this needs a refactor. get some helpers in here.
#[test]
fn test_deepyly_nested_config() {
    let mut inner_inner_dict = HashMap::new();
    inner_inner_dict.insert(
        "x".to_string(),
        ExprT::StringT("y".to_string())
    );

    let mut inner_dict = HashMap::new();
    inner_dict.insert(
        "k".to_string(),
        ExprT::ListT(vec![
            ExprT::StringT("v".to_string()),
            ExprT::DictT(inner_inner_dict)
        ])
    );

    let mut configs = HashMap::new();
    configs.insert(
        "key".to_string(), 
        ExprT::ListT(vec![
            ExprT::DictT(inner_dict),
            ExprT::ListT(vec![
                ExprT::StringT("a".to_string()),
                ExprT::StringT("b".to_string()),
                ExprT::StringT("c".to_string()),
            ]),
        ])
    );
    
    assert_extraction(
        "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}"
        ,
        Extraction::populate(
            None,
            None,
            Some(configs),
        )
    )
}

#[test]
fn test_multi_key_config() {
    let mut dict = HashMap::new();
    dict.insert("a".to_string(), ExprT::StringT("x".to_string()));
    dict.insert("b".to_string(), ExprT::StringT("y".to_string()));
    dict.insert("c".to_string(), ExprT::StringT("z".to_string()));

    let mut configs = HashMap::new();
    configs.insert("dict".to_string(), ExprT::DictT(dict));
    
    assert_extraction(
        "{{ config(dict={'a':'x', 'b': 'y', 'c':'z'}) }}"
        ,
        Extraction::populate(
            None,
            None,
            Some(configs),
        )
    )
}
