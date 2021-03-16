
### How to use me

**Installing requirements**

```
python3 -m venv env
source env/bin/activate
pip install -r requirements.txt
```

**Proof of concept**
_This script pulls out tables referenced and columns emitted from a SQL
statement_.

```
$ python extractor.py

========================================
Query:
    select
        name,
        age * 2 as twiceage
    from some_table

 - Inputs (tables): {'some_table'}
 - Outputs (columns): {'name', 'twiceage'}
========================================
Query:
    select *,
        lower(name) as lower_name,
        row_number() over () as idx

    from some_table
    join other_table using (id)

 - Inputs (tables): {'other_table', 'some_table'}
 - Outputs (columns): {'lower_name', 'idx', '*'}
```

### Performance
_See `timing.py`. Example timing on my machine:_

```
Tree-sitter-------------------
  Ran 10000 parse cycles in 0.86s (0.09ms/node)
  Parsed:
{'configs': {'enabled': 'True', 'materialized': 'table'},
 'refs': {(None, 'my_model'), ('some_package', 'some_model')},
 'sources': {('some', 'source')}}


Jinja-------------------------
  Ran 10000 parse cycles in 21.73s (2.17ms/node)
  Parsed:
{'configs': {'enabled': 'True', 'materialized': 'table'},
 'refs': {('some_package', 'some_model'), ('my_model',)},
 'sources': {('some', 'source')}}
```

### Using tree-sitter
View the README.md file in `tree-sitter-sql` for usage information. The
relevant grammar files live in `tree-sitter-sql/grammar.js` and
`tree-sitter-dbt-jinja/grammar.js`.


### Relevant docs
- https://tree-sitter.github.io/tree-sitter/creating-parsers
- https://github.com/tree-sitter/py-tree-sitter
