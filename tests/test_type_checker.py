from functools import reduce
import src.compiler
import src.type_check

parser = src.compiler.get_parser()

def type_checks(source_text):
    tree = parser.parse(bytes(source_text, "utf8"))
    # If we couldn't parse the source we can't typecheck it.
    if src.compiler.error_count(tree.root_node, 0) > 0:
        return False
    res = src.type_check.type_check(tree.root_node)
    # if it returned a list of errors, it didn't typecheck
    return not isinstance(res, list)

def type_checks_all(l):
    return reduce(lambda x, y: x and y, map(type_checks, l))
    
def test_recognizes_ref_source_config():
    assert type_checks_all([
        "select * from {{ ref('my_table') }}",
        "{{ config('str') }}"
        "{{ source('a', 'b') }}"
    ])
