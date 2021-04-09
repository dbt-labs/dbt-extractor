
# dbt Jinja tree-sitter Parser

This repository contains a tree-sitter grammar for the most common non-macro jinja calls as well as a python app that can run the parser against example model file contents and collect either the aggregated stats for how well it does, or output all the jinja blocks it could not parse to a file.

The parser additionally has a thin type checker written in python that does arity checks on the built in `ref`, `config`, and `source` functions as well as scope checking for nested function calls which this implementation does not support.

## Installing Requirements
```
make install
```

## Building The Project
```
make build
```

Since the python app does not need to be built this only builds the tree-sitter parser. This only needs to be run if you change the `grammar.js` file.

## Testing The Project
```
make test
```

- Tests for the grammar are in `tree-sitter-dbt-jinja/test/corpus`
- Tests for the type checker are coming
- Tests for the python app runner are coming

## Running The Python App
To collect aggregated results on how well the parser does on the sample data:
```
make run ARGS="results your-data-file.json"
```

To write all the jinja blocks that this parser failed to parse to a file:
```
make run ARGS="missed your-data-file.json ./out-file.txt"
```

If you have sample files in the form 
```
{json}
{json}
...
{json}
```
Use the `jsonify.sh` script provided in this repo to stitch them together into one large JSON array before running the above commands.