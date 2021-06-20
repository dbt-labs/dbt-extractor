use dbt_extractor::{
    ConfigVal,
    Extraction,
    extract_from_source,
};
use serde::Serialize;
use serde_json::json;
use std::time::Instant;


#[derive(Clone, Debug, Serialize)]
struct ExtractedResponse {
    ms: f64,
    error: String,
    refs: Vec<Vec<String>>,
    sources: Vec<Vec<String>>,
    configs: Vec<Vec<String>>,
}

#[async_std::main]
async fn main() -> tide::Result<()> {
    let mut app = tide::new();
    app.at("/").post(parse);
    app.listen(vec!["[::]:8080", "0.0.0.0:9000"]).await?;
    Ok(())
}

async fn parse(mut req: tide::Request<()>) -> tide::Result {
    let source: String = req.body_json().await?;
    let start = Instant::now();
    let mut res: tide::Response = match extract_from_source(&source) {
        Ok(Extraction { refs, sources, configs }) => {
            let micros = start.elapsed().as_micros();
            let millis: f64 = (micros as f64) / 1000.0;
            json!(ExtractedResponse {
                ms: millis,
                error: "no error".to_owned(),
                refs: refs.into_iter().map(|x| match x {
                    (x, Some(y)) => vec![x, y],
                    (x, None) => vec![x]
                }).collect(),
                sources: sources.into_iter().map(|(x, y)| vec![x, y]).collect(),
                configs: configs.into_iter().map(|(k, v)| vec![k, stringify_config(v)]).collect(),
            }).into()
        }, 
        Err(e) => {
            let micros = start.elapsed().as_micros();
            let millis: f64 = (micros as f64) / 1000.0;
            json!(ExtractedResponse {
                ms: millis,
                error: e.to_string(), // TODO is this right?
                refs: vec![],
                sources: vec![],
                configs: vec![],
            }).into()
        },
    };
    res.insert_header(tide::http::headers::ACCESS_CONTROL_ALLOW_ORIGIN, "*");
    tide::Result::Ok(res)
}

fn stringify_config(v: ConfigVal) -> String {
    match v {
        ConfigVal::StringC(s) => s,
        ConfigVal::BoolC(true) => "True".to_owned(),
        ConfigVal::BoolC(false) => "False".to_owned(),
        // TODO represents lists as "[]" with the quotes.
        ConfigVal::ListC(list) => format!("[{}]", 
            list.into_iter().map(stringify_config).collect::<Vec<String>>().join(", ")
        ),
        // TODO represents dicts as "{}" with the quotes.
        ConfigVal::DictC(m) => {
            let mut result = "{".to_owned();
            let contents = m.into_iter().map(|(k, v)| format!("{}: {}", k, stringify_config(v))).collect::<Vec<String>>().join(", ");
            result.push_str(&contents);
            result.push_str("}");
            result
        }
    }
}
