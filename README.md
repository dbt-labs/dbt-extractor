
# dbt extractor
## Understanding dbt-extractor

This repository contains a tool that processes the most common jinja value templates in dbt model files. The tool depends on tree-sitter and the tree-sitter-jinja2 library.

![demo app](demo/demo.gif)

## Getting started

- Read the [introduction](https://docs.getdbt.com/docs/introduction/) and [viewpoint](https://docs.getdbt.com/docs/about/viewpoint/) of dbt

## Strategy

The current strategy is for this processor to be 100% certain when it can accurately extract values from a given model file. Anything less than 100% certainty returns an exception so that the model can be rendered with python Jinja instead. 

There are two cases we want to avoid because they would risk correctness to user's projects:
1. Confidently extracting values that would not be extracted by python jinja (false positives)
2. Confidently extracting a set of values that are missing values that python jinja would have extracted. (misses)

If we instead error when we could have confidently extracted values, there is no correctness risk to the user. Only an opportunity to expand the rules to encompass this class of cases as well.

Even though jinja in dbt is not a typed language, the type checker statically determines whether or not the current implementation can confidently extract values without relying on python jinja rendering, which is when these errors would otherwise surface. This type checker will become more permissive over time as this tool expands to include more dbt and jinja features.

## Architecture

This architecture is optimized for value extraction and for future flexibility. This architecture is expected to change, and is coded in fp-style stages to make those changes easier for the future.

This processor is composed of several stages:
1. parser
2. type checker
3. extractor

Additionally, the following tools utilize the above processor:
1. browser-based demo of dbt extraction as you type

The tree-sitter parser is located in the tree-sitter-jinja2 library. The rust bindings are used to traverse the concrete syntax tree that tree-sitter creates in order to create a typed abstract syntax tree in the type checking stage. The errors in the type checking stage are not raised to the user, and are instead used by developers to debug tests.

The parser is solely responsible for turning text into recognized values, while the type checker does arity checking, and enforces argument list types (e.g. nested function calls like `{{ config(my_ref=ref('table')) }}` will parse but not type check even though it is valid dbt syntax. The tool at this time doesn't have an agreed serialization to communicate refs as config values, but could in the future.)

The extractor uses the typed abstract syntax tree to easily identify all the refs, sources, and configs present and extract them.

## Join the dbt Community

- Be part of the conversation in the [dbt Community Slack](http://community.getdbt.com/)
- Read more on the [dbt Community Discourse](https://discourse.getdbt.com)

## Reporting bugs and contributing code

- Want to report a bug or request a feature? Let us know on [Slack](http://community.getdbt.com/), or open [an issue](https://github.com/dbt-labs/dbt-extractor/issues/new)
- Want to help us build `dbt-extractor`? Check out the [Contributing Guide](https://github.com/dbt-labs/dbt-extractor/blob/HEAD/CONTRIBUTING.md)

## Code of Conduct

Everyone interacting in the dbt project's codebases, issue trackers, chat rooms, and mailing lists is expected to follow the [dbt Code of Conduct](https://community.getdbt.com/code-of-conduct).
