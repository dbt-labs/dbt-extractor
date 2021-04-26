import src.compiler as compiler

parser = compiler.parser

# runs the parser and type checker and prints debug messaging if it fails
def transforms_into(input, expected):
    got = compiler.transformations(input)
    if expected != got:
        print("::: EXPECTED :::")
        print(expected)
        print("::: GOT :::")
        print(got)
        return False
    return True

def test_removes_three_special_config_kwargs():
    assert transforms_into(
        ('root',
            ('config',
                ('kwarg', 
                    'partition_by', 
                    'some value'
                ),
                ('kwarg', 
                    'dataset', 
                    'some value'
                ),
                ('kwarg', 
                    'project', 
                    'some value'
                ),
                ('kwarg', 
                    'enabled', 
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

