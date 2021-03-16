#!/bin/bash
set -e

BIN="./node_modules/.bin/tree-sitter"
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
cd ${DIR}/..

echo "==================Test Output==================="

${BIN} generate
${BIN} test

echo "done!"
