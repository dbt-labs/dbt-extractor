
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
    // TODO commente every part of this
    jinja_expression: $ => seq(
        '{%',
        /([^%]|[%][^}])*%}/
    ),

    // comment regex is special because a comment can end
    // with #} ##} #######} etc.
    _jinja_comment: $ => seq(
        '{#',
        /((\n|[^#]|#[^}])*)#+}/
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

    _identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),
    // Unicode identifiers like python does: /[_\p{XID_Start}][_\p{XID_Continue}]*/
    // ^^ that doesn't matter till we allow user-named variables and functions (we don't right now) TODO <- comment

    kwarg: $ => seq(
        field("key", $.identifier),
        '=',
        field("value", $._expr),
    ),

    // matches everything but jinja
    // TODO comment every part of this nonsense vv in code? in comment? look at perl style.
    _text: $ => /([^{]|[{][^{%#])+/

  }
});
