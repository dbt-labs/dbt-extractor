import argparse
import dbt_jinja.compiler as compiler
import parse_results
import sys


# overrides error behavior for arg parser
class MyParser(argparse.ArgumentParser):
    def error(self, message):
        sys.stderr.write('error: %s\n' % message)
        self.print_help()
        print()
        sys.exit(2)

def build_parser():
    parser = MyParser(description='Applies parser to sample data')
    subparsers = parser.add_subparsers(
        dest='command',
        help="available subcommands:"
    )

    results_parser = subparsers.add_parser(
        'results',
        help='[subcommand] Summary statistics on sample data'
    )
    results_parser.add_argument(
        'data_file',
        type=str,
        help="JSON data file. Must contain exactly one valid JSON array."
    )

    return parser

def main():
    parser = build_parser()
    args = parser.parse_args()

    if args.command == 'results':
        print("Collecting parser results")
        parse_results.run_on(args.data_file)
    # parse_args() will print help if an unrecognized command is used.


if __name__ == "__main__":
    main()
