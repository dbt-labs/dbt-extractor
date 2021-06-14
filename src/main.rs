mod exceptions;
mod extractor;

// This is a stub main.
// This will eventually run the extractor over real dbt projects
// in order to detect false positives and misses.
fn main() {
    let code = "This text supports {{ 'jinja' }}.";
    let checked = extractor::extract_from_source(code);
    match checked {
        Ok(val) => println!("{:?}", val),
        Err(msg) => println!("{}", msg),
    };
}
