import compiler
import itertools
import json

# TODO make this not hard coded
data_path = '/Users/nate/data/customer-manifest-raw-sql/data.json'

def flatten(list_of_lists):
    return [item for sublist in list_of_lists for item in sublist]

def all_parse_errors(parser, string):
    import sys
    # python lacks recursion optimizations
    sys.setrecursionlimit(3000)

    # flattens the tree into an ordered array of nodes
    def walk_tree(tree):
        def _walk_tree(node):
            path.append(node)
            for child in node.children:
                _walk_tree(child)
        
        path = []
        _walk_tree(tree.root_node)
        return path

    def collect_block(node_list):
        if not node_list:
            return ("", [])

        # TODO one edge case is that `{{ foo {{ bar }} baz }}` will be caught as `{{ foo {{ bar }}` if we don't count parens
        i = 0
        node = node_list[i]
        # sometimes the error comes just before the open {{
        while node.type != '{{' and node.type != 'ERROR':
            i += 1
            if i < len(node_list):
                node = node_list[i]
            else:
                break

        block = []  
        while node.type != '}}':
            block.append(node)
            i += 1
            if i < len(node_list):
                node = node_list[i]
            else:
                break

        if node.type == '}}':
            block.append(node)
    
        rest = node_list[i+1:]

        return (block, rest)
        
    error_blocks = []
    source_bytes = bytes(string, "utf8")
    tree = parser.parse(source_bytes)
    if compiler.error_count(tree.root_node, 0) <= 0:
        return error_blocks
    else:
        all_nodes = walk_tree(tree)
        block, rest = collect_block(all_nodes)
        # if the block has a parse error in it, add it to the list of erroneous blocks
        if list(filter(lambda x: x.type == 'ERROR', block)):
            error_blocks.append(block)
        while rest:
            block, rest = collect_block(rest)
            if list(filter(lambda x: x.type == 'ERROR', block)):
                error_blocks.append(block)

    non_empty_blocks = filter(lambda x: x, error_blocks)
    pairs = map(lambda block: (block[0].start_byte, block[len(block) - 1].end_byte), non_empty_blocks)
    block_strings = list(map(lambda tuple: source_bytes[tuple[0]:tuple[1]].decode('utf8'), pairs))  
    return block_strings

def run_on(data_path, out_file):
    def apply_row(parser, row):
        return all_parse_errors(parser, row['raw_sql'])

    # read whole file in
    with open(data_path, 'r') as f:
        all_rows = json.loads(f.read())

    parser = compiler.get_parser()
    all_results = flatten(list(map(lambda row: apply_row(parser, row), all_rows)))

    f = open(out_file, 'w')
    for res in all_results:
        f.write(f"{res}\n")
    f.close()
