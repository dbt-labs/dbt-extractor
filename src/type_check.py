
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

# These type checking functions are naive and too concrete
# Error messages are to be read by dbt devs to determine where tree-sitter is failing.
# All failures will simply pass to python-jina, this will just prevent the successfully parsing
# incorrect dbt jinja.
# TODO make these more abstract so they can apply to future functions for free.

def ref_check(args):
    if len(args) < 1 or len(args) > 2:
        return TypeCheckFailure(f"expected ref to have 1 or 2 arguments. found {len(args)}")
    for arg in args:
        if arg.type == 'kwarg':
            return TypeCheckFailure(f"unexpected keyword argument in ref")
        if arg.type != 'lit_string':
            return TypeCheckFailure(f"unexpected argument type in ref")
    return TypeCheckPass()

def config_check(args):
    if len(args) < 1:
        return TypeCheckFailure(f"expected config to have at least one argument. found {len(args)}")
    for arg in args:
        if arg.type != 'kwarg':
            return TypeCheckFailure(f"unexpected non keyword argument in config")
    return TypeCheckPass()

def source_check(args):
    if len(args) != 2:
        return TypeCheckFailure(f"expected source to 2 arguments. found {len(args)}")
    for arg in args:
        if arg.type != 'kwarg' and arg.type != 'lit_string':
            return TypeCheckFailure(f"unexpected argument type in source")
        if arg[0].type == 'kwarg' and arg[0].child_by_field_name('arg') != 'source_name':
            return TypeCheckFailure(f"first keyword argument in source must be source_name found {arg[0].child_by_field_name('arg')}")
        if arg[1].type == 'kwarg' and arg[1].child_by_field_name('arg') != 'table_name':
            return TypeCheckFailure(f"second keyword argument in source must be table_name found {arg[0].child_by_field_name('arg')}")
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
        'sources': source_check
    },
    'list': list_check,
    'kwarg': kwarg_check,
    'dict': dict_check
}

def flatten(list_of_lists):
    return [item for sublist in list_of_lists for item in sublist]

def type_check(node):
    # locally mutate results
    results = []
    # return ALL the results. don't just stop at the first error
    def _type_check(results, node):
        if node.type == 'fn_call':
            name = node.child_by_field_name('fn_name')
            args = node.child_by_field_name('argument_list')
            if name not in type_checkers['fn_call'].keys():
                return [TypeCheckFailure(f"only ref, source, and config function calls allowed")]
            res = type_checkers['fn_call'][name](args)
            results = results + [res]
        elif node.type == 'list':
            type_checkers['list'](node.children)
        elif node.type == 'kwarg':
            type_checkers['kwarg'](node.child_by_field_name('value'))
        elif node.type == 'dict':
            type_checkers['dict'](node.children)
        else:
            for child in node.children:
                _type_check(results, child)

    all_type_errors = list(filter(lambda x: isinstance(x, TypeCheckFailure), _type_check([], node)))
    if len(all_type_errors) <= 0:
        # This ast would normally be a new typed ast, but we're not doing any of that yet.
        # Just know we can safely take the info out of the untyped ast is good enough for now.
        return node
    else:
        return all_type_errors
