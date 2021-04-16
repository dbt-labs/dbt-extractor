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
	cd tree-sitter-dbt-jinja \
	&& ../node_modules/tree-sitter-cli/tree-sitter generate \
	&& cd .. \
	&& $(VENV)/bin/mypy ./src/type_check.py

# runs the tree-sitter tests and python unit tests
# python unit tests have a hard-coded relative path for the generated tree-sitter
# code, so the test runner needs to be run from the src directory
# using && so that unit tests don't run if tree-sitter tests fail.
test: build
	cd tree-sitter-dbt-jinja \
	&& ../node_modules/tree-sitter-cli/tree-sitter test \
	&& cd .. \
	&& PYTHONPATH=src ./$(VENV)/bin/pytest

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