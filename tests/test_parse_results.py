import src.parse_results as parse_results

base_result = {
    'model_count': 0,
    'models_parsed': 0,
    'models_with_misses': 0,
    'models_with_false_positives': 0,
    'percentage_models_false_positives': 0,
    'percentage_models_parseable': 0,
    'project_count': 0,
    'projects_parsed': 0,
    'projects_with_misses': 0,
    'projects_with_false_positives': 0,
    'percentage_projects_false_positives': 0,
    'percentage_projects_parseable': 0,
    'projects_completely_unparsed': 0,
    'percentage_projects_completely_unparsed': 0 
}

def test_field_calculation():
    data = [{
        'manifest_file_name': 'test_1',
        'raw_sql': " {{ ref('my_table') }} ",
        'config': {},
        'refs': [['my_table']],
        'sources': [],
        'unique_id': 'test'
    },
    {
        'manifest_file_name': 'test_2',
        'raw_sql': " {{ ref('my_table') }} ",
        'config': {},
        'refs': [['my_table']],
        'sources': [],
        'unique_id': 'test'
    },
    {
        'manifest_file_name': 'test_2',
        'raw_sql': " {% macro() %} ",
        'config': {},
        'refs': [['my_table']],
        'sources': [],
        'unique_id': 'test'
    },
    {
        'manifest_file_name': 'test_3',
        'raw_sql': " {% macro() %} ",
        'config': {},
        'refs': [],
        'sources': [],
        'unique_id': 'test'
    }
    ]

    res = parse_results._run_on(data)
    assert res['model_count'] == 4
    assert res['models_parsed'] == 2
    assert res['models_with_misses'] == 0
    assert res['models_with_false_positives'] == 0
    assert res['percentage_models_false_positives'] == 0
    assert res['percentage_models_parseable'] == 50
    assert res['project_count'] == 3
    assert res['projects_parsed'] == 1
    assert res['projects_with_misses'] == 0
    assert res['projects_with_false_positives'] == 0
    assert res['percentage_projects_false_positives'] == 0
    assert res['percentage_projects_parseable'] == 100 * 1/3
    assert res['projects_completely_unparsed'] == 1
    assert res['percentage_projects_completely_unparsed'] == 100 * 1/3

def test_merge_on_list_keys():
    x = {'list': [1,2,3]}
    y = {'list': [4,5,6]}
    z = {'list': [1,2,3,4,5,6]}
    assert z == parse_results.merge(x, y)

def test_merge_on_dict_keys():
    x = {'dict': {'inner': 5}}
    y = {'dict': {'inner': 10}}
    assert y == parse_results.merge(x, x)