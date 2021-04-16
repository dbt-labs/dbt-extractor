from dataclasses import dataclass
from typing import NamedTuple, Union

@dataclass
class TypeCheckFailure(Exception):
    msg: str

@dataclass
class TypeCheckPass():
    pass

class DbtBool(NamedTuple):
    value: bool

class DbtString(NamedTuple):
    value: str

class DbtList(NamedTuple):
    value: ExprT

ExprT = Union[
    DbtBool,
    DbtString,
    DbtList
]

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

# throws a TypeCheckError or returns a typed ast in the form of a nested tuple
def _to_typed(source_bytes, node):
    if node.type == 'lit_string':
        return strip_quotes(text_from_node(source_bytes, node))

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
        key_node = node.child_by_field_name('arg')
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
            if args[0].type == 'kwarg' and text_from_node(source_bytes, args[0].child_by_field_name('arg')) != 'source_name':
                raise TypeCheckFailure(f"first keyword argument in source must be source_name found {args[0].child_by_field_name('arg')}")
            if args[1].type == 'kwarg' and text_from_node(source_bytes, args[1].child_by_field_name('arg')) != 'table_name':
                raise TypeCheckFailure(f"second keyword argument in source must be table_name found {args[1].child_by_field_name('arg')}")
            # TODO this isn't quite right. regardless of how they call it,
            # (kwarg vs string lits) I want it to come out the same
            return ('source', *tuple(_to_typed(source_bytes, arg) for arg in args)) 

        elif name == 'config':
            if arg_count < 1:
                raise TypeCheckFailure(f"expected config to have at least one argument. found {arg_count}")
            excluded_config_args = ['post-hook', 'post_hook', 'pre-hook', 'pre_hook']
            for arg in args:
                if arg.type != 'kwarg':
                    raise TypeCheckFailure(f"unexpected non keyword argument in config. found {arg.type}")
                key_name = text_from_node(source_bytes, arg.child_by_field_name('arg'))
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
