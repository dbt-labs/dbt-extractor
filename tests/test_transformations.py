import src.compiler

parser = src.compiler.get_parser()

# runs the parser and type checker and prints debug messaging if it fails
def transforms_into(input, expected):
    got = src.compiler.transformations(input)
    if expected != got:
        print("::: EXPECTED :::")
        print(expected)
        print("::: GOT :::")
        print(got)
        return False
    return True

def test_partition_by_gets_removed():
    assert transforms_into(
        ('root',
            ('config',
                ('kwarg', 
                    'partition_by', 
                    'some value'
                ),
                ('kwarg', 
                    'key', 
                    'value'
                )
            )
        )
        ,
        ('root',
            ('config',
                ('kwarg', 
                    'key', 
                    'value'
                )
            )
        )
    )

