from tree_sitter import Language, Parser

Language.build_library(
  # Store the library in the `build` directory
  'build/sql.so',

  # Include one or more languages
  [
    './tree-sitter-sql',
  ]
)

EXAMPLES = [
    """
    select
        name,
        age * 2 as twiceage
    from some_table
    """,

    """
    select *,
        lower(name) as lower_name,
        row_number() over () as idx

    from some_table
    join other_table using (id)
    """
]

SQL_LANG = Language('build/sql.so', 'sql')

def text_at(text, node):
    if not node:
        return None

    return text[node.start_byte:node.end_byte]

def strip_quotes(text):
    if text:
        return text[1:-1]


parser = Parser()
parser.set_language(SQL_LANG)

for example in EXAMPLES:
    tree = parser.parse(bytes(example, "utf8"))

    query = SQL_LANG.query("""
    (column_alias
      alias: (quoted_identifier) @column.aliased)

    (select_expr
      (primary_expression
        (qualified_identifier) @column.identifier)
    )

    ((select_all) @column.all)

    (table_reference
      identifier: (qualified_identifier) @table.identifier)
    """)

    captures = query.captures(tree.root_node)

    outputs = set()
    tables = set()
    for cap in captures:
        if cap[1] == 'column.aliased':
            field = text_at(example, cap[0])
            outputs.add(field)
        elif cap[1] == 'column.identifier':
            field = text_at(example, cap[0])
            outputs.add(field)
        elif cap[1] == 'column.all':
            outputs.add('*')
        elif cap[1] == 'table.identifier':
            tbl = text_at(example, cap[0])
            tables.add(tbl)
    print("="*40)
    print(f"Query: {example}")
    print(f" - Inputs (tables): {tables}")
    print(f" - Outputs (columns): {outputs}")
