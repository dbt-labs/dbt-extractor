#!/bin/bash
set -e

clear
tree-sitter generate
tree-sitter parse example-file
echo "done!"
