#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 27

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
  anon_sym_account = 12,
  anon_sym_commodity = 13,
  aux_sym_commodity_directive_token1 = 14,
  anon_sym_include = 15,
  anon_sym_payee = 16,
  anon_sym_tag = 17,
  sym_date = 18,
  sym_status = 19,
  sym_sign = 20,
  anon_sym_LPAREN = 21,
  aux_sym_code_token1 = 22,
  anon_sym_RPAREN = 23,
  sym_description = 24,
  anon_sym_EQ = 25,
  sym_account = 26,
  aux_sym_amount_token1 = 27,
  aux_sym_commodity_token1 = 28,
  aux_sym_commodity_token2 = 29,
  aux_sym_commodity_token3 = 30,
  sym_quantity = 31,
  sym_file_path = 32,
  sym_payee_name = 33,
  sym_indent = 34,
  sym_dedent = 35,
  sym__newline = 36,
  sym_source_file = 37,
  sym__item = 38,
  sym__blank_line = 39,
  sym__comment = 40,
  sym_line_comment = 41,
  sym_block_comment = 42,
  sym_inline_comment = 43,
  sym_tag = 44,
  sym_transaction = 45,
  sym_transaction_header = 46,
  sym_posting = 47,
  sym__directive = 48,
  sym_account_directive = 49,
  sym_commodity_directive = 50,
  sym_include_directive = 51,
  sym_payee_directive = 52,
  sym_tag_directive = 53,
  sym_code = 54,
  sym_amount = 55,
  sym_commodity = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_block_comment_repeat1 = 58,
  aux_sym_inline_comment_repeat1 = 59,
  aux_sym_transaction_repeat1 = 60,
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
  [anon_sym_EQ] = "=",
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
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
  field_code = 3,
  field_commodity = 4,
  field_date = 5,
  field_description = 6,
  field_name = 7,
  field_path = 8,
  field_quantity = 9,
  field_sign = 10,
  field_status = 11,
  field_symbol = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_code] = "code",
  [field_commodity] = "commodity",
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
  [20] = {.index = 35, .length = 3},
  [21] = {.index = 38, .length = 3},
  [22] = {.index = 41, .length = 3},
  [23] = {.index = 44, .length = 2},
  [24] = {.index = 46, .length = 2},
  [25] = {.index = 48, .length = 3},
  [26] = {.index = 51, .length = 3},
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
    {field_amount, 1},
  [33] =
    {field_commodity, 0},
    {field_quantity, 1},
  [35] =
    {field_account, 1},
    {field_amount, 2},
    {field_status, 0},
  [38] =
    {field_commodity, 2},
    {field_quantity, 1},
    {field_sign, 0},
  [41] =
    {field_commodity, 1},
    {field_quantity, 2},
    {field_sign, 0},
  [44] =
    {field_commodity, 2},
    {field_quantity, 0},
  [46] =
    {field_commodity, 0},
    {field_quantity, 2},
  [48] =
    {field_commodity, 3},
    {field_quantity, 1},
    {field_sign, 0},
  [51] =
    {field_commodity, 1},
    {field_quantity, 3},
    {field_sign, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [19] = {
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
  [25] = 9,
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
  [69] = 27,
  [70] = 70,
  [71] = 27,
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
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(98);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(105);
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
          lookahead == 8364) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
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
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
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
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(94);
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
      if (lookahead == 'g') ADVANCE(96);
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
      if (lookahead == 't') ADVANCE(91);
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
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(102);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ':') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(98);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(106);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
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
          lookahead != ';') ADVANCE(106);
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
          lookahead == '*') ADVANCE(98);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '=') ADVANCE(105);
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
          lookahead == 8364) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
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
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_commodity_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_sign);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(122);
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
  [4] = {.lex_state = 65, .external_lex_state = 2},
  [5] = {.lex_state = 65, .external_lex_state = 2},
  [6] = {.lex_state = 50, .external_lex_state = 2},
  [7] = {.lex_state = 50, .external_lex_state = 2},
  [8] = {.lex_state = 65, .external_lex_state = 2},
  [9] = {.lex_state = 65, .external_lex_state = 2},
  [10] = {.lex_state = 65, .external_lex_state = 2},
  [11] = {.lex_state = 65, .external_lex_state = 2},
  [12] = {.lex_state = 49, .external_lex_state = 3},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 4, .external_lex_state = 2},
  [15] = {.lex_state = 49, .external_lex_state = 3},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 49, .external_lex_state = 3},
  [25] = {.lex_state = 49, .external_lex_state = 3},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 5, .external_lex_state = 2},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 49, .external_lex_state = 3},
  [30] = {.lex_state = 49, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 2},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 49, .external_lex_state = 3},
  [34] = {.lex_state = 49, .external_lex_state = 3},
  [35] = {.lex_state = 49, .external_lex_state = 3},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 49, .external_lex_state = 3},
  [39] = {.lex_state = 49, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 50, .external_lex_state = 2},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 64},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 4},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 50},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 44},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 48},
  [99] = {.lex_state = 50},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 46},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 47},
  [105] = {.lex_state = 47},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [sym_quantity] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym__item] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym__comment] = STATE(3),
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_transaction] = STATE(3),
    [sym_transaction_header] = STATE(74),
    [sym__directive] = STATE(3),
    [sym_account_directive] = STATE(48),
    [sym_commodity_directive] = STATE(48),
    [sym_include_directive] = STATE(48),
    [sym_payee_directive] = STATE(48),
    [sym_tag_directive] = STATE(48),
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
    STATE(74), 1,
      sym_transaction_header,
    STATE(48), 5,
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
    STATE(74), 1,
      sym_transaction_header,
    STATE(48), 5,
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
  [102] = 1,
    ACTIONS(56), 10,
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
  [115] = 1,
    ACTIONS(58), 10,
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
  [128] = 9,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      sym_sign,
    ACTIONS(64), 1,
      aux_sym_commodity_token1,
    ACTIONS(68), 1,
      sym_quantity,
    ACTIONS(70), 1,
      sym__newline,
    STATE(40), 1,
      sym_amount,
    STATE(70), 1,
      sym_commodity,
    STATE(81), 1,
      sym_inline_comment,
    ACTIONS(66), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [157] = 9,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      sym_sign,
    ACTIONS(64), 1,
      aux_sym_commodity_token1,
    ACTIONS(68), 1,
      sym_quantity,
    ACTIONS(72), 1,
      sym__newline,
    STATE(46), 1,
      sym_amount,
    STATE(70), 1,
      sym_commodity,
    STATE(82), 1,
      sym_inline_comment,
    ACTIONS(66), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [186] = 1,
    ACTIONS(74), 10,
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
  [199] = 1,
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
  [212] = 1,
    ACTIONS(78), 10,
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
  [225] = 1,
    ACTIONS(80), 10,
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
  [238] = 5,
    ACTIONS(82), 1,
      aux_sym_line_comment_token1,
    ACTIONS(84), 1,
      sym_status,
    ACTIONS(86), 1,
      sym_account,
    ACTIONS(88), 1,
      sym_dedent,
    STATE(15), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [256] = 5,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      aux_sym_amount_token1,
    ACTIONS(96), 1,
      sym__newline,
    STATE(63), 1,
      sym_commodity,
    ACTIONS(94), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [274] = 5,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      aux_sym_amount_token1,
    ACTIONS(102), 1,
      sym__newline,
    STATE(58), 1,
      sym_commodity,
    ACTIONS(94), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [292] = 5,
    ACTIONS(104), 1,
      aux_sym_line_comment_token1,
    ACTIONS(107), 1,
      sym_status,
    ACTIONS(110), 1,
      sym_account,
    ACTIONS(113), 1,
      sym_dedent,
    STATE(15), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [310] = 4,
    ACTIONS(117), 1,
      sym__word,
    ACTIONS(119), 1,
      sym__newline,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(19), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [325] = 4,
    ACTIONS(117), 1,
      sym__word,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(16), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [340] = 4,
    ACTIONS(82), 1,
      aux_sym_line_comment_token1,
    ACTIONS(84), 1,
      sym_status,
    ACTIONS(86), 1,
      sym_account,
    STATE(12), 3,
      sym_line_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [355] = 4,
    ACTIONS(128), 1,
      sym__word,
    ACTIONS(131), 1,
      sym__newline,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
    STATE(19), 2,
      sym_tag,
      aux_sym_inline_comment_repeat1,
  [370] = 4,
    ACTIONS(64), 1,
      aux_sym_commodity_token1,
    ACTIONS(133), 1,
      sym_quantity,
    STATE(65), 1,
      sym_commodity,
    ACTIONS(66), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [384] = 3,
    ACTIONS(135), 1,
      aux_sym_commodity_directive_token1,
    STATE(57), 1,
      sym_commodity,
    ACTIONS(94), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [396] = 2,
    ACTIONS(139), 1,
      anon_sym_COLON,
    ACTIONS(137), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
      sym__word,
  [406] = 4,
    ACTIONS(141), 1,
      aux_sym_commodity_token1,
    ACTIONS(145), 1,
      sym_quantity,
    STATE(26), 1,
      sym_commodity,
    ACTIONS(143), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [420] = 2,
    ACTIONS(149), 1,
      sym_account,
    ACTIONS(147), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [429] = 2,
    ACTIONS(151), 1,
      sym_account,
    ACTIONS(76), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [438] = 4,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      aux_sym_commodity_directive_token1,
    ACTIONS(157), 1,
      sym_quantity,
    ACTIONS(159), 1,
      sym__newline,
  [451] = 2,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      sym_quantity,
    ACTIONS(163), 2,
      sym__newline,
      aux_sym_commodity_directive_token1,
  [460] = 3,
    ACTIONS(165), 1,
      aux_sym_commodity_token1,
    STATE(54), 1,
      sym_commodity,
    ACTIONS(94), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [471] = 2,
    ACTIONS(169), 1,
      sym_account,
    ACTIONS(167), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [480] = 2,
    ACTIONS(173), 1,
      sym_account,
    ACTIONS(171), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [489] = 1,
    ACTIONS(175), 4,
      sym__newline,
      anon_sym_COMMA,
      aux_sym_inline_comment_token1,
      sym__word,
  [496] = 4,
    ACTIONS(177), 1,
      sym_status,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      sym_description,
    STATE(92), 1,
      sym_code,
  [509] = 2,
    ACTIONS(185), 1,
      sym_account,
    ACTIONS(183), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [518] = 2,
    ACTIONS(189), 1,
      sym_account,
    ACTIONS(187), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [527] = 2,
    ACTIONS(193), 1,
      sym_account,
    ACTIONS(191), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [536] = 3,
    ACTIONS(165), 1,
      aux_sym_commodity_token1,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(94), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [547] = 3,
    ACTIONS(165), 1,
      aux_sym_commodity_token1,
    STATE(55), 1,
      sym_commodity,
    ACTIONS(94), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [558] = 2,
    ACTIONS(197), 1,
      sym_account,
    ACTIONS(195), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [567] = 2,
    ACTIONS(201), 1,
      sym_account,
    ACTIONS(199), 3,
      sym_dedent,
      aux_sym_line_comment_token1,
      sym_status,
  [576] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      sym__newline,
    STATE(96), 1,
      sym_inline_comment,
  [586] = 3,
    ACTIONS(205), 1,
      aux_sym_block_comment_token1,
    ACTIONS(208), 1,
      anon_sym_endcomment,
    STATE(41), 1,
      aux_sym_block_comment_repeat1,
  [596] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      sym__newline,
    STATE(106), 1,
      sym_inline_comment,
  [606] = 2,
    ACTIONS(214), 1,
      sym_quantity,
    ACTIONS(212), 2,
      sym__newline,
      anon_sym_SEMI,
  [614] = 3,
    ACTIONS(216), 1,
      aux_sym_block_comment_token1,
    ACTIONS(218), 1,
      anon_sym_endcomment,
    STATE(41), 1,
      aux_sym_block_comment_repeat1,
  [624] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      sym__newline,
    STATE(100), 1,
      sym_inline_comment,
  [634] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      sym__newline,
    STATE(89), 1,
      sym_inline_comment,
  [644] = 3,
    ACTIONS(216), 1,
      aux_sym_block_comment_token1,
    ACTIONS(224), 1,
      anon_sym_endcomment,
    STATE(44), 1,
      aux_sym_block_comment_repeat1,
  [654] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      sym__newline,
    STATE(83), 1,
      sym_inline_comment,
  [664] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      sym__newline,
    STATE(78), 1,
      sym_inline_comment,
  [674] = 3,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      sym__newline,
    STATE(87), 1,
      sym_inline_comment,
  [684] = 3,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_description,
    STATE(80), 1,
      sym_code,
  [694] = 1,
    ACTIONS(234), 2,
      sym__newline,
      anon_sym_SEMI,
  [699] = 1,
    ACTIONS(208), 2,
      aux_sym_block_comment_token1,
      anon_sym_endcomment,
  [704] = 1,
    ACTIONS(236), 2,
      sym__newline,
      anon_sym_SEMI,
  [709] = 1,
    ACTIONS(238), 2,
      sym__newline,
      anon_sym_SEMI,
  [714] = 1,
    ACTIONS(240), 2,
      sym__newline,
      anon_sym_SEMI,
  [719] = 1,
    ACTIONS(242), 2,
      sym__newline,
      anon_sym_SEMI,
  [724] = 1,
    ACTIONS(244), 2,
      sym__newline,
      anon_sym_SEMI,
  [729] = 1,
    ACTIONS(246), 2,
      sym__newline,
      anon_sym_SEMI,
  [734] = 1,
    ACTIONS(248), 2,
      sym__newline,
      anon_sym_SEMI,
  [739] = 1,
    ACTIONS(250), 2,
      sym__newline,
      anon_sym_SEMI,
  [744] = 1,
    ACTIONS(252), 2,
      sym__newline,
      anon_sym_SEMI,
  [749] = 1,
    ACTIONS(254), 2,
      sym__newline,
      anon_sym_SEMI,
  [754] = 1,
    ACTIONS(256), 2,
      sym__newline,
      anon_sym_SEMI,
  [759] = 2,
    ACTIONS(258), 1,
      aux_sym_amount_token1,
    ACTIONS(260), 1,
      sym_quantity,
  [766] = 1,
    ACTIONS(262), 2,
      sym__newline,
      anon_sym_SEMI,
  [771] = 1,
    ACTIONS(264), 2,
      sym__newline,
      anon_sym_SEMI,
  [776] = 1,
    ACTIONS(266), 2,
      sym__newline,
      anon_sym_SEMI,
  [781] = 1,
    ACTIONS(163), 2,
      sym__newline,
      anon_sym_SEMI,
  [786] = 2,
    ACTIONS(268), 1,
      aux_sym_amount_token1,
    ACTIONS(270), 1,
      sym_quantity,
  [793] = 2,
    ACTIONS(161), 1,
      sym_quantity,
    ACTIONS(163), 1,
      aux_sym_amount_token1,
  [800] = 1,
    ACTIONS(272), 2,
      sym__newline,
      anon_sym_SEMI,
  [805] = 1,
    ACTIONS(274), 1,
      aux_sym_code_token1,
  [809] = 1,
    ACTIONS(276), 1,
      sym_indent,
  [813] = 1,
    ACTIONS(278), 1,
      aux_sym_tag_token1,
  [817] = 1,
    ACTIONS(280), 1,
      sym_indent,
  [821] = 1,
    ACTIONS(282), 1,
      sym_indent,
  [825] = 1,
    ACTIONS(284), 1,
      sym__newline,
  [829] = 1,
    ACTIONS(286), 1,
      sym_indent,
  [833] = 1,
    ACTIONS(288), 1,
      sym_description,
  [837] = 1,
    ACTIONS(290), 1,
      sym__newline,
  [841] = 1,
    ACTIONS(292), 1,
      sym__newline,
  [845] = 1,
    ACTIONS(294), 1,
      sym__newline,
  [849] = 1,
    ACTIONS(296), 1,
      sym__newline,
  [853] = 1,
    ACTIONS(298), 1,
      sym__newline,
  [857] = 1,
    ACTIONS(300), 1,
      sym__newline,
  [861] = 1,
    ACTIONS(302), 1,
      sym__newline,
  [865] = 1,
    ACTIONS(304), 1,
      sym_indent,
  [869] = 1,
    ACTIONS(306), 1,
      sym__newline,
  [873] = 1,
    ACTIONS(308), 1,
      sym_quantity,
  [877] = 1,
    ACTIONS(310), 1,
      sym_indent,
  [881] = 1,
    ACTIONS(312), 1,
      sym_description,
  [885] = 1,
    ACTIONS(314), 1,
      sym_indent,
  [889] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [893] = 1,
    ACTIONS(318), 1,
      sym_tag_name,
  [897] = 1,
    ACTIONS(320), 1,
      sym__newline,
  [901] = 1,
    ACTIONS(322), 1,
      sym_payee_name,
  [905] = 1,
    ACTIONS(324), 1,
      sym_description,
  [909] = 1,
    ACTIONS(326), 1,
      sym_quantity,
  [913] = 1,
    ACTIONS(328), 1,
      sym__newline,
  [917] = 1,
    ACTIONS(330), 1,
      sym_indent,
  [921] = 1,
    ACTIONS(332), 1,
      sym_file_path,
  [925] = 1,
    ACTIONS(334), 1,
      sym__newline,
  [929] = 1,
    ACTIONS(336), 1,
      sym_account,
  [933] = 1,
    ACTIONS(338), 1,
      sym_account,
  [937] = 1,
    ACTIONS(340), 1,
      sym__newline,
  [941] = 1,
    ACTIONS(342), 1,
      sym__newline,
  [945] = 1,
    ACTIONS(344), 1,
      sym_indent,
  [949] = 1,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [953] = 1,
    ACTIONS(348), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 212,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 256,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 292,
  [SMALL_STATE(16)] = 310,
  [SMALL_STATE(17)] = 325,
  [SMALL_STATE(18)] = 340,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 370,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 420,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 438,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 460,
  [SMALL_STATE(29)] = 471,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 496,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 518,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 536,
  [SMALL_STATE(37)] = 547,
  [SMALL_STATE(38)] = 558,
  [SMALL_STATE(39)] = 567,
  [SMALL_STATE(40)] = 576,
  [SMALL_STATE(41)] = 586,
  [SMALL_STATE(42)] = 596,
  [SMALL_STATE(43)] = 606,
  [SMALL_STATE(44)] = 614,
  [SMALL_STATE(45)] = 624,
  [SMALL_STATE(46)] = 634,
  [SMALL_STATE(47)] = 644,
  [SMALL_STATE(48)] = 654,
  [SMALL_STATE(49)] = 664,
  [SMALL_STATE(50)] = 674,
  [SMALL_STATE(51)] = 684,
  [SMALL_STATE(52)] = 694,
  [SMALL_STATE(53)] = 699,
  [SMALL_STATE(54)] = 704,
  [SMALL_STATE(55)] = 709,
  [SMALL_STATE(56)] = 714,
  [SMALL_STATE(57)] = 719,
  [SMALL_STATE(58)] = 724,
  [SMALL_STATE(59)] = 729,
  [SMALL_STATE(60)] = 734,
  [SMALL_STATE(61)] = 739,
  [SMALL_STATE(62)] = 744,
  [SMALL_STATE(63)] = 749,
  [SMALL_STATE(64)] = 754,
  [SMALL_STATE(65)] = 759,
  [SMALL_STATE(66)] = 766,
  [SMALL_STATE(67)] = 771,
  [SMALL_STATE(68)] = 776,
  [SMALL_STATE(69)] = 781,
  [SMALL_STATE(70)] = 786,
  [SMALL_STATE(71)] = 793,
  [SMALL_STATE(72)] = 800,
  [SMALL_STATE(73)] = 805,
  [SMALL_STATE(74)] = 809,
  [SMALL_STATE(75)] = 813,
  [SMALL_STATE(76)] = 817,
  [SMALL_STATE(77)] = 821,
  [SMALL_STATE(78)] = 825,
  [SMALL_STATE(79)] = 829,
  [SMALL_STATE(80)] = 833,
  [SMALL_STATE(81)] = 837,
  [SMALL_STATE(82)] = 841,
  [SMALL_STATE(83)] = 845,
  [SMALL_STATE(84)] = 849,
  [SMALL_STATE(85)] = 853,
  [SMALL_STATE(86)] = 857,
  [SMALL_STATE(87)] = 861,
  [SMALL_STATE(88)] = 865,
  [SMALL_STATE(89)] = 869,
  [SMALL_STATE(90)] = 873,
  [SMALL_STATE(91)] = 877,
  [SMALL_STATE(92)] = 881,
  [SMALL_STATE(93)] = 885,
  [SMALL_STATE(94)] = 889,
  [SMALL_STATE(95)] = 893,
  [SMALL_STATE(96)] = 897,
  [SMALL_STATE(97)] = 901,
  [SMALL_STATE(98)] = 905,
  [SMALL_STATE(99)] = 909,
  [SMALL_STATE(100)] = 913,
  [SMALL_STATE(101)] = 917,
  [SMALL_STATE(102)] = 921,
  [SMALL_STATE(103)] = 925,
  [SMALL_STATE(104)] = 929,
  [SMALL_STATE(105)] = 933,
  [SMALL_STATE(106)] = 937,
  [SMALL_STATE(107)] = 941,
  [SMALL_STATE(108)] = 945,
  [SMALL_STATE(109)] = 949,
  [SMALL_STATE(110)] = 953,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, .production_id = 12),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, .production_id = 12),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 15),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 15),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(110),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(105),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 1),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(19),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2), SHIFT_REPEAT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_comment_repeat1, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 11),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 17),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 17),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 19),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 14),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 14),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 11),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 20),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 20),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 17),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 17),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 20),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 20),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(84),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 22),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 23),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 8),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 21),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 24),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 18),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 25),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 26),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 16),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_directive, 2, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 2, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 13),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 10),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 10),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 13),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 9),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 3, .production_id = 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
