// in Rust "integration test" just means using the
// library from the outside like our users would

use dbt_extractor::{extract_from_source, ConfigVal, Extraction};
use std::collections::HashMap;

fn assert_extraction(source: &str, expected: Extraction) {
    match extract_from_source(source) {
        Ok(x) => assert_eq!(x, expected),
        Err(e) => print!("expected: {:?}\n     got: {}", expected, e),
    }
}

#[test]
fn extracts_refs() {
    assert_extraction(
        "{{ ref('my_table') }} {{ ref('other_table')}}",
        Extraction::populate(
            Some(vec![
                ("my_table".to_string(), None),
                ("other_table".to_string(), None),
            ]),
            None,
            None,
        ),
    );
}

#[test]
fn extracts_configs() {
    let configs = vec![("key".to_string(), ConfigVal::StringC("value".to_string()))];

    assert_extraction(
        "{{ config(key='value') }}",
        Extraction::populate(None, None, Some(configs)),
    )
}

#[test]
fn extracts_sources() {
    assert_extraction(
        "{{ source('package', 'table') }} {{ source('x', 'y') }}",
        Extraction::populate(
            None,
            Some(vec![
                ("package".to_string(), "table".to_string()),
                ("x".to_string(), "y".to_string()),
            ]),
            None,
        ),
    );
}

#[test]
fn extracts_all() {
    let configs = vec![
        ("k".to_string(), ConfigVal::StringC("v".to_string())),
        ("x".to_string(), ConfigVal::BoolC(true)),
    ];

    assert_extraction(
        "{{ source('package', 'table') }} {{ ref('x') }} {{ config(k='v', x=True) }}",
        Extraction::populate(
            Some(vec![("x".to_string(), None)]),
            Some(vec![("package".to_string(), "table".to_string())]),
            Some(configs),
        ),
    );
}

// TODO wow this needs a refactor. get some helpers in here.
#[test]
fn extracts_from_deepyly_nested_config() {
    let mut inner_inner_dict = HashMap::new();
    inner_inner_dict.insert("x".to_string(), ConfigVal::StringC("y".to_string()));

    let mut inner_dict = HashMap::new();
    inner_dict.insert(
        "k".to_string(),
        ConfigVal::ListC(vec![
            ConfigVal::StringC("v".to_string()),
            ConfigVal::DictC(inner_inner_dict),
        ]),
    );

    let configs = vec![(
        "key".to_string(),
        ConfigVal::ListC(vec![
            ConfigVal::DictC(inner_dict),
            ConfigVal::ListC(vec![
                ConfigVal::StringC("a".to_string()),
                ConfigVal::StringC("b".to_string()),
                ConfigVal::StringC("c".to_string()),
            ]),
        ]),
    )];

    assert_extraction(
        "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}",
        Extraction::populate(None, None, Some(configs)),
    )
}

#[test]
fn extracts_multi_key_config() {
    let mut dict = HashMap::new();
    dict.insert("a".to_string(), ConfigVal::StringC("x".to_string()));
    dict.insert("b".to_string(), ConfigVal::StringC("y".to_string()));
    dict.insert("c".to_string(), ConfigVal::StringC("z".to_string()));

    let configs = vec![("dict".to_string(), ConfigVal::DictC(dict))];

    assert_extraction(
        "{{ config(dict={'a':'x', 'b': 'y', 'c':'z'}) }}",
        Extraction::populate(None, None, Some(configs)),
    )
}

#[test]
fn extracts_multiple_distinct_config_blocks() {
    let configs = vec![
        ("x".to_string(), ConfigVal::BoolC(true)),
        ("y".to_string(), ConfigVal::BoolC(false)),
    ];

    assert_extraction(
        r#"{{ config(x=True) }}
some sql stuff
{{ config(y=False) }}"#,
        Extraction::populate(None, None, Some(configs)),
    )
}

#[test]
fn extracts_multiple_overlapping_config_blocks() {
    let configs = vec![
        ("x".to_string(), ConfigVal::BoolC(true)),
        ("y".to_string(), ConfigVal::BoolC(false)),
        ("x".to_string(), ConfigVal::BoolC(false)),
    ];

    assert_extraction(
        r#"{{ config(x=True, y=False) }}
some sql stuff
{{ config(x=False) }}"#,
        Extraction::populate(None, None, Some(configs)),
    )
}
