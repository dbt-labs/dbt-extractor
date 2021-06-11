mod exceptions;
mod extractor;

fn main() {
    let code = "This text supports {{ 'jinja' }}.";
    let checked = extractor::extract_from_source(code);
    match checked {
        Ok(val) => println!("{:?}", val),
        Err(msg) => println!("{}", msg),
    };
}
