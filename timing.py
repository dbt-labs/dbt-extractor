import jinja2
import parser
import time
import pprint

example = """

{{ config(materialized='table', enabled='True') }}

with abc as (
    select * from {{ ref('my_model') }}
    union all
    select * from {{ ref('some_package', 'some_model') }}
),
def as (
    select * from {{ source('some', 'source') }}
)

select *
from abc
join def on def.id = abc.id
where def.name = 'drew'
"""

ITERATIONS = 10000

def test_tree_sitter():
    _parser = parser.get_parser()

    start = time.time()
    for i in range(ITERATIONS):
        res = parser.parse_string(_parser, example)

    elapsed = time.time() - start
    print(f"  Ran {ITERATIONS} parse cycles in {elapsed:0.2f}s ({elapsed/ITERATIONS*1000:0.2f}ms/node)")

    print("  Parsed:")
    pprint.pprint(res)

def test_jinja():
    start = time.time()

    for i in range(ITERATIONS):
        data = {'sources': set(), 'refs': set(), 'configs': dict()}

        template = jinja2.Template(example)
        res = template.render(
            config=lambda **kwargs: data['configs'].update(kwargs),
            ref=lambda *args: data['refs'].add(tuple(args)),
            source=lambda *args: data['sources'].add(tuple(args)),
        )

    elapsed = time.time() - start

    print(f"  Ran {ITERATIONS} parse cycles in {elapsed:0.2f}s ({elapsed/ITERATIONS*1000:0.2f}ms/node)")

    print("  Parsed:")
    pprint.pprint(data)

print("Tree-sitter-------------------")
test_tree_sitter()

print()
print()

print("Jinja-------------------------")
test_jinja()
