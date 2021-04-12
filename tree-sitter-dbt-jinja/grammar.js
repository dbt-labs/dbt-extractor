
function commaSep1(rule) {
    return sep1(rule, ',');
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}


module.exports = grammar ({
  name: 'dbt_jinja',

  rules: {
    source_file: $ => repeat(
        choice(
            $._jinja_block,
            $._text
        )
    ),

    _jinja_block: $ => seq(
        '{{',
        $._expr,
        '}}'
    ),

    // This defines all the meat of the parser
    _expr: $ => choice(
        $.fn_call,
        $.lit_string,
        $.list,
        $.dict
    ),

    fn_call: $ => seq(
        // Only built-in keyword function calls parse.
        field('fn_name', $._keyword),
        field('argument_list', $.argument_list)
    ),

    argument_list: $ => seq(
        '(',
        optional(commaSep1(
            choice(
                $._expr,
                $.kwarg
            )
        )),
        ')'
    ),

    lit_string: $ => seq(
        choice(
            seq(
                "'",
                token(/[^']*/),
                "'",
            ),
            seq(
                '"',
                token(/[^"]*/),
                '"',
            )
        )
    ),

    list: $ => seq(
        '[',
        optional(commaSep1($._expr)),
        optional(','),
        ']'
    ),

    dict: $ => seq(
        '{',
        optional(commaSep1($.pair)),
        optional(','),
        '}'
    ),

    pair: $ => seq(
        field('key', $.lit_string),
        ':',
        field('value', $._expr)
    ),

    // these are only for built-in functions.
    // will need to refactor if a non-function keyword needs to be added.
    _keyword: $ => choice(
        $.ref,
        $.source,
        $.config,
    ),

    // parsing keywords individually so they can be type-checked without
    // referring to the source in the type-checker.
    ref: $ => 'ref',
    source: $ => 'source',
    config: $ => 'config',

    identifier: $ => $._identifier,

    _identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),

    kwarg: $ => seq(
        field("arg", $._identifier),
        '=',
        field("value", $._expr),
    ),

    _text: $ => /[^{}]+/

  }
});
