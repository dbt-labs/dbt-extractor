
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
            prec(10, $.dbt_jinja_ref),
            prec(10, $.dbt_jinja_source),
            prec(10, $.dbt_jinja_config),
            prec(5,  $.dbt_python_jinja),
            prec(1,  $.text)
        )
    ),

    lit_string: $ => seq(
        choice(
            seq(
                "'",
                field('string_val', $.identifier),
                "'",
            ),
            seq(
                '"',
                field('string_val', $.identifier),
                '"',
            )
        )
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

    dbt_jinja_config: $ => seq(
        '{{',
        'config',
        '(',
        commaSep1($.kwarg_expression),
        ')',
        '}}'
    ),

    dbt_python_jinja: $ => choice(
        seq(
            '{{',
            'ref',
            '(',
            optional(
                seq(
                    field('dbt_package_name', $.text),
                    ','
                ),
            ),
            field('dbt_model_name', $.text),
            ')',
            '}}'
        ),
        seq(
            '{{',
            'source',
            '(',
            field('source_name_param', $.text),
            ',',
            field('source_table_param', $.text),
            ')',
            '}}'
        ),
        seq(
            '{{',
            'config',
            '(',
            field('config_param', $.text),
            ')',
            '}}'
        )
    ),

    identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]+/),

    kwarg_expression: $ => seq(
        field("arg", $.identifier),
        '=',
        field("value", $.lit_string),
    ),

    text: $ => /[^{}]+/

  }
});
