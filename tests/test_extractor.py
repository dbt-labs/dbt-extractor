from pprint import pprint
import src.compiler as compiler

parser = compiler.parser

def extraction(input, expected):
    got = compiler.extract_from_source(input)
    passed = expected == got
    if not passed:
        source_bytes = bytes(input, "utf8")
        tree = parser.parse(source_bytes)
        count = compiler.error_count(tree.root_node)
        print(f"parser error count: {count}")
        print("TYPE CHECKER OUTPUT")
        pprint(compiler.type_check(source_bytes, tree.root_node))
        print(":: EXPECTED ::")
        pprint(expected)
        print("::   GOT    ::")
        pprint(got)
    return passed

def exctracted(refs=[], sources=[], configs=[], python_jinja=False):
    return {
        'refs': refs,
        'sources': set(sources),
        'configs': configs,
        'python_jinja': python_jinja
    }

def test_ref():
    assert extraction(
        "{{ ref('my_table') }} {{ ref('other_table')}}"
        ,
        exctracted(
            refs=[['my_table'], ['other_table']]
        )
    )

def test_config():
    assert extraction(
        "{{ config(key='value') }}"
        ,
        exctracted(
            configs=[('key', 'value')]
        )
    )

def test_source():
    assert extraction(
        "{{ source('package', 'table') }} {{ source('x', 'y') }}"
        ,
        exctracted(
            sources=[('package', 'table'), ('x', 'y')]
        )
    )

def test_all():
    assert extraction(
        "{{ source('package', 'table') }} {{ ref('x') }} {{ config(k='v', x=True) }}"
        ,
        exctracted(
            sources=[('package', 'table')],
            refs=[['x']],
            configs=[('k', 'v'), ('x', True)]
        )
    )

def test_deeply_nested_config():
    assert extraction(
        "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}"
        ,
        exctracted(
            configs=[('key', [{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']])]
        )
    )

def test_extracts_dict_with_multiple_keys():
    assert extraction(
        "{{ config(dict={'a':'x', 'b': 'y', 'c':'z'}) }}"
        ,
        exctracted(
            configs=[('dict', {'a': 'x', 'b': 'y', 'c':'z'})]
        )
    )