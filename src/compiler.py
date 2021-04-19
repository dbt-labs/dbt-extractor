
from functools import reduce
from tree_sitter import Language, Parser


Language.build_library(
  # Store the library in the `build` directory
  './build/sql.so',

  # Include one or more languages
  [
    './tree-sitter-dbt-jinja',
  ]
)

JINJA2_LANGUAGE = Language('./build/sql.so', 'dbt_jinja')

class ParseFailure(Exception):
    msg: str

class TypeCheckFailure(Exception):
    msg: str

def named_children(node):
    return list(filter(lambda x: x.is_named, node.children))

def text_from_node(source_bytes, node):
    return source_bytes[node.start_byte:node.end_byte].decode('utf8')

def strip_quotes(text):
    if text:
        return text[1:-1]

# flatten([[1,2],[3,4]]) = [1,2,3,4]
def flatten(list_of_lists):
    return [item for sublist in list_of_lists for item in sublist]

def has_kwarg_child_named(name_list, node):
    kwargs = node[1:]
    for kwarg in kwargs:
        if kwarg[1] in name_list:
            return True
    return False

def error_count(node):
    if node.type == 'ERROR':
        return 1

    if node.children:
        return reduce(lambda a,b: a+b, map(lambda x: error_count(x), node.children))
    else:
        return 0

def get_parser():
    parser = Parser()
    parser.set_language(JINJA2_LANGUAGE)
    return parser

# meat of the type checker
# throws a TypeCheckError or returns a typed ast in the form of a nested tuple
def _to_typed(source_bytes, node):
    if node.type == 'lit_string':
        return strip_quotes(text_from_node(source_bytes, node))

    if node.type == 'bool':
        text = text_from_node(source_bytes, node)
        if text == 'True':
            return True
        if text == 'False':
            return False

    if node.type == 'jinja_macro_block':
        raise TypeCheckFailure("macro blocks are unsupported: {% syntax like this %}")

    elif node.type == 'list':
        elems = named_children(node)
        for elem in elems:
            if elem.type == 'fn_call':
                raise TypeCheckFailure(f"list elements cannot be function calls")
        return ('list', *tuple(_to_typed(source_bytes, elem) for elem in elems))

    elif node.type == 'kwarg':
        value_node = node.child_by_field_name('value')
        if value_node.type == 'fn_call':
            raise TypeCheckFailure(f"keyword arguments can not be function calls")
        key_node = node.child_by_field_name('key')
        key_text = text_from_node(source_bytes, key_node)
        return ('kwarg', key_text, _to_typed(source_bytes, value_node))

    elif node.type == 'dict':
        # locally mutate list of kv pairs
        pairs = []
        for pair in named_children(node):
            key = pair.child_by_field_name('key')
            value = pair.child_by_field_name('value')
            if key.type != 'lit_string':
                raise TypeCheckFailure(f"all dict keys must be string literals")
            if value.type == 'fn_call':
                raise TypeCheckFailure(f"dict values cannot be function calls")
            pairs.append((key, value))
        return ('dict', *tuple((strip_quotes(text_from_node(source_bytes, pair[0])), _to_typed(source_bytes, pair[1])) for pair in pairs))

    elif node.type == 'source_file':
        children = named_children(node)
        return ('root', *tuple(_to_typed(source_bytes, child) for child in children))

    elif node.type == 'fn_call':
        name = text_from_node(source_bytes, node.child_by_field_name('fn_name'))
        arg_list = node.child_by_field_name('argument_list')
        arg_count = arg_list.named_child_count
        args = named_children(arg_list)

        if name == 'ref':
            if arg_count != 1 and arg_count != 2:
                raise TypeCheckFailure(f"expected ref to have 1 or 2 arguments. found {arg_count}")
            for arg in args:
                if arg.type != 'lit_string':
                    raise TypeCheckFailure(f"all ref arguments must be strings. found {arg.type}")
            return ('ref', *tuple(_to_typed(source_bytes, arg) for arg in args))
        
        elif name == 'source':
            if arg_count != 2:
                raise TypeCheckFailure(f"expected source to 2 arguments. found {arg_count}")
            for arg in args:
                if arg.type != 'kwarg' and arg.type != 'lit_string':
                    raise TypeCheckFailure(f"unexpected argument type in source. Found {arg.type}")
            if args[0].type == 'kwarg' and text_from_node(source_bytes, args[0].child_by_field_name('key')) != 'source_name':
                raise TypeCheckFailure(f"first keyword argument in source must be source_name found {args[0].child_by_field_name('key')}")
            if args[1].type == 'kwarg' and text_from_node(source_bytes, args[1].child_by_field_name('key')) != 'table_name':
                raise TypeCheckFailure(f"second keyword argument in source must be table_name found {args[1].child_by_field_name('key')}")
            # TODO this isn't quite right. regardless of how they call it,
            # (kwarg vs string lits) I want it to come out the same
            # leaving this TODO in for now. When we move to an actual typed ast,
            # we can use something like Arg(name:Optional[String_Val], arg:ExprT)
            return ('source', *tuple(_to_typed(source_bytes, arg) for arg in args)) 

        elif name == 'config':
            if arg_count < 1:
                raise TypeCheckFailure(f"expected config to have at least one argument. found {arg_count}")
            excluded_config_args = ['post-hook', 'post_hook', 'pre-hook', 'pre_hook']
            for arg in args:
                if arg.type != 'kwarg':
                    raise TypeCheckFailure(f"unexpected non keyword argument in config. found {arg.type}")
                key_name = text_from_node(source_bytes, arg.child_by_field_name('key'))
                if key_name in excluded_config_args:
                    raise TypeCheckFailure(f"excluded config kwarg found: {key_name}")
            return ('config', *tuple(_to_typed(source_bytes, arg) for arg in args))

        else:
            raise TypeCheckFailure(f"unexpected function call to {name}")
    
    else:
        raise TypeCheckFailure(f"unexpected node type: {node.type}")

# Entry point for type checking. Either returns a single TypeCheckFailure or
# a typed-ast in the form of nested tuples.
# Depends on the source because we check for built-ins. It's a bit of a hack,
# but it works well at this scale.
def type_check(source_bytes, node):
    try:
        return _to_typed(source_bytes, node)
    # if an error was thrown, return it instead.
    except TypeCheckFailure as e:
        return e


# applies transformations to the typed_ast
def transformations(node):
    # reached a leaf
    if not isinstance(node, tuple):
        return node

    # transforms the following config arguments so that they don't make it into the final form
    elif node[0] == 'config' and has_kwarg_child_named(['partition_by', 'dataset', 'project' 'enabled'], node):
        kwargs = node[1:]
        # local mutation
        new_kwargs = []
        for kwarg in kwargs:
            if kwarg[1] in ['partition_by', 'dataset', 'project', 'enabled']:
                pass
            else:
                new_kwargs.append(kwarg)
        # sending the top-level config through again to catch any other config tranformations 
        return transformations(('config', *new_kwargs))

    else:
        return (node[0], *tuple(transformations(child) for child in node[1:]))


# operates on a typed ast
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

# returns a fully processed, typed ast or an exception
def process_source(parser, string):
    source_bytes = bytes(string, "utf8")
    tree = parser.parse(source_bytes)
    count = error_count(tree.root_node)

    # check for parser errors
    if count > 0:
        return ParseFailure("tree-sitter found errors")

    # if there are no parsing errors check for type errors
    checked_ast_or_error = type_check(source_bytes, tree.root_node)
    if isinstance(checked_ast_or_error, TypeCheckFailure):
        err = checked_ast_or_error
        return err
    
    # if there are no parsing errors and no type errors, transform and return
    typed_root = checked_ast_or_error
    transformed_root = transformations(typed_root)
    return transformed_root

# entry point function
def extract_from_source(parser, string):
    res = process_source(parser, string)

    data = {
        'refs': [],
        'sources': set(),
        'configs': [],
        'python_jinja': False
    }

    if isinstance(res, Exception):
        data['python_jinja'] = True
        return data

    transformed_root = res
    extract(transformed_root, data)
    return data
