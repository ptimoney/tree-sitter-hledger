#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 24

enum {
  anon_sym_account = 1,
  anon_sym_commodity = 2,
  anon_sym_include = 3,
  anon_sym_payee = 4,
  anon_sym_tag = 5,
  sym_date = 6,
  sym_status = 7,
  sym_sign = 8,
  anon_sym_LPAREN = 9,
  aux_sym_code_token1 = 10,
  anon_sym_RPAREN = 11,
  sym_description = 12,
  sym_comment = 13,
  anon_sym_EQ = 14,
  sym_account = 15,
  aux_sym_amount_token1 = 16,
  aux_sym_commodity_token1 = 17,
  aux_sym_commodity_token2 = 18,
  aux_sym_commodity_token3 = 19,
  sym_quantity = 20,
  sym_file_path = 21,
  sym_payee_name = 22,
  sym_tag_name = 23,
  sym_indent = 24,
  sym_dedent = 25,
  sym__newline = 26,
  sym_source_file = 27,
  sym__item = 28,
  sym__blank_line = 29,
  sym_transaction = 30,
  sym_transaction_header = 31,
  sym_posting = 32,
  sym__directive = 33,
  sym_account_directive = 34,
  sym_commodity_directive = 35,
  sym_include_directive = 36,
  sym_payee_directive = 37,
  sym_tag_directive = 38,
  sym_code = 39,
  sym_comment_line = 40,
  sym_effective_date = 41,
  sym_amount = 42,
  sym_commodity = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_transaction_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_account] = "account",
  [anon_sym_commodity] = "commodity",
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
  [sym_comment] = "comment",
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
  [sym_comment_line] = "comment_line",
  [sym_effective_date] = "effective_date",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_commodity] = anon_sym_commodity,
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
  [sym_comment] = sym_comment,
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
  [sym_comment_line] = sym_comment_line,
  [sym_effective_date] = sym_effective_date,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym_comment] = {
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
  [sym_comment_line] = {
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
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 4},
  [11] = {.index = 20, .length = 4},
  [12] = {.index = 24, .length = 4},
  [13] = {.index = 28, .length = 2},
  [14] = {.index = 30, .length = 2},
  [15] = {.index = 32, .length = 2},
  [16] = {.index = 34, .length = 2},
  [17] = {.index = 36, .length = 5},
  [18] = {.index = 41, .length = 3},
  [19] = {.index = 44, .length = 3},
  [20] = {.index = 47, .length = 2},
  [21] = {.index = 49, .length = 2},
  [22] = {.index = 51, .length = 3},
  [23] = {.index = 54, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_symbol, 1},
  [2] =
    {field_path, 1},
  [3] =
    {field_date, 0},
    {field_description, 1},
  [5] =
    {field_date, 0},
    {field_description, 2},
    {field_status, 1},
  [8] =
    {field_code, 1},
    {field_date, 0},
    {field_description, 2},
  [11] =
    {field_date, 0},
    {field_description, 2},
    {field_effective_date, 1},
  [14] =
    {field_account, 0},
  [15] =
    {field_quantity, 0},
  [16] =
    {field_code, 2},
    {field_date, 0},
    {field_description, 3},
    {field_status, 1},
  [20] =
    {field_date, 0},
    {field_description, 3},
    {field_effective_date, 1},
    {field_status, 2},
  [24] =
    {field_code, 2},
    {field_date, 0},
    {field_description, 3},
    {field_effective_date, 1},
  [28] =
    {field_quantity, 1},
    {field_sign, 0},
  [30] =
    {field_commodity, 1},
    {field_quantity, 0},
  [32] =
    {field_account, 0},
    {field_amount, 1},
  [34] =
    {field_commodity, 0},
    {field_quantity, 1},
  [36] =
    {field_code, 3},
    {field_date, 0},
    {field_description, 4},
    {field_effective_date, 1},
    {field_status, 2},
  [41] =
    {field_commodity, 2},
    {field_quantity, 1},
    {field_sign, 0},
  [44] =
    {field_commodity, 1},
    {field_quantity, 2},
    {field_sign, 0},
  [47] =
    {field_commodity, 2},
    {field_quantity, 0},
  [49] =
    {field_commodity, 0},
    {field_quantity, 2},
  [51] =
    {field_commodity, 3},
    {field_quantity, 1},
    {field_sign, 0},
  [54] =
    {field_commodity, 1},
    {field_quantity, 3},
    {field_sign, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [52] = 52,
  [53] = 37,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(55);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(66);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == '!' ||
          lookahead == '*') ADVANCE(55);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == 163 ||
          lookahead == 165 ||
          lookahead == 8364) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(40);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 45:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(64);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_sign);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_amount_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          (',' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_payee_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 47, .external_lex_state = 2},
  [2] = {.lex_state = 47, .external_lex_state = 2},
  [3] = {.lex_state = 47, .external_lex_state = 2},
  [4] = {.lex_state = 34, .external_lex_state = 2},
  [5] = {.lex_state = 47, .external_lex_state = 2},
  [6] = {.lex_state = 47, .external_lex_state = 2},
  [7] = {.lex_state = 47, .external_lex_state = 2},
  [8] = {.lex_state = 47, .external_lex_state = 2},
  [9] = {.lex_state = 47, .external_lex_state = 2},
  [10] = {.lex_state = 47, .external_lex_state = 2},
  [11] = {.lex_state = 47, .external_lex_state = 2},
  [12] = {.lex_state = 47, .external_lex_state = 2},
  [13] = {.lex_state = 47, .external_lex_state = 2},
  [14] = {.lex_state = 47, .external_lex_state = 2},
  [15] = {.lex_state = 47, .external_lex_state = 2},
  [16] = {.lex_state = 27, .external_lex_state = 2},
  [17] = {.lex_state = 27, .external_lex_state = 2},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 28, .external_lex_state = 3},
  [20] = {.lex_state = 28, .external_lex_state = 3},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 28, .external_lex_state = 4},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 28, .external_lex_state = 3},
  [30] = {.lex_state = 28, .external_lex_state = 3},
  [31] = {.lex_state = 28, .external_lex_state = 3},
  [32] = {.lex_state = 28, .external_lex_state = 3},
  [33] = {.lex_state = 28, .external_lex_state = 3},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 0, .external_lex_state = 5},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 5},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 34},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 5},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 47},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 0, .external_lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 32},
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

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_dedent] = true,
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token_indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [sym_quantity] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym__item] = STATE(2),
    [sym__blank_line] = STATE(2),
    [sym_transaction] = STATE(2),
    [sym_transaction_header] = STATE(103),
    [sym__directive] = STATE(2),
    [sym_account_directive] = STATE(2),
    [sym_commodity_directive] = STATE(2),
    [sym_include_directive] = STATE(2),
    [sym_payee_directive] = STATE(2),
    [sym_tag_directive] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_account] = ACTIONS(5),
    [anon_sym_commodity] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_payee] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(13),
    [sym_date] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [sym__newline] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_account,
    ACTIONS(7), 1,
      anon_sym_commodity,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_payee,
    ACTIONS(13), 1,
      anon_sym_tag,
    ACTIONS(15), 1,
      sym_date,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_transaction_header,
    ACTIONS(21), 2,
      sym__newline,
      sym_comment,
    STATE(3), 10,
      sym__item,
      sym__blank_line,
      sym_transaction,
      sym__directive,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
      aux_sym_source_file_repeat1,
  [41] = 10,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_account,
    ACTIONS(28), 1,
      anon_sym_commodity,
    ACTIONS(31), 1,
      anon_sym_include,
    ACTIONS(34), 1,
      anon_sym_payee,
    ACTIONS(37), 1,
      anon_sym_tag,
    ACTIONS(40), 1,
      sym_date,
    STATE(103), 1,
      sym_transaction_header,
    ACTIONS(43), 2,
      sym__newline,
      sym_comment,
    STATE(3), 10,
      sym__item,
      sym__blank_line,
      sym_transaction,
      sym__directive,
      sym_account_directive,
      sym_commodity_directive,
      sym_include_directive,
      sym_payee_directive,
      sym_tag_directive,
      aux_sym_source_file_repeat1,
  [82] = 8,
    ACTIONS(46), 1,
      sym_sign,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym_commodity_token1,
    ACTIONS(54), 1,
      sym_quantity,
    ACTIONS(56), 1,
      sym__newline,
    STATE(46), 1,
      sym_amount,
    STATE(54), 1,
      sym_commodity,
    ACTIONS(52), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [108] = 1,
    ACTIONS(58), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [120] = 1,
    ACTIONS(60), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [132] = 1,
    ACTIONS(62), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [144] = 1,
    ACTIONS(64), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [156] = 1,
    ACTIONS(66), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [168] = 1,
    ACTIONS(68), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [180] = 1,
    ACTIONS(70), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [192] = 1,
    ACTIONS(72), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [204] = 1,
    ACTIONS(74), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [216] = 1,
    ACTIONS(76), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [228] = 1,
    ACTIONS(78), 9,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_payee,
      anon_sym_tag,
      sym_date,
      sym_comment,
  [240] = 5,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_amount_token1,
    ACTIONS(86), 1,
      sym__newline,
    STATE(52), 1,
      sym_commodity,
    ACTIONS(84), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [258] = 5,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_amount_token1,
    ACTIONS(92), 1,
      sym__newline,
    STATE(59), 1,
      sym_commodity,
    ACTIONS(84), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [276] = 6,
    ACTIONS(94), 1,
      sym_status,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym_description,
    ACTIONS(100), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_effective_date,
    STATE(99), 1,
      sym_code,
  [295] = 4,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_account,
    ACTIONS(106), 1,
      sym_dedent,
    STATE(20), 3,
      sym_posting,
      sym_comment_line,
      aux_sym_transaction_repeat1,
  [310] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_account,
    ACTIONS(114), 1,
      sym_dedent,
    STATE(20), 3,
      sym_posting,
      sym_comment_line,
      aux_sym_transaction_repeat1,
  [325] = 4,
    ACTIONS(50), 1,
      aux_sym_commodity_token1,
    ACTIONS(116), 1,
      sym_quantity,
    STATE(38), 1,
      sym_commodity,
    ACTIONS(52), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [339] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_account,
    STATE(19), 3,
      sym_posting,
      sym_comment_line,
      aux_sym_transaction_repeat1,
  [351] = 3,
    ACTIONS(118), 1,
      aux_sym_commodity_token1,
    STATE(61), 1,
      sym_commodity,
    ACTIONS(84), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [362] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      sym_status,
    ACTIONS(122), 1,
      sym_description,
    STATE(73), 1,
      sym_code,
  [375] = 2,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(124), 3,
      sym_dedent,
      sym_comment,
      sym_account,
  [384] = 3,
    ACTIONS(118), 1,
      aux_sym_commodity_token1,
    STATE(48), 1,
      sym_commodity,
    ACTIONS(84), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [395] = 3,
    ACTIONS(118), 1,
      aux_sym_commodity_token1,
    STATE(51), 1,
      sym_commodity,
    ACTIONS(84), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [406] = 1,
    ACTIONS(128), 3,
      sym_status,
      anon_sym_LPAREN,
      sym_description,
  [412] = 1,
    ACTIONS(130), 3,
      sym_dedent,
      sym_comment,
      sym_account,
  [418] = 1,
    ACTIONS(132), 3,
      sym_dedent,
      sym_comment,
      sym_account,
  [424] = 1,
    ACTIONS(134), 3,
      sym_dedent,
      sym_comment,
      sym_account,
  [430] = 1,
    ACTIONS(136), 3,
      sym_dedent,
      sym_comment,
      sym_account,
  [436] = 1,
    ACTIONS(138), 3,
      sym_dedent,
      sym_comment,
      sym_account,
  [442] = 3,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      sym_description,
    STATE(69), 1,
      sym_code,
  [452] = 3,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      sym_description,
    STATE(86), 1,
      sym_code,
  [462] = 2,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__newline,
  [469] = 1,
    ACTIONS(148), 2,
      sym__newline,
      sym_comment,
  [474] = 2,
    ACTIONS(150), 1,
      aux_sym_amount_token1,
    ACTIONS(152), 1,
      sym_quantity,
  [481] = 1,
    ACTIONS(154), 2,
      sym__newline,
      sym_comment,
  [486] = 2,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__newline,
  [493] = 2,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__newline,
  [500] = 1,
    ACTIONS(164), 2,
      sym__newline,
      sym_comment,
  [505] = 2,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__newline,
  [512] = 2,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__newline,
  [519] = 2,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym__newline,
  [526] = 2,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__newline,
  [533] = 2,
    ACTIONS(182), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__newline,
  [540] = 2,
    ACTIONS(186), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym__newline,
  [547] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__newline,
  [554] = 2,
    ACTIONS(194), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__newline,
  [561] = 1,
    ACTIONS(198), 2,
      sym__newline,
      sym_comment,
  [566] = 1,
    ACTIONS(200), 2,
      sym__newline,
      sym_comment,
  [571] = 2,
    ACTIONS(148), 1,
      aux_sym_amount_token1,
    ACTIONS(202), 1,
      sym_quantity,
  [578] = 2,
    ACTIONS(204), 1,
      aux_sym_amount_token1,
    ACTIONS(206), 1,
      sym_quantity,
  [585] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__newline,
  [592] = 2,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym__newline,
  [599] = 2,
    ACTIONS(216), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__newline,
  [606] = 1,
    ACTIONS(220), 2,
      sym__newline,
      sym_comment,
  [611] = 1,
    ACTIONS(222), 2,
      sym__newline,
      sym_comment,
  [616] = 1,
    ACTIONS(224), 2,
      sym__newline,
      sym_comment,
  [621] = 1,
    ACTIONS(226), 2,
      sym__newline,
      sym_comment,
  [626] = 1,
    ACTIONS(228), 1,
      sym_indent,
  [630] = 1,
    ACTIONS(230), 1,
      sym__newline,
  [634] = 1,
    ACTIONS(232), 1,
      sym_indent,
  [638] = 1,
    ACTIONS(234), 1,
      sym_indent,
  [642] = 1,
    ACTIONS(236), 1,
      sym__newline,
  [646] = 1,
    ACTIONS(238), 1,
      sym_description,
  [650] = 1,
    ACTIONS(240), 1,
      sym__newline,
  [654] = 1,
    ACTIONS(242), 1,
      sym_description,
  [658] = 1,
    ACTIONS(244), 1,
      sym_indent,
  [662] = 1,
    ACTIONS(246), 1,
      sym_account,
  [666] = 1,
    ACTIONS(248), 1,
      sym__newline,
  [670] = 1,
    ACTIONS(250), 1,
      sym_description,
  [674] = 1,
    ACTIONS(252), 1,
      sym_indent,
  [678] = 1,
    ACTIONS(254), 1,
      sym_indent,
  [682] = 1,
    ACTIONS(256), 1,
      sym__newline,
  [686] = 1,
    ACTIONS(258), 1,
      sym_indent,
  [690] = 1,
    ACTIONS(260), 1,
      sym_indent,
  [694] = 1,
    ACTIONS(262), 1,
      sym__newline,
  [698] = 1,
    ACTIONS(264), 1,
      sym__newline,
  [702] = 1,
    ACTIONS(266), 1,
      sym_indent,
  [706] = 1,
    ACTIONS(268), 1,
      sym_indent,
  [710] = 1,
    ACTIONS(270), 1,
      sym__newline,
  [714] = 1,
    ACTIONS(272), 1,
      sym_indent,
  [718] = 1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [722] = 1,
    ACTIONS(276), 1,
      sym_description,
  [726] = 1,
    ACTIONS(278), 1,
      sym__newline,
  [730] = 1,
    ACTIONS(280), 1,
      sym__newline,
  [734] = 1,
    ACTIONS(282), 1,
      sym__newline,
  [738] = 1,
    ACTIONS(284), 1,
      sym__newline,
  [742] = 1,
    ACTIONS(286), 1,
      sym_quantity,
  [746] = 1,
    ACTIONS(288), 1,
      sym__newline,
  [750] = 1,
    ACTIONS(290), 1,
      sym_indent,
  [754] = 1,
    ACTIONS(292), 1,
      sym_indent,
  [758] = 1,
    ACTIONS(294), 1,
      sym_indent,
  [762] = 1,
    ACTIONS(296), 1,
      sym__newline,
  [766] = 1,
    ACTIONS(298), 1,
      sym_indent,
  [770] = 1,
    ACTIONS(300), 1,
      sym__newline,
  [774] = 1,
    ACTIONS(302), 1,
      sym_description,
  [778] = 1,
    ACTIONS(304), 1,
      sym_quantity,
  [782] = 1,
    ACTIONS(306), 1,
      sym_date,
  [786] = 1,
    ACTIONS(308), 1,
      aux_sym_code_token1,
  [790] = 1,
    ACTIONS(310), 1,
      sym_indent,
  [794] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [798] = 1,
    ACTIONS(314), 1,
      sym_indent,
  [802] = 1,
    ACTIONS(316), 1,
      sym_tag_name,
  [806] = 1,
    ACTIONS(318), 1,
      sym_payee_name,
  [810] = 1,
    ACTIONS(320), 1,
      sym_file_path,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 216,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 362,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 418,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 430,
  [SMALL_STATE(33)] = 436,
  [SMALL_STATE(34)] = 442,
  [SMALL_STATE(35)] = 452,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 474,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 486,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 500,
  [SMALL_STATE(43)] = 505,
  [SMALL_STATE(44)] = 512,
  [SMALL_STATE(45)] = 519,
  [SMALL_STATE(46)] = 526,
  [SMALL_STATE(47)] = 533,
  [SMALL_STATE(48)] = 540,
  [SMALL_STATE(49)] = 547,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 561,
  [SMALL_STATE(52)] = 566,
  [SMALL_STATE(53)] = 571,
  [SMALL_STATE(54)] = 578,
  [SMALL_STATE(55)] = 585,
  [SMALL_STATE(56)] = 592,
  [SMALL_STATE(57)] = 599,
  [SMALL_STATE(58)] = 606,
  [SMALL_STATE(59)] = 611,
  [SMALL_STATE(60)] = 616,
  [SMALL_STATE(61)] = 621,
  [SMALL_STATE(62)] = 626,
  [SMALL_STATE(63)] = 630,
  [SMALL_STATE(64)] = 634,
  [SMALL_STATE(65)] = 638,
  [SMALL_STATE(66)] = 642,
  [SMALL_STATE(67)] = 646,
  [SMALL_STATE(68)] = 650,
  [SMALL_STATE(69)] = 654,
  [SMALL_STATE(70)] = 658,
  [SMALL_STATE(71)] = 662,
  [SMALL_STATE(72)] = 666,
  [SMALL_STATE(73)] = 670,
  [SMALL_STATE(74)] = 674,
  [SMALL_STATE(75)] = 678,
  [SMALL_STATE(76)] = 682,
  [SMALL_STATE(77)] = 686,
  [SMALL_STATE(78)] = 690,
  [SMALL_STATE(79)] = 694,
  [SMALL_STATE(80)] = 698,
  [SMALL_STATE(81)] = 702,
  [SMALL_STATE(82)] = 706,
  [SMALL_STATE(83)] = 710,
  [SMALL_STATE(84)] = 714,
  [SMALL_STATE(85)] = 718,
  [SMALL_STATE(86)] = 722,
  [SMALL_STATE(87)] = 726,
  [SMALL_STATE(88)] = 730,
  [SMALL_STATE(89)] = 734,
  [SMALL_STATE(90)] = 738,
  [SMALL_STATE(91)] = 742,
  [SMALL_STATE(92)] = 746,
  [SMALL_STATE(93)] = 750,
  [SMALL_STATE(94)] = 754,
  [SMALL_STATE(95)] = 758,
  [SMALL_STATE(96)] = 762,
  [SMALL_STATE(97)] = 766,
  [SMALL_STATE(98)] = 770,
  [SMALL_STATE(99)] = 774,
  [SMALL_STATE(100)] = 778,
  [SMALL_STATE(101)] = 782,
  [SMALL_STATE(102)] = 786,
  [SMALL_STATE(103)] = 790,
  [SMALL_STATE(104)] = 794,
  [SMALL_STATE(105)] = 798,
  [SMALL_STATE(106)] = 802,
  [SMALL_STATE(107)] = 806,
  [SMALL_STATE(108)] = 810,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_directive, 3, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_directive, 4, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 4, .production_id = 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, .production_id = 9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, .production_id = 13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(25),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 8),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 23),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 20),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 14),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, .production_id = 16),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 18),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, .production_id = 21),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4, .production_id = 22),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 6),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 4, .production_id = 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 10),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 11),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 5, .production_id = 12),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 3, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 10),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 11),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 17),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 6, .production_id = 12),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_header, 7, .production_id = 17),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
