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
dbt-parser/node_modules/tree-sitter-cli/tree-sitter:
	cd dbt-parser && npm install

# install just needs the venv and tree-sitter binary
install: $(VENV)/bin/activate dbt-parser/node_modules/tree-sitter-cli/tree-sitter

build: install
	cd dbt-parser \
	&& npx tree-sitter generate

# runs the tree-sitter tests and python unit tests
# python unit tests have a hard-coded relative path for the generated tree-sitter
# code, so the test runner needs to be run from the src directory
# using && so that unit tests don't run if tree-sitter tests fail.
# TODO run the different compiler stage tests as separate commands so it stops early
test: build
	cd dbt-parser \
	&& npx tree-sitter test \
	&& cd .. \
	&& PYTHONPATH=src ./$(VENV)/bin/pytest

# runs the python application
# arguments must be passed like `make run ARGS="arg1 arg2"`
repl: build
	./$(VENV)/bin/python3

# runs the python application
# arguments must be passed like `make run ARGS="arg1 arg2"`
run: build
	./$(VENV)/bin/python3 src/main.py $(ARGS)

# runs the demo http server
serve: build
	./$(VENV)/bin/python3 src/demo_server.py

# runs the demo http server
demo: build
	open demo/demo.html \
	&& ./$(VENV)/bin/python3 src/demo_server.py

# docker must be running. build-wasm stage will print that error though
treedemo: build
	cd dbt-parser/ \
	&& npx tree-sitter build-wasm \
	&& npx tree-sitter web-ui

clean:
	rm -rf $(VENV)
	rm -rf node_modules
	find . -type f -name '*.pyc' -delete
	find . -type f -name '*.wasm' -delete
	find . -type f -name '*.gyp' -delete
	find . -type d -name '__pycache__' -delete
	rm -rf .pytest_cache/
	rm -rf build/
	rm -rf dbt-parser/{src,bindings,build}
	rm dbt-parser/Cargo.toml

# these stages don't output files by the same name
.PHONY: all install build test run clean
