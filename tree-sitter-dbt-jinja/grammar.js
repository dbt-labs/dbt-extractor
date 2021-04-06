
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
            $.jinja_block,
            $.text
        )
    ),

    jinja_block: $ => seq(
        '{{',
        $.expr,
        '}}'
    ),

    // This defines all the meat of the parser
    expr: $ => choice(
        $.dbt_jinja_ref,
        $.dbt_jinja_source,
        $.dbt_jinja_config,
        $.lit_string
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

    dbt_jinja_ref: $ => seq(
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
    ),

    dbt_jinja_source: $ => seq(
        'source',
        '(',
        field('dbt_source_name', $.lit_string),
        ',',
        field('dbt_source_table', $.lit_string),
        ')',
    ),

    dbt_jinja_config: $ => seq(
        'config',
        '(',
        commaSep1($.kwarg_expression),
        ')',
    ),

    identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),

    kwarg_expression: $ => seq(
        field("arg", $.identifier),
        '=',
        field("value", $.lit_string),
    ),

    text: $ => /[^{}]+/

  }
});
