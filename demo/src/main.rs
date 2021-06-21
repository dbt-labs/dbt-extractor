use dbt_extractor::{
    ConfigVal,
    Extraction,
    extract_from_source,
};
use serde_json::json;
use serde::Serialize;
use std::time::Instant;


#[derive(Clone, Debug, Serialize)]
struct ExtractedResponse {
    ms: f64,
    error: String,
    refs: Vec<Vec<String>>,
    sources: Vec<Vec<String>>,
    // dipping into JSON to represent an Object of heterogeneous types
    configs: serde_json::Value,
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
                configs: serde_json::Value::Object(
                    configs.into_iter().map(|(k, v)| (k, jsonify_config(v))).collect()
                ),
            }).into()
        }, 
        Err(e) => {
            let micros = start.elapsed().as_micros();
            let millis: f64 = (micros as f64) / 1000.0;
            json!(ExtractedResponse {
                ms: millis,
                error: e.to_string(),
                refs: vec![],
                sources: vec![],
                configs: serde_json::Value::Object(serde_json::Map::new()),
            }).into()
        },
    };
    res.insert_header(tide::http::headers::ACCESS_CONTROL_ALLOW_ORIGIN, "*");
    tide::Result::Ok(res)
}

fn jsonify_config(v: ConfigVal) -> serde_json::Value {
    match v {
        ConfigVal::StringC(s) => serde_json::Value::String(s),
        ConfigVal::BoolC(b) => serde_json::Value::Bool(b),
        ConfigVal::ListC(list) => serde_json::Value::Array(
            list.into_iter().map(jsonify_config).collect()
        ),
        ConfigVal::DictC(m) => serde_json::Value::Object(
            m.into_iter()
                .map(|(k, v)| (k, jsonify_config(v)))
                .collect()
        ),
    }
}
