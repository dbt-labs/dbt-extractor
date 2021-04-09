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
    
def test_dummy():
    assert type_checks("select * from {{ ref('my_table') }}")
