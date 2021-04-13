import src.compiler

parser = src.compiler.get_parser()

def assert_extracts_refs(in_out_list):
    def run(in_out):
        return src.compiler.parse_typecheck_extract(parser, in_out[0])['refs']

    # if any pair doesn't match, the list of tests fails
    for pair in in_out_list:
        got = run(pair)
        expected = set(pair[1])
        assert expected == got


def test_extracts_ref():
    assert_extracts_refs([
        ("{{ ref('my_table') }} {{ ref('other_table')}}", ['my_table', 'other_table'])
    ])