import argparse
import compiler
import parse_results
import parser_misses
import sys


# overrides error behavior for arg parser
class MyParser(argparse.ArgumentParser):
    def error(self, message):
        sys.stderr.write('error: %s\n' % message)
        self.print_help()
        print()
        sys.exit(2)

def parse_args():
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

    misses_parser = subparsers.add_parser(
        'misses',
        help='[subcommand] Outputs jinja calls that could not be parsed'
    )
    misses_parser.add_argument(
        'data_file',
        type=str,
        help="JSON data file. Must contain exactly one valid JSON array."
    )
    misses_parser.add_argument(
        'out_file',
        type=str,
        help="Output destination"
    )

    return parser.parse_args()

def main():
    args = parse_args()

    if args.command == 'results':
        print("Collecting parser results")
        parse_results.run_on(args.data_file)
    elif args.command == 'misses':
        print("Collecting parser misses")
        parser_misses.run_on(args.data_file, args.out_file)


if __name__ == "__main__":
    main()
