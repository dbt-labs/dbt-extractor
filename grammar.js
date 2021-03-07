
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

function commaSep1(rule) {
  return sep1(rule, ',')
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}

module.exports = grammar({
  name: 'sql',

  rules: {

    select: $ => seq(
        'SELECT'.toCaseInsensitiv(),
        $.column_list,
        optional($.dataset_definition),
        optional($.limit_clause)
    ),

    dataset_definition: $ => seq(
        'FROM'.toCaseInsensitiv(),
        $.table_reference,
        repeat($.join_clause),
        optional($.where_clause),
        optional($.group_by_clause),
        optional($.having_clause),
        optional($.order_by_clause),
    ),

    group_by_clause: $ => seq(
        'GROUP'.toCaseInsensitiv(),
        'BY'.toCaseInsensitiv(),
        commaSep1(
            $.expression
        )
    ),

    having_clause: $ => seq(
        'HAVING'.toCaseInsensitiv(),
        field('having_expression', $.expression)
    ),

    order_by_clause: $ => seq(
        'ORDER'.toCaseInsensitiv(),
        'BY'.toCaseInsensitiv(),
        commaSep1(
            seq(
                $.expression,
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
        $.expression,
        repeat(
            seq(
                choice(
                    'AND'.toCaseInsensitiv(),
                    'OR'.toCaseInsensitiv(),
                ),
                $.expression,
            )
        )
    ),

    table_reference: $ => seq(
        $.identifier,
        optional(
            seq(
                'AS'.toCaseInsensitiv(),
                field('table_alias', $.identifier)
            )
        )
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
        field('join_condition', $.expression)
    ),

    join_clause_using: $ => seq(
        'USING'.toCaseInsensitiv(),
        '(',
        commaSep1(
            field('join_using_field', $.identifier)
        ),
        ')',
    ),

    join_target: $ => seq(
        $.table_reference,
    ),

    qualified_join: $ => seq(
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

    column_list: $ => commaSep1(
        seq(
            $.expression,
            optional(
                seq(
                    'AS'.toCaseInsensitiv(),
                    field('column_alias', $.identifier)
                )
            ),
        ),
    ),


    lit_string: $ => seq(
        "'",
        /[^']*/,
        "'",
    ),

    lit_null: $ => 'NULL'.toCaseInsensitiv(),
    lit_integer: $ => /[0-9]+/,
    lit_decimal: $ => /[0-9]*\.[0-9]+/,
    lit_boolean: $ => choice(
        'TRUE'.toCaseInsensitiv(),
        'FALSE'.toCaseInsensitiv()
    ),

    identifier: $ => token(/[a-zA-Z0-9_]+/),

    expression: $ => choice(
      $.parenthesized_expression,
      $.primary_expression,
      $.unary_expression,
      $.binary_expression,
    ),

    parenthesized_expression: $ => seq(
        '(',
        $.expression,
        ')'
    ),

    expression_list: $ => choice(
      seq(
        '(',
        commaSep1($.expression),
        ')'
      )
    ),

    // [110 - 117]
    binary_expression: $ => choice(

      // numeric
      prec.left(1, seq($.expression, '*', $.expression)),
      prec.left(1, seq($.expression, '/', $.expression)),
      prec.left(1, seq($.expression, '%', $.expression)),
      prec.left(2, seq($.expression, '+', $.expression)),
      prec.left(2, seq($.expression, '-', $.expression)),

      // relational
      prec.left(3, seq($.expression, '<=', $.expression)),
      prec.left(3, seq($.expression, '>=', $.expression)),
      prec.left(3, seq($.expression, '>', $.expression)),
      prec.left(3, seq($.expression, '<', $.expression)),
      prec.left(3, seq($.expression, '!=', $.expression)),
      prec.left(3, seq($.expression, '=', $.expression)),
      prec.left(3, seq($.expression, 'IN'.toCaseInsensitiv(), $.expression_list)),
      prec.left(3, seq($.expression, 'NOT'.toCaseInsensitiv(), 'IN'.toCaseInsensitiv(), $.expression_list)),

      prec.left(3, seq($.expression, 'IS'.toCaseInsensitiv(), 'NOT'.toCaseInsensitiv(), $.expression_list)),
      prec.left(3, seq($.expression, 'IS'.toCaseInsensitiv(), $.expression_list)),

      // conditional
      prec.left(4, seq($.expression, 'AND'.toCaseInsensitiv(), $.expression)),
      prec.left(4, seq($.expression, 'OR'.toCaseInsensitiv(), $.expression)),

    ),

    unary_expression: $ => choice(
      seq('NOT'.toCaseInsensitiv(), $.primary_expression),
      seq('+', $.primary_expression),
      seq('-', $.primary_expression),
    ),

    function_call: $ => seq(
        $.identifier,
        '(',
        optional(commaSep1($.expression)),
        ')'
    ),

    primary_expression: $ => choice(
        $.identifier,
        $.lit_string,
        $.lit_integer,
        $.lit_decimal,
        $.lit_boolean,
        $.function_call,
    ),

  }
});
