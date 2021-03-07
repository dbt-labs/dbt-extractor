#!/bin/bash
set -e

tree-sitter generate
tree-sitter parse example-file
echo "done!"
