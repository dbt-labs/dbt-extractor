
# # # # # # # # # # # # # # # # # # # # # # # # # #
# disclaimer: please don't use this to learn how  #
# type checking works. This is mostly a hack.     #
# # # # # # # # # # # # # # # # # # # # # # # # # #
from dataclasses import dataclass

@dataclass
class TypeCheckFailure():
    msg: str

@dataclass
class TypeCheckPass():
    pass

def named_children(node):
    return list(filter(lambda x: x.is_named, node.children))

def text_from_node(source_bytes, node):
    return source_bytes[node.start_byte:node.end_byte].decode('utf8')

# These type checking functions are naive and too concrete
# Error messages are to be read by dbt devs to determine where tree-sitter is failing.
# All failures will simply pass to python-jina, this will just prevent the successfully parsing
# incorrect dbt jinja.
# TODO make these more abstract so they can apply to future functions for free.

def fn_call_check(source_bytes, fn_call):
    name = text_from_node(source_bytes, fn_call.child_by_field_name('fn_name'))
    arg_list = fn_call.child_by_field_name('argument_list')
    if name == "ref":
        return ref_check(arg_list)
    elif name == "source":
        return source_check(source_bytes, arg_list)
    elif name == "config":
        return config_check(arg_list)
    else:
        return TypeCheckFailure(f"can only use the three built in functions: ref, source, config. Found {name}")

def ref_check(arg_list):
    named_child_count = arg_list.named_child_count
    if named_child_count < 1 or named_child_count > 2:
        return TypeCheckFailure(f"expected ref to have 1 or 2 arguments. found {named_child_count}")
    for arg in named_children(arg_list):
        if arg.type == 'kwarg':
            return TypeCheckFailure(f"unexpected keyword argument in ref")
        if arg.type != 'lit_string':
            return TypeCheckFailure(f"unexpected argument type in ref")
    return TypeCheckPass()

def config_check(arg_list):
    if arg_list.named_child_count < 1:
        return TypeCheckFailure(f"expected config to have at least one argument. found {arg_list.named_child_count}")
    for arg in named_children(arg_list):
        if arg.type != 'kwarg':
            return TypeCheckFailure(f"unexpected non keyword argument in config")
    return TypeCheckPass()

def source_check(source_bytes, arg_list):
    if arg_list.named_child_count != 2:
        return TypeCheckFailure(f"expected source to 2 arguments. found {arg_list.named_child_count}")
    args = named_children(arg_list)
    for arg in args:
        if arg.type != 'kwarg' and arg.type != 'lit_string':
            return TypeCheckFailure(f"unexpected argument type in source. Found {arg.type}")
    if args[0].type == 'kwarg' and text_from_node(source_bytes, args[0].child_by_field_name('arg')) != 'source_name':
        return TypeCheckFailure(f"first keyword argument in source must be source_name found {args[0].child_by_field_name('arg')}")
    if args[1].type == 'kwarg' and text_from_node(source_bytes, args[1].child_by_field_name('arg')) != 'table_name':
        return TypeCheckFailure(f"second keyword argument in source must be table_name found {args[1].child_by_field_name('arg')}")
    return TypeCheckPass()

def list_check(elems):
    for elem in elems:
        if elem.type == 'fn_call':
            return TypeCheckFailure(f"list elements cannot be function calls")
    return TypeCheckPass()

def kwarg_check(value):
    if elem.type == 'fn_call':
        return TypeCheckFailure(f"keyword arguments can not be function calls")
    return TypeCheckPass()

def dict_check(pairs):
    for pair in pairs:
        if pair.child_by_field_name('key') != 'lit_string':
            return TypeCheckFailure(f"all dict keys must be string literals")
        if pair.child_by_field_name('value').type == 'fn_call':
            return TypeCheckFailure(f"dict values cannot be function calls")
    return TypeCheckPass()

# hack
type_checkers = { 
    'fn_call': {
        'ref': ref_check,
        'config': config_check,
        'source': source_check
    },
    'list': list_check,
    'kwarg': kwarg_check,
    'dict': dict_check
}

# flatten([[1,2],[3,4]) = [1,2,3,4]
def flatten(list_of_lists):
    return [item for sublist in list_of_lists for item in sublist]

# Depends on the source because we check for built-ins. It's a bit of a hack,
# but it works well at this scale.
def type_check(source_bytes, node):
    # locally mutate results
    results = []
    # return ALL the results. don't just stop at the first error
    def _type_check(node):
        # special because it refers back to source
        if node.type == 'fn_call':
            results.append(fn_call_check(source_bytes, node))
        elif node.type == 'list':
            results.append(type_checkers['list'](node.children))
        elif node.type == 'kwarg':
            results.append(type_checkers['kwarg'](node.child_by_field_name('value')))
        elif node.type == 'dict':
            results.append(type_checkers['dict'](node.children))
        elif node.children:
            for child in node.children:
                _type_check(child)
        else:
            return

    # impure call: populates `results` with type check results
    _type_check(node)
    all_type_errors = list(filter(lambda x: isinstance(x, TypeCheckFailure), results))
    if len(all_type_errors) <= 0:
        # This ast would normally be a new typed ast, but we're not doing any of that yet.
        # Just know we can safely take the info out of the untyped ast is good enough for now.
        return node
    else:
        return all_type_errors
