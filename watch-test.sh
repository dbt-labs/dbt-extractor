fswatch -o grammar.js example-file test/ | xargs -n1 -I{} ./unit-test.sh
