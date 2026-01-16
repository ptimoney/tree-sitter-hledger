#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 39

enum {
  aux_sym_line_comment_token1 = 1,
  anon_sym_comment = 2,
  aux_sym_block_comment_token1 = 3,
  anon_sym_endcomment = 4,
  anon_sym_SEMI = 5,
  anon_sym_COMMA = 6,
  aux_sym_inline_comment_token1 = 7,
  sym__word = 8,
  anon_sym_COLON = 9,
  aux_sym_tag_token1 = 10,
  sym_tag_name = 11,
  anon_sym_AT = 12,
  anon_sym_AT_AT = 13,
  anon_sym_EQ = 14,
  anon_sym_account = 15,
  anon_sym_commodity = 16,
  aux_sym_commodity_directive_token1 = 17,
  anon_sym_include = 18,
  anon_sym_payee = 19,
  anon_sym_tag = 20,
  sym_date = 21,
  sym_status = 22,
  sym_sign = 23,
  anon_sym_LPAREN = 24,
  aux_sym_code_token1 = 25,
  anon_sym_RPAREN = 26,
  sym_description = 27,
  sym_account = 28,
  aux_sym_amount_token1 = 29,
  aux_sym_commodity_token1 = 30,
  aux_sym_commodity_token2 = 31,
  aux_sym_commodity_token3 = 32,
  sym_quantity = 33,
  sym_file_path = 34,
  sym_payee_name = 35,
  sym_indent = 36,
  sym_dedent = 37,
  sym__newline = 38,
  sym_source_file = 39,
  sym__item = 40,
  sym__blank_line = 41,
  sym__comment = 42,
  sym_line_comment = 43,
  sym_block_comment = 44,
  sym_inline_comment = 45,
  sym_tag = 46,
  sym_transaction = 47,
  sym_transaction_header = 48,
  sym_posting = 49,
  sym_cost = 50,
  sym_assertion = 51,
  sym__directive = 52,
  sym_account_directive = 53,
  sym_commodity_directive = 54,
  sym_include_directive = 55,
  sym_payee_directive = 56,
  sym_tag_directive = 57,
  sym_code = 58,
  sym_amount = 59,
  sym_commodity = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_block_comment_repeat1 = 62,
  aux_sym_inline_comment_repeat1 = 63,
  aux_sym_transaction_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_comment] = "comment",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_endcomment] = "end comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
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
  [sym_date] = "date",
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
  [aux_sym_commodity_token3] = "commodity_token3",
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
  [sym_date] = sym_date,
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
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
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
  [sym_date] = {
    .visible = true,
    .named = true,
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
  [aux_sym_commodity_token3] = {
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
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 4},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 3},
  [24] = {.index = 45, .length = 3},
  [25] = {.index = 48, .length = 3},
  [26] = {.index = 51, .length = 3},
  [27] = {.index = 54, .length = 2},
  [28] = {.index = 56, .length = 3},
  [29] = {.index = 59, .length = 3},
  [30] = {.index = 62, .length = 3},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 4},
  [33] = {.index = 71, .length = 4},
  [34] = {.index = 75, .length = 4},
  [35] = {.index = 79, .length = 3},
  [36] = {.index = 82, .length = 3},
  [37] = {.index = 85, .length = 4},
  [38] = {.index = 89, .length = 5},
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
    {field_date, 0},
    {field_description, 2},
    {field_status, 1},
  [16] =
    {field_code, 1},
    {field_date, 0},
    {field_description, 2},
  [19] =
    {field_account, 0},
  [20] =
    {field_quantity, 0},
  [21] =
    {field_code, 2},
    {field_date, 0},
    {field_description, 3},
    {field_status, 1},
  [25] =
    {field_account, 1},
    {field_status, 0},
  [27] =
    {field_quantity, 1},
    {field_sign, 0},
  [29] =
    {field_commodity, 1},
    {field_quantity, 0},
  [31] =
    {field_account, 0},
    {field_cost, 1},
  [33] =
    {field_account, 0},
    {field_assertion, 1},
  [35] =
    {field_account, 0},
    {field_amount, 1},
  [37] =
    {field_commodity, 0},
    {field_quantity, 1},
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
  [67] =
    {field_account, 1},
    {field_assertion, 3},
    {field_cost, 2},
    {field_status, 0},
  [71] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost, 3},
    {field_status, 0},
  [75] =
    {field_account, 1},
    {field_amount, 2},
    {field_assertion, 3},
    {field_status, 0},
  [79] =
    {field_commodity, 3},
    {field_quantity, 1},
    {field_sign, 0},
  [82] =
    {field_commodity, 1},
    {field_quantity, 3},
    {field_sign, 0},
  [85] =
    {field_account, 0},
    {field_amount, 1},
    {field_assertion, 3},
    {field_cost, 2},
  [89] =
    {field_account, 1},
    {field_amount, 2},
    {field_assertion, 4},
    {field_cost, 3},
    {field_status, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [21] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 33,
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
  [71] = 12,
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 33,
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
  [162] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(101);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(124);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(101);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(86);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      END_STATE();
    case 62:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(108);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(89);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(101);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_inline_comment_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_commodity_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_sign);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 65, .external_lex_state = 2},
  [2] = {.lex_state = 65, .external_lex_state = 2},
  [3] = {.lex_state = 65, .external_lex_state = 2},
  [4] = {.lex_state = 50, .external_lex_state = 2},
  [5] = {.lex_state = 50, .external_lex_state = 2},
  [6] = {.lex_state = 65, .external_lex_state = 2},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 65, .external_lex_state = 2},
  [9] = {.lex_state = 65, .external_lex_state = 2},
  [10] = {.lex_state = 65, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 65, .external_lex_state = 2},
  [13] = {.lex_state = 65, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 49, .external_lex_state = 3},
  [17] = {.lex_state = 49, .external_lex_state = 3},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 2, .external_lex_state = 2},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 49, .external_lex_state = 3},
  [42] = {.lex_state = 49, .external_lex_state = 3},
  [43] = {.lex_state = 49, .external_lex_state = 3},
  [44] = {.lex_state = 49, .external_lex_state = 3},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 49, .external_lex_state = 3},
  [47] = {.lex_state = 49, .external_lex_state = 3},
  [48] = {.lex_state = 49, .external_lex_state = 3},
  [49] = {.lex_state = 49, .external_lex_state = 3},
  [50] = {.lex_state = 49, .external_lex_state = 3},
  [51] = {.lex_state = 5, .external_lex_state = 2},
  [52] = {.lex_state = 5, .external_lex_state = 2},
  [53] = {.lex_state = 2, .external_lex_state = 2},
  [54] = {.lex_state = 49, .external_lex_state = 3},
  [55] = {.lex_state = 49, .external_lex_state = 3},
  [56] = {.lex_state = 49, .external_lex_state = 3},
  [57] = {.lex_state = 49, .external_lex_state = 3},
  [58] = {.lex_state = 49, .external_lex_state = 3},
  [59] = {.lex_state = 49, .external_lex_state = 3},
  [60] = {.lex_state = 49, .external_lex_state = 3},
  [61] = {.lex_state = 49, .external_lex_state = 3},
  [62] = {.lex_state = 49, .external_lex_state = 3},
  [63] = {.lex_state = 49, .external_lex_state = 3},
  [64] = {.lex_state = 49, .external_lex_state = 3},
  [65] = {.lex_state = 49, .external_lex_state = 3},
  [66] = {.lex_state = 49, .external_lex_state = 3},
  [67] = {.lex_state = 49, .external_lex_state = 3},
  [68] = {.lex_state = 49, .external_lex_state = 3},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 49, .external_lex_state = 3},
  [71] = {.lex_state = 49, .external_lex_state = 3},
  [72] = {.lex_state = 49, .external_lex_state = 3},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 49, .external_lex_state = 3},
  [75] = {.lex_state = 49, .external_lex_state = 3},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 49, .external_lex_state = 3},
  [78] = {.lex_state = 49, .external_lex_state = 3},
  [79] = {.lex_state = 49, .external_lex_state = 3},
  [80] = {.lex_state = 49, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 50, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 73},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 73},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 73},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 73},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 48},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 50},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 50},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 64},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 48},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 48},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 45},
  [158] = {.lex_state = 46},
  [159] = {.lex_state = 47},
  [160] = {.lex_state = 43},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_endcomment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_date] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_sign] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [sym_quantity] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(156),
    [sym__item] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_transaction] = STATE(3),
    [sym_transaction_header] = STATE(154),
    [sym__directive] = STATE(3),
    [sym_account_directive] = STATE(91),
    [sym_commodity_directive] = STATE(91),
    [sym_include_directive] = STATE(91),
    [sym_payee_directive] = STATE(91),
    [sym_tag_directive] = STATE(91),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_line_comment_token1] = ACTIONS(5),
    [anon_sym_comment] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_payee] = ACTIONS(15),
    [anon_sym_tag] = ACTIONS(17),
    [sym_date] = ACTIONS(19),
    [sym__newline] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_line_comment_token1,
    ACTIONS(28), 1,
      anon_sym_comment,
    ACTIONS(31), 1,
      anon_sym_account,
    ACTIONS(34), 1,
      anon_sym_commodity,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(40), 1,
      anon_sym_payee,
    ACTIONS(43), 1,
      anon_sym_tag,
    ACTIONS(46), 1,
      sym_date,
    ACTIONS(49), 1,
      sym__newline,
    STATE(154), 1,
      sym_transaction_header,
    STATE(91), 5,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
    STATE(2), 8,
      sym__item,
      sym__blank_line,
      sym__comment,
      sym_line_comment,
      sym_block_comment,
      sym_transaction,
      sym__directive,
      aux_sym_source_file_repeat1,
  [51] = 13,
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
    ACTIONS(19), 1,
      sym_date,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym__newline,
    STATE(154), 1,
      sym_transaction_header,
    STATE(91), 5,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
    STATE(2), 8,
      sym__item,
      sym__blank_line,
      sym__comment,
      sym_line_comment,
      sym_block_comment,
      sym_transaction,
      sym__directive,
      aux_sym_source_file_repeat1,
  [102] = 14,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      anon_sym_AT_AT,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      sym_sign,
    ACTIONS(66), 1,
      aux_sym_commodity_token1,
    ACTIONS(70), 1,
      sym_quantity,
    ACTIONS(72), 1,
      sym__newline,
    STATE(15), 1,
      sym_amount,
    STATE(35), 1,
      sym_cost,
    STATE(83), 1,
      sym_assertion,
    STATE(106), 1,
      sym_commodity,
    STATE(132), 1,
      sym_inline_comment,
    ACTIONS(68), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [146] = 14,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      anon_sym_AT_AT,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      sym_sign,
    ACTIONS(66), 1,
      aux_sym_commodity_token1,
    ACTIONS(70), 1,
      sym_quantity,
    ACTIONS(74), 1,
      sym__newline,
    STATE(14), 1,
      sym_amount,
    STATE(24), 1,
      sym_cost,
    STATE(84), 1,
      sym_assertion,
    STATE(106), 1,
      sym_commodity,
    STATE(125), 1,
      sym_inline_comment,
    ACTIONS(68), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [190] = 1,
    ACTIONS(76), 10,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [203] = 5,
    ACTIONS(80), 1,
      aux_sym_amount_token1,
    ACTIONS(84), 1,
      sym__newline,
    STATE(28), 1,
      sym_commodity,
    ACTIONS(82), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(78), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [224] = 1,
    ACTIONS(86), 10,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [237] = 1,
    ACTIONS(88), 10,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [250] = 1,
    ACTIONS(90), 10,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [263] = 5,
    ACTIONS(94), 1,
      aux_sym_amount_token1,
    ACTIONS(96), 1,
      sym__newline,
    STATE(32), 1,
      sym_commodity,
    ACTIONS(82), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(92), 4,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [284] = 1,
    ACTIONS(98), 10,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [297] = 1,
    ACTIONS(100), 10,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_line_comment_token1,
      anon_sym_comment,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [310] = 8,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      anon_sym_AT_AT,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      sym__newline,
    STATE(29), 1,
      sym_cost,
    STATE(90), 1,
      sym_assertion,
    STATE(116), 1,
      sym_inline_comment,
  [335] = 8,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      anon_sym_AT_AT,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      sym__newline,
    STATE(31), 1,
      sym_cost,
    STATE(82), 1,
      sym_assertion,
    STATE(122), 1,
      sym_inline_comment,
  [360] = 5,
    ACTIONS(106), 1,
      aux_sym_line_comment_token1,
    ACTIONS(109), 1,
      sym_status,
    ACTIONS(112), 1,
      sym_account,
    ACTIONS(115), 1,
      sym_dedent,
    STATE(16), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [378] = 5,
    ACTIONS(117), 1,
      aux_sym_line_comment_token1,
    ACTIONS(119), 1,
      sym_status,
    ACTIONS(121), 1,
      sym_account,
    ACTIONS(123), 1,
      sym_dedent,
    STATE(16), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [396] = 6,
    ACTIONS(64), 1,
      sym_sign,
    ACTIONS(66), 1,
      aux_sym_commodity_token1,
    ACTIONS(70), 1,
      sym_quantity,
    STATE(86), 1,
      sym_amount,
    STATE(106), 1,
      sym_commodity,
    ACTIONS(68), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [416] = 6,
    ACTIONS(64), 1,
      sym_sign,
    ACTIONS(66), 1,
      aux_sym_commodity_token1,
    ACTIONS(70), 1,
      sym_quantity,
    STATE(106), 1,
      sym_commodity,
    STATE(109), 1,
      sym_amount,
    ACTIONS(68), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [436] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(21), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [451] = 4,
    ACTIONS(134), 1,
      sym__word,
    ACTIONS(137), 1,
      sym__newline,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(21), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [466] = 4,
    ACTIONS(117), 1,
      aux_sym_line_comment_token1,
    ACTIONS(119), 1,
      sym_status,
    ACTIONS(121), 1,
      sym_account,
    STATE(17), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [481] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(141), 1,
      sym__newline,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(20), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [496] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      sym__newline,
    STATE(98), 1,
      sym_assertion,
    STATE(123), 1,
      sym_inline_comment,
  [512] = 2,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(145), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [522] = 2,
    ACTIONS(151), 1,
      anon_sym_AT,
    ACTIONS(149), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [532] = 2,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(153), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [542] = 2,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(157), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [552] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(161), 1,
      sym__newline,
    STATE(99), 1,
      sym_assertion,
    STATE(141), 1,
      sym_inline_comment,
  [568] = 2,
    ACTIONS(165), 1,
      anon_sym_AT,
    ACTIONS(163), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [578] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(167), 1,
      sym__newline,
    STATE(88), 1,
      sym_assertion,
    STATE(130), 1,
      sym_inline_comment,
  [594] = 2,
    ACTIONS(171), 1,
      anon_sym_AT,
    ACTIONS(169), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [604] = 2,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(173), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [614] = 4,
    ACTIONS(177), 1,
      aux_sym_commodity_token1,
    ACTIONS(181), 1,
      sym_quantity,
    STATE(51), 1,
      sym_commodity,
    ACTIONS(179), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [628] = 5,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      sym__newline,
    STATE(94), 1,
      sym_assertion,
    STATE(124), 1,
      sym_inline_comment,
  [644] = 2,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(185), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [654] = 4,
    ACTIONS(66), 1,
      aux_sym_commodity_token1,
    ACTIONS(189), 1,
      sym_quantity,
    STATE(104), 1,
      sym_commodity,
    ACTIONS(68), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [668] = 2,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(191), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
      sym__word,
  [678] = 3,
    ACTIONS(195), 1,
      aux_sym_commodity_directive_token1,
    STATE(112), 1,
      sym_commodity,
    ACTIONS(82), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [690] = 2,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(197), 4,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_EQ,
  [700] = 2,
    ACTIONS(203), 1,
      sym_account,
    ACTIONS(201), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [709] = 2,
    ACTIONS(207), 1,
      sym_account,
    ACTIONS(205), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [718] = 2,
    ACTIONS(211), 1,
      sym_account,
    ACTIONS(209), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [727] = 2,
    ACTIONS(215), 1,
      sym_account,
    ACTIONS(213), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [736] = 3,
    ACTIONS(217), 1,
      aux_sym_commodity_token1,
    STATE(36), 1,
      sym_commodity,
    ACTIONS(82), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [747] = 2,
    ACTIONS(221), 1,
      sym_account,
    ACTIONS(219), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [756] = 2,
    ACTIONS(225), 1,
      sym_account,
    ACTIONS(223), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [765] = 2,
    ACTIONS(229), 1,
      sym_account,
    ACTIONS(227), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [774] = 2,
    ACTIONS(233), 1,
      sym_account,
    ACTIONS(231), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [783] = 2,
    ACTIONS(237), 1,
      sym_account,
    ACTIONS(235), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [792] = 4,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      aux_sym_commodity_directive_token1,
    ACTIONS(243), 1,
      sym_quantity,
    ACTIONS(245), 1,
      sym__newline,
  [805] = 2,
    ACTIONS(173), 2,
      sym__newline,
      aux_sym_commodity_directive_token1,
    ACTIONS(175), 2,
      anon_sym_SEMI,
      sym_quantity,
  [814] = 1,
    ACTIONS(247), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
      sym__word,
  [821] = 2,
    ACTIONS(251), 1,
      sym_account,
    ACTIONS(249), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [830] = 2,
    ACTIONS(255), 1,
      sym_account,
    ACTIONS(253), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [839] = 2,
    ACTIONS(259), 1,
      sym_account,
    ACTIONS(257), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [848] = 2,
    ACTIONS(263), 1,
      sym_account,
    ACTIONS(261), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [857] = 2,
    ACTIONS(267), 1,
      sym_account,
    ACTIONS(265), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [866] = 2,
    ACTIONS(271), 1,
      sym_account,
    ACTIONS(269), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [875] = 2,
    ACTIONS(275), 1,
      sym_account,
    ACTIONS(273), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [884] = 2,
    ACTIONS(279), 1,
      sym_account,
    ACTIONS(277), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [893] = 2,
    ACTIONS(283), 1,
      sym_account,
    ACTIONS(281), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [902] = 2,
    ACTIONS(287), 1,
      sym_account,
    ACTIONS(285), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [911] = 2,
    ACTIONS(291), 1,
      sym_account,
    ACTIONS(289), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [920] = 2,
    ACTIONS(295), 1,
      sym_account,
    ACTIONS(293), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [929] = 2,
    ACTIONS(299), 1,
      sym_account,
    ACTIONS(297), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [938] = 2,
    ACTIONS(303), 1,
      sym_account,
    ACTIONS(301), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [947] = 2,
    ACTIONS(307), 1,
      sym_account,
    ACTIONS(305), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [956] = 3,
    ACTIONS(217), 1,
      aux_sym_commodity_token1,
    STATE(26), 1,
      sym_commodity,
    ACTIONS(82), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [967] = 2,
    ACTIONS(311), 1,
      sym_account,
    ACTIONS(309), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [976] = 2,
    ACTIONS(313), 1,
      sym_account,
    ACTIONS(98), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [985] = 2,
    ACTIONS(317), 1,
      sym_account,
    ACTIONS(315), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [994] = 4,
    ACTIONS(319), 1,
      sym_status,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      sym_description,
    STATE(152), 1,
      sym_code,
  [1007] = 2,
    ACTIONS(327), 1,
      sym_account,
    ACTIONS(325), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1016] = 2,
    ACTIONS(331), 1,
      sym_account,
    ACTIONS(329), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1025] = 3,
    ACTIONS(217), 1,
      aux_sym_commodity_token1,
    STATE(103), 1,
      sym_commodity,
    ACTIONS(82), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [1036] = 2,
    ACTIONS(335), 1,
      sym_account,
    ACTIONS(333), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1045] = 2,
    ACTIONS(339), 1,
      sym_account,
    ACTIONS(337), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1054] = 2,
    ACTIONS(343), 1,
      sym_account,
    ACTIONS(341), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1063] = 2,
    ACTIONS(347), 1,
      sym_account,
    ACTIONS(345), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [1072] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      sym__newline,
    STATE(139), 1,
      sym_inline_comment,
  [1082] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      sym__newline,
    STATE(133), 1,
      sym_inline_comment,
  [1092] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      sym__newline,
    STATE(118), 1,
      sym_inline_comment,
  [1102] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      sym__newline,
    STATE(114), 1,
      sym_inline_comment,
  [1112] = 3,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      sym_description,
    STATE(113), 1,
      sym_code,
  [1122] = 1,
    ACTIONS(359), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1128] = 2,
    ACTIONS(363), 1,
      sym_quantity,
    ACTIONS(361), 2,
      sym__newline,
      anon_sym_SEMI,
  [1136] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      sym__newline,
    STATE(150), 1,
      sym_inline_comment,
  [1146] = 3,
    ACTIONS(367), 1,
      aux_sym_block_comment_token1,
    ACTIONS(370), 1,
      anon_sym_endcomment,
    STATE(89), 1,
      aux_sym_block_comment_repeat1,
  [1156] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      sym__newline,
    STATE(144), 1,
      sym_inline_comment,
  [1166] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      sym__newline,
    STATE(151), 1,
      sym_inline_comment,
  [1176] = 3,
    ACTIONS(376), 1,
      aux_sym_block_comment_token1,
    ACTIONS(378), 1,
      anon_sym_endcomment,
    STATE(96), 1,
      aux_sym_block_comment_repeat1,
  [1186] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      sym__newline,
    STATE(120), 1,
      sym_inline_comment,
  [1196] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      sym__newline,
    STATE(126), 1,
      sym_inline_comment,
  [1206] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      sym__newline,
    STATE(145), 1,
      sym_inline_comment,
  [1216] = 3,
    ACTIONS(376), 1,
      aux_sym_block_comment_token1,
    ACTIONS(386), 1,
      anon_sym_endcomment,
    STATE(89), 1,
      aux_sym_block_comment_repeat1,
  [1226] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym__newline,
    STATE(134), 1,
      sym_inline_comment,
  [1236] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      sym__newline,
    STATE(137), 1,
      sym_inline_comment,
  [1246] = 3,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      sym__newline,
    STATE(155), 1,
      sym_inline_comment,
  [1256] = 1,
    ACTIONS(370), 2,
      aux_sym_block_comment_token1,
      anon_sym_endcomment,
  [1261] = 2,
    ACTIONS(173), 1,
      aux_sym_amount_token1,
    ACTIONS(175), 1,
      sym_quantity,
  [1268] = 1,
    ACTIONS(394), 2,
      sym__newline,
      anon_sym_SEMI,
  [1273] = 1,
    ACTIONS(396), 2,
      sym__newline,
      anon_sym_SEMI,
  [1278] = 2,
    ACTIONS(398), 1,
      aux_sym_amount_token1,
    ACTIONS(400), 1,
      sym_quantity,
  [1285] = 1,
    ACTIONS(402), 2,
      sym__newline,
      anon_sym_SEMI,
  [1290] = 2,
    ACTIONS(404), 1,
      aux_sym_amount_token1,
    ACTIONS(406), 1,
      sym_quantity,
  [1297] = 1,
    ACTIONS(408), 2,
      sym__newline,
      anon_sym_SEMI,
  [1302] = 1,
    ACTIONS(410), 2,
      sym__newline,
      anon_sym_SEMI,
  [1307] = 1,
    ACTIONS(412), 2,
      sym__newline,
      anon_sym_SEMI,
  [1312] = 1,
    ACTIONS(414), 2,
      sym__newline,
      anon_sym_SEMI,
  [1317] = 1,
    ACTIONS(416), 2,
      sym__newline,
      anon_sym_SEMI,
  [1322] = 1,
    ACTIONS(418), 2,
      sym__newline,
      anon_sym_SEMI,
  [1327] = 1,
    ACTIONS(420), 1,
      sym_description,
  [1331] = 1,
    ACTIONS(422), 1,
      sym__newline,
  [1335] = 1,
    ACTIONS(424), 1,
      sym_quantity,
  [1339] = 1,
    ACTIONS(426), 1,
      sym__newline,
  [1343] = 1,
    ACTIONS(428), 1,
      sym_indent,
  [1347] = 1,
    ACTIONS(430), 1,
      sym__newline,
  [1351] = 1,
    ACTIONS(432), 1,
      sym_indent,
  [1355] = 1,
    ACTIONS(434), 1,
      sym__newline,
  [1359] = 1,
    ACTIONS(436), 1,
      sym_quantity,
  [1363] = 1,
    ACTIONS(438), 1,
      sym__newline,
  [1367] = 1,
    ACTIONS(440), 1,
      sym__newline,
  [1371] = 1,
    ACTIONS(442), 1,
      sym__newline,
  [1375] = 1,
    ACTIONS(444), 1,
      sym__newline,
  [1379] = 1,
    ACTIONS(446), 1,
      sym__newline,
  [1383] = 1,
    ACTIONS(448), 1,
      sym__newline,
  [1387] = 1,
    ACTIONS(450), 1,
      sym_indent,
  [1391] = 1,
    ACTIONS(452), 1,
      sym_indent,
  [1395] = 1,
    ACTIONS(454), 1,
      sym__newline,
  [1399] = 1,
    ACTIONS(456), 1,
      aux_sym_tag_token1,
  [1403] = 1,
    ACTIONS(458), 1,
      sym__newline,
  [1407] = 1,
    ACTIONS(460), 1,
      sym__newline,
  [1411] = 1,
    ACTIONS(462), 1,
      sym__newline,
  [1415] = 1,
    ACTIONS(464), 1,
      sym_indent,
  [1419] = 1,
    ACTIONS(466), 1,
      sym_indent,
  [1423] = 1,
    ACTIONS(468), 1,
      sym__newline,
  [1427] = 1,
    ACTIONS(470), 1,
      sym_description,
  [1431] = 1,
    ACTIONS(472), 1,
      sym__newline,
  [1435] = 1,
    ACTIONS(474), 1,
      sym_indent,
  [1439] = 1,
    ACTIONS(476), 1,
      sym__newline,
  [1443] = 1,
    ACTIONS(478), 1,
      sym__newline,
  [1447] = 1,
    ACTIONS(480), 1,
      sym_account,
  [1451] = 1,
    ACTIONS(482), 1,
      sym__newline,
  [1455] = 1,
    ACTIONS(484), 1,
      sym__newline,
  [1459] = 1,
    ACTIONS(486), 1,
      sym_indent,
  [1463] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [1467] = 1,
    ACTIONS(490), 1,
      sym__newline,
  [1471] = 1,
    ACTIONS(492), 1,
      sym__newline,
  [1475] = 1,
    ACTIONS(494), 1,
      sym__newline,
  [1479] = 1,
    ACTIONS(496), 1,
      sym__newline,
  [1483] = 1,
    ACTIONS(498), 1,
      sym_description,
  [1487] = 1,
    ACTIONS(500), 1,
      aux_sym_code_token1,
  [1491] = 1,
    ACTIONS(502), 1,
      sym_indent,
  [1495] = 1,
    ACTIONS(504), 1,
      sym__newline,
  [1499] = 1,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
  [1503] = 1,
    ACTIONS(508), 1,
      sym_tag_name,
  [1507] = 1,
    ACTIONS(510), 1,
      sym_payee_name,
  [1511] = 1,
    ACTIONS(512), 1,
      sym_file_path,
  [1515] = 1,
    ACTIONS(514), 1,
      sym_account,
  [1519] = 1,
    ACTIONS(516), 1,
      sym__newline,
  [1523] = 1,
    ACTIONS(518), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 284,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 335,
  [SMALL_STATE(16)] = 360,
  [SMALL_STATE(17)] = 378,
  [SMALL_STATE(18)] = 396,
  [SMALL_STATE(19)] = 416,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 496,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 532,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 568,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 614,
  [SMALL_STATE(35)] = 628,
  [SMALL_STATE(36)] = 644,
  [SMALL_STATE(37)] = 654,
  [SMALL_STATE(38)] = 668,
  [SMALL_STATE(39)] = 678,
  [SMALL_STATE(40)] = 690,
  [SMALL_STATE(41)] = 700,
  [SMALL_STATE(42)] = 709,
  [SMALL_STATE(43)] = 718,
  [SMALL_STATE(44)] = 727,
  [SMALL_STATE(45)] = 736,
  [SMALL_STATE(46)] = 747,
  [SMALL_STATE(47)] = 756,
  [SMALL_STATE(48)] = 765,
  [SMALL_STATE(49)] = 774,
  [SMALL_STATE(50)] = 783,
  [SMALL_STATE(51)] = 792,
  [SMALL_STATE(52)] = 805,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 821,
  [SMALL_STATE(55)] = 830,
  [SMALL_STATE(56)] = 839,
  [SMALL_STATE(57)] = 848,
  [SMALL_STATE(58)] = 857,
  [SMALL_STATE(59)] = 866,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 884,
  [SMALL_STATE(62)] = 893,
  [SMALL_STATE(63)] = 902,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 920,
  [SMALL_STATE(66)] = 929,
  [SMALL_STATE(67)] = 938,
  [SMALL_STATE(68)] = 947,
  [SMALL_STATE(69)] = 956,
  [SMALL_STATE(70)] = 967,
  [SMALL_STATE(71)] = 976,
  [SMALL_STATE(72)] = 985,
  [SMALL_STATE(73)] = 994,
  [SMALL_STATE(74)] = 1007,
  [SMALL_STATE(75)] = 1016,
  [SMALL_STATE(76)] = 1025,
  [SMALL_STATE(77)] = 1036,
  [SMALL_STATE(78)] = 1045,
  [SMALL_STATE(79)] = 1054,
  [SMALL_STATE(80)] = 1063,
  [SMALL_STATE(81)] = 1072,
  [SMALL_STATE(82)] = 1082,
  [SMALL_STATE(83)] = 1092,
  [SMALL_STATE(84)] = 1102,
  [SMALL_STATE(85)] = 1112,
  [SMALL_STATE(86)] = 1122,
  [SMALL_STATE(87)] = 1128,
  [SMALL_STATE(88)] = 1136,
  [SMALL_STATE(89)] = 1146,
  [SMALL_STATE(90)] = 1156,
  [SMALL_STATE(91)] = 1166,
  [SMALL_STATE(92)] = 1176,
  [SMALL_STATE(93)] = 1186,
  [SMALL_STATE(94)] = 1196,
  [SMALL_STATE(95)] = 1206,
  [SMALL_STATE(96)] = 1216,
  [SMALL_STATE(97)] = 1226,
  [SMALL_STATE(98)] = 1236,
  [SMALL_STATE(99)] = 1246,
  [SMALL_STATE(100)] = 1256,
  [SMALL_STATE(101)] = 1261,
  [SMALL_STATE(102)] = 1268,
  [SMALL_STATE(103)] = 1273,
  [SMALL_STATE(104)] = 1278,
  [SMALL_STATE(105)] = 1285,
  [SMALL_STATE(106)] = 1290,
  [SMALL_STATE(107)] = 1297,
  [SMALL_STATE(108)] = 1302,
  [SMALL_STATE(109)] = 1307,
  [SMALL_STATE(110)] = 1312,
  [SMALL_STATE(111)] = 1317,
  [SMALL_STATE(112)] = 1322,
  [SMALL_STATE(113)] = 1327,
  [SMALL_STATE(114)] = 1331,
  [SMALL_STATE(115)] = 1335,
  [SMALL_STATE(116)] = 1339,
  [SMALL_STATE(117)] = 1343,
  [SMALL_STATE(118)] = 1347,
  [SMALL_STATE(119)] = 1351,
  [SMALL_STATE(120)] = 1355,
  [SMALL_STATE(121)] = 1359,
  [SMALL_STATE(122)] = 1363,
  [SMALL_STATE(123)] = 1367,
  [SMALL_STATE(124)] = 1371,
  [SMALL_STATE(125)] = 1375,
  [SMALL_STATE(126)] = 1379,
  [SMALL_STATE(127)] = 1383,
  [SMALL_STATE(128)] = 1387,
  [SMALL_STATE(129)] = 1391,
  [SMALL_STATE(130)] = 1395,
  [SMALL_STATE(131)] = 1399,
  [SMALL_STATE(132)] = 1403,
  [SMALL_STATE(133)] = 1407,
  [SMALL_STATE(134)] = 1411,
  [SMALL_STATE(135)] = 1415,
  [SMALL_STATE(136)] = 1419,
  [SMALL_STATE(137)] = 1423,
  [SMALL_STATE(138)] = 1427,
  [SMALL_STATE(139)] = 1431,
  [SMALL_STATE(140)] = 1435,
  [SMALL_STATE(141)] = 1439,
  [SMALL_STATE(142)] = 1443,
  [SMALL_STATE(143)] = 1447,
  [SMALL_STATE(144)] = 1451,
  [SMALL_STATE(145)] = 1455,
  [SMALL_STATE(146)] = 1459,
  [SMALL_STATE(147)] = 1463,
  [SMALL_STATE(148)] = 1467,
  [SMALL_STATE(149)] = 1471,
  [SMALL_STATE(150)] = 1475,
  [SMALL_STATE(151)] = 1479,
  [SMALL_STATE(152)] = 1483,
  [SMALL_STATE(153)] = 1487,
  [SMALL_STATE(154)] = 1491,
  [SMALL_STATE(155)] = 1495,
  [SMALL_STATE(156)] = 1499,
  [SMALL_STATE(157)] = 1503,
  [SMALL_STATE(158)] = 1507,
  [SMALL_STATE(159)] = 1511,
  [SMALL_STATE(160)] = 1515,
  [SMALL_STATE(161)] = 1519,
  [SMALL_STATE(162)] = 1523,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 15),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 15),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, .production_id = 12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, .production_id = 12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(162),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(143),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(21),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 36),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4, .production_id = 36),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 27),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 27),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 26),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 26),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 25),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 20),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 20),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 16),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 35),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4, .production_id = 35),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 31),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, .production_id = 31),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 38),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 37),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 37),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 17),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 17),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 32),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 32),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 24),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 24),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 34),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 34),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 23),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 23),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 22),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 22),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 14),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 14),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 21),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 30),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 30),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 33),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 33),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 37),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 37),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 19),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 19),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 18),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 18),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 24),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 24),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 23),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 23),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 17),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 17),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 32),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 32),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 22),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 22),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 30),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 30),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 11),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 29),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 29),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 33),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 33),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 28),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 28),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 14),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 14),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 34),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 34),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 38),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 38),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 18),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 18),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 19),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 19),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(149),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 2, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 7),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 8),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_directive, 2, .production_id = 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 2, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 10),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 13),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 9),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 10),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 9),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 3, .production_id = 6),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [506] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
