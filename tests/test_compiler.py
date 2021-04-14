from pprint import pprint
import src.compiler

parser = src.compiler.get_parser()

def extraction(input, expected):
    got = src.compiler.parse_typecheck_extract(parser, input)
    passed = expected == got
    if not passed:
        print(":: EXPECTED ::")
        pprint(expected)
        print("::   GOT    ::")
        pprint(got)
    return passed

def exctracted(refs=[], sources=[], configs={}, python_jinja=False):
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
            configs={'key': 'value'}
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
        "{{ source('package', 'table') }} {{ ref('x') }} {{ config(key='v') }}"
        ,
        exctracted(
            sources=[('package', 'table')],
            refs=[['x']],
            configs={'key': 'v'}
        )
    )

def test_deeply_nested_config():
    assert extraction(
        "{{ config(key=[{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]) }}"
        ,
        exctracted(
            configs={'key': [{'k':['v', {'x': 'y'}]}, ['a', 'b', 'c']]}
        )
    )