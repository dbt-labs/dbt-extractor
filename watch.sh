fswatch -o grammar.js example-file | xargs -n1 -I{} ./test.sh
