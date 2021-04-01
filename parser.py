
from tree_sitter import Language, Parser


Language.build_library(
  # Store the library in the `build` directory
  'build/sql.so',

  # Include one or more languages
  # TODO fix this hard coded path to be determined at runtime
  [
    '/Users/nate/git/dbt-parser-generator/tree-sitter-dbt-jinja',
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

def extract_refs(string, node, data):
    if node.type == 'dbt_jinja_ref':
        package_name = node.child_by_field_name('dbt_package_name')
        model_name = node.child_by_field_name('dbt_model_name')
        ref = (
            strip_quotes(text_at(string, package_name)),
            strip_quotes(text_at(string, model_name)),
        )

        data['refs'].add(ref)
    if node.type == 'dbt_jinja_source':
        source_name = node.child_by_field_name('dbt_source_name')
        table_name = node.child_by_field_name('dbt_source_table')
        source = (
            strip_quotes(text_at(string, source_name)),
            strip_quotes(text_at(string, table_name)),
        )

        data['sources'].add(source)
    if node.type == 'dbt_jinja_config':
        config_nodes = [child for child in node.children if child.type == 'kwarg_expression']
        for config in config_nodes:
            arg, _, value = config.children

            arg_val = text_at(string, arg)
            val_val = strip_quotes(text_at(string, value))
            data['configs'][arg_val] = val_val

    # if this limited tree-sitter implementaion can't parse it, python jinja will have to
    if node.type == 'ERROR':
        data['python_jinja'] += 1

    for child in node.children:
        extract_refs(string, child, data)

def get_parser():
    parser = Parser()
    parser.set_language(JINJA2_LANGUAGE)
    return parser

def parse_string(parser, string):
    tree = parser.parse(bytes(string, "utf8"))

    data = {
        'refs': set(),
        'sources': set(),
        'configs': dict(),
        'python_jinja': 0
    }
    extract_refs(string, tree.root_node, data)
    return data
