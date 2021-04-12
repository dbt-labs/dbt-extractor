from functools import reduce
import src.compiler
import src.type_check

parser = src.compiler.get_parser()

# runs the parser and type checker and prints debug messaging if it fails
def type_checks(source_text):
    source_bytes = bytes(source_text, "utf8")
    tree = parser.parse(source_bytes)
    # If we couldn't parse the source we can't typecheck it.
    if src.compiler.error_count(tree.root_node, 0) > 0:
        print("parser failed")
        return False
    res = src.type_check.type_check(source_bytes, tree.root_node)
    # if it returned a list of errors, it didn't typecheck
    if isinstance(res, list):
        for err in res:
            print(err)
        return False
    else:
        return True

def type_check_fails(source_text):
    return not type_checks(source_text)

# same as `type_checks` but operates on a list of source strings
def all_type_check(l):
    return reduce(lambda x, y: x and y, map(type_checks, l))

# same as `type_checks_all` but returns true iff none of the strings typecheck
def none_type_check(l):
    return reduce(lambda x, y: x and y, map(type_check_fails, l))
    
def test_recognizes_ref_source_config():
    assert all_type_check([
        "select * from {{ ref('my_table') }}",
        "{{ config(key='value') }}",
        "{{ source('a', 'b') }}"
    ])

def test_fails_on_other_fn_names():
    assert none_type_check([
        "select * from {{ reff('my_table') }}",
        "{{ fn(key='value') }}",
        "{{ REF('a', 'b') }}"
    ])

def test_config_all_inputs():
    assert all_type_check([
        "{{ config(key='value') }}"
        "{{ config(key=['v1,','v2']) }}"
        "{{ config(key={'k': 'v'}) }}"
    ])

def test_config_fails_non_kwarg_inputs():
    assert none_type_check([
        "{{ config('value') }}"
        "{{ config(['v1,','v2']) }}"
        "{{ config({'k': 'v'}) }}"
    ])

def test_source_keyword_args():
    assert type_checks_all([
        "{{ source(source_name='src', table_name='table') }}"
        "{{ source('src', table_name='table') }}"
        "{{ source(source_name='src', 'table') }}"
    ])

def test_source_keyword_args():
    assert none_type_check([
        "{{ source(source_name='src', BAD_NAME='table') }}"
        "{{ source(BAD_NAME='src', table_name='table') }}"
        "{{ source(BAD_NAME='src', BAD_NAME='table') }}"
    ])

def test_ref_bad_inputs_fail():
    assert none_type_check(["{{ ref('too', 'many', 'strings') }}"])