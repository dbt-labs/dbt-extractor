#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_SQUOTE = 3,
  aux_sym_lit_string_token1 = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_lit_string_token2 = 6,
  anon_sym_ref = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_source = 11,
  anon_sym_config = 12,
  sym_identifier = 13,
  anon_sym_EQ = 14,
  sym_text = 15,
  sym_source_file = 16,
  sym_jinja_block = 17,
  sym_expr = 18,
  sym_lit_string = 19,
  sym_dbt_jinja_ref = 20,
  sym_dbt_jinja_source = 21,
  sym_dbt_jinja_config = 22,
  sym_kwarg_expression = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_dbt_jinja_config_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_lit_string_token1] = "lit_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_lit_string_token2] = "lit_string_token2",
  [anon_sym_ref] = "ref",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_source] = "source",
  [anon_sym_config] = "config",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_jinja_block] = "jinja_block",
  [sym_expr] = "expr",
  [sym_lit_string] = "lit_string",
  [sym_dbt_jinja_ref] = "dbt_jinja_ref",
  [sym_dbt_jinja_source] = "dbt_jinja_source",
  [sym_dbt_jinja_config] = "dbt_jinja_config",
  [sym_kwarg_expression] = "kwarg_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dbt_jinja_config_repeat1] = "dbt_jinja_config_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_lit_string_token1] = aux_sym_lit_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_lit_string_token2] = aux_sym_lit_string_token2,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_config] = anon_sym_config,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_jinja_block] = sym_jinja_block,
  [sym_expr] = sym_expr,
  [sym_lit_string] = sym_lit_string,
  [sym_dbt_jinja_ref] = sym_dbt_jinja_ref,
  [sym_dbt_jinja_source] = sym_dbt_jinja_source,
  [sym_dbt_jinja_config] = sym_dbt_jinja_config,
  [sym_kwarg_expression] = sym_kwarg_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dbt_jinja_config_repeat1] = aux_sym_dbt_jinja_config_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_dbt_jinja_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_dbt_jinja_source] = {
    .visible = true,
    .named = true,
  },
  [sym_dbt_jinja_config] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dbt_jinja_config_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_dbt_model_name = 2,
  field_dbt_package_name = 3,
  field_dbt_source_name = 4,
  field_dbt_source_table = 5,
  field_value = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_dbt_model_name] = "dbt_model_name",
  [field_dbt_package_name] = "dbt_package_name",
  [field_dbt_source_name] = "dbt_source_name",
  [field_dbt_source_table] = "dbt_source_table",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_dbt_model_name, 2},
  [1] =
    {field_arg, 0},
    {field_value, 2},
  [3] =
    {field_dbt_model_name, 4},
    {field_dbt_package_name, 2},
  [5] =
    {field_dbt_source_name, 2},
    {field_dbt_source_table, 4},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(51);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(51);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym_jinja_block] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_ref,
    ACTIONS(15), 1,
      anon_sym_source,
    ACTIONS(17), 1,
      anon_sym_config,
    STATE(30), 1,
      sym_expr,
    STATE(28), 4,
      sym_lit_string,
      sym_dbt_jinja_ref,
      sym_dbt_jinja_source,
      sym_dbt_jinja_config,
  [25] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(24), 1,
      sym_text,
    STATE(3), 2,
      sym_jinja_block,
      aux_sym_source_file_repeat1,
  [39] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_text,
    STATE(3), 2,
      sym_jinja_block,
      aux_sym_source_file_repeat1,
  [53] = 3,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_lit_string,
  [63] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [73] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [83] = 3,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_lit_string,
  [93] = 3,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_lit_string,
  [103] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [113] = 3,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_lit_string,
  [123] = 3,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_lit_string,
  [133] = 2,
    ACTIONS(44), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_text,
  [141] = 1,
    ACTIONS(46), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [147] = 2,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
  [154] = 1,
    ACTIONS(34), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [159] = 1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [164] = 2,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(16), 1,
      sym_kwarg_expression,
  [171] = 2,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(10), 1,
      sym_kwarg_expression,
  [178] = 1,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
  [182] = 1,
    ACTIONS(58), 1,
      anon_sym_COMMA,
  [186] = 1,
    ACTIONS(60), 1,
      anon_sym_EQ,
  [190] = 1,
    ACTIONS(62), 1,
      aux_sym_lit_string_token2,
  [194] = 1,
    ACTIONS(64), 1,
      aux_sym_lit_string_token1,
  [198] = 1,
    ACTIONS(66), 1,
      anon_sym_RBRACE_RBRACE,
  [202] = 1,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
  [206] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [210] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACE_RBRACE,
  [214] = 1,
    ACTIONS(72), 1,
      anon_sym_RBRACE_RBRACE,
  [218] = 1,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
  [222] = 1,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
  [226] = 1,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
  [230] = 1,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
  [234] = 1,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
  [238] = 1,
    ACTIONS(84), 1,
      anon_sym_RBRACE_RBRACE,
  [242] = 1,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
  [246] = 1,
    ACTIONS(88), 1,
      anon_sym_RBRACE_RBRACE,
  [250] = 1,
    ACTIONS(90), 1,
      anon_sym_RBRACE_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 141,
  [SMALL_STATE(15)] = 147,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 159,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 171,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 182,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 190,
  [SMALL_STATE(24)] = 194,
  [SMALL_STATE(25)] = 198,
  [SMALL_STATE(26)] = 202,
  [SMALL_STATE(27)] = 206,
  [SMALL_STATE(28)] = 210,
  [SMALL_STATE(29)] = 214,
  [SMALL_STATE(30)] = 218,
  [SMALL_STATE(31)] = 222,
  [SMALL_STATE(32)] = 226,
  [SMALL_STATE(33)] = 230,
  [SMALL_STATE(34)] = 234,
  [SMALL_STATE(35)] = 238,
  [SMALL_STATE(36)] = 242,
  [SMALL_STATE(37)] = 246,
  [SMALL_STATE(38)] = 250,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbt_jinja_config_repeat1, 2), SHIFT_REPEAT(18),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dbt_jinja_config_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_block, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg_expression, 3, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 4, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_source, 6, .production_id = 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbt_jinja(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
