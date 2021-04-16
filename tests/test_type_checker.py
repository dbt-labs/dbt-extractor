from functools import reduce
import src.compiler
import src.type_check

parser = src.compiler.get_parser()

# runs the parser and type checker and prints debug messaging if it fails
def type_checks(source_text):
    source_bytes = bytes(source_text, "utf8")
    tree = parser.parse(source_bytes)
    # If we couldn't parse the source we can't typecheck it.
    if src.compiler.error_count(tree.root_node) > 0:
        print("parser failed")
        return False
    res = src.type_check.type_check(source_bytes, tree.root_node)
    # if it returned a list of errors, it didn't typecheck
    if isinstance(res, src.type_check.TypeCheckFailure):
        print(res)
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
    
def produces_tree(source_text, ast):
    source_bytes = bytes(source_text, "utf8")
    tree = parser.parse(source_bytes)
    # If we couldn't parse the source we can't typecheck it.
    if src.compiler.error_count(tree.root_node) > 0:
        print("parser failed")
        return False
    res = src.type_check.type_check(source_bytes, tree.root_node)
    # if it returned a list of errors, it didn't typecheck
    if isinstance(res, src.type_check.TypeCheckFailure):
        print(res)
        return False
    elif res != ast:
        print(":: EXPECTED ::")
        print(ast)
        print(":: GOT ::")
        print(res)
        return False
    else:
        return True

def test_recognizes_ref_source_config():
    assert all_type_check([
        "select * from {{ ref('my_table') }}",
        "{{ config(key='value') }}",
        "{{ source('a', 'b') }}"
    ])

def test_recognizes_multiple_blocks():
    assert all_type_check([
        "{{ ref('x') }} {{ ref('y') }}",
        "{{ config(key='value') }} {{ config(k='v') }}",
        "{{ source('a', 'b') }} {{ source('c', 'd') }}"
    ])

def test_fails_on_other_fn_names():
    assert none_type_check([
        "select * from {{ reff('my_table') }}",
        "{{ fn(key='value') }}",
        "{{ REF('a', 'b') }}"
    ])

def test_config_all_inputs():
    assert all_type_check([
        "{{ config(key='value') }}",
        "{{ config(key=True) }}",
        "{{ config(key=False) }}",
        "{{ config(key=['v1,','v2']) }}",
        "{{ config(key={'k': 'v'}) }}",
        "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}"
    ])

def test_config_fails_non_kwarg_inputs():
    assert none_type_check([
        "{{ config('value') }}",
        "{{ config(True) }}",
        "{{ config(['v1,','v2']) }}",
        "{{ config({'k': 'v'}) }}"
    ])

def test_source_keyword_args():
    assert all_type_check([
        "{{ source(source_name='src', table_name='table') }}",
        "{{ source('src', table_name='table') }}",
        "{{ source(source_name='src', 'table') }}",
        "{{ source('src', 'table') }}"
    ])

def test_source_keyword_args():
    assert none_type_check([
        "{{ source(source_name='src', BAD_NAME='table') }}",
        "{{ source(BAD_NAME='src', table_name='table') }}",
        "{{ source(BAD_NAME='src', BAD_NAME='table') }}"
    ])

def test_source_must_have_2_args():
    assert none_type_check([
        "{{ source('one isnt enough') }}",
        "{{ source('three', 'is', 'too many') }}",
        "{{ source('one', 'two', 'three', 'four') }}",
        "{{ source(source_name='src', table_name='table', 'extra') }}",
    ])

def test_source_args_must_be_strings():
    assert none_type_check([
        "{{ source(True, False) }}",
        "{{ source(key='str', key2='str2') }}",
        "{{ source([], []) }}",
        "{{ source({}, {}) }}",
    ])

def test_ref_accepts_one_and_two_strings():
    assert all_type_check([
        "{{ ref('two', 'args') }}",
        "{{ ref('one arg') }}"
    ])

def test_ref_bad_inputs_fail():
    assert none_type_check([
        "{{ ref('too', 'many', 'strings') }}",
        "{{ ref() }}",
        "{{ ref(kwarg='is_wrong') }}",
        "{{ ref(['list is wrong']) }}"
    ])

def test_nested_fn_calls_fail():
    assert none_type_check([
        "{{ [ref('my_table')] }}",
        "{{ [config(x='y')] }}",
        "{{ config(x=ref('my_table')) }}",
        "{{ source(ref('my_table')) }}"
    ])

def test_config_excluded_kwargs():
    assert none_type_check([
        "{{ config(pre_hook='x') }}",
        "{{ config(pre-hook='x') }}",
        "{{ config(post_hook='x') }}",
        "{{ config(post-hook='x') }}"
    ])

def test_macro_blocks_fail_everywhere():
    assert none_type_check([
        "{% config(x='y') %}",
        "{% if(whatever) do_something() %}",
        "doing stuff {{ ref('str') }} stuff {% macro %}",
        "{{ {% psych! nested macro %} }}"
    ])

def test_top_level_kwargs_are_rejected():
    assert none_type_check([
        "{{ kwarg='value' }}"
    ])

def test_top_level_kwargs_are_rejected():
    assert none_type_check([
        """{{ config(key='value') }}
with
something as (
    select whatever from {{ ref('my_table') }}
where {% is_incremental() %} and my_bool
),
other as (
    there's like ten more of these as blocks.
)"""
    ])

def test_ref_ast():
    assert produces_tree(
        "{{ ref('my_table') }}"
        ,
        ('root', ('ref', 'my_table'))
    )

def test_buried_refs_ast():
    assert produces_tree(
        """
        select
            field1,
            field2,
            field3
        from {{ ref('x') }}
        join {{ ref('y') }}
        """
        ,
        ('root',
            ('ref', 'x'),
            ('ref', 'y')
        )
    )

def test_config_ast():
    assert produces_tree(
        "{{ config(k1={'dict': ['value']}, k2='str') }}"
        ,
        ('root',
            ('config',
                ('kwarg', 
                    'k1', 
                    ('dict', 
                        ('dict', 
                            ('list', 
                                'value'
                            )
                        )
                    )
                ), 
                ('kwarg', 
                    'k2', 
                    'str'
                )
            )
        )
    )

# TODO typed ast shouldn't distinguish between kwargs and non kwargs
def test_source_ast():
    assert produces_tree(
        "{{ source(source_name='x', 'y') }}"
        ,
        ('root',
            ('source',
                ('kwarg',
                    'source_name',
                    'x'
                ),
                'y'
            )
        )
    )
