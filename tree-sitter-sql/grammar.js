
/*
 *  TODO : Need to figure out what's up with words / missing whitespace?
 *  TODOD: Need to figure out column and table identifier grammars
 *      I increasingly think these should be different, and the column
 *      grammar should support a '*' character... need to figure out if
 *      that's a postgres quirk or in the SQL spec
 *
 *      Ex: select count(table.* is null) from table -- valid
 */

/*
 * TODO:
 *  - handle qualified identifiers in a simpler way
 *  - have a wrapper around literals?
 *      (literal (bool (true)))
 *      (literal (integer))
 *      (literal (string))
 */

const PREC = {
  parenthesized_expression: 1,
  not: 1,
  compare: 2,
  or: 10,
  and: 11,
  //bitwise_or: 12,
  //bitwise_and: 13,
  plus: 16,
  times: 17,
  unary: 18,
  power: 19,
  equality: 20,

  cast: 25,
  // todo: do we need this?
  projection: 30,
}

/*
 * -- too slow, does not work!
 *
function _uncased(string) {
    var firstChar = string.charAt(0);
    if (string.length == 1) {
        return [ firstChar.toLowerCase(), firstChar.toUpperCase() ];
    }

    var accum = []
    _uncased(firstChar).forEach((prefix) => {
        var rest = _uncased(string.slice(1));
        rest.forEach((suffix) => {
            accum.push(prefix + suffix);
        })
    })
    return accum;
}

function uncased(string) {
    return choice(..._uncased(string).map(entry => {
        return alias(token(entry), entry);
    }));
}
*/

function simpleUncased(string) {
    var lower = string.toLowerCase();
    var upper = string.toUpperCase();
    return alias(choice(token(lower), token(upper)), string);
}

String.prototype.toCaseInsensitiv = function () {
  return simpleUncased(this);

  //return alias(
  //  token(new RegExp(
  //    this
  //      .split('')
  //      .map(letter => `[${letter}${letter.toLowerCase()}]`)
  //      .join('')
  //  )),
  //  this
  //)
}

function commaSep1(rule, name) {
  return sep1(rule, ',', name);
}

function sep1(rule, separator, name) {
  var sequence = seq(rule, repeat(seq(separator, rule)));
  if (name) {
      return field(name, sequence);
  } else {
      return sequence;
  }
}

module.exports = grammar({
  name: 'sql',

  word: $ => $.identifier,

  // todo: is this the right precedence?
  conflicts: $ => [
      [$.select_wrapper, $._single_select],
  ],

  rules: {

    select_statement: $ => seq(
        optional(
            seq(
                'WITH'.toCaseInsensitiv(),
                field('ctes', $.cte_clause_list)
            ),
        ),
        field('select', $.select_wrapper)
    ),

    cte_def: $ => seq(
        field('cte_name', $.quoted_identifier),
        'AS'.toCaseInsensitiv(),
        '(',
        field('select', $.select_wrapper),
        ')',
    ),

    cte_clause_list: $ => commaSep1($.cte_def),

    select_body: $ => seq(
        'SELECT'.toCaseInsensitiv(),
        field('column_list', $.column_list),
        optional(field('dataset_definition', $.dataset_definition)),

    ),

    _single_select: $ => choice(
      $.select_body,
      $.select_compound,
      seq(
          '(',
          $._single_select,
          ')',
      )
    ),

    select_wrapper: $ => seq(
        $._single_select,
        optional(field('order_by_clause', $.order_by_clause)),
        optional(field('limit_clause', $.limit_clause)),
    ),

    select_compound: $ => prec.left(seq(
        $._single_select,
        $.select_set_operator,
        $._single_select,
    )),

    select_set_operator: $ => (
        choice(
            seq(
                'UNION'.toCaseInsensitiv(),
                optional(
                    choice(
                        'ALL'.toCaseInsensitiv(),
                        'DISTINCT'.toCaseInsensitiv(),
                    )
                ),
            ),
            seq(
                'INTERSECT'.toCaseInsensitiv(),
                optional(
                    'DISTINCT'.toCaseInsensitiv(),
                ),
            ),
            seq(
                'EXCEPT'.toCaseInsensitiv(),
                optional(
                    'DISTINCT'.toCaseInsensitiv(),
                ),
            ),
        )
    ),

    dataset_definition: $ => seq(
        'FROM'.toCaseInsensitiv(),
        field('table_reference', $.table_reference),
        field('join_clause_list', repeat($.join_clause)),
        optional(field('where_clause', $.where_clause)),
        optional(field('group_by_clause', $.group_by_clause)),
        optional(field('having_clause', $.having_clause)),
    ),

    group_by_clause: $ => seq(
        'GROUP'.toCaseInsensitiv(),
        'BY'.toCaseInsensitiv(),
        commaSep1(
            $._expression
        )
    ),

    having_clause: $ => seq(
        'HAVING'.toCaseInsensitiv(),
        field('having_expression', $._expression)
    ),

    order_by_clause: $ => seq(
        'ORDER'.toCaseInsensitiv(),
        'BY'.toCaseInsensitiv(),
        commaSep1(
            seq(
                $._expression,
                optional(
                    choice(
                        'ASC'.toCaseInsensitiv(),
                        'DESC'.toCaseInsensitiv(),
                    )
                )
            )
        )
    ),

    where_clause: $ => seq(
        'WHERE'.toCaseInsensitiv(),
        $._expression,
    ),

    subquery: $ => seq(
        '(',
        $.select_statement,
        ')'
    ),

    table_alias: $ => seq(
        optional('AS'.toCaseInsensitiv()),
        field('alias', $.quoted_identifier)
    ),

    table_reference: $ => seq(
        choice(
            field('identifier', $.qualified_identifier),
            field('subquery', $.subquery),
        ),
        optional($.table_alias)
    ),

    cross_join: $ => seq(
        choice(
            seq(
                'CROSS'.toCaseInsensitiv(),
                'JOIN'.toCaseInsensitiv(),
            ),
            ',',
        ),
        $.join_target
    ),

    natural_join: $ => seq(
        'NATURAL'.toCaseInsensitiv(),
        optional(
            choice(
                seq(
                    choice(
                        'LEFT'.toCaseInsensitiv(),
                        'RIGHT'.toCaseInsensitiv(),
                    ),
                    optional('OUTER'.toCaseInsensitiv())
                ),
                'INNER'.toCaseInsensitiv()
            )
        ),
        'JOIN'.toCaseInsensitiv(),
        $.join_target
    ),

    join_clause_on: $ => seq(
        'ON'.toCaseInsensitiv(),
        field('join_condition', $._expression)
    ),

    join_clause_using: $ => seq(
        'USING'.toCaseInsensitiv(),
        '(',
        commaSep1(
            field('join_using_field', $.quoted_identifier)
        ),
        ')',
    ),

    // todo : this can be a subquery?
    join_target: $ => seq(
        $.table_reference,
    ),

    qualified_join: $ => seq(
        optional(
            choice(
                'INNER'.toCaseInsensitiv(),

                seq(
                    'LEFT'.toCaseInsensitiv(),
                    'OUTER'.toCaseInsensitiv(),
                ),
                'LEFT'.toCaseInsensitiv(),

                seq(
                    'RIGHT'.toCaseInsensitiv(),
                    'OUTER'.toCaseInsensitiv(),
                ),
                'RIGHT'.toCaseInsensitiv(),

                seq(
                    'FULL'.toCaseInsensitiv(),
                    'OUTER'.toCaseInsensitiv(),
                ),
                'OUTER'.toCaseInsensitiv(),
            ),
        ),
        'JOIN'.toCaseInsensitiv(),

        $.join_target,

        choice(
            $.join_clause_on,
            $.join_clause_using,
        )
    ),

    join_clause: $ => choice(
        $.qualified_join,
        $.cross_join,
        $.natural_join,
    ),

    limit_clause: $ => seq(
        'LIMIT'.toCaseInsensitiv(),
        $.lit_integer
    ),

    select_all: $ => seq(
        // todo: not right!
        optional(
            seq(
                $.quoted_identifier,
                '.'
            )
        ),
        optional(
            seq(
                $.quoted_identifier,
                '.'
            )
        ),
        '*'
    ),

    column_alias: $ => seq(
        optional('AS'.toCaseInsensitiv()),
        prec.right(
            PREC.projection,
            field('alias', $.quoted_identifier)
        )
    ),

    select_expr: $ => seq(
        $._expression,
        optional($.column_alias)
    ),

    column_list: $ => commaSep1(
        choice(
            $.select_all,
            $.select_expr,
       ),
    ),

    string_literal: $ => /[^']*/,

    lit_string: $ => seq(
        "'",
        field('literal', $.string_literal),
        "'",
    ),

    lit_null: $ => 'NULL'.toCaseInsensitiv(),
    lit_integer: $ => /[0-9]+/,
    lit_decimal: $ => /[0-9]*\.[0-9]+/,
    lit_boolean: $ => choice(
        'TRUE'.toCaseInsensitiv(),
        'FALSE'.toCaseInsensitiv()
    ),

    //identifier: $ => token(/[a-zA-Z0-9_]+/),
    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    // todo : prolly not right
    quoted_identifier: $ => choice(
        seq(
            '"',
            $.identifier,
            '"',
        ),
        $.identifier
    ),

    qualified_identifier: $ => seq(
        optional(
            seq(
                $.quoted_identifier,
                '.'
            )
        ),
        optional(
            seq(
                $.quoted_identifier,
                '.'
            )
        ),
        $.quoted_identifier
    ),

    // no idea at all if this is right...
    _expression: $ => choice(
      $.comparison_operator,
      $.not_operator,
      $.boolean_operator,
      $.primary_expression,
    ),

    comparison_operator: $ => prec(PREC.compare, seq(
      $.primary_expression,
      repeat1(seq(
        choice(
          '<',
          '<=',
          '=',
          '!=',
          '>=',
          '>',
          '<>',
          'IN'.toCaseInsensitiv(),
          seq(
              'NOT'.toCaseInsensitiv(),
              'IN'.toCaseInsensitiv()
          ),
          'IS'.toCaseInsensitiv(),
          seq(
              'IS'.toCaseInsensitiv(),
              'NOT'.toCaseInsensitiv(),
          ),
        ),
        $.primary_expression
      ))
    )),

    parenthesized_expression: $ => seq(
        '(',
        $._expression,
        ')'
    ),

    expression_list: $ => choice(
      seq(
        '(',
        commaSep1($._expression),
        ')'
      )
    ),

    boolean_operator: $ => choice(
      // todo: why can i not use toCaseInsensitiv here??
      // when I do use it, tree-sitter gets confused about precedence
      // and thinks that in `select true and false`, "and" is a column alias!
      prec.left(PREC.and, seq(
        field('left', $._expression),
        'AND'.toCaseInsensitiv(),
        field('right', $._expression)
      )),
      prec.left(PREC.or, seq(
        field('left', $._expression),
        'OR'.toCaseInsensitiv(),
        field('right', $._expression)
      ))
    ),

    not_operator: $ => prec(PREC.not, seq(
        'NOT'.toCaseInsensitiv(),
        field('argument', $._expression)
    )),

    unary_operator: $ => prec(PREC.unary, seq(
        choice('+', '-'),
        field('argument', $.primary_expression)
    )),

    // todo: not complete!
    type_name: $ => choice(
        'INT'.toCaseInsensitiv(),
        'STRING'.toCaseInsensitiv(),
        'TIMESTAMP'.toCaseInsensitiv(),
        'DATE'.toCaseInsensitiv(),
    ),

    // todo: precedence?
    // also, this is outside of binary_operator to make
    // it easier to override for derived databases
    inline_cast: $ => seq(
        $.primary_expression,
        '::',
        $.type_name
    ),

    explicit_cast: $ => seq(
        'CAST'.toCaseInsensitiv(),
        '(',
        $._expression,
        'AS'.toCaseInsensitiv(),
        $.type_name,
        ')',
    ),

    _cast_operator: $ => choice(
        $.inline_cast,
        $.explicit_cast,
    ),

    function_name: $ => alias($.identifier, 'function_name'),

    // todo: do we want this to be more stringent?
    // i don't think `*` can be a secondary arg
    function_args: $ => commaSep1(
        choice(
            $.select_all,
            $._expression
        )
    ),

    binary_operator: $ => {
      const table = [
        [prec.left, '+', PREC.plus],
        [prec.left, '-', PREC.plus],
        [prec.left, '*', PREC.times],
        [prec.left, '/', PREC.times],
        [prec.left, '%', PREC.times],
        [prec.left, '^', PREC.power],
      ];

      return choice(...table.map(([fn, operator, precedence]) => fn(precedence, seq(
        field('left', $.primary_expression),
        field('operator', operator),
        field('right', $.primary_expression)
      ))));

    },

    function_name: $ => alias($.identifier, 'function_name'),

    // todo: do we want this to be more stringent?
    // i don't think `*` can be a secondary arg
    function_args: $ => commaSep1(
        choice(
            $.select_all,
            $._expression
        )
    ),

    distinct: $=> alias('DISTINCT'.toCaseInsensitiv(), 'distinct'),

    // todo... special cases... like distinct?
    // also, count(*)
    // also, string agg weirdness... booo
    agg_function: $ => seq(
        field('function_name', $.function_name),
        '(',
        optional($.distinct),
        optional($.function_args),
        ')'
    ),

    window_function: $ => seq(
        $.function_name,
        '(',
        optional($.distinct),
        optional($.function_args),
        ')',
        // todo: why does toCaseInsensitiv not work?
        'OVER'.toCaseInsensitiv(),
        $.window_specification,
    ),

    window_unbounded_preceding: $ => seq(
        'UNBOUNDED'.toCaseInsensitiv(),
        'PRECEDING'.toCaseInsensitiv()
    ),

    window_unbounded_following: $ => seq(
        'UNBOUNDED'.toCaseInsensitiv(),
        'FOLLOWING'.toCaseInsensitiv()
    ),

    window_integer_offset: $ => seq(
        $.lit_integer,
        choice(
            'PRECEDING'.toCaseInsensitiv(),
            'FOLLOWING'.toCaseInsensitiv()
        )
    ),

    window_current_row: $ => seq(
        'CURRENT'.toCaseInsensitiv(),
        'ROW'.toCaseInsensitiv(),
    ),

    window_frame_start: $ => seq(
        choice(
            $.window_unbounded_preceding,
            $.window_integer_offset,
            $.window_current_row,
        )
    ),

    window_frame_end: $ => seq(
        choice(
            $.window_unbounded_following,
            $.window_integer_offset,
            $.window_current_row
        )
    ),

    window_partition_clause: $ => seq(
        'PARTITION'.toCaseInsensitiv(),
        'BY'.toCaseInsensitiv(),
        commaSep1($._expression),
    ),

    window_order_clause: $ => alias($.order_by_clause, 'window_order_clause'),

    window_specification: $ => seq(
        '(',
        field('window_partition_clause', optional($.window_partition_clause)),
        field('window_order_clause', optional($.window_order_clause)),
        // todo, not complete
        optional(
            seq(
                'ROWS'.toCaseInsensitiv(),
                'BETWEEN'.toCaseInsensitiv(),
                $.window_frame_start,
                'AND'.toCaseInsensitiv(),
                $.window_frame_end
            )
        ),
        ')',
    ),

    _function_call: $ => choice(
        $._cast_operator,
        $.agg_function,
        $.window_function,
    ),

    case_when_entry: $ => seq(
        'WHEN'.toCaseInsensitiv(),
        $._expression,
        'THEN'.toCaseInsensitiv(),
        $._expression,
    ),

    case_when_else: $ => seq(
        'ELSE'.toCaseInsensitiv(),
        $._expression
    ),

    case_when_then_value: $ => seq(
        // todo: WHYYYYYYYYY
        'CASE'.toCaseInsensitiv(),
        repeat1($.case_when_entry),
        optional($.case_when_else),
        'END'.toCaseInsensitiv()
    ),

    _case_when_wrapper: $ => choice(
        $.case_when_then_value
    ),

    primary_expression: $ => choice(
        $.lit_null,
        $.lit_string,
        $.lit_integer,
        $.lit_decimal,
        $.lit_boolean,

        $._function_call,
        $.unary_operator,
        $.binary_operator,
        $.qualified_identifier,

        $._case_when_wrapper,

        $.subquery,
        $.parenthesized_expression,
    ),

  }
});
