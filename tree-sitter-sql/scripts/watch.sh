#!/bin/bash
set -e

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
WORKDIR="${DIR}/.."

FILES="${WORKDIR}/grammar.js ${WORKDIR}/example-file ${WORKDIR}/test/"
TEST_BIN="${DIR}/test.sh"

echo "Watching files for changes"

fswatch -o $FILES | xargs -n1 -I{} $TEST_BIN
