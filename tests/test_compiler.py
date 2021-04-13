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
        'refs': set(refs),
        'sources': set(sources),
        'configs': configs,
        'python_jinja': python_jinja
    }

def test_extracts_ref():
    assert extraction(
        "{{ ref('my_table') }} {{ ref('other_table')}}"
        ,
        exctracted(refs=['my_table', 'other_table'])
    )

def test_extracts_config():
    assert extraction(
        "{{ config(key='value') }}"
        ,
        exctracted(configs={'key': 'value'})
    )