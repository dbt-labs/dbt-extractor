
from tree_sitter import Language, Parser


Language.build_library(
  # Store the library in the `build` directory
  'build/sql.so',

  # Include one or more languages
  [
    './tree-sitter-dbt-jinja',
  ]
)

JINJA2_LANGUAGE = Language('build/sql.so', 'dbt_jinja')

refs = set()
sources = set()
configs = dict()

def text_at(text, node):
    if not node:
        return None

    return text[node.start_byte:node.end_byte]

def strip_quotes(text):
    if text:
        return text[1:-1]

# expects node to have NO ERRORS in any of its subtrees
def extract_refs(string, node, data):
    if node.type == 'dbt_jinja_ref':
        package_name = node.child_by_field_name('dbt_package_name')
        model_name = node.child_by_field_name('dbt_model_name') 
        fmodel_name = strip_quotes(text_at(string, model_name))
        if not package_name:
            ref = fmodel_name
        else:
            ref = (
                strip_quotes(text_at(string, package_name)),
                fmodel_name
            )
        data['refs'].add(ref)

    elif node.type == 'dbt_jinja_source':
        source_name = node.child_by_field_name('dbt_source_name')
        table_name = node.child_by_field_name('dbt_source_table')
        source = (
            strip_quotes(text_at(string, source_name)),
            strip_quotes(text_at(string, table_name))
        )
        data['sources'].add(source)

    elif node.type == 'dbt_jinja_config':
        config_nodes = [child for child in node.children if child.type == 'kwarg_expression']
        for config in config_nodes:
            try:
                arg, _, value = config.children
            except Exception as e:
                raise e

            arg_val = text_at(string, arg)
            val_val = strip_quotes(text_at(string, value))
            data['configs'][arg_val] = val_val

    for child in node.children:
        extract_refs(string, child, data)

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

def parse_string(parser, string):
    tree = parser.parse(bytes(string, "utf8"))
    count = error_count(tree.root_node, 0)
    # error_query = JINJA2_LANGUAGE.query('ERROR')
    # errors = error_query.captures(tree.root_node)
    data = {
        'refs': set(),
        'sources': set(),
        'configs': dict(),
        'python_jinja': 0
    }
    # if this limited tree-sitter implementaion can't parse it, python jinja will have to
    if count <= 0:
        data2 = dict(data)
        extract_refs(string, tree.root_node, data2)
        return data2
    else:
        data2 = dict(data)
        # error count isn't a perfect count of unsupported instances
        # but it'll be pretty close
        data2['python_jinja'] = count
        return data2

    
    
