import itertools
import parser as parse_lib
from pprint import pprint


def group_by_project(all_processed_rows):
    # local mutation only
    grouped = {}

    # files with the same run_id are assumed to be in the same project 
    # for this dataset since only one run was collected per account
    key_func = lambda x: x['run_id']
    
    for key, group in itertools.groupby(all_processed_rows, key_func):
        grouped[key] = list(group)
    
    return grouped

# [dict] -> dict
def get_project_results(grouped_results):
    # local mutation for all projects
    project_stats = {}


    for run_id, model_results in grouped_results.items():
        # scoped local mutation for a single project
        stats = {
            'project_models': 0,
            'models_parsed': 0,
            'models_unparsed': 0,
            'parsing_errors': 0,
            'parsing_mistakes': 0,
            'percent_parsable': 0,
        }

        for res in model_results:
            stats['project_models'] += 1
            # if there are no instances where we need python_jinja,
            # we successfully parsed the model. Otherwise, we didn't.
            if res['python_jinja'] <= 0 and stats['parsing_mistakes'] <= 0: 
                stats['models_parsed'] += 1
            else:
                stats['models_unparsed'] += 1

            stats['parsing_mistakes'] += res['parsing_mistakes']

        stats['percent_parsable'] = 100 * (stats['models_parsed'] / stats['project_models'])
        project_stats[run_id] = stats

    return project_stats

# parser -> row_fields -> dict
def process_row(parser, run_id, raw_sql, configs, refs, sources):
    res = parse_lib.parse_string(parser, raw_sql)
    unparsed_configs = set(configs.items()) - set(res['configs'].items())
    unparsed_refs    = set(refs.items())    - res['refs']
    unparsed_sources = set(sources.items()) - res['sources']
    unparsed_total = len(unparsed_configs) + len(unparsed_refs) + len(unparsed_sources)
    all_configs_refs_sources_count = len(configs) + len(refs) + len(sources)
    # the python_jinja count is how many we expect to be wrong, any more than that is a problem.
    error_count = unparsed_total - res['python_jinja']
    return {
        'run_id': run_id,
        'python_jinja': res['python_jinja'],
        'all_configs_refs_sources_count': all_configs_refs_sources_count,
        'parsing_mistakes': error_count
    }


# to run on all projects in a directory, use this line of bash:
# `for d in ./*/ ; do (cd "$d" && python3 /Users/nate/git/dbt-parser-generator/main.py "."); done`
# runs in serial since bash doesn't easily allow parallel access to stdout.
# uses absolute paths because they are running in arbitrary system directories
def main():
    def apply_row(parser, row):
        return process_row(parser, row['run_id'], row['raw_sql'], row['configs'], row['refs'], row['sources'])
    
    # TODO actually get these as input somehow
    # using dummy data for debugging fns
    all_rows = [
        {'run_id': 123, 'raw_sql':"", 'configs': {}, 'refs': {}, 'sources': {}}
    ]
    
    parser = parse_lib.get_parser()
    all_results = list(map(lambda row: apply_row(parser, row), all_rows))
    grouped_results = group_by_project(all_results)
    all_project_results = get_project_results(grouped_results)
    
    for run_id, stats in all_project_results.items():
        print()
        print(f"run_id = {run_id}:")
        pprint(stats)
        print()


if __name__ == "__main__":
    main()