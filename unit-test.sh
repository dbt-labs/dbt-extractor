#!/bin/bash
set -e

echo "==================Test Output==================="

tree-sitter generate
tree-sitter test
echo "done!"
