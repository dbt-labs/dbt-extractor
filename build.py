# this script builds the tree-sitter so from source

from tree_sitter import Language, Parser  # type: ignore

Language.build_library(
  # Store the library in the `build` directory
  './build/dbtjinja.so',

  # Include one or more languages
  [
    './tree-sitter-dbt-jinja',
  ]
)