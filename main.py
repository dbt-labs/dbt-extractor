
import glob
import os
import parser as parse_lib
import pprint
import sys
import time


# path -> str
def get_file_contents(path):
    f = open(path, "r")
    contents = f.read()
    f.close()
    return contents

# parser -> str -> dict
def get_file_results(parser, path):
    contents = get_file_contents(path)
    return parse_lib.parse_string(parser, contents) # <- actual parsing

# [dict] -> dict
def get_project_results(all_results):
    # TODO if you want the unparsed filename paths, add them to the returned dict from `all_results` here
    parsed = list(filter(lambda res: res['python_jinja'] <= 0, all_results))
    unparsed_count = len(all_results) - len(parsed)
    return {
        "project_files": len(all_results),
        "percent_parsable": 100 * (len(parsed) / len(all_results)),
        "files_parsed": len(parsed),
        "files_unparsed": unparsed_count,
        # "raw_data": all_results # <- uncomment to see the refs, configs, and sources as they are parsed
    }

# to run on all projects in a directory, use this line of bash:
# `for d in ./*/ ; do (cd "$d" && python3 /Users/nate/git/dbt-parser-generator/main.py "."); done`
# runs in serial since bash doesn't easily allow parallel access to stdout.
# uses absolute paths because they are running in arbitrary system directories
def main():
    dir = os.path.abspath(sys.argv[1])
    rel_paths = glob.glob(f"{dir}/*.txt") # <- TODO fetch actual dbt model paths
    if not rel_paths:
        print(f"\n{dir}\n-- no parsable files found --")
    else:
        abs_paths = list(map(os.path.abspath, rel_paths))
        parser = parse_lib.get_parser()
        all_results = list(map(lambda path: get_file_results(parser, path), abs_paths))
        res = get_project_results(all_results)
        pres = pprint.pformat(res, indent=2)
        
        # print results all at once to avoid interleaving print statements from os threads
        print(f"\n{dir}\n{pres}")


if __name__ == "__main__":
    main()