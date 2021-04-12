from functools import reduce
import src.compiler
import src.type_check

parser = src.compiler.get_parser()

# runs the parser and type checker and prints debug messaging if it fails
def type_checks(source_text):
    tree = parser.parse(bytes(source_text, "utf8"))
    # If we couldn't parse the source we can't typecheck it.
    if src.compiler.error_count(tree.root_node, 0) > 0:
        print("parser failed")
        return False
    res = src.type_check.type_check(tree.root_node)
    # if it returned a list of errors, it didn't typecheck
    if isinstance(res, list):
        for err in res:
            print(err)
        return False
    else:
        return True

# same as `type_checks` but operates on a list of source strings
def type_checks_all(l):
    return reduce(lambda x, y: x and y, map(type_checks, l))
    
def test_recognizes_ref_source_config():
    assert type_checks_all([
        "select * from {{ ref('my_table') }}",
        "{{ config(key='value') }}",
        "{{ source('a', 'b') }}"
    ])

def test_config_all_inputs():
    assert type_checks_all([
        "{{ config(key='value') }}"
        "{{ config(key=['v1,','v2']) }}"
        "{{ config(key={'k': 'v'}) }}"
    ])

def test_source_keyword_args():
    assert type_checks_all([
        "{{ source(source_name='src', table_name='table') }}"
        "{{ source('src', table_name='table') }}"
        "{{ source(source_name='src', 'table') }}"
    ])

def test_ref_bad_inputs_fail():
    assert not type_checks("{{ ref('too', 'many', 'strings') }}")