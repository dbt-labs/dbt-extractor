
# dbt Jinja Processor

![demo app](demo/demo.gif)

This repository contains a tool that processes the most common jinja value templates in dbt model files. The tool uses tree-sitter and includes a python app that can run the parser against example model file contents and collect the aggregated stats for how well it does.

# Strategy

The current strategy is for this processor to be 100% certain when it can accurately extract values from a given model file. Anything less than 100% certainty returns an exception so that the model can be rendered with python Jinja instead. 

There are two cases we want to avoid because they would risk correctness to user's projects:
1. Confidently extracting values that would not be extracted by python jinja (false positives)
2. Confidently extracting a set of values that are missing values that python jinja would have extracted. (misses)

If we instead error when we could have confidently extracted values, there is no correctness risk to the user. Only an opportunity to expand the rules to encompass this class of cases as well.

Even though dbt jinja is not a typed language, the type checker statically determines whether or not the current implementation can confidently extract values without relying on python jinja rendering, which is when these errors would otherwise surface. This type checker will become more permissive over time as this tool expands to include more dbt and jinja features.

# Architecture

This architecture is optimized for value extraction and for future flexibility. This architecture is expected to change, and is coded in fp-style stages to make those changes easier for the future.

This processor is composed of several stages:
1. parser
2. type checker
3. extractor

Additionally, the following tools utilize the above processor:
1. python runner for aggregating results against test data
2. browser-based demo of dbt extraction as you type
3. browser-based demo of tree-sitter ast generation as you type

The parser is generated into C code by tree-sitter via the grammar in `tree-sitter-dbt-jinja/grammar.js`. The python hooks are used to traverse the concrete syntax tree that tree-sitter creates in order to create a typed abstract syntax tree in the type checking stage (in Python, we have chosen to represent this with a nested tuple of strings). The errors in the type checking stage are not raised to the user, and are instead used by developers to debug tests.

The parser is solely responsible for turning text into recognized values, while the type checker does arity checking, and enforces argument list types (e.g. nested function calls like `{{ config(my_ref=ref('table')) }}` will parse but not type check even though it is valid dbt syntax. The tool at this time doesn't have an agreed serialization to communicate refs as config values at this time, but could in the future.)

The extractor uses the typed abstract syntax tree to easily identify all the refs, sources, and configs present and extract them to a dictionary.

## Running The Demo Apps
To see the full implementation extract dbt values run live as you type in a browser, run:
```
make demo
```
Kill the server with ctrl+c to end the demo.

To see the tree-sitter demo which displays the abstract syntax tree as you type, first make sure the docker daemon is running, then run:
```
make treedemo
```

## Testing The Project
```
make test
```
Make will handle dependencies and building prior to running tests.

- Tests for the grammar are in `tree-sitter-dbt-jinja/test/corpus`
- Tests for the type checker in `tests/test_type_checker.py`
- Tests for the extractor in `tests/test_extractor.py`
- Tests for the python runner are in `tests/test_parse_results.py`

## Running On Real Data With The Python Script
To collect aggregated results on how well this tool does on the sample data:
```
make run ARGS="results your-data-file.json"
```

If you have sample files in the form 
```
{json}
{json}
...
{json}
```
Use the `jsonify.sh` script provided in this repo to stitch them together into one large JSON array before running the above commands.

## Future Work
- Refactor the tree-sitter jinja parser into its own repository to potentially open source and engage with the community on implementing improvements.
- Remove ref, source, and config type checking as hard coded rules and instead read these function types from external function definition statements.
- Create input path for a manifest file so it can be run on any project without additional pre-processing