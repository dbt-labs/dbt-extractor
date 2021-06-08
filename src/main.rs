mod extractor;

fn main() {
    let code = "This text supports {{ 'jinja' }}.";
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(tree_sitter_jinja2::language()).expect("Error loading jinja2 grammar");
    let tree = parser.parse(code, None).unwrap();
    let checked = extractor::type_check(&tree);
    match checked {
        Ok(val) => println!("{:?}", val),
        Err(msg) => println!("{:?}", msg),
    };
}
