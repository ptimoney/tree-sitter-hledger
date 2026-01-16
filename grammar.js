module.exports = grammar({
  name: 'hledger',

  externals: $ => [
    $.indent,
    $.dedent,
    $._newline,
  ],

  extras: _ => [
    /[ \t]/,  // Allow spaces and tabs as whitespace, but NOT newlines
  ],

  rules: {
    source_file: $ => repeat($._item),

    _item: $ => choice(
      $._blank_line,
      $._comment,
      $.transaction,
      $._directive,
    ),

    // Blank line (just newline)
    _blank_line: $ => $._newline,

    // Comments
    _comment: $ => choice(
      $.line_comment,
      $.block_comment,
    ),

    line_comment: $ => seq(
      /[;#][^\n]*/,
      $._newline,
    ),

    block_comment: $ => seq(
      'comment',
      $._newline,
      repeat(
        seq(/[^\n]*/, $._newline)
      ),
      'end comment',
      $._newline,
    ),

    inline_comment: $ => seq(
      ';',
      repeat(
        choice(
          $.tag,
          ',',
          $._word,  // Non-tag words
          /:[,\s\n]/,    // Colon followed by separator (not part of a tag)
        )
      )
    ),

    // Word token shared between tag_name and regular comment text
    _word: _ => /[^,:\s\n]+/,

    tag: $ => seq(
      alias($._word, $.tag_name),
      token.immediate(':'),
      alias(token.immediate(/[^,\s\n]+/), $.tag_value),
    ),

    tag_name: _ => /[^\s:,\n]+/,
    tag_value: _ => /[^,\s\n]+/,

    // Transaction: header followed by indented postings/comments
    transaction: $ => seq(
      $.transaction_header,
      $.indent,
      repeat1(
        choice(
          $.posting,
          $.line_comment,
        )
      ),
      $.dedent,
    ),

    transaction_header: $ => seq(
      field('date', $.date),
      optional(field('status', $.status)),
      optional(field('code', $.code)),
      field('description', $.description),
      optional($.inline_comment),
      $._newline,
    ),

    // Posting: account name with optional amount and comment
    posting: $ => seq(
      optional(field('status', $.status)),
      field('account', $.account),
      optional(field('amount', $.amount)),
      optional($.inline_comment),
      $._newline,
    ),

    // Directives
    _directive: $ => seq(
      choice(
        $.account_directive,
        $.commodity_directive,
        $.include_directive,
        $.payee_directive,
        $.tag_directive,
      ),
      optional($.inline_comment),
      $._newline,
    ),

    account_directive: $ => seq(
      'account',
      field('name', $.account),
    ),

    commodity_directive: $ => seq(
      'commodity',
      choice(
        seq(
          field('symbol', $.commodity),
          optional(/[ \t]+/),
          optional(field('quantity', $.quantity)),
        ),
        seq(
          field('symbol', $.quantity),
          optional(/[ \t]+/),
          field('commodity', $.commodity),
        ),
      ),
    ),

    include_directive: $ => seq(
      'include',
      field('path', $.file_path),
    ),

    payee_directive: $ => seq(
      'payee',
      field('name', $.payee_name),
    ),

    tag_directive: $ => seq(
      'tag',
      field('name', $.tag_name),
    ),

    // Basic tokens
    // TODO: Wider date parsing
    date: $ => /\d{4}[-\/]\d{2}[-\/]\d{2}/,

    status: $ => token(prec(1, choice('*', '!'))),

    sign: $ => token(choice('+', '-')),

    code: $ => prec(1, seq('(', /[^)]+/, ')')),

    // Description: Cannot start with status (*, !), code start parenthesis '(', 
    // effective date equals '=', or be empty/semicolon.
    // This allows the optional fields (status, code, effective_date) to match first.
    description: $ => /[^*!=(;\s][^;\n]*/,


    effective_date: $ => seq('=', $.date),

    account: $ => /([^\s;#\n]+([ \t][^;\s\n#]+)*?)/,

    // Amount: quantity with optional commodity
    amount: $ => choice(
      // Symbol on left: $100, -$100, $ 100
      seq(
        optional(field('sign', $.sign)),
        field('commodity', $.commodity),
        optional(/\s+/),
        field('quantity', $.quantity),
      ),
      // Symbol on right: 100 USD, -100 EUR
      seq(
        optional(field('sign', $.sign)),
        field('quantity', $.quantity),
        optional(/\s+/),
        field('commodity', $.commodity),
      ),
      // No symbol: 100, -100.50
      seq(
        optional(field('sign', $.sign)),
        field('quantity', $.quantity),
      ),
    ),

    // TODO: widen the possible currecy symbols 
    commodity: $ => choice(
      /[\$£€¥]/,                       // Common currency symbols
      /[A-Z]{3}/,                      // Three-letter codes (USD, EUR, GBP)
      /[A-Za-z][A-Za-z0-9_-]*/,       // Other commodity names
    ),


    quantity: $ => /\d[\d., \t]*/,      // Number with optional separators (no newlines)

    // File path for include directive
    file_path: $ => /[^\s;#\n]+/,

    // Payee name
    payee_name: $ => /[^;\n]+/,

  }
});
