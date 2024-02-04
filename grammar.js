module.exports = grammar({
    name: 'formula',

    extras: $ => [
        $._comment,
        /[\s\u00A0\uFEFF\u3000]+/,
    ],

    rules: {
        formula: $ => repeat1($.equation_definition),

        equation_definition: $ => seq(
            field('identifier', $.identifier),
            optional(field('range', $.range)),
            '=',
            field('expression', $._expression),
        ),

        _expression: $ => choice(
            $.variable,
            $.const,
            $.collection,
            $.equation_reference,
            $.binary_expression,
            $.parenthesized_expression,
        ),

        equation_reference: $ => field('identifier', $.identifier),

        binary_expression: $ => choice(
            prec.left(2, seq($._expression, field('op', $.mul), $._expression)),
            prec.left(1, seq($._expression, field('op', $.add), $._expression)),
        ),

        parenthesized_expression: $ => seq('(', $._expression, ')'),

        collection: $ => choice(
            seq(field('identifier', $.identifier), '(', field('op', $.mul), ')', optional(field('range', $.range))),
            seq(field('identifier', $.identifier), '(', field('op', $.add), ')', optional(field('range', $.range))),
        ),

        variable: $ => seq('var:',
            field('identifier', $.identifier),
            optional(field('default', $.variable_default)),
            optional(field('range', $.range)),
        ),

        variable_default: $ => seq('(', $.number, ')'),

        const: $ => field('value', $.number),

        range: $ => seq('[',
            field('lower', $.number),
            ',',
            field('upper', $.number),
            ']',
        ),

        identifier: $ => /[A-Za-z_][A-Za-z0-9_]+/,

        // reference: https://yarnpkg.com/package?name=float-regex
        number: $ => /[-+]?(?:\d*\.?\d+|\d+\.?\d*)(?:[eE][-+]?\d+)?[fF]?/,

        add: $ => '+',

        mul: $ => '*',

        // c style comments
        _comment: $ => token(choice(
            seq('//', /[^\n\r]*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),
    }
});