from functools import reduce
import itertools
import json
import compiler
from pprint import pprint


# like set difference `-` but using eq not hash so it can be used on mutable types
# a = [1,2,2,3]
# b = [2,3,4]
# print(difference(a, b)) # [1, 2]
# print(difference(b, a)) # [4]
def difference(list_a, list_b):
    list_b_copy = list(list_b)
    diff = []
    for a in list_a:
        if a in list_b_copy:
            list_b_copy.remove(a)
        else:
            diff.append(a)
    return diff

# requires the entire processed dataset to be in memory
def group_by_project(all_processed_rows):
    # local mutation only
    grouped = {}

    # files with the same project_id are assumed to be in the same project 
    # for this dataset since only one run was collected per account
    key_func = lambda x: x['project_id']
    
    for key, group in itertools.groupby(all_processed_rows, key_func):
        grouped[key] = list(group)
    
    return grouped

# [dict] -> dict
def get_project_results(grouped_results):
    # local mutation for all projects
    project_stats = {}

    for project_id, model_results in grouped_results.items():
        # scoped local mutation for a single project
        stats = {
            'project_models': 0,
            'models_parsed': 0,
            'models_unparsed': 0,
            'parsing_false_positives': 0,
            'parsing_misses': 0,
            'percent_parsable': 0,
        }

        for res in model_results:
            stats['project_models'] += 1
            if res['parsed']: 
                stats['models_parsed'] += 1
            else:
                stats['models_unparsed'] += 1

            stats['parsing_false_positives'] += res['parsing_false_positives']
            if res['parsing_misses'] > 0:
                stats['parsing_misses'] += 1

        if stats['project_models'] <= 0:
            stats['percent_parsable'] = 100.0
        else:
            stats['percent_parsable'] = 100 * (stats['models_parsed'] / stats['project_models'])
        project_stats[project_id] = stats

    return project_stats

# parser -> row_fields -> dict
def process_row(parser, project_id, raw_sql, configs, refs, sources, model_id):
    res = compiler.parse_typecheck_extract(parser, raw_sql)

    # if it can't be parsed or type checked, we can't extract anything.
    if res['python_jinja']:
        return {
            'project_id': project_id,
            'parsed': False,
            'python_jinja': res['python_jinja'],
            'all_configs_refs_sources_count': 0,
            'parsing_false_positives': 0,
            'parsing_misses': 0
        }

    # if the model file doesn't have a call to config() it defaults to the project.yaml
    # We set them equal to bypass correcteness checks here. 
    if not res['configs']:
        res['configs'] = configs

    # if you define a config value twice, it doesn't matter.
    # not using the set() trick here because there's unhashable types involved (like lists)
    unique_kwargs = []
    for kwarg in res['configs']:
        if kwarg not in unique_kwargs:
            unique_kwargs.append(kwarg)
    res['configs'] = unique_kwargs

    # the set of real parsed values minus the set we found is the set of unparsed values
    # we don't check unparsed configs because they can come from other sources.
    unparsed_refs    = difference(refs, res['refs'])
    unparsed_sources = difference(sources, res['sources'])
    unparsed_total = len(unparsed_refs) + len(unparsed_sources)
    all_configs_refs_sources_count = len(configs) + len(refs) + len(sources)
    
    # tag equality is special because they are additive in a file
    # e.g. {{ config(tag='x') }} could result in ('tags', ['a', 'b', 'x']) where a and b came from a project yaml.
    parsed_tags = []
    for kwarg in res['configs']:
        if kwarg[0] == 'tags':
            parsed_tags = kwarg[1]

    if parsed_tags:
        real_tags = []
        for kwarg in configs:
            if kwarg[0] == 'tags':
                real_tags = kwarg[1]

        # sometimes tags come in as {{ config(tags=['x']) }}
        # and sometimes tags come in as {{ config(tags='x') }}
        # it dbt will handle this down the line so we'll make them all lists for the checks.
        if not isinstance(parsed_tags, list):
            parsed_tags = [parsed_tags]
        # replace configs with a deduplicated and sorted set of tags since it won't matter in dbt.
        processed_parsed_tags = list(set(parsed_tags))
        processed_parsed_tags.sort()
        res['configs'] = [('tags', processed_parsed_tags)] + list(filter(lambda kwarg: kwarg[0] != 'tags', res['configs']))
        # conversion to set removes duplicates (tags defined in project.yaml AND model config) sorting makes comparison easier
        processed_real_tags = list(set(filter(lambda tag: tag in parsed_tags, real_tags)))
        processed_real_tags.sort()
        # these misses are presumed to be from the project.yaml config.
        misses_removed = list(filter(lambda x: x in res['configs'], configs))
        # add back the tags so we can accurately compare the tags. 
        old_configs = configs
        configs = [('tags', processed_real_tags)] + list(filter(lambda kwarg: kwarg[0] != 'tags', misses_removed))

    # sometimes people define {{ config(tags=[]) }}
    # somtimes dbt has tags=[] (likely when defined in the project yaml)
    # and sometimes it has no tags config. (likely when not defined in the project yaml) 
    empty_tag = False
    for kwarg in res['configs']:
        if kwarg[0] == 'tags':
            if kwarg[1] == []:
                empty_tag = True
    
    no_tags_in_manifest = True
    for kwarg in configs:
        if kwarg[0] == 'tags':
            no_tags_in_manifest = False
        
    if empty_tag and no_tags_in_manifest:
        res['configs'] = list(filter(lambda kwarg: kwarg[0] != 'tags', res['configs']))

    # the set of tree-sitter parsed values minus the set of real parsed values should be empty if we made no mistakes
    misparsed_configs = difference(res['configs'], configs)
    misparsed_refs    = difference(res['refs'], refs)
    misparsed_sources = difference(res['sources'], sources)
    misparsed_total = len(misparsed_configs) + len(misparsed_refs) + len(misparsed_sources)

    # if there are no instances where we need python_jinja, and we didn't 
    # make any mistakes and we didn't miss any we successfully parsed the model.
    parsed = misparsed_total <= 0 and unparsed_total <= 0
    return {
        'project_id': project_id,
        'parsed': parsed,
        'python_jinja': res['python_jinja'],
        'all_configs_refs_sources_count': all_configs_refs_sources_count,
        'parsing_false_positives': misparsed_total,
        'parsing_misses': unparsed_total
    }

def _run_on(json_list):
    def apply_row(parser, row):
        # defaults for runs that don't include these fields
        row_config  = {}
        row_refs    = []
        row_sources = set()

        try:
            row_config = row['config']
        except:
            pass

        try:
            row_refs = row['refs']
        except:
            pass

        try:
            row_sources = row['sources']
        except:
            pass

        base_config = {
            'alias': None,
            'column_types': {},
            'copy_grants': True,
            'database': None,
            'enabled': True,
            'full_refresh': None,
            'persist_docs': {},
            'post-hook': [],
            'pre-hook': [],
            'quoting': {},
            'schema': None,
            'tags': [],
            'vars': {}
        }

        # remove default values for configs
        row_config = list(filter(lambda kv: kv not in base_config.items(), row_config.items()))

        # reshape sources from lists of length 2 to tuples.
        row_sources = set(map(lambda list: (list[0], list[1]), row_sources))

        return process_row(parser, row['manifest_file_name'], row['raw_sql'], row_config, row_refs, row_sources, row['unique_id'])

    def is_bad_example(manifest_file_name):
        # segment is a package and its configs can be overridden in a way that look like a false positive but aren't
        # juni has a macro that overrides ref behavior to double everything
        prefixes_to_reject = ['model.segment', 'model.juni_dbt']
        return reduce(lambda a,b: a or b, map(lambda prefix: manifest_file_name.startswith(prefix), prefixes_to_reject))

    # rename
    all_rows = json_list
    # filter out all the data we know isn't a good fit
    all_rows = list(filter(lambda row: not is_bad_example(row['unique_id']) , all_rows))

    parser = compiler.get_parser()
    all_results = list(map(lambda row: apply_row(parser, row), all_rows))
    grouped_results = group_by_project(all_results)
    all_project_results = get_project_results(grouped_results)

    all_project_stats = {
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

    for project_id, stats in all_project_results.items():
        all_project_stats['model_count'] += stats['project_models']
        all_project_stats['models_parsed'] += stats['models_parsed']
        if stats['models_parsed'] == 0:
            all_project_stats['projects_completely_unparsed'] += 1
        all_project_stats['models_with_false_positives'] += stats['parsing_false_positives']
        all_project_stats['models_with_misses'] += stats['parsing_misses']
        if stats['models_parsed'] == stats['project_models']:
            all_project_stats['projects_parsed'] += 1
        if stats['parsing_false_positives'] > 0:
            all_project_stats['projects_with_false_positives'] += 1
        if stats['parsing_misses'] > 0:
            all_project_stats['projects_with_misses'] += 1

    all_project_stats['project_count'] = len(all_project_results.keys())
    if all_project_stats['model_count'] == 0:
        all_project_stats['percentage_models_parseable'] = 100.0
        all_project_stats['percentage_models_false_positives'] = 0.0
    else:
        all_project_stats['percentage_models_parseable'] = 100 * all_project_stats['models_parsed'] / all_project_stats['model_count']
        all_project_stats['percentage_models_false_positives'] = 100 * all_project_stats['models_with_false_positives'] / all_project_stats['model_count']

    if all_project_stats['project_count'] == 0:
        all_project_stats['percentage_projects_parseable'] = 100.0
        all_project_stats['percentage_projects_false_positives'] = 0.0
        all_project_stats['percentage_projects_completely_unparsed'] = 0.0
    else:
        all_project_stats['percentage_projects_parseable'] = 100 * all_project_stats['projects_parsed'] / all_project_stats['project_count']
        all_project_stats['percentage_projects_false_positives'] = 100 * all_project_stats['projects_with_false_positives'] / all_project_stats['project_count']
        all_project_stats['percentage_projects_completely_unparsed'] = 100 * all_project_stats['projects_completely_unparsed'] / all_project_stats['project_count']

    return all_project_stats

# runner entry point 
def run_on(data_path):
    # read whole file in
    with open(data_path, 'r') as f:
        json_list = json.loads(f.read())

    stats = _run_on(json_list)

    # determines print formatting
    formatting = [
        ('model_count','...............................', '{:.0f}', '',  False),
        ('models_parsed','.............................', '{:.0f}', '',  False),
        ('models_with_misses','........................', '{:.0f}', '',  False),
        ('models_with_false_positives','...............', '{:.0f}', '',  False),
        ('percentage_models_false_positives','.........', '{:.2f}', '%', False),
        ('percentage_models_parseable','...............', '{:.2f}', '%', True),

        ('project_count','.............................', '{:.0f}', '',  False),
        ('projects_parsed','...........................', '{:.0f}', '',  False),
        ('projects_with_misses','......................', '{:.0f}', '',  False),
        ('projects_with_false_positives','.............', '{:.0f}', '',  False),
        ('percentage_projects_false_positives','.......', '{:.2f}', '%', False),
        ('percentage_projects_parseable','.............', '{:.2f}', '%', True),

        ('projects_completely_unparsed','..............', '{:.0f}', '',  False),
        ('percentage_projects_completely_unparsed','...', '{:.2f}', '%', False)
    ]

    for field, spacer, formatt, unit, linebreak in formatting:
        value = formatt.format(stats[field])
        print(f"{field}{spacer}{value} {unit}")
        if linebreak:
            print()
    print()