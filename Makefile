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
	&& ../node_modules/tree-sitter-cli/tree-sitter generate

# runs the tree-sitter tests and python unit tests
# python unit tests have a hard-coded relative path for the generated tree-sitter
# code, so the test runner needs to be run from the src directory
# using && so that unit tests don't run if tree-sitter tests fail.
test: build
	cd tree-sitter-dbt-jinja \
	&& ../node_modules/tree-sitter-cli/tree-sitter test \
	&& cd .. \
	&& PYTHONPATH=src ./$(VENV)/bin/pytest tests/dbt_jinja/test_type_checker.py \
	&& PYTHONPATH=src ./$(VENV)/bin/pytest tests/dbt_jinja/test_extractor.py \
	&& PYTHONPATH=src ./$(VENV)/bin/pytest tests/scripts/test_parse_results.py \

# runs the python application
# arguments must be passed like `make run ARGS="arg1 arg2"`
repl: build
	./$(VENV)/bin/python3

# runs the python application
# arguments must be passed like `make run ARGS="arg1 arg2"`
run: build
	PYTHONPATH=src ./$(VENV)/bin/python3 src/scripts/main.py $(ARGS)

# runs the demo http server
serve: build
	./$(VENV)/bin/python3 src/demo_server.py

# runs the demo http server
demo: build
	open demo/demo.html \
	&& ./$(VENV)/bin/python3 src/demo_server.py

# docker must be running. build-wasm stage will print that error though
treedemo: build
	cd tree-sitter-dbt-jinja/ \
	&& ../node_modules/tree-sitter-cli/tree-sitter build-wasm \
	&& ../node_modules/tree-sitter-cli/tree-sitter web-ui

clean:
	rm -rf $(VENV)
	rm -rf node_modules
	find . -type f -name '*.pyc' -delete
	find . -type f -name '*.wasm' -delete
	find . -type f -name '*.gyp' -delete
	find . -type d -name '__pycache__' -delete
	rm -rf .pytest_cache/
	rm -rf build/
	rm -rf tree-sitter-dbt-jinja/{src,bindings,build}
	rm tree-sitter-dbt-jinja/Cargo.toml

# these stages don't output files by the same name
.PHONY: all install build test run clean