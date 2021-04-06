
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
        $.fn,
        $.lit_string
    ),

    fn: $ => seq(
        field("fn_name", $._identifier),
        '(',
        commaSep1(
            choice(
                $._expr,
                $.kwarg
            )
        ),
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

    _identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),

    kwarg: $ => seq(
        field("arg", $._identifier),
        '=',
        field("value", $.lit_string),
    ),

    _text: $ => /[^{}]+/

  }
});
