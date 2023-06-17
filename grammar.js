module.exports = grammar({
  name: 'liquid',

  rules: {
    template: $ => repeat(
      choice(
        $.directive,
        $.output_directive,
      )
    ),

    directive: $ => seq(
      choice("{%","{%-"),
      optional($.code),
      choice("%}","-%}")
    ),

    output_directive: $ => seq(
      choice("{{", "{{-"),
      optional($.code),
      choice("}}", "-}}")
    ),

    code: $ => repeat1(
      choice(/[^%}-]+|[%}-]/)
    ),

    _literal: $ => choice($.string, $.number, $.boolean),

    string: $ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"')
    ),

    number: $ => choice(
      /\d+/, // TODO: Check if this is correct
    ),

    boolean: $ => choice('true', 'false'),

    _expression: $ => choice(
      $.identifier,
      $._literal,
      $.binary_expression,
      //TODO: add more expression types
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9]+/,

    binary_expression: $ => choice(
      seq($._expression, "==", $._expression),
      seq($._expression, "!=", $._expression),
      seq($._expression, ">", $._expression),
      seq($._expression, "<", $._expression),
      seq($._expression, ">=", $._expression),
      seq($._expression, "<=", $._expression),
      seq($._expression, "or", $._expression),
      seq($._expression, "and", $._expression),
      seq($._expression, "contains", $.string)
    )
  }
});
