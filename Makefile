
# without args just build the project
all: build

install:
	cargo update

build: install
	cargo build --release

test: install
	cargo build && cargo test

run:
	cargo build && cargo run

clean:
	cargo clean

# these stages don't output files by the same name
.PHONY: all install build test run clean
