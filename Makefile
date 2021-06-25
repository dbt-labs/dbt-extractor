
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

# builds optimized binary since the demo displays rumtimes
demo:
	cd demo \
	&& open demo.html \
	&& cargo run --release

clean:
	cargo clean && \
	cd demo && cargo clean

# these stages don't output files by the same name
.PHONY: all install build test run demo clean
