// in Rust "integration test" just means using the
// library from the outside like our users would

use dbt_extractor::{
    Extraction,
    extract_from_source,
};


fn assert_extraction(source: &str, expected: Extraction) {
    match extract_from_source(source) {
        Ok(x) => assert_eq!(x, expected),
        Err(e) => print!("expected: {:?}\ngot: {:?}", expected, e),
    }
}

#[test]
fn test_ref() {
    assert_extraction(
        "select * from {{ ref('my_table') }}",
        Extraction::populate(
            Some(vec![("my_table".to_string(), None)]),
            None,
            None,
        )
    );
}