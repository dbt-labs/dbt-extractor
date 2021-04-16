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

def test_something():
    data = [{
        'manifest_file_name': 'test_1',
        'raw_sql': " {{ ref('my_table') }} ",
        'config': {},
        'refs': [['my_table']],
        'sources': [],
        'unique_id': 'test'
    }]

    res = parse_results._run_on(data)
    assert res['model_count'] == 1
    assert res['models_parsed'] == 1
    assert res['models_with_misses'] == 0
    assert res['models_with_false_positives'] == 0
    assert res['percentage_models_false_positives'] == 0
    assert res['percentage_models_parseable'] == 100
    assert res['project_count'] == 1
    assert res['projects_parsed'] == 1
    assert res['projects_with_misses'] == 0
    assert res['projects_with_false_positives'] == 0
    assert res['percentage_projects_false_positives'] == 0
    assert res['percentage_projects_parseable'] == 100
    assert res['projects_completely_unparsed'] == 0
    assert res['percentage_projects_completely_unparsed'] == 0
