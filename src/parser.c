#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 39

enum {
  anon_sym_comment = 1,
  aux_sym__comment_block_token1 = 2,
  anon_sym_endcomment = 3,
  sym__comment_inline = 4,
  anon_sym_account = 5,
  anon_sym_commodity = 6,
  aux_sym_commodity_directive_token1 = 7,
  anon_sym_include = 8,
  anon_sym_payee = 9,
  anon_sym_tag = 10,
  sym_date = 11,
  sym_status = 12,
  sym_sign = 13,
  anon_sym_LPAREN = 14,
  aux_sym_code_token1 = 15,
  anon_sym_RPAREN = 16,
  sym_description = 17,
  anon_sym_EQ = 18,
  sym_account = 19,
  aux_sym_amount_token1 = 20,
  aux_sym_commodity_token1 = 21,
  aux_sym_commodity_token2 = 22,
  aux_sym_commodity_token3 = 23,
  sym_quantity = 24,
  sym_file_path = 25,
  sym_payee_name = 26,
  sym_tag_name = 27,
  sym_indent = 28,
  sym_dedent = 29,
  sym__newline = 30,
  sym_source_file = 31,
  sym__item = 32,
  sym__blank_line = 33,
  sym_comment = 34,
  sym__comment_line = 35,
  sym__comment_block = 36,
  sym_transaction = 37,
  sym_transaction_header = 38,
  sym_posting = 39,
  sym__directive = 40,
  sym_account_directive = 41,
  sym_commodity_directive = 42,
  sym_include_directive = 43,
  sym_payee_directive = 44,
  sym_tag_directive = 45,
  sym_code = 46,
  sym_effective_date = 47,
  sym_amount = 48,
  sym_commodity = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym__comment_block_repeat1 = 51,
  aux_sym_transaction_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_comment] = "comment",
  [aux_sym__comment_block_token1] = "_comment_block_token1",
  [anon_sym_endcomment] = "end comment",
  [sym__comment_inline] = "_comment_inline",
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
  [sym_tag_name] = "tag_name",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym__blank_line] = "_blank_line",
  [sym_comment] = "comment",
  [sym__comment_line] = "_comment_line",
  [sym__comment_block] = "_comment_block",
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
  [sym_effective_date] = "effective_date",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__comment_block_repeat1] = "_comment_block_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym__comment_block_token1] = aux_sym__comment_block_token1,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [sym__comment_inline] = sym__comment_inline,
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
  [sym_tag_name] = sym_tag_name,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym__blank_line] = sym__blank_line,
  [sym_comment] = sym_comment,
  [sym__comment_line] = sym__comment_line,
  [sym__comment_block] = sym__comment_block,
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
  [sym_effective_date] = sym_effective_date,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__comment_block_repeat1] = aux_sym__comment_block_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [sym__comment_inline] = {
    .visible = false,
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
  [sym_tag_name] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_line] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_block] = {
    .visible = false,
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
  [sym_effective_date] = {
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
  [aux_sym__comment_block_repeat1] = {
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
  field_effective_date = 7,
  field_name = 8,
  field_path = 9,
  field_quantity = 10,
  field_sign = 11,
  field_status = 12,
  field_symbol = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_code] = "code",
  [field_commodity] = "commodity",
  [field_date] = "date",
  [field_description] = "description",
  [field_effective_date] = "effective_date",
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
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 7, .length = 2},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 13, .length = 3},
  [17] = {.index = 24, .length = 4},
  [18] = {.index = 16, .length = 3},
  [19] = {.index = 28, .length = 4},
  [20] = {.index = 19, .length = 3},
  [21] = {.index = 32, .length = 4},
  [22] = {.index = 22, .length = 1},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 2},
  [27] = {.index = 24, .length = 4},
  [28] = {.index = 28, .length = 4},
  [29] = {.index = 44, .length = 5},
  [30] = {.index = 32, .length = 4},
  [31] = {.index = 49, .length = 3},
  [32] = {.index = 52, .length = 3},
  [33] = {.index = 55, .length = 2},
  [34] = {.index = 40, .length = 2},
  [35] = {.index = 57, .length = 2},
  [36] = {.index = 44, .length = 5},
  [37] = {.index = 59, .length = 3},
  [38] = {.index = 62, .length = 3},
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
    {field_date, 0},
    {field_description, 2},
    {field_effective_date, 1},
  [22] =
    {field_account, 0},
  [23] =
    {field_quantity, 0},
  [24] =
    {field_code, 2},
    {field_date, 0},
    {field_description, 3},
    {field_status, 1},
  [28] =
    {field_date, 0},
    {field_description, 3},
    {field_effective_date, 1},
    {field_status, 2},
  [32] =
    {field_code, 2},
    {field_date, 0},
    {field_description, 3},
    {field_effective_date, 1},
  [36] =
    {field_quantity, 1},
    {field_sign, 0},
  [38] =
    {field_commodity, 1},
    {field_quantity, 0},
  [40] =
    {field_account, 0},
    {field_amount, 1},
  [42] =
    {field_commodity, 0},
    {field_quantity, 1},
  [44] =
    {field_code, 3},
    {field_date, 0},
    {field_description, 4},
    {field_effective_date, 1},
    {field_status, 2},
  [49] =
    {field_commodity, 2},
    {field_quantity, 1},
    {field_sign, 0},
  [52] =
    {field_commodity, 1},
    {field_quantity, 2},
    {field_sign, 0},
  [55] =
    {field_commodity, 2},
    {field_quantity, 0},
  [57] =
    {field_commodity, 0},
    {field_quantity, 2},
  [59] =
    {field_commodity, 3},
    {field_quantity, 1},
    {field_sign, 0},
  [62] =
    {field_commodity, 1},
    {field_quantity, 3},
    {field_sign, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [1] = sym_comment,
  },
  [11] = {
    [2] = sym_comment,
  },
  [16] = {
    [3] = sym_comment,
  },
  [18] = {
    [3] = sym_comment,
  },
  [20] = {
    [3] = sym_comment,
  },
  [22] = {
    [1] = sym_comment,
  },
  [27] = {
    [4] = sym_comment,
  },
  [28] = {
    [4] = sym_comment,
  },
  [30] = {
    [4] = sym_comment,
  },
  [34] = {
    [2] = sym_comment,
  },
  [36] = {
    [5] = sym_comment,
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
  [27] = 7,
  [28] = 10,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 5,
  [34] = 8,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 36,
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
  [63] = 24,
  [64] = 64,
  [65] = 24,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
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
  [121] = 94,
  [122] = 118,
  [123] = 110,
  [124] = 124,
  [125] = 125,
  [126] = 111,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(87);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(115);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 47:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(87);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(54);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(105);
      END_STATE();
    case 59:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__comment_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_endcomment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__comment_inline);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_commodity_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sign);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 61, .external_lex_state = 2},
  [2] = {.lex_state = 61, .external_lex_state = 2},
  [3] = {.lex_state = 61, .external_lex_state = 2},
  [4] = {.lex_state = 61, .external_lex_state = 2},
  [5] = {.lex_state = 61, .external_lex_state = 2},
  [6] = {.lex_state = 61, .external_lex_state = 2},
  [7] = {.lex_state = 61, .external_lex_state = 2},
  [8] = {.lex_state = 61, .external_lex_state = 2},
  [9] = {.lex_state = 61, .external_lex_state = 2},
  [10] = {.lex_state = 61, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 3},
  [12] = {.lex_state = 5, .external_lex_state = 3},
  [13] = {.lex_state = 48, .external_lex_state = 2},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 40, .external_lex_state = 2},
  [16] = {.lex_state = 40, .external_lex_state = 2},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 41, .external_lex_state = 2},
  [24] = {.lex_state = 41, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 3},
  [26] = {.lex_state = 5, .external_lex_state = 3},
  [27] = {.lex_state = 5, .external_lex_state = 3},
  [28] = {.lex_state = 5, .external_lex_state = 3},
  [29] = {.lex_state = 5, .external_lex_state = 3},
  [30] = {.lex_state = 5, .external_lex_state = 3},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 5, .external_lex_state = 3},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 68},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 48, .external_lex_state = 2},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 68},
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
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 43},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 4},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 47},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 48},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 47},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 47},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 47},
  [125] = {.lex_state = 61},
  [126] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__comment_inline] = ACTIONS(1),
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
    [sym_source_file] = STATE(76),
    [sym__item] = STATE(3),
    [sym__blank_line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__comment_line] = STATE(7),
    [sym__comment_block] = STATE(7),
    [sym_transaction] = STATE(3),
    [sym_transaction_header] = STATE(75),
    [sym__directive] = STATE(3),
    [sym_account_directive] = STATE(55),
    [sym_commodity_directive] = STATE(55),
    [sym_include_directive] = STATE(55),
    [sym_payee_directive] = STATE(55),
    [sym_tag_directive] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_comment] = ACTIONS(5),
    [sym__comment_inline] = ACTIONS(7),
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
  [0] = 14,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_comment,
    ACTIONS(28), 1,
      sym__comment_inline,
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
    STATE(75), 1,
      sym_transaction_header,
    STATE(7), 2,
      sym__comment_line,
      sym__comment_block,
    STATE(55), 5,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
    STATE(2), 6,
      sym__item,
      sym__blank_line,
      sym_comment,
      sym_transaction,
      sym__directive,
      aux_sym_source_file_repeat1,
  [53] = 14,
    ACTIONS(5), 1,
      anon_sym_comment,
    ACTIONS(7), 1,
      sym__comment_inline,
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
    STATE(75), 1,
      sym_transaction_header,
    STATE(7), 2,
      sym__comment_line,
      sym__comment_block,
    STATE(55), 5,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
    STATE(2), 6,
      sym__item,
      sym__blank_line,
      sym_comment,
      sym_transaction,
      sym__directive,
      aux_sym_source_file_repeat1,
  [106] = 1,
    ACTIONS(56), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [119] = 1,
    ACTIONS(58), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [132] = 1,
    ACTIONS(60), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [145] = 1,
    ACTIONS(62), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [158] = 1,
    ACTIONS(64), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [171] = 1,
    ACTIONS(66), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [184] = 1,
    ACTIONS(68), 10,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_comment,
      sym__comment_inline,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
  [197] = 6,
    ACTIONS(70), 1,
      anon_sym_comment,
    ACTIONS(73), 1,
      sym__comment_inline,
    ACTIONS(76), 1,
      sym_account,
    ACTIONS(79), 1,
      sym_dedent,
    STATE(27), 2,
      sym__comment_line,
      sym__comment_block,
    STATE(11), 3,
      sym_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [219] = 6,
    ACTIONS(81), 1,
      anon_sym_comment,
    ACTIONS(83), 1,
      sym__comment_inline,
    ACTIONS(85), 1,
      sym_account,
    ACTIONS(87), 1,
      sym_dedent,
    STATE(27), 2,
      sym__comment_line,
      sym__comment_block,
    STATE(11), 3,
      sym_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [241] = 8,
    ACTIONS(89), 1,
      sym__comment_inline,
    ACTIONS(91), 1,
      sym_sign,
    ACTIONS(93), 1,
      aux_sym_commodity_token1,
    ACTIONS(97), 1,
      sym_quantity,
    ACTIONS(99), 1,
      sym__newline,
    STATE(48), 1,
      sym_amount,
    STATE(73), 1,
      sym_commodity,
    ACTIONS(95), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [267] = 5,
    ACTIONS(81), 1,
      anon_sym_comment,
    ACTIONS(83), 1,
      sym__comment_inline,
    ACTIONS(85), 1,
      sym_account,
    STATE(27), 2,
      sym__comment_line,
      sym__comment_block,
    STATE(12), 3,
      sym_comment,
      sym_posting,
      aux_sym_transaction_repeat1,
  [286] = 5,
    ACTIONS(101), 1,
      sym__comment_inline,
    ACTIONS(103), 1,
      aux_sym_amount_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(105), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [304] = 5,
    ACTIONS(109), 1,
      sym__comment_inline,
    ACTIONS(111), 1,
      aux_sym_amount_token1,
    ACTIONS(113), 1,
      sym__newline,
    STATE(66), 1,
      sym_commodity,
    ACTIONS(105), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [322] = 6,
    ACTIONS(115), 1,
      sym_status,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_description,
    ACTIONS(121), 1,
      anon_sym_EQ,
    STATE(32), 1,
      sym_effective_date,
    STATE(124), 1,
      sym_code,
  [341] = 4,
    ACTIONS(123), 1,
      aux_sym_commodity_token1,
    ACTIONS(127), 1,
      sym_quantity,
    STATE(23), 1,
      sym_commodity,
    ACTIONS(125), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [355] = 3,
    ACTIONS(129), 1,
      aux_sym_commodity_directive_token1,
    STATE(57), 1,
      sym_commodity,
    ACTIONS(105), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [367] = 4,
    ACTIONS(93), 1,
      aux_sym_commodity_token1,
    ACTIONS(131), 1,
      sym_quantity,
    STATE(68), 1,
      sym_commodity,
    ACTIONS(95), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [381] = 3,
    ACTIONS(133), 1,
      aux_sym_commodity_token1,
    STATE(56), 1,
      sym_commodity,
    ACTIONS(105), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [392] = 3,
    ACTIONS(133), 1,
      aux_sym_commodity_token1,
    STATE(58), 1,
      sym_commodity,
    ACTIONS(105), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [403] = 4,
    ACTIONS(135), 1,
      sym__comment_inline,
    ACTIONS(137), 1,
      aux_sym_commodity_directive_token1,
    ACTIONS(139), 1,
      sym_quantity,
    ACTIONS(141), 1,
      sym__newline,
  [416] = 2,
    ACTIONS(143), 2,
      sym__comment_inline,
      sym_quantity,
    ACTIONS(145), 2,
      sym__newline,
      aux_sym_commodity_directive_token1,
  [425] = 2,
    ACTIONS(147), 2,
      anon_sym_comment,
      sym_account,
    ACTIONS(149), 2,
      sym_dedent,
      sym__comment_inline,
  [434] = 2,
    ACTIONS(151), 2,
      anon_sym_comment,
      sym_account,
    ACTIONS(153), 2,
      sym_dedent,
      sym__comment_inline,
  [443] = 2,
    ACTIONS(62), 2,
      sym_dedent,
      sym__comment_inline,
    ACTIONS(155), 2,
      anon_sym_comment,
      sym_account,
  [452] = 2,
    ACTIONS(68), 2,
      sym_dedent,
      sym__comment_inline,
    ACTIONS(157), 2,
      anon_sym_comment,
      sym_account,
  [461] = 2,
    ACTIONS(159), 2,
      anon_sym_comment,
      sym_account,
    ACTIONS(161), 2,
      sym_dedent,
      sym__comment_inline,
  [470] = 2,
    ACTIONS(163), 2,
      anon_sym_comment,
      sym_account,
    ACTIONS(165), 2,
      sym_dedent,
      sym__comment_inline,
  [479] = 3,
    ACTIONS(133), 1,
      aux_sym_commodity_token1,
    STATE(47), 1,
      sym_commodity,
    ACTIONS(105), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [490] = 4,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_status,
    ACTIONS(169), 1,
      sym_description,
    STATE(113), 1,
      sym_code,
  [503] = 2,
    ACTIONS(58), 2,
      sym_dedent,
      sym__comment_inline,
    ACTIONS(171), 2,
      anon_sym_comment,
      sym_account,
  [512] = 2,
    ACTIONS(64), 2,
      sym_dedent,
      sym__comment_inline,
    ACTIONS(173), 2,
      anon_sym_comment,
      sym_account,
  [521] = 3,
    ACTIONS(175), 1,
      aux_sym__comment_block_token1,
    ACTIONS(178), 1,
      anon_sym_endcomment,
    STATE(35), 1,
      aux_sym__comment_block_repeat1,
  [531] = 3,
    ACTIONS(180), 1,
      aux_sym__comment_block_token1,
    ACTIONS(182), 1,
      anon_sym_endcomment,
    STATE(35), 1,
      aux_sym__comment_block_repeat1,
  [541] = 1,
    ACTIONS(184), 3,
      sym_status,
      anon_sym_LPAREN,
      sym_description,
  [547] = 3,
    ACTIONS(180), 1,
      aux_sym__comment_block_token1,
    ACTIONS(186), 1,
      anon_sym_endcomment,
    STATE(36), 1,
      aux_sym__comment_block_repeat1,
  [557] = 2,
    ACTIONS(190), 1,
      sym_quantity,
    ACTIONS(188), 2,
      sym__newline,
      sym__comment_inline,
  [565] = 3,
    ACTIONS(180), 1,
      aux_sym__comment_block_token1,
    ACTIONS(192), 1,
      anon_sym_endcomment,
    STATE(42), 1,
      aux_sym__comment_block_repeat1,
  [575] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      sym_description,
    STATE(95), 1,
      sym_code,
  [585] = 3,
    ACTIONS(180), 1,
      aux_sym__comment_block_token1,
    ACTIONS(196), 1,
      anon_sym_endcomment,
    STATE(35), 1,
      aux_sym__comment_block_repeat1,
  [595] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_description,
    STATE(117), 1,
      sym_code,
  [605] = 2,
    ACTIONS(200), 1,
      sym__comment_inline,
    ACTIONS(202), 1,
      sym__newline,
  [612] = 1,
    ACTIONS(204), 2,
      sym__newline,
      sym__comment_inline,
  [617] = 1,
    ACTIONS(206), 2,
      sym__newline,
      sym__comment_inline,
  [622] = 1,
    ACTIONS(208), 2,
      sym__newline,
      sym__comment_inline,
  [627] = 2,
    ACTIONS(210), 1,
      sym__comment_inline,
    ACTIONS(212), 1,
      sym__newline,
  [634] = 2,
    ACTIONS(214), 1,
      sym__comment_inline,
    ACTIONS(216), 1,
      sym__newline,
  [641] = 1,
    ACTIONS(218), 2,
      sym__newline,
      sym__comment_inline,
  [646] = 1,
    ACTIONS(220), 2,
      sym__newline,
      sym__comment_inline,
  [651] = 1,
    ACTIONS(222), 2,
      sym__newline,
      sym__comment_inline,
  [656] = 1,
    ACTIONS(224), 2,
      sym__newline,
      sym__comment_inline,
  [661] = 1,
    ACTIONS(178), 2,
      aux_sym__comment_block_token1,
      anon_sym_endcomment,
  [666] = 2,
    ACTIONS(226), 1,
      sym__comment_inline,
    ACTIONS(228), 1,
      sym__newline,
  [673] = 1,
    ACTIONS(230), 2,
      sym__newline,
      sym__comment_inline,
  [678] = 1,
    ACTIONS(232), 2,
      sym__newline,
      sym__comment_inline,
  [683] = 1,
    ACTIONS(234), 2,
      sym__newline,
      sym__comment_inline,
  [688] = 2,
    ACTIONS(236), 1,
      sym__comment_inline,
    ACTIONS(238), 1,
      sym__newline,
  [695] = 1,
    ACTIONS(240), 2,
      sym__newline,
      sym__comment_inline,
  [700] = 1,
    ACTIONS(242), 2,
      sym__newline,
      sym__comment_inline,
  [705] = 2,
    ACTIONS(244), 1,
      sym__comment_inline,
    ACTIONS(246), 1,
      sym__newline,
  [712] = 1,
    ACTIONS(145), 2,
      sym__newline,
      sym__comment_inline,
  [717] = 1,
    ACTIONS(248), 2,
      sym__newline,
      sym__comment_inline,
  [722] = 2,
    ACTIONS(143), 1,
      sym_quantity,
    ACTIONS(145), 1,
      aux_sym_amount_token1,
  [729] = 1,
    ACTIONS(250), 2,
      sym__newline,
      sym__comment_inline,
  [734] = 2,
    ACTIONS(252), 1,
      sym__comment_inline,
    ACTIONS(254), 1,
      sym__newline,
  [741] = 2,
    ACTIONS(256), 1,
      aux_sym_amount_token1,
    ACTIONS(258), 1,
      sym_quantity,
  [748] = 2,
    ACTIONS(260), 1,
      sym__comment_inline,
    ACTIONS(262), 1,
      sym__newline,
  [755] = 2,
    ACTIONS(264), 1,
      sym__comment_inline,
    ACTIONS(266), 1,
      sym__newline,
  [762] = 2,
    ACTIONS(268), 1,
      sym__comment_inline,
    ACTIONS(270), 1,
      sym__newline,
  [769] = 1,
    ACTIONS(272), 2,
      sym__newline,
      sym__comment_inline,
  [774] = 2,
    ACTIONS(274), 1,
      aux_sym_amount_token1,
    ACTIONS(276), 1,
      sym_quantity,
  [781] = 1,
    ACTIONS(278), 2,
      sym__newline,
      sym__comment_inline,
  [786] = 1,
    ACTIONS(280), 1,
      sym_indent,
  [790] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [794] = 1,
    ACTIONS(284), 1,
      aux_sym_code_token1,
  [798] = 1,
    ACTIONS(286), 1,
      sym_tag_name,
  [802] = 1,
    ACTIONS(288), 1,
      sym_payee_name,
  [806] = 1,
    ACTIONS(290), 1,
      sym_file_path,
  [810] = 1,
    ACTIONS(292), 1,
      sym_indent,
  [814] = 1,
    ACTIONS(294), 1,
      sym_indent,
  [818] = 1,
    ACTIONS(296), 1,
      sym__newline,
  [822] = 1,
    ACTIONS(298), 1,
      sym_indent,
  [826] = 1,
    ACTIONS(300), 1,
      sym_indent,
  [830] = 1,
    ACTIONS(302), 1,
      sym__newline,
  [834] = 1,
    ACTIONS(304), 1,
      sym__newline,
  [838] = 1,
    ACTIONS(306), 1,
      sym_indent,
  [842] = 1,
    ACTIONS(308), 1,
      sym_indent,
  [846] = 1,
    ACTIONS(310), 1,
      sym__newline,
  [850] = 1,
    ACTIONS(312), 1,
      sym__newline,
  [854] = 1,
    ACTIONS(314), 1,
      sym_account,
  [858] = 1,
    ACTIONS(316), 1,
      sym_indent,
  [862] = 1,
    ACTIONS(318), 1,
      sym__newline,
  [866] = 1,
    ACTIONS(320), 1,
      sym_description,
  [870] = 1,
    ACTIONS(322), 1,
      sym__newline,
  [874] = 1,
    ACTIONS(324), 1,
      sym__newline,
  [878] = 1,
    ACTIONS(326), 1,
      sym_quantity,
  [882] = 1,
    ACTIONS(328), 1,
      sym_indent,
  [886] = 1,
    ACTIONS(330), 1,
      sym_indent,
  [890] = 1,
    ACTIONS(332), 1,
      sym_indent,
  [894] = 1,
    ACTIONS(334), 1,
      sym_indent,
  [898] = 1,
    ACTIONS(336), 1,
      sym__newline,
  [902] = 1,
    ACTIONS(338), 1,
      sym_indent,
  [906] = 1,
    ACTIONS(340), 1,
      sym_indent,
  [910] = 1,
    ACTIONS(342), 1,
      sym_description,
  [914] = 1,
    ACTIONS(344), 1,
      sym_quantity,
  [918] = 1,
    ACTIONS(346), 1,
      sym__newline,
  [922] = 1,
    ACTIONS(348), 1,
      sym_indent,
  [926] = 1,
    ACTIONS(350), 1,
      sym__newline,
  [930] = 1,
    ACTIONS(352), 1,
      sym__newline,
  [934] = 1,
    ACTIONS(354), 1,
      sym_indent,
  [938] = 1,
    ACTIONS(356), 1,
      sym_description,
  [942] = 1,
    ACTIONS(358), 1,
      sym__newline,
  [946] = 1,
    ACTIONS(360), 1,
      sym_indent,
  [950] = 1,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
  [954] = 1,
    ACTIONS(364), 1,
      sym_description,
  [958] = 1,
    ACTIONS(366), 1,
      sym__newline,
  [962] = 1,
    ACTIONS(368), 1,
      sym__newline,
  [966] = 1,
    ACTIONS(370), 1,
      sym__newline,
  [970] = 1,
    ACTIONS(372), 1,
      sym__newline,
  [974] = 1,
    ACTIONS(374), 1,
      sym__newline,
  [978] = 1,
    ACTIONS(376), 1,
      sym__newline,
  [982] = 1,
    ACTIONS(378), 1,
      sym_description,
  [986] = 1,
    ACTIONS(380), 1,
      sym_date,
  [990] = 1,
    ACTIONS(382), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 403,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 443,
  [SMALL_STATE(28)] = 452,
  [SMALL_STATE(29)] = 461,
  [SMALL_STATE(30)] = 470,
  [SMALL_STATE(31)] = 479,
  [SMALL_STATE(32)] = 490,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 512,
  [SMALL_STATE(35)] = 521,
  [SMALL_STATE(36)] = 531,
  [SMALL_STATE(37)] = 541,
  [SMALL_STATE(38)] = 547,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 565,
  [SMALL_STATE(41)] = 575,
  [SMALL_STATE(42)] = 585,
  [SMALL_STATE(43)] = 595,
  [SMALL_STATE(44)] = 605,
  [SMALL_STATE(45)] = 612,
  [SMALL_STATE(46)] = 617,
  [SMALL_STATE(47)] = 622,
  [SMALL_STATE(48)] = 627,
  [SMALL_STATE(49)] = 634,
  [SMALL_STATE(50)] = 641,
  [SMALL_STATE(51)] = 646,
  [SMALL_STATE(52)] = 651,
  [SMALL_STATE(53)] = 656,
  [SMALL_STATE(54)] = 661,
  [SMALL_STATE(55)] = 666,
  [SMALL_STATE(56)] = 673,
  [SMALL_STATE(57)] = 678,
  [SMALL_STATE(58)] = 683,
  [SMALL_STATE(59)] = 688,
  [SMALL_STATE(60)] = 695,
  [SMALL_STATE(61)] = 700,
  [SMALL_STATE(62)] = 705,
  [SMALL_STATE(63)] = 712,
  [SMALL_STATE(64)] = 717,
  [SMALL_STATE(65)] = 722,
  [SMALL_STATE(66)] = 729,
  [SMALL_STATE(67)] = 734,
  [SMALL_STATE(68)] = 741,
  [SMALL_STATE(69)] = 748,
  [SMALL_STATE(70)] = 755,
  [SMALL_STATE(71)] = 762,
  [SMALL_STATE(72)] = 769,
  [SMALL_STATE(73)] = 774,
  [SMALL_STATE(74)] = 781,
  [SMALL_STATE(75)] = 786,
  [SMALL_STATE(76)] = 790,
  [SMALL_STATE(77)] = 794,
  [SMALL_STATE(78)] = 798,
  [SMALL_STATE(79)] = 802,
  [SMALL_STATE(80)] = 806,
  [SMALL_STATE(81)] = 810,
  [SMALL_STATE(82)] = 814,
  [SMALL_STATE(83)] = 818,
  [SMALL_STATE(84)] = 822,
  [SMALL_STATE(85)] = 826,
  [SMALL_STATE(86)] = 830,
  [SMALL_STATE(87)] = 834,
  [SMALL_STATE(88)] = 838,
  [SMALL_STATE(89)] = 842,
  [SMALL_STATE(90)] = 846,
  [SMALL_STATE(91)] = 850,
  [SMALL_STATE(92)] = 854,
  [SMALL_STATE(93)] = 858,
  [SMALL_STATE(94)] = 862,
  [SMALL_STATE(95)] = 866,
  [SMALL_STATE(96)] = 870,
  [SMALL_STATE(97)] = 874,
  [SMALL_STATE(98)] = 878,
  [SMALL_STATE(99)] = 882,
  [SMALL_STATE(100)] = 886,
  [SMALL_STATE(101)] = 890,
  [SMALL_STATE(102)] = 894,
  [SMALL_STATE(103)] = 898,
  [SMALL_STATE(104)] = 902,
  [SMALL_STATE(105)] = 906,
  [SMALL_STATE(106)] = 910,
  [SMALL_STATE(107)] = 914,
  [SMALL_STATE(108)] = 918,
  [SMALL_STATE(109)] = 922,
  [SMALL_STATE(110)] = 926,
  [SMALL_STATE(111)] = 930,
  [SMALL_STATE(112)] = 934,
  [SMALL_STATE(113)] = 938,
  [SMALL_STATE(114)] = 942,
  [SMALL_STATE(115)] = 946,
  [SMALL_STATE(116)] = 950,
  [SMALL_STATE(117)] = 954,
  [SMALL_STATE(118)] = 958,
  [SMALL_STATE(119)] = 962,
  [SMALL_STATE(120)] = 966,
  [SMALL_STATE(121)] = 970,
  [SMALL_STATE(122)] = 974,
  [SMALL_STATE(123)] = 978,
  [SMALL_STATE(124)] = 982,
  [SMALL_STATE(125)] = 986,
  [SMALL_STATE(126)] = 990,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_block, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 3, .production_id = 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(126),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(121),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 23),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, .production_id = 15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, .production_id = 15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 2, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 14),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 22),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 22),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_line, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 25),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 25),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 34),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 34),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_block, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_block, 4),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_block_repeat1, 2), SHIFT_REPEAT(119),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_block_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 9),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 38),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 37),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 35),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 2, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 33),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 32),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 31),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 26),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 24),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 2, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_directive, 2, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 16),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 17),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 18),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 19),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 21),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 13),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 12),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 27),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 28),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 29),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 30),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 11),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 10),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 7, .production_id = 36),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 3, .production_id = 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
