
import parser as parse_lib
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


parser = parse_lib.get_parser()

start = time.time()
ITERATIONS = 10000
for i in range(ITERATIONS):
    res = parse_lib.parse_string(parser, example)

elapsed = time.time() - start
print(f"Ran {ITERATIONS} parse cycles in {elapsed:0.2f}s ({elapsed/ITERATIONS*1000:0.2f}ms/node)")

print("Parsed:")
pprint.pprint(res)
