module.exports = grammar({
  name: 'hledger',

  externals: $ => [
    $.indent,
    $.dedent,
    $._newline,
  ],

  extras: $ => [
    /[ \t]/,  // Allow spaces and tabs as whitespace, but NOT newlines
  ],

  rules: {
    source_file: $ => repeat($._item),

    _item: $ => choice(
      $.transaction,
      $._directive,
      $.comment,
      $._blank_line,
    ),

    // Blank line (just newline)
    _blank_line: $ => $._newline,

    // Transaction: header followed by indented postings/comments
    transaction: $ => seq(
      $.transaction_header,
      $.indent,
      repeat1(choice(
        $.posting,
        $.comment_line,
        $.comment,
      )),
      $.dedent,
    ),

    transaction_header: $ => seq(
      field('date', $.date),
      optional(field('effective_date', $.effective_date)),
      optional(field('status', $.status)),
      optional(field('code', $.code)),
      field('description', $.description),
      optional($.comment),
      $._newline,
    ),

    // Posting: account name with optional amount and comment
    posting: $ => seq(
      field('account', $.account),
      optional(field('amount', $.amount)),
      optional($.comment),
      $._newline,
    ),

    // Directives
    _directive: $ => choice(
      $.account_directive,
      $.commodity_directive,
      $.include_directive,
      $.payee_directive,
      $.tag_directive,
    ),

    account_directive: $ => seq(
      'account',
      field('name', $.account),
      optional($.comment),
      $._newline,
    ),

    commodity_directive: $ => seq(
      'commodity',
      field('symbol', $.commodity),
      optional($.comment),
      $._newline,
    ),

    include_directive: $ => seq(
      'include',
      field('path', $.file_path),
      optional($.comment),
      $._newline,
    ),

    payee_directive: $ => seq(
      'payee',
      field('name', $.payee_name),
      optional($.comment),
      $._newline,
    ),

    tag_directive: $ => seq(
      'tag',
      field('name', $.tag_name),
      optional($.comment),
      $._newline,
    ),

    // Basic tokens
    date: $ => /\d{4}[-\/]\d{2}[-\/]\d{2}/,

    status: $ => token(prec(1, choice('*', '!'))),

    sign: $ => token(choice('+', '-')),

    code: $ => prec(1, seq('(', /[^)]+/, ')')),

    // Description: Cannot start with status (*, !), code start parenthesis '(', 
    // effective date equals '=', or be empty/semicolon.
    // This allows the optional fields (status, code, effective_date) to match first.
    description: $ => /[^*!=(;\s][^;\n]*/,

    comment: $ => /[;#][^\n]*/,

    comment_line: $ => seq($.comment, $._newline),

    effective_date: $ => seq('=', $.date),

    // Account name: For MVP, simplified to not include spaces
    // This matches most common account names (e.g., Assets:Checking, Expenses:Food:Groceries)
    // Accounts with spaces (e.g., "Assets:Savings Account") can be added in future versions
    account: $ => /[^\s;#\n]+/,

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

    // Tag name
    tag_name: $ => /[a-zA-Z][a-zA-Z0-9_-]*/,
  }
});
