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

def test_fake_post_hook():
    assert transforms_into(
        ('root',
            ('config',
                ('kwarg', 
                    'post_hook', 
                    'fake'
                )
            )
        )
        ,
        ('root',
            ('config',
                ('kwarg', 
                    'post_hook', 
                    'fake'
                )
            )
        )
    )

def test_post_hook_list_tranformation():
    assert transforms_into(
        ('root',
            ('config',
                ('kwarg', 
                    'post_hook', 
                    ('list',
                        'x',
                        'y'
                    )
                )
            )
        )
        ,
        ('root',
            ('config',
                ('kwarg', 
                    'post-hook', 
                    ('dict',
                        ('index',
                            None
                        ),
                        ('sql',
                            ('list',
                                'x',
                                'y'
                            )
                        )
                    )
                )
            )
        )
    )
