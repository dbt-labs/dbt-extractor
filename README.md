
### How to use me

**Installing requirements**

```
python3 -m venv env
source env/bin/activate
pip install -r requirements.txt
```

**Proof of concept**
```
python main.py
```

### Using tree-sitter

```
cd tree-sitter-dbt-jinja
npm install
./node_modules/.bin/tree-sitter generate
./node_modules/.bin/tree-sitter parse example-file
```

### Relevant docs
- https://tree-sitter.github.io/tree-sitter/creating-parsers
- https://github.com/tree-sitter/py-tree-sitter
