# name of the virtual environment directory
VENV := env

# without args just build the project
all: build

# installs python dependencies
$(VENV)/bin/activate: requirements.txt
	python3 -m venv $(VENV)
	./$(VENV)/bin/pip install --upgrade pip
	./$(VENV)/bin/pip install -r requirements.txt

# installs npm dependencies
node_modules/tree-sitter-cli/tree-sitter:
	npm install

# install just needs the venv and tree-sitter binary
install: $(VENV)/bin/activate node_modules/tree-sitter-cli/tree-sitter

build: install
	cd tree-sitter-dbt-jinja && ../node_modules/tree-sitter-cli/tree-sitter generate

# runs the tree-sitter tests
# TODO add python unit tests
test: build
	cd tree-sitter-dbt-jinja && ../node_modules/tree-sitter-cli/tree-sitter test

# runs the python application
# arguments must be passed like `make run ARGS="arg1 arg2"`
run: build
	./$(VENV)/bin/python3 src/main.py $(ARGS)

clean:
	rm -rf $(VENV)
	rm -rf node_modules
	find . -type f -name '*.pyc' -delete
	rm tree-sitter-dbt-jinja/src/grammar.json
	rm tree-sitter-dbt-jinja/src/node-types.json
	rm tree-sitter-dbt-jinja/src/parser.c

# these stages don't output files by the same name
.PHONY: all install build test run clean