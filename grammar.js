
/*
 *  TODO : Need to figure out what's up with words / missing whitespace?
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

  projection: 30,
}

String.prototype.toCaseInsensitiv = function () {
  return alias(
    token(new RegExp(
      this
        .split('')
        .map(letter => `[${letter}${letter.toLowerCase()}]`)
        .join('')
    )),
    this
  )
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

  rules: {

    select_statement: $ => seq(
        // todo: i don't love combining these two grammars....
        // how can this work... differently?
        optional(
            field('model_config', $.dbt_jinja_config)
        ),
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

    select_wrapper: $ => seq(
        $.select_body,
        repeat(
            seq(
                $.select_set_operator,
                $.select_body
            )
        ),
        optional(field('order_by_clause', $.order_by_clause)),
        optional(field('limit_clause', $.limit_clause)),
    ),

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

    dbt_jinja_ref: $ => seq(
        '{{',
        'ref',
        '(',
        optional(
            seq(
                field('dbt_package_name', $.lit_string),
                ','
            ),
        ),
        field('dbt_model_name', $.lit_string),
        ')',
        '}}'
    ),

    dbt_jinja_source: $ => seq(
        '{{',
        'source',
        '(',
        field('dbt_source_name', $.lit_string),
        ',',
        field('dbt_source_table', $.lit_string),
        ')',
        '}}'
    ),

    // todo: this should be an actual python expression parser
    jinja_kwargs_expression: $ => seq(
        commaSep1(
            seq(
                field('key', $.identifier),
                '=',
                field('value', choice(
                    // todo: no bueno
                    $.lit_string,
                    $.lit_boolean,
                )),
            ),
        ),
        optional(',')
    ),

    // todo : this should be an actual python dict parser?
    jinja_dict_expression: $ => seq(
        '{',
            commaSep1(
                seq(
                    field('key', $.lit_string),
                    ':',
                    field('value', choice(
                        // todo: no bueno
                        $.lit_string,
                        $.lit_boolean,
                    )),
                ),
            ),
        '}'
    ),

    dbt_jinja_config: $ => seq(
        '{{',
        'config',
        '(',
        choice(
            field('config_kwargs', $.jinja_kwargs_expression),
            field('config_dict', $.jinja_dict_expression),
        ),
        ')',
        '}}'
    ),

    table_alias: $ => seq(
        optional('AS'.toCaseInsensitiv()),
        field('alias', $.quoted_identifier)
    ),

    table_reference: $ => seq(
        choice(
            field('identifier', $.qualified_identifier),
            field('ref', $.dbt_jinja_ref),
            field('source', $.dbt_jinja_source),
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

    //todo
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
        $.cross_join,
        $.qualified_join,
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
          seq('NOT'.toCaseInsensitiv(), 'IN'.toCaseInsensitiv()),
          'IS'.toCaseInsensitiv(),
          seq('IS'.toCaseInsensitiv(), 'NOT'.toCaseInsensitiv())
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
        choice(
            'AND',
            'and'
        ),
        field('right', $._expression)
      )),
      prec.left(PREC.or, seq(
        field('left', $._expression),
        choice(
            'OR',
            'or'
        ),
        field('right', $._expression)
      ))
    ),

    unary_operator: $ => prec(PREC.unary, seq(
        choice('+', '-', 'NOT'.toCaseInsensitiv()),
        field('argument', $.primary_expression)
    )),

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

    // todo... special cases... like distinct?
    // also, count(*)
    // also, string agg weirdness... booo
    agg_function: $ => seq(
        $.identifier,
        '(',
        optional(commaSep1($._expression)),
        ')'
    ),

    window_frame_start: $ => seq(
        choice(
            seq(
                'UNBOUNDED'.toCaseInsensitiv(),
                'PRECEDING'.toCaseInsensitiv(),
            ),
            seq(
                $.lit_integer,
                choice(
                    'PRECEDING'.toCaseInsensitiv(),
                    'FOLLOWING'.toCaseInsensitiv(),
                )
            ),
            seq(
                'CURRENT'.toCaseInsensitiv(),
                'ROW'.toCaseInsensitiv(),
            ),
        )
    ),

    window_frame_end: $ => seq(
        choice(
            seq(
                'UNBOUNDED'.toCaseInsensitiv(),
                'FOLLOWING'.toCaseInsensitiv(),
            ),
            seq(
                $.lit_integer,
                choice(
                    'PRECEDING'.toCaseInsensitiv(),
                    'FOLLOWING'.toCaseInsensitiv(),
                )
            ),
            seq(
                'CURRENT'.toCaseInsensitiv(),
                'ROW'.toCaseInsensitiv(),
            ),
        )
    ),

    window_specification: $ => seq(
        '(',
        optional(
            seq(
                'PARTITION'.toCaseInsensitiv(),
                'BY'.toCaseInsensitiv(),
                commaSep1($._expression),
            )
        ),
        optional(
            seq(
                'ORDER'.toCaseInsensitiv(),
                'BY'.toCaseInsensitiv(),
                commaSep1($._expression),
            )
        ),
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

    window_function: $ => seq(
        $.identifier,
        '(',
        optional(commaSep1($._expression)),
        ')',
        'OVER'.toCaseInsensitiv(),
        $.window_specification,
    ),

    function_call: $ => choice(
        $.agg_function,
        $.window_function,
    ),

    primary_expression: $ => choice(
        $.lit_null,
        $.lit_string,
        $.lit_integer,
        $.lit_decimal,
        $.lit_boolean,

        $.function_call,
        $.unary_operator,
        $.binary_operator,
        $.qualified_identifier,
        $.parenthesized_expression,

    ),

  }
});
