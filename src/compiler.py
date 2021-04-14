
from tree_sitter import Language, Parser
import type_check


Language.build_library(
  # Store the library in the `build` directory
  './build/sql.so',

  # Include one or more languages
  [
    './tree-sitter-dbt-jinja',
  ]
)

JINJA2_LANGUAGE = Language('./build/sql.so', 'dbt_jinja')

def text_from_node(source_bytes, node):
    return source_bytes[node.start_byte:node.end_byte].decode('utf8')

def named_children(node):
    return list(filter(lambda x: x.is_named, node.children))

# applies transformations to the typed_ast
# for now it's just post_hook -> post-hook config keword.
def transformations(node):
    # reached a leaf
    if not isinstance(node, tuple):
        return node

    elif node[0] == 'config':
        kwargs = node[1:]
        new_kwargs = []
        for kwarg in kwargs:
            if (kwarg[1] == 'post_hook' or kwarg[1] == 'post-hook') and kwarg[2][0] == 'list':
                new_kwargs.append(transformations((
                    kwarg[0], 
                    'post-hook', 
                    ('dict',
                        ('index',
                            None
                        ),
                        ('sql',
                            kwarg[2]
                        )
                    )
                )))
            else:
                new_kwargs.append(transformations(kwarg))
        return ('config', *new_kwargs)

    else:
        return (node[0], *tuple(transformations(child) for child in node[1:]))


# expects node to have NO ERRORS in any of its subtrees
def extract(node, data):
    # reached a leaf
    if not isinstance(node, tuple):
        return node

    if node[0] == 'list':
        return list(extract(child, data) for child in node[1:])

    if node[0] == 'dict':
        return { node[1][0]: extract(node[1][1], data) }

    if node[0] == 'ref':
        # no package name
        if len(node) == 2:
            ref = [node[1]]
        else:
            ref = [node[1], node[2]]
        data['refs'].append(ref)

    # configs are the only ones that can recurse like this
    # e.g. {{ config(key=[{'nested':'values'}]) }}
    if node[0] == 'config':
        for kwarg in node[1:]:
            data['configs'].append((kwarg[1], extract(kwarg[2], data)))

    if node[0] == 'source':
        for arg in node[1:]:
            data['sources'].add((node[1], node[2]))

    # generator statement evaluated as tuple for effects
    tuple(extract(child, data) for child in node[1:])

def error_count(node, count):
    total = count
    if node.type == 'ERROR':
        total += 1

    for child in node.children:
        total += error_count(child, total)

    return total

def get_parser():
    parser = Parser()
    parser.set_language(JINJA2_LANGUAGE)
    return parser

# entry point function
# TODO rename this "extract from source"
def parse_typecheck_extract(parser, string):
    source_bytes = bytes(string, "utf8")
    tree = parser.parse(source_bytes)
    count = error_count(tree.root_node, 0)
    data = {
        'refs': [],
        'sources': set(),
        'configs': [],
        'python_jinja': False
    }
    # if there are no _parsing errors_ check for _type errors_
    if count <= 0:
        # checked should be a new typed ast, but we don't have that machinery yet.
        # this is the same untyped ast for now.
        checked_ast_or_error = type_check.type_check(source_bytes, tree.root_node)
        data2 = dict(data)
        # if there are type errors
        if isinstance(checked_ast_or_error, type_check.TypeCheckFailure):
            data2['python_jinja'] = True
            return data2
        # if there are no parsing errors and no type errors, extract stuff!
        else:
            typed_root = checked_ast_or_error
            transformed_root = transformations(typed_root)
            extract(transformed_root, data2)
            return data2
    # if this limited tree-sitter implementaion can't parse it, python jinja will have to
    else:
        data2 = dict(data)
        data2['python_jinja'] = True
        return data2
