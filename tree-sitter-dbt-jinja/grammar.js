
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
        field('fn_name', $.identifier),
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

    identifier: $ => $._identifier,

    _identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),

    kwarg: $ => seq(
        // TODO make this key not arg
        field("arg", $.identifier),
        '=',
        field("value", $._expr),
    ),

    _text: $ => /[^{}]+/

  }
});
