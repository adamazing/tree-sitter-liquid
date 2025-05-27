module.exports = grammar({
  name: 'liquid',

  word: $ => $.identifier,

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

    comment: $ => token(choice(
      seq("{%", /\s#/, /[^%-]+/,),
    )),

    code: $ => repeat1(
      choice(
        $._expression
      )
    ),

    control_code: $ => choice(
      ""
    ),

    _literal: $ => choice($.string, $.number, $.boolean),

    string: $ => choice(
      seq("'", /[^']*/, "'"),
      seq('"', /[^"]*/, '"')
    ),

    number: $ => /-?\d*\.?\d+/,

    boolean: $ => choice('true', 'false'),

    _expression: $ => choice(
      $.identifier,
      $.include_expression,
      $.render_expression,
      $.selector_expression,
      $.binary_expression,
      $._literal
      //TODO: add more expression types
    ),

    selector_expression: $ => choice(
      prec(1, seq(
        field('operand', $.identifier),
        repeat1(
          seq(
            '.',
            field('field', $.identifier)
          )
        )
      )
    )),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9]+/,

    binary_operator: $ => choice(
      "==",
      "!=",
      ">",
      "<",
      ">=",
      "<=",
      "or",
      "and",
    ),

    // special case binary operator
    contains_operator: $ => "contains",

    include_expression: $ => seq(
      field('include', "include"),
      field('included_file',$.string)
    ),

    render_expression: $ => seq(
      field('render', "render"),
      field('rendered_file', $.string)
    ),

    binary_expression: $ => choice(
      prec.right(1,seq($._expression, $.binary_operator, $._expression)),
      prec.right(1,seq($._expression, $.contains_operator, $.string))
    )
  }
});
