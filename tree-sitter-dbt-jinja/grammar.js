
// TODO TEST WITH WINDOWS LINE BREAKS !!! (maybe there's a regex char)

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
            $._jinja_value,
            $.jinja_expression,
            $._jinja_comment,
            $._text
        )
    ),

    _jinja_value: $ => seq(
        '{{',
        $._expr,
        '}}'
    ),

    // This is awkward regex because we aren't parsing anything
    // in between the expression markers _jinja_value does
    jinja_expression: $ => seq(
        '{%',
        new RegExp(
            '('         + // capture group
                '[^%]'  + // any character that isn't a `%`
                '|'     + // or
                '%[^}]' + // a `%` followed by any character that isn't `}`
            ')*'        + // zero or more of the previous capture group
            '%}'          // followed by a `%` then a `}`
        )
    ),

    // comment regex is special because a comment can end
    // with #} ##} #######} etc.
    _jinja_comment: $ => seq(
        '{#',                 // comments start with `{#` 
        new RegExp(
            '('             + // capture group
                '('         + // capture group
                    '[^#]'  + // any character that isn't `#`
                    '|'     + // or
                    '#[^}]' + // a `#` character followed by another character that isn't `}`
                ')*'        + // zero or more of the previous capture group
            ')#+}'            // followed by at least one `#` and a `}`
        )
    ),

    // This defines all the meat of the parser
    _expr: $ => choice(
        $.fn_call,
        $.list,
        $.dict,
        $.lit_string,
        $.bool,
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
        optional(','),
        ')'
    ),

    // TODO escape characters??
    // TODO test strings like this '{{ doc("my_model") }}' <-- does dbt treat this as jinja or a literal?????? 
    // what are the rules???? maybe not at this stage?
    lit_string: $ => choice(
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
    ),

    bool: $ => choice(
        'True',
        'False'
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

    // This regex is fine until we allow user-named variables and functions. 
    // Once we do that we may want to allow Unicode identifiers like python does: /[_\p{XID_Start}][_\p{XID_Continue}]*/
    _identifier: $ => token(new RegExp(
        '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
        '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, underscore, or digit.
    )),
    
    kwarg: $ => seq(
        field("key", $.identifier),
        '=',
        field("value", $._expr),
    ),

    // matches everything but jinja
    _text: $ => new RegExp(
        '('             + // capture group
            '[^{]'      + // match any character that is not `{`
            '|'         + // or
            '[{][^{%#]' + // match a character that IS `{` and isn't followed by `{`, `%`, or`#`
        ')'             + // end capture group
        '+'               // one or more times. using this instead of * because tree-sitter can hang when matching the empty string.
    )

  }
});
