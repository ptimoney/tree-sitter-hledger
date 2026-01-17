#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 41

enum {
  aux_sym_line_comment_token1 = 1,
  anon_sym_comment = 2,
  aux_sym_block_comment_token1 = 3,
  anon_sym_endcomment = 4,
  anon_sym_SEMI = 5,
  anon_sym_COMMA = 6,
  anon_sym_end = 7,
  aux_sym_inline_comment_token1 = 8,
  sym__word = 9,
  anon_sym_COLON = 10,
  aux_sym_tag_token1 = 11,
  sym_tag_name = 12,
  anon_sym_AT = 13,
  anon_sym_AT_AT = 14,
  anon_sym_EQ = 15,
  anon_sym_account = 16,
  anon_sym_commodity = 17,
  aux_sym_commodity_directive_token1 = 18,
  anon_sym_include = 19,
  anon_sym_payee = 20,
  anon_sym_tag = 21,
  aux_sym_date_token1 = 22,
  aux_sym_date_token2 = 23,
  sym_status = 24,
  sym_sign = 25,
  anon_sym_LPAREN = 26,
  aux_sym_code_token1 = 27,
  anon_sym_RPAREN = 28,
  sym_description = 29,
  sym_account = 30,
  aux_sym_amount_token1 = 31,
  aux_sym_commodity_token1 = 32,
  aux_sym_commodity_token2 = 33,
  sym_quantity = 34,
  sym_file_path = 35,
  sym_payee_name = 36,
  sym_indent = 37,
  sym_dedent = 38,
  sym__newline = 39,
  sym_source_file = 40,
  sym__item = 41,
  sym__blank_line = 42,
  sym__comment = 43,
  sym_line_comment = 44,
  sym_block_comment = 45,
  sym_inline_comment = 46,
  sym_tag = 47,
  sym_transaction = 48,
  sym_transaction_header = 49,
  sym_posting = 50,
  sym_cost = 51,
  sym_assertion = 52,
  sym__directive = 53,
  sym_account_directive = 54,
  sym_commodity_directive = 55,
  sym_include_directive = 56,
  sym_payee_directive = 57,
  sym_tag_directive = 58,
  sym_date = 59,
  sym_code = 60,
  sym_amount = 61,
  sym_commodity = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_block_comment_repeat1 = 64,
  aux_sym_inline_comment_repeat1 = 65,
  aux_sym_transaction_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_comment] = "comment",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_endcomment] = "end comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_end] = "end",
  [aux_sym_inline_comment_token1] = "inline_comment_token1",
  [sym__word] = "_word",
  [anon_sym_COLON] = ":",
  [aux_sym_tag_token1] = "tag_value",
  [sym_tag_name] = "tag_name",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_EQ] = "=",
  [anon_sym_account] = "account",
  [anon_sym_commodity] = "commodity",
  [aux_sym_commodity_directive_token1] = "commodity_directive_token1",
  [anon_sym_include] = "include",
  [anon_sym_payee] = "payee",
  [anon_sym_tag] = "tag",
  [aux_sym_date_token1] = "date_token1",
  [aux_sym_date_token2] = "date_token2",
  [sym_status] = "status",
  [sym_sign] = "sign",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_description] = "description",
  [sym_account] = "account",
  [aux_sym_amount_token1] = "amount_token1",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [sym_quantity] = "quantity",
  [sym_file_path] = "file_path",
  [sym_payee_name] = "payee_name",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym__blank_line] = "_blank_line",
  [sym__comment] = "_comment",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_inline_comment] = "inline_comment",
  [sym_tag] = "tag",
  [sym_transaction] = "transaction",
  [sym_transaction_header] = "transaction_header",
  [sym_posting] = "posting",
  [sym_cost] = "cost",
  [sym_assertion] = "assertion",
  [sym__directive] = "_directive",
  [sym_account_directive] = "account_directive",
  [sym_commodity_directive] = "commodity_directive",
  [sym_include_directive] = "include_directive",
  [sym_payee_directive] = "payee_directive",
  [sym_tag_directive] = "tag_directive",
  [sym_date] = "date",
  [sym_code] = "code",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_inline_comment_repeat1] = "inline_comment_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_inline_comment_token1] = aux_sym_inline_comment_token1,
  [sym__word] = sym__word,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_commodity] = anon_sym_commodity,
  [aux_sym_commodity_directive_token1] = aux_sym_commodity_directive_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [aux_sym_date_token2] = aux_sym_date_token2,
  [sym_status] = sym_status,
  [sym_sign] = sym_sign,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_description] = sym_description,
  [sym_account] = sym_account,
  [aux_sym_amount_token1] = aux_sym_amount_token1,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [sym_quantity] = sym_quantity,
  [sym_file_path] = sym_file_path,
  [sym_payee_name] = sym_payee_name,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym__blank_line] = sym__blank_line,
  [sym__comment] = sym__comment,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_inline_comment] = sym_inline_comment,
  [sym_tag] = sym_tag,
  [sym_transaction] = sym_transaction,
  [sym_transaction_header] = sym_transaction_header,
  [sym_posting] = sym_posting,
  [sym_cost] = sym_cost,
  [sym_assertion] = sym_assertion,
  [sym__directive] = sym__directive,
  [sym_account_directive] = sym_account_directive,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_include_directive] = sym_include_directive,
  [sym_payee_directive] = sym_payee_directive,
  [sym_tag_directive] = sym_tag_directive,
  [sym_date] = sym_date,
  [sym_code] = sym_code,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_inline_comment_repeat1] = aux_sym_inline_comment_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commodity_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_amount_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_payee_name] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction_header] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_payee_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_account = 1,
  field_amount = 2,
  field_assertion = 3,
  field_code = 4,
  field_commodity = 5,
  field_cost = 6,
  field_date = 7,
  field_description = 8,
  field_name = 9,
  field_path = 10,
  field_quantity = 11,
  field_sign = 12,
  field_status = 13,
  field_symbol = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_assertion] = "assertion",
  [field_code] = "code",
  [field_commodity] = "commodity",
  [field_cost] = "cost",
  [field_date] = "date",
  [field_description] = "description",
  [field_name] = "name",
  [field_path] = "path",
  [field_quantity] = "quantity",
  [field_sign] = "sign",
  [field_status] = "status",
  [field_symbol] = "symbol",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 4},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 3},
  [24] = {.index = 45, .length = 3},
  [25] = {.index = 48, .length = 3},
  [26] = {.index = 51, .length = 3},
  [27] = {.index = 54, .length = 2},
  [28] = {.index = 56, .length = 3},
  [29] = {.index = 59, .length = 3},
  [30] = {.index = 62, .length = 3},
  [31] = {.index = 65, .length = 3},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 4},
  [34] = {.index = 74, .length = 4},
  [35] = {.index = 78, .length = 4},
  [36] = {.index = 82, .length = 3},
  [37] = {.index = 85, .length = 3},
  [38] = {.index = 88, .length = 4},
  [39] = {.index = 92, .length = 3},
  [40] = {.index = 95, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_symbol, 1},
  [2] =
    {field_path, 1},
  [3] =
    {field_commodity, 2},
    {field_symbol, 1},
  [5] =
    {field_quantity, 2},
    {field_symbol, 1},
  [7] =
    {field_date, 0},
    {field_description, 1},
  [9] =
    {field_commodity, 3},
    {field_symbol, 1},
  [11] =
    {field_quantity, 3},
    {field_symbol, 1},
  [13] =
    {field_account, 0},
  [14] =
    {field_quantity, 0},
  [15] =
    {field_date, 0},
    {field_description, 2},
    {field_status, 1},
  [18] =
    {field_code, 1},
    {field_date, 0},
    {field_description, 2},
  [21] =
    {field_account, 1},
    {field_status, 0},
  [23] =
    {field_quantity, 1},
    {field_sign, 0},
  [25] =
    {field_commodity, 1},
    {field_quantity, 0},
  [27] =
    {field_account, 0},
    {field_cost, 1},
  [29] =
    {field_account, 0},
    {field_assertion, 1},
  [31] =
    {field_account, 0},
    {field_amount, 1},
  [33] =
    {field_commodity, 0},
    {field_quantity, 1},
  [35] =
    {field_code, 2},
    {field_date, 0},
    {field_description, 3},
    {field_status, 1},
  [39] =
    {field_account, 1},
    {field_cost, 2},
    {field_status, 0},
  [42] =
    {field_account, 1},
    {field_assertion, 2},
    {field_status, 0},
  [45] =
    {field_account, 1},
    {field_amount, 2},
    {field_status, 0},
  [48] =
    {field_commodity, 2},
    {field_quantity, 1},
    {field_sign, 0},
  [51] =
    {field_commodity, 1},
    {field_quantity, 2},
    {field_sign, 0},
  [54] =
    {field_commodity, 2},
    {field_quantity, 0},
  [56] =
    {field_account, 0},
    {field_assertion, 2},
    {field_cost, 1},
  [59] =
    {field_account, 0},
    {field_amount, 1},
    {field_cost, 2},
  [62] =
    {field_account, 0},
    {field_amount, 1},
    {field_assertion, 2},
  [65] =
    {field_commodity, 0},
    {field_quantity, 2},
    {field_sign, 1},
  [68] =
    {field_commodity, 0},
    {field_quantity, 2},
  [70] =
    {field_account, 1},
    {field_assertion, 3},
    {field_cost, 2},
    {field_status, 0},
  [74] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost, 3},
    {field_status, 0},
  [78] =
    {field_account, 1},
    {field_amount, 2},
    {field_assertion, 3},
    {field_status, 0},
  [82] =
    {field_commodity, 3},
    {field_quantity, 1},
    {field_sign, 0},
  [85] =
    {field_commodity, 1},
    {field_quantity, 3},
    {field_sign, 0},
  [88] =
    {field_account, 0},
    {field_amount, 1},
    {field_assertion, 3},
    {field_cost, 2},
  [92] =
    {field_commodity, 0},
    {field_quantity, 3},
    {field_sign, 1},
  [95] =
    {field_account, 1},
    {field_amount, 2},
    {field_assertion, 4},
    {field_cost, 3},
    {field_status, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [20] = {
    [0] = sym_tag_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 13,
  [22] = 12,
  [23] = 23,
  [24] = 12,
  [25] = 25,
  [26] = 26,
  [27] = 13,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 9,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 47,
  [72] = 72,
  [73] = 73,
  [74] = 32,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 32,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 132,
  [172] = 172,
  [173] = 173,
};

static inline bool aux_sym_commodity_token1_character_set_1(int32_t c) {
  return (c < '+'
    ? (c < '%'
      ? (c < '!'
        ? c == 0
        : c <= '!')
      : (c <= '%' || (c >= '\'' && c <= ')')))
    : (c <= '<' || (c < '{'
      ? (c < '\\'
        ? c == '>'
        : c <= '\\')
      : (c <= '{' || (c >= '}' && c <= '~')))));
}

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '%'
        ? c == '!'
        : c <= '%')))
    : (c <= ')' || (c < '\\'
      ? (c < '>'
        ? (c >= '+' && c <= '<')
        : c <= '>')
      : (c <= '\\' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '%'
        ? c == '!'
        : c <= '%')))
    : (c <= ')' || (c < '{'
      ? (c < '\\'
        ? (c >= ',' && c <= '>')
        : c <= '\\')
      : (c <= '{' || (c >= '}' && c <= '~')))));
}

static inline bool aux_sym_commodity_token1_character_set_4(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '%'
        ? c == '!'
        : c <= '%')))
    : (c <= ')' || (c < '\\'
      ? (c < '>'
        ? (c >= ',' && c <= '<')
        : c <= '>')
      : (c <= '\\' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym_commodity_token1_character_set_5(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '%'
        ? (c >= ' ' && c <= '"')
        : c <= '%')))
    : (c <= ')' || (c < '\\'
      ? (c < '>'
        ? (c >= '+' && c <= '<')
        : c <= '>')
      : (c <= '\\' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(112);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < '+' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(121);
      if (!aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (!aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (!aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < ',' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (!aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(116);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(125);
      END_STATE();
    case 45:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(112);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 47:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 49:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(56);
      END_STATE();
    case 50:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(55);
      END_STATE();
    case 51:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(83);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(119);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(112);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_inline_comment_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(83);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(99);
      if (!aux_sym_commodity_token1_character_set_5(lookahead)) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (!aux_sym_commodity_token1_character_set_5(lookahead)) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (!aux_sym_commodity_token1_character_set_5(lookahead)) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_commodity_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_sign);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (!aux_sym_commodity_token1_character_set_5(lookahead)) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 60, .external_lex_state = 2},
  [2] = {.lex_state = 60, .external_lex_state = 2},
  [3] = {.lex_state = 60, .external_lex_state = 2},
  [4] = {.lex_state = 4, .external_lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 60, .external_lex_state = 2},
  [7] = {.lex_state = 60, .external_lex_state = 2},
  [8] = {.lex_state = 60, .external_lex_state = 2},
  [9] = {.lex_state = 60, .external_lex_state = 2},
  [10] = {.lex_state = 60, .external_lex_state = 2},
  [11] = {.lex_state = 60, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 8, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 8, .external_lex_state = 2},
  [18] = {.lex_state = 8, .external_lex_state = 2},
  [19] = {.lex_state = 46, .external_lex_state = 3},
  [20] = {.lex_state = 8, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 46, .external_lex_state = 3},
  [24] = {.lex_state = 2, .external_lex_state = 2},
  [25] = {.lex_state = 8, .external_lex_state = 2},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 2, .external_lex_state = 2},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 46, .external_lex_state = 3},
  [46] = {.lex_state = 46, .external_lex_state = 3},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 46, .external_lex_state = 3},
  [51] = {.lex_state = 46, .external_lex_state = 3},
  [52] = {.lex_state = 46, .external_lex_state = 3},
  [53] = {.lex_state = 46, .external_lex_state = 3},
  [54] = {.lex_state = 46, .external_lex_state = 3},
  [55] = {.lex_state = 46, .external_lex_state = 3},
  [56] = {.lex_state = 46, .external_lex_state = 3},
  [57] = {.lex_state = 46, .external_lex_state = 3},
  [58] = {.lex_state = 46, .external_lex_state = 3},
  [59] = {.lex_state = 46, .external_lex_state = 3},
  [60] = {.lex_state = 46, .external_lex_state = 3},
  [61] = {.lex_state = 46, .external_lex_state = 3},
  [62] = {.lex_state = 46, .external_lex_state = 3},
  [63] = {.lex_state = 46, .external_lex_state = 3},
  [64] = {.lex_state = 46, .external_lex_state = 3},
  [65] = {.lex_state = 46, .external_lex_state = 3},
  [66] = {.lex_state = 46, .external_lex_state = 3},
  [67] = {.lex_state = 46, .external_lex_state = 3},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 46, .external_lex_state = 3},
  [70] = {.lex_state = 46, .external_lex_state = 3},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 46, .external_lex_state = 3},
  [73] = {.lex_state = 46, .external_lex_state = 3},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 46, .external_lex_state = 3},
  [77] = {.lex_state = 46, .external_lex_state = 3},
  [78] = {.lex_state = 46, .external_lex_state = 3},
  [79] = {.lex_state = 46, .external_lex_state = 3},
  [80] = {.lex_state = 3, .external_lex_state = 2},
  [81] = {.lex_state = 46, .external_lex_state = 3},
  [82] = {.lex_state = 46, .external_lex_state = 3},
  [83] = {.lex_state = 46, .external_lex_state = 3},
  [84] = {.lex_state = 46, .external_lex_state = 3},
  [85] = {.lex_state = 46, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 69},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 4, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 69},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 69},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 69},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 40},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 40},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token__newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token_dedent] = true,
  },
  [4] = {
    [ts_external_token_indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_inline_comment_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [aux_sym_date_token2] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_sign] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(149),
    [sym__item] = STATE(2),
    [sym__blank_line] = STATE(2),
    [sym__comment] = STATE(2),
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_transaction] = STATE(2),
    [sym_transaction_header] = STATE(137),
    [sym__directive] = STATE(2),
    [sym_account_directive] = STATE(106),
    [sym_commodity_directive] = STATE(106),
    [sym_include_directive] = STATE(106),
    [sym_payee_directive] = STATE(106),
    [sym_tag_directive] = STATE(106),
    [sym_date] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_line_comment_token1] = ACTIONS(5),
    [anon_sym_comment] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_payee] = ACTIONS(15),
    [anon_sym_tag] = ACTIONS(17),
    [aux_sym_date_token1] = ACTIONS(19),
    [aux_sym_date_token2] = ACTIONS(19),
    [sym__newline] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token1,
    ACTIONS(7), 1,
      anon_sym_comment,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(15), 1,
      anon_sym_payee,
    ACTIONS(17), 1,
      anon_sym_tag,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__newline,
    STATE(68), 1,
      sym_date,
    STATE(137), 1,
      sym_transaction_header,
    ACTIONS(19), 2,
      aux_sym_date_token1,
      aux_sym_date_token2,
    STATE(106), 5,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
    STATE(3), 8,
      sym__item,
      sym__blank_line,
      sym__comment,
      sym_line_comment,
      sym_block_comment,
      sym_transaction,
      sym__directive,
      aux_sym_source_file_repeat1,
  [55] = 14,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_line_comment_token1,
    ACTIONS(32), 1,
      anon_sym_comment,
    ACTIONS(35), 1,
      anon_sym_account,
    ACTIONS(38), 1,
      anon_sym_commodity,
    ACTIONS(41), 1,
      anon_sym_include,
    ACTIONS(44), 1,
      anon_sym_payee,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(53), 1,
      sym__newline,
    STATE(68), 1,
      sym_date,
    STATE(137), 1,
      sym_transaction_header,
    ACTIONS(50), 2,
      aux_sym_date_token1,
      aux_sym_date_token2,
    STATE(106), 5,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
    STATE(3), 8,
      sym__item,
      sym__blank_line,
      sym__comment,
      sym_line_comment,
      sym_block_comment,
      sym_transaction,
      sym__directive,
      aux_sym_source_file_repeat1,
  [110] = 13,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(62), 1,
      sym_sign,
    ACTIONS(64), 1,
      aux_sym_commodity_token1,
    ACTIONS(66), 1,
      aux_sym_commodity_token2,
    ACTIONS(68), 1,
      sym_quantity,
    ACTIONS(70), 1,
      sym__newline,
    STATE(15), 1,
      sym_amount,
    STATE(34), 1,
      sym_cost,
    STATE(89), 1,
      sym_commodity,
    STATE(103), 1,
      sym_assertion,
    STATE(129), 1,
      sym_inline_comment,
    ACTIONS(58), 2,
      anon_sym_AT,
      anon_sym_AT_AT,
  [151] = 13,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(62), 1,
      sym_sign,
    ACTIONS(64), 1,
      aux_sym_commodity_token1,
    ACTIONS(66), 1,
      aux_sym_commodity_token2,
    ACTIONS(68), 1,
      sym_quantity,
    ACTIONS(72), 1,
      sym__newline,
    STATE(16), 1,
      sym_amount,
    STATE(31), 1,
      sym_cost,
    STATE(89), 1,
      sym_commodity,
    STATE(92), 1,
      sym_assertion,
    STATE(173), 1,
      sym_inline_comment,
    ACTIONS(58), 2,
      anon_sym_AT,
      anon_sym_AT_AT,
  [192] = 1,
    ACTIONS(74), 11,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      aux_sym_date_token1,
      aux_sym_date_token2,
  [206] = 1,
    ACTIONS(76), 11,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      aux_sym_date_token1,
      aux_sym_date_token2,
  [220] = 1,
    ACTIONS(78), 11,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      aux_sym_date_token1,
      aux_sym_date_token2,
  [234] = 1,
    ACTIONS(80), 11,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      aux_sym_date_token1,
      aux_sym_date_token2,
  [248] = 1,
    ACTIONS(82), 11,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      aux_sym_date_token1,
      aux_sym_date_token2,
  [262] = 1,
    ACTIONS(84), 11,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      aux_sym_date_token1,
      aux_sym_date_token2,
  [276] = 5,
    ACTIONS(88), 1,
      aux_sym_amount_token1,
    ACTIONS(92), 1,
      sym__newline,
    STATE(38), 1,
      sym_commodity,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(86), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [296] = 5,
    ACTIONS(96), 1,
      aux_sym_amount_token1,
    ACTIONS(98), 1,
      sym__newline,
    STATE(33), 1,
      sym_commodity,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(94), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [316] = 5,
    ACTIONS(106), 1,
      sym__word,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(100), 2,
      anon_sym_comment,
      anon_sym_end,
    ACTIONS(103), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(14), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [335] = 8,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_AT_AT,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(115), 1,
      sym__newline,
    STATE(35), 1,
      sym_cost,
    STATE(101), 1,
      sym_assertion,
    STATE(158), 1,
      sym_inline_comment,
  [360] = 8,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_AT_AT,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(117), 1,
      sym__newline,
    STATE(37), 1,
      sym_cost,
    STATE(100), 1,
      sym_assertion,
    STATE(126), 1,
      sym_inline_comment,
  [385] = 5,
    ACTIONS(123), 1,
      sym__word,
    ACTIONS(125), 1,
      sym__newline,
    ACTIONS(119), 2,
      anon_sym_comment,
      anon_sym_end,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(14), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [404] = 5,
    ACTIONS(123), 1,
      sym__word,
    ACTIONS(131), 1,
      sym__newline,
    ACTIONS(127), 2,
      anon_sym_comment,
      anon_sym_end,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(17), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [423] = 5,
    ACTIONS(133), 1,
      aux_sym_line_comment_token1,
    ACTIONS(135), 1,
      sym_status,
    ACTIONS(137), 1,
      sym_account,
    ACTIONS(139), 1,
      sym_dedent,
    STATE(23), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [441] = 3,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(141), 3,
      anon_sym_comment,
      anon_sym_end,
      sym__word,
    ACTIONS(143), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
  [455] = 5,
    ACTIONS(96), 1,
      aux_sym_amount_token1,
    ACTIONS(98), 1,
      sym__newline,
    STATE(33), 1,
      sym_commodity,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [473] = 5,
    ACTIONS(88), 1,
      aux_sym_amount_token1,
    ACTIONS(92), 1,
      sym__newline,
    STATE(38), 1,
      sym_commodity,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [491] = 5,
    ACTIONS(147), 1,
      aux_sym_line_comment_token1,
    ACTIONS(150), 1,
      sym_status,
    ACTIONS(153), 1,
      sym_account,
    ACTIONS(156), 1,
      sym_dedent,
    STATE(23), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [509] = 5,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      aux_sym_amount_token1,
    ACTIONS(92), 1,
      sym__newline,
    STATE(38), 1,
      sym_commodity,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [526] = 2,
    ACTIONS(158), 3,
      anon_sym_comment,
      anon_sym_end,
      sym__word,
    ACTIONS(160), 3,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
  [537] = 4,
    ACTIONS(133), 1,
      aux_sym_line_comment_token1,
    ACTIONS(135), 1,
      sym_status,
    ACTIONS(137), 1,
      sym_account,
    STATE(19), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [552] = 5,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      aux_sym_amount_token1,
    ACTIONS(98), 1,
      sym__newline,
    STATE(33), 1,
      sym_commodity,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [569] = 5,
    ACTIONS(162), 1,
      sym_sign,
    ACTIONS(164), 1,
      sym_quantity,
    STATE(89), 1,
      sym_commodity,
    STATE(108), 1,
      sym_amount,
    ACTIONS(66), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [586] = 5,
    ACTIONS(166), 1,
      sym_sign,
    ACTIONS(168), 1,
      sym_quantity,
    STATE(89), 1,
      sym_commodity,
    STATE(115), 1,
      sym_amount,
    ACTIONS(66), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [603] = 2,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(170), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [613] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(174), 1,
      sym__newline,
    STATE(86), 1,
      sym_assertion,
    STATE(139), 1,
      sym_inline_comment,
  [629] = 2,
    ACTIONS(178), 1,
      anon_sym_AT,
    ACTIONS(176), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [639] = 2,
    ACTIONS(182), 1,
      anon_sym_AT,
    ACTIONS(180), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [649] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(184), 1,
      sym__newline,
    STATE(95), 1,
      sym_assertion,
    STATE(168), 1,
      sym_inline_comment,
  [665] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(186), 1,
      sym__newline,
    STATE(105), 1,
      sym_assertion,
    STATE(131), 1,
      sym_inline_comment,
  [681] = 2,
    ACTIONS(190), 1,
      anon_sym_AT,
    ACTIONS(188), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [691] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(192), 1,
      sym__newline,
    STATE(107), 1,
      sym_assertion,
    STATE(145), 1,
      sym_inline_comment,
  [707] = 2,
    ACTIONS(196), 1,
      anon_sym_AT,
    ACTIONS(194), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [717] = 2,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(198), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [727] = 2,
    ACTIONS(204), 1,
      anon_sym_AT,
    ACTIONS(202), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [737] = 2,
    ACTIONS(208), 1,
      anon_sym_AT,
    ACTIONS(206), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [747] = 2,
    ACTIONS(212), 1,
      anon_sym_AT,
    ACTIONS(210), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [757] = 2,
    ACTIONS(216), 1,
      anon_sym_AT,
    ACTIONS(214), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [767] = 2,
    ACTIONS(220), 1,
      anon_sym_AT,
    ACTIONS(218), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [777] = 2,
    ACTIONS(224), 1,
      sym_account,
    ACTIONS(222), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [786] = 2,
    ACTIONS(228), 1,
      sym_account,
    ACTIONS(226), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [795] = 3,
    ACTIONS(230), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    ACTIONS(66), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [806] = 3,
    ACTIONS(232), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    ACTIONS(66), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [817] = 3,
    ACTIONS(236), 1,
      sym_quantity,
    STATE(80), 1,
      sym_commodity,
    ACTIONS(234), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [828] = 2,
    ACTIONS(238), 1,
      sym_account,
    ACTIONS(80), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [837] = 2,
    ACTIONS(242), 1,
      sym_account,
    ACTIONS(240), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [846] = 2,
    ACTIONS(246), 1,
      sym_account,
    ACTIONS(244), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [855] = 2,
    ACTIONS(250), 1,
      sym_account,
    ACTIONS(248), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [864] = 2,
    ACTIONS(254), 1,
      sym_account,
    ACTIONS(252), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [873] = 2,
    ACTIONS(258), 1,
      sym_account,
    ACTIONS(256), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [882] = 2,
    ACTIONS(262), 1,
      sym_account,
    ACTIONS(260), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [891] = 2,
    ACTIONS(266), 1,
      sym_account,
    ACTIONS(264), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [900] = 2,
    ACTIONS(270), 1,
      sym_account,
    ACTIONS(268), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [909] = 2,
    ACTIONS(274), 1,
      sym_account,
    ACTIONS(272), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [918] = 2,
    ACTIONS(278), 1,
      sym_account,
    ACTIONS(276), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [927] = 2,
    ACTIONS(282), 1,
      sym_account,
    ACTIONS(280), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [936] = 2,
    ACTIONS(286), 1,
      sym_account,
    ACTIONS(284), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [945] = 2,
    ACTIONS(290), 1,
      sym_account,
    ACTIONS(288), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [954] = 2,
    ACTIONS(294), 1,
      sym_account,
    ACTIONS(292), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [963] = 2,
    ACTIONS(298), 1,
      sym_account,
    ACTIONS(296), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [972] = 2,
    ACTIONS(302), 1,
      sym_account,
    ACTIONS(300), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [981] = 2,
    ACTIONS(306), 1,
      sym_account,
    ACTIONS(304), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [990] = 4,
    ACTIONS(308), 1,
      sym_status,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      sym_description,
    STATE(164), 1,
      sym_code,
  [1003] = 2,
    ACTIONS(316), 1,
      sym_account,
    ACTIONS(314), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1012] = 2,
    ACTIONS(320), 1,
      sym_account,
    ACTIONS(318), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1021] = 3,
    ACTIONS(322), 1,
      sym_quantity,
    STATE(121), 1,
      sym_commodity,
    ACTIONS(66), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1032] = 2,
    ACTIONS(326), 1,
      sym_account,
    ACTIONS(324), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1041] = 2,
    ACTIONS(330), 1,
      sym_account,
    ACTIONS(328), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1050] = 2,
    ACTIONS(176), 2,
      sym__newline,
      aux_sym_commodity_directive_token1,
    ACTIONS(178), 2,
      anon_sym_SEMI,
      sym_quantity,
  [1059] = 3,
    ACTIONS(332), 1,
      aux_sym_commodity_directive_token1,
    STATE(120), 1,
      sym_commodity,
    ACTIONS(90), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1070] = 2,
    ACTIONS(336), 1,
      sym_account,
    ACTIONS(334), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1079] = 2,
    ACTIONS(340), 1,
      sym_account,
    ACTIONS(338), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1088] = 2,
    ACTIONS(344), 1,
      sym_account,
    ACTIONS(342), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1097] = 2,
    ACTIONS(348), 1,
      sym_account,
    ACTIONS(346), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1106] = 4,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    ACTIONS(352), 1,
      aux_sym_commodity_directive_token1,
    ACTIONS(354), 1,
      sym_quantity,
    ACTIONS(356), 1,
      sym__newline,
  [1119] = 2,
    ACTIONS(360), 1,
      sym_account,
    ACTIONS(358), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1128] = 2,
    ACTIONS(364), 1,
      sym_account,
    ACTIONS(362), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1137] = 2,
    ACTIONS(368), 1,
      sym_account,
    ACTIONS(366), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1146] = 2,
    ACTIONS(372), 1,
      sym_account,
    ACTIONS(370), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1155] = 2,
    ACTIONS(376), 1,
      sym_account,
    ACTIONS(374), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1164] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      sym__newline,
    STATE(141), 1,
      sym_inline_comment,
  [1174] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      sym__newline,
    STATE(136), 1,
      sym_inline_comment,
  [1184] = 3,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      sym_description,
    STATE(151), 1,
      sym_code,
  [1194] = 3,
    ACTIONS(384), 1,
      sym_sign,
    ACTIONS(386), 1,
      aux_sym_amount_token1,
    ACTIONS(388), 1,
      sym_quantity,
  [1204] = 2,
    STATE(40), 1,
      sym_commodity,
    ACTIONS(390), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1212] = 1,
    ACTIONS(392), 3,
      sym_status,
      anon_sym_LPAREN,
      sym_description,
  [1218] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      sym__newline,
    STATE(148), 1,
      sym_inline_comment,
  [1228] = 2,
    ACTIONS(176), 1,
      aux_sym_amount_token1,
    ACTIONS(178), 2,
      sym_sign,
      sym_quantity,
  [1236] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      sym__newline,
    STATE(142), 1,
      sym_inline_comment,
  [1246] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      sym__newline,
    STATE(130), 1,
      sym_inline_comment,
  [1256] = 3,
    ACTIONS(400), 1,
      aux_sym_block_comment_token1,
    ACTIONS(402), 1,
      anon_sym_endcomment,
    STATE(102), 1,
      aux_sym_block_comment_repeat1,
  [1266] = 2,
    STATE(117), 1,
      sym_commodity,
    ACTIONS(390), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1274] = 2,
    STATE(42), 1,
      sym_commodity,
    ACTIONS(390), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [1282] = 2,
    ACTIONS(406), 1,
      sym_quantity,
    ACTIONS(404), 2,
      sym__newline,
      anon_sym_SEMI,
  [1290] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      sym__newline,
    STATE(124), 1,
      sym_inline_comment,
  [1300] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      sym__newline,
    STATE(134), 1,
      sym_inline_comment,
  [1310] = 3,
    ACTIONS(412), 1,
      aux_sym_block_comment_token1,
    ACTIONS(415), 1,
      anon_sym_endcomment,
    STATE(102), 1,
      aux_sym_block_comment_repeat1,
  [1320] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(417), 1,
      sym__newline,
    STATE(161), 1,
      sym_inline_comment,
  [1330] = 3,
    ACTIONS(400), 1,
      aux_sym_block_comment_token1,
    ACTIONS(419), 1,
      anon_sym_endcomment,
    STATE(96), 1,
      aux_sym_block_comment_repeat1,
  [1340] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      sym__newline,
    STATE(154), 1,
      sym_inline_comment,
  [1350] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      sym__newline,
    STATE(143), 1,
      sym_inline_comment,
  [1360] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      sym__newline,
    STATE(160), 1,
      sym_inline_comment,
  [1370] = 1,
    ACTIONS(427), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1376] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      sym__newline,
    STATE(167), 1,
      sym_inline_comment,
  [1386] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      sym__newline,
    STATE(123), 1,
      sym_inline_comment,
  [1396] = 1,
    ACTIONS(415), 2,
      aux_sym_block_comment_token1,
      anon_sym_endcomment,
  [1401] = 1,
    ACTIONS(433), 2,
      sym__newline,
      anon_sym_SEMI,
  [1406] = 1,
    ACTIONS(435), 2,
      sym__newline,
      anon_sym_SEMI,
  [1411] = 1,
    ACTIONS(437), 2,
      sym__newline,
      anon_sym_SEMI,
  [1416] = 1,
    ACTIONS(439), 2,
      sym__newline,
      anon_sym_SEMI,
  [1421] = 1,
    ACTIONS(441), 2,
      sym__newline,
      anon_sym_SEMI,
  [1426] = 1,
    ACTIONS(443), 2,
      sym__newline,
      anon_sym_SEMI,
  [1431] = 2,
    ACTIONS(445), 1,
      aux_sym_amount_token1,
    ACTIONS(447), 1,
      sym_quantity,
  [1438] = 1,
    ACTIONS(449), 2,
      sym__newline,
      anon_sym_SEMI,
  [1443] = 1,
    ACTIONS(451), 2,
      sym__newline,
      anon_sym_SEMI,
  [1448] = 2,
    ACTIONS(453), 1,
      aux_sym_amount_token1,
    ACTIONS(455), 1,
      sym_quantity,
  [1455] = 1,
    ACTIONS(457), 2,
      sym__newline,
      anon_sym_SEMI,
  [1460] = 1,
    ACTIONS(459), 1,
      sym__newline,
  [1464] = 1,
    ACTIONS(461), 1,
      sym__newline,
  [1468] = 1,
    ACTIONS(463), 1,
      sym_indent,
  [1472] = 1,
    ACTIONS(465), 1,
      sym__newline,
  [1476] = 1,
    ACTIONS(467), 1,
      aux_sym_tag_token1,
  [1480] = 1,
    ACTIONS(469), 1,
      sym_quantity,
  [1484] = 1,
    ACTIONS(471), 1,
      sym__newline,
  [1488] = 1,
    ACTIONS(473), 1,
      sym__newline,
  [1492] = 1,
    ACTIONS(475), 1,
      sym__newline,
  [1496] = 1,
    ACTIONS(477), 1,
      sym__newline,
  [1500] = 1,
    ACTIONS(479), 1,
      sym__newline,
  [1504] = 1,
    ACTIONS(481), 1,
      sym__newline,
  [1508] = 1,
    ACTIONS(483), 1,
      sym_quantity,
  [1512] = 1,
    ACTIONS(485), 1,
      sym__newline,
  [1516] = 1,
    ACTIONS(487), 1,
      sym_indent,
  [1520] = 1,
    ACTIONS(489), 1,
      sym_indent,
  [1524] = 1,
    ACTIONS(491), 1,
      sym__newline,
  [1528] = 1,
    ACTIONS(493), 1,
      sym_description,
  [1532] = 1,
    ACTIONS(495), 1,
      sym__newline,
  [1536] = 1,
    ACTIONS(497), 1,
      sym__newline,
  [1540] = 1,
    ACTIONS(499), 1,
      sym__newline,
  [1544] = 1,
    ACTIONS(501), 1,
      sym_indent,
  [1548] = 1,
    ACTIONS(503), 1,
      sym__newline,
  [1552] = 1,
    ACTIONS(505), 1,
      sym_indent,
  [1556] = 1,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [1560] = 1,
    ACTIONS(509), 1,
      sym__newline,
  [1564] = 1,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
  [1568] = 1,
    ACTIONS(513), 1,
      sym_indent,
  [1572] = 1,
    ACTIONS(515), 1,
      sym_description,
  [1576] = 1,
    ACTIONS(517), 1,
      sym_indent,
  [1580] = 1,
    ACTIONS(519), 1,
      sym_account,
  [1584] = 1,
    ACTIONS(521), 1,
      sym__newline,
  [1588] = 1,
    ACTIONS(523), 1,
      sym_indent,
  [1592] = 1,
    ACTIONS(525), 1,
      sym_tag_name,
  [1596] = 1,
    ACTIONS(527), 1,
      sym_quantity,
  [1600] = 1,
    ACTIONS(529), 1,
      sym__newline,
  [1604] = 1,
    ACTIONS(531), 1,
      sym_indent,
  [1608] = 1,
    ACTIONS(533), 1,
      sym__newline,
  [1612] = 1,
    ACTIONS(535), 1,
      sym__newline,
  [1616] = 1,
    ACTIONS(537), 1,
      sym__newline,
  [1620] = 1,
    ACTIONS(539), 1,
      sym__newline,
  [1624] = 1,
    ACTIONS(541), 1,
      sym_description,
  [1628] = 1,
    ACTIONS(543), 1,
      sym_payee_name,
  [1632] = 1,
    ACTIONS(545), 1,
      sym_file_path,
  [1636] = 1,
    ACTIONS(547), 1,
      sym__newline,
  [1640] = 1,
    ACTIONS(549), 1,
      sym__newline,
  [1644] = 1,
    ACTIONS(551), 1,
      sym_account,
  [1648] = 1,
    ACTIONS(553), 1,
      sym__newline,
  [1652] = 1,
    ACTIONS(555), 1,
      sym__newline,
  [1656] = 1,
    ACTIONS(557), 1,
      aux_sym_code_token1,
  [1660] = 1,
    ACTIONS(559), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 276,
  [SMALL_STATE(13)] = 296,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 360,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 423,
  [SMALL_STATE(20)] = 441,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 491,
  [SMALL_STATE(24)] = 509,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 552,
  [SMALL_STATE(28)] = 569,
  [SMALL_STATE(29)] = 586,
  [SMALL_STATE(30)] = 603,
  [SMALL_STATE(31)] = 613,
  [SMALL_STATE(32)] = 629,
  [SMALL_STATE(33)] = 639,
  [SMALL_STATE(34)] = 649,
  [SMALL_STATE(35)] = 665,
  [SMALL_STATE(36)] = 681,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 707,
  [SMALL_STATE(39)] = 717,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 737,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 757,
  [SMALL_STATE(44)] = 767,
  [SMALL_STATE(45)] = 777,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 795,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 817,
  [SMALL_STATE(50)] = 828,
  [SMALL_STATE(51)] = 837,
  [SMALL_STATE(52)] = 846,
  [SMALL_STATE(53)] = 855,
  [SMALL_STATE(54)] = 864,
  [SMALL_STATE(55)] = 873,
  [SMALL_STATE(56)] = 882,
  [SMALL_STATE(57)] = 891,
  [SMALL_STATE(58)] = 900,
  [SMALL_STATE(59)] = 909,
  [SMALL_STATE(60)] = 918,
  [SMALL_STATE(61)] = 927,
  [SMALL_STATE(62)] = 936,
  [SMALL_STATE(63)] = 945,
  [SMALL_STATE(64)] = 954,
  [SMALL_STATE(65)] = 963,
  [SMALL_STATE(66)] = 972,
  [SMALL_STATE(67)] = 981,
  [SMALL_STATE(68)] = 990,
  [SMALL_STATE(69)] = 1003,
  [SMALL_STATE(70)] = 1012,
  [SMALL_STATE(71)] = 1021,
  [SMALL_STATE(72)] = 1032,
  [SMALL_STATE(73)] = 1041,
  [SMALL_STATE(74)] = 1050,
  [SMALL_STATE(75)] = 1059,
  [SMALL_STATE(76)] = 1070,
  [SMALL_STATE(77)] = 1079,
  [SMALL_STATE(78)] = 1088,
  [SMALL_STATE(79)] = 1097,
  [SMALL_STATE(80)] = 1106,
  [SMALL_STATE(81)] = 1119,
  [SMALL_STATE(82)] = 1128,
  [SMALL_STATE(83)] = 1137,
  [SMALL_STATE(84)] = 1146,
  [SMALL_STATE(85)] = 1155,
  [SMALL_STATE(86)] = 1164,
  [SMALL_STATE(87)] = 1174,
  [SMALL_STATE(88)] = 1184,
  [SMALL_STATE(89)] = 1194,
  [SMALL_STATE(90)] = 1204,
  [SMALL_STATE(91)] = 1212,
  [SMALL_STATE(92)] = 1218,
  [SMALL_STATE(93)] = 1228,
  [SMALL_STATE(94)] = 1236,
  [SMALL_STATE(95)] = 1246,
  [SMALL_STATE(96)] = 1256,
  [SMALL_STATE(97)] = 1266,
  [SMALL_STATE(98)] = 1274,
  [SMALL_STATE(99)] = 1282,
  [SMALL_STATE(100)] = 1290,
  [SMALL_STATE(101)] = 1300,
  [SMALL_STATE(102)] = 1310,
  [SMALL_STATE(103)] = 1320,
  [SMALL_STATE(104)] = 1330,
  [SMALL_STATE(105)] = 1340,
  [SMALL_STATE(106)] = 1350,
  [SMALL_STATE(107)] = 1360,
  [SMALL_STATE(108)] = 1370,
  [SMALL_STATE(109)] = 1376,
  [SMALL_STATE(110)] = 1386,
  [SMALL_STATE(111)] = 1396,
  [SMALL_STATE(112)] = 1401,
  [SMALL_STATE(113)] = 1406,
  [SMALL_STATE(114)] = 1411,
  [SMALL_STATE(115)] = 1416,
  [SMALL_STATE(116)] = 1421,
  [SMALL_STATE(117)] = 1426,
  [SMALL_STATE(118)] = 1431,
  [SMALL_STATE(119)] = 1438,
  [SMALL_STATE(120)] = 1443,
  [SMALL_STATE(121)] = 1448,
  [SMALL_STATE(122)] = 1455,
  [SMALL_STATE(123)] = 1460,
  [SMALL_STATE(124)] = 1464,
  [SMALL_STATE(125)] = 1468,
  [SMALL_STATE(126)] = 1472,
  [SMALL_STATE(127)] = 1476,
  [SMALL_STATE(128)] = 1480,
  [SMALL_STATE(129)] = 1484,
  [SMALL_STATE(130)] = 1488,
  [SMALL_STATE(131)] = 1492,
  [SMALL_STATE(132)] = 1496,
  [SMALL_STATE(133)] = 1500,
  [SMALL_STATE(134)] = 1504,
  [SMALL_STATE(135)] = 1508,
  [SMALL_STATE(136)] = 1512,
  [SMALL_STATE(137)] = 1516,
  [SMALL_STATE(138)] = 1520,
  [SMALL_STATE(139)] = 1524,
  [SMALL_STATE(140)] = 1528,
  [SMALL_STATE(141)] = 1532,
  [SMALL_STATE(142)] = 1536,
  [SMALL_STATE(143)] = 1540,
  [SMALL_STATE(144)] = 1544,
  [SMALL_STATE(145)] = 1548,
  [SMALL_STATE(146)] = 1552,
  [SMALL_STATE(147)] = 1556,
  [SMALL_STATE(148)] = 1560,
  [SMALL_STATE(149)] = 1564,
  [SMALL_STATE(150)] = 1568,
  [SMALL_STATE(151)] = 1572,
  [SMALL_STATE(152)] = 1576,
  [SMALL_STATE(153)] = 1580,
  [SMALL_STATE(154)] = 1584,
  [SMALL_STATE(155)] = 1588,
  [SMALL_STATE(156)] = 1592,
  [SMALL_STATE(157)] = 1596,
  [SMALL_STATE(158)] = 1600,
  [SMALL_STATE(159)] = 1604,
  [SMALL_STATE(160)] = 1608,
  [SMALL_STATE(161)] = 1612,
  [SMALL_STATE(162)] = 1616,
  [SMALL_STATE(163)] = 1620,
  [SMALL_STATE(164)] = 1624,
  [SMALL_STATE(165)] = 1628,
  [SMALL_STATE(166)] = 1632,
  [SMALL_STATE(167)] = 1636,
  [SMALL_STATE(168)] = 1640,
  [SMALL_STATE(169)] = 1644,
  [SMALL_STATE(170)] = 1648,
  [SMALL_STATE(171)] = 1652,
  [SMALL_STATE(172)] = 1656,
  [SMALL_STATE(173)] = 1660,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 14),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 14),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, .production_id = 10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, .production_id = 10),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(14),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(14),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_comment_repeat1, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(171),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(153),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 20),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 20),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 31),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 31),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 15),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 15),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 19),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 19),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 25),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 25),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 26),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 26),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 27),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 27),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 32),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 32),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 36),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4, .production_id = 36),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 37),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4, .production_id = 37),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 39),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4, .production_id = 39),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 18),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 18),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 24),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 40),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 40),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 38),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 38),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 35),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 35),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 40),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 40),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 34),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 34),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 33),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 33),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 30),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 30),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 38),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 38),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 29),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 29),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 28),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 28),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 35),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 35),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 34),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 34),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 23),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 23),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 33),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 33),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 22),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 22),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 30),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 30),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 17),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 17),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 9),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 9),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 16),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 16),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 24),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 24),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 23),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 23),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 22),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 22),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 13),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 13),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 18),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 18),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 17),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 17),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 13),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 16),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 16),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 9),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(163),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 2, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 2, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 7),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_directive, 2, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 8),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 11),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 21),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 3, .production_id = 6),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 12),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [511] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 21),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 11),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 6),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 12),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hledger_external_scanner_create(void);
void tree_sitter_hledger_external_scanner_destroy(void *);
bool tree_sitter_hledger_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hledger_external_scanner_serialize(void *, char *);
void tree_sitter_hledger_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hledger(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hledger_external_scanner_create,
      tree_sitter_hledger_external_scanner_destroy,
      tree_sitter_hledger_external_scanner_scan,
      tree_sitter_hledger_external_scanner_serialize,
      tree_sitter_hledger_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
