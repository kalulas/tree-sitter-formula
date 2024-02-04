#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_var_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  sym_identifier = 8,
  sym_number = 9,
  sym_add = 10,
  sym_mul = 11,
  sym__comment = 12,
  sym_formula = 13,
  sym_equation_definition = 14,
  sym__expression = 15,
  sym_equation_reference = 16,
  sym_binary_expression = 17,
  sym_parenthesized_expression = 18,
  sym_collection = 19,
  sym_variable = 20,
  sym_variable_default = 21,
  sym_const = 22,
  sym_range = 23,
  aux_sym_formula_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_var_COLON] = "var:",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_add] = "add",
  [sym_mul] = "mul",
  [sym__comment] = "_comment",
  [sym_formula] = "formula",
  [sym_equation_definition] = "equation_definition",
  [sym__expression] = "_expression",
  [sym_equation_reference] = "equation_reference",
  [sym_binary_expression] = "binary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_collection] = "collection",
  [sym_variable] = "variable",
  [sym_variable_default] = "variable_default",
  [sym_const] = "const",
  [sym_range] = "range",
  [aux_sym_formula_repeat1] = "formula_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_var_COLON] = anon_sym_var_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_add] = sym_add,
  [sym_mul] = sym_mul,
  [sym__comment] = sym__comment,
  [sym_formula] = sym_formula,
  [sym_equation_definition] = sym_equation_definition,
  [sym__expression] = sym__expression,
  [sym_equation_reference] = sym_equation_reference,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_collection] = sym_collection,
  [sym_variable] = sym_variable,
  [sym_variable_default] = sym_variable_default,
  [sym_const] = sym_const,
  [sym_range] = sym_range,
  [aux_sym_formula_repeat1] = aux_sym_formula_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_equation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_equation_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_default] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_formula_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_default = 1,
  field_expression = 2,
  field_identifier = 3,
  field_lower = 4,
  field_op = 5,
  field_range = 6,
  field_upper = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_expression] = "expression",
  [field_identifier] = "identifier",
  [field_lower] = "lower",
  [field_op] = "op",
  [field_range] = "range",
  [field_upper] = "upper",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_value, 0},
  [2] =
    {field_expression, 2},
    {field_identifier, 0},
  [4] =
    {field_identifier, 1},
  [5] =
    {field_expression, 3},
    {field_identifier, 0},
    {field_range, 1},
  [8] =
    {field_default, 2},
    {field_identifier, 1},
  [10] =
    {field_identifier, 1},
    {field_range, 2},
  [12] =
    {field_op, 1},
  [13] =
    {field_default, 2},
    {field_identifier, 1},
    {field_range, 3},
  [16] =
    {field_identifier, 0},
    {field_op, 2},
  [18] =
    {field_lower, 1},
    {field_upper, 3},
  [20] =
    {field_identifier, 0},
    {field_op, 2},
    {field_range, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'v') ADVANCE(6);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_var_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_mul);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_var_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [sym_mul] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_formula] = STATE(32),
    [sym_equation_definition] = STATE(22),
    [aux_sym_formula_repeat1] = STATE(22),
    [sym_identifier] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_var_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(15), 7,
      sym__expression,
      sym_equation_reference,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_collection,
      sym_variable,
      sym_const,
  [25] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_var_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(19), 7,
      sym__expression,
      sym_equation_reference,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_collection,
      sym_variable,
      sym_const,
  [50] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_var_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(20), 7,
      sym__expression,
      sym_equation_reference,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_collection,
      sym_variable,
      sym_const,
  [75] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_var_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(23), 7,
      sym__expression,
      sym_equation_reference,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_collection,
      sym_variable,
      sym_const,
  [100] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_var_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(25), 7,
      sym__expression,
      sym_equation_reference,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_collection,
      sym_variable,
      sym_const,
  [125] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_variable_default,
    STATE(18), 1,
      sym_range,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [148] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_range,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [165] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_range,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [182] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym_add,
      sym_mul,
  [194] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [208] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [220] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [231] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [242] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [253] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [264] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [275] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
      sym_mul,
  [286] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      sym_mul,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      sym_identifier,
      sym_add,
  [299] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      sym_mul,
    ACTIONS(49), 1,
      sym_add,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [313] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(21), 2,
      sym_equation_definition,
      aux_sym_formula_repeat1,
  [327] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_equation_definition,
      aux_sym_formula_repeat1,
  [341] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      sym_mul,
    ACTIONS(49), 1,
      sym_add,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [355] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(35), 1,
      sym_range,
  [368] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 1,
      sym_mul,
    ACTIONS(49), 1,
      sym_add,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
  [381] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(64), 2,
      sym_add,
      sym_mul,
  [389] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
  [396] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(68), 1,
      sym_number,
  [403] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(70), 1,
      sym_number,
  [410] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
  [417] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
  [424] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [431] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
  [438] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(80), 1,
      sym_identifier,
  [445] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(82), 1,
      anon_sym_EQ,
  [452] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(84), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 355,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 445,
  [SMALL_STATE(36)] = 452,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4, .production_id = 10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_default, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation_reference, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, .production_id = 11),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 1, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 5, .production_id = 12),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation_definition, 3, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formula_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formula_repeat1, 2), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation_definition, 4, .production_id = 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_formula(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
