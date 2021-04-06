#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SQUOTE = 1,
  aux_sym_lit_string_token1 = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_lit_string_token2 = 4,
  anon_sym_LBRACE_LBRACE = 5,
  anon_sym_ref = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_RBRACE_RBRACE = 10,
  anon_sym_source = 11,
  anon_sym_config = 12,
  sym_identifier = 13,
  anon_sym_EQ = 14,
  sym_text = 15,
  sym_source_file = 16,
  sym_lit_string = 17,
  sym_dbt_jinja_ref = 18,
  sym_dbt_jinja_source = 19,
  sym_dbt_jinja_config = 20,
  sym_kwarg_expression = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_dbt_jinja_config_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_lit_string_token1] = "lit_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_lit_string_token2] = "lit_string_token2",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_ref] = "ref",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_source] = "source",
  [anon_sym_config] = "config",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_lit_string_token1] = aux_sym_lit_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_lit_string_token2] = aux_sym_lit_string_token2,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_config] = anon_sym_config,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
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
  [anon_sym_RBRACE_RBRACE] = {
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
    {field_dbt_model_name, 3},
  [1] =
    {field_arg, 0},
    {field_value, 2},
  [3] =
    {field_dbt_model_name, 5},
    {field_dbt_package_name, 3},
  [5] =
    {field_dbt_source_name, 3},
    {field_dbt_source_table, 5},
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
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
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
      if (lookahead == 'f') ADVANCE(26);
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
      if (lookahead == '{') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(31);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
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
      if (lookahead == 'f') ADVANCE(27);
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
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_dbt_jinja_ref] = STATE(2),
    [sym_dbt_jinja_source] = STATE(2),
    [sym_dbt_jinja_config] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    STATE(3), 4,
      sym_dbt_jinja_ref,
      sym_dbt_jinja_source,
      sym_dbt_jinja_config,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(18), 1,
      sym_text,
    STATE(3), 4,
      sym_dbt_jinja_ref,
      sym_dbt_jinja_source,
      sym_dbt_jinja_config,
      aux_sym_source_file_repeat1,
  [32] = 3,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_lit_string,
  [42] = 3,
    ACTIONS(25), 1,
      anon_sym_ref,
    ACTIONS(27), 1,
      anon_sym_source,
    ACTIONS(29), 1,
      anon_sym_config,
  [52] = 2,
    ACTIONS(33), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_text,
  [60] = 3,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_lit_string,
  [70] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_text,
  [78] = 3,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_lit_string,
  [88] = 3,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_lit_string,
  [98] = 3,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [108] = 2,
    ACTIONS(46), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_text,
  [116] = 2,
    ACTIONS(50), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_text,
  [124] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [134] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [144] = 2,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_text,
  [152] = 3,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_lit_string,
  [162] = 2,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
  [169] = 1,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [174] = 2,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(15), 1,
      sym_kwarg_expression,
  [181] = 1,
    ACTIONS(42), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [186] = 2,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(21), 1,
      sym_kwarg_expression,
  [193] = 1,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [198] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [202] = 1,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
  [206] = 1,
    ACTIONS(76), 1,
      anon_sym_RBRACE_RBRACE,
  [210] = 1,
    ACTIONS(78), 1,
      anon_sym_COMMA,
  [214] = 1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [218] = 1,
    ACTIONS(82), 1,
      anon_sym_EQ,
  [222] = 1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
  [226] = 1,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
  [230] = 1,
    ACTIONS(88), 1,
      anon_sym_RBRACE_RBRACE,
  [234] = 1,
    ACTIONS(90), 1,
      aux_sym_lit_string_token2,
  [238] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACE_RBRACE,
  [242] = 1,
    ACTIONS(94), 1,
      aux_sym_lit_string_token1,
  [246] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACE_RBRACE,
  [250] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACE_RBRACE,
  [254] = 1,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
  [258] = 1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
  [262] = 1,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 152,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 169,
  [SMALL_STATE(20)] = 174,
  [SMALL_STATE(21)] = 181,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 193,
  [SMALL_STATE(24)] = 198,
  [SMALL_STATE(25)] = 202,
  [SMALL_STATE(26)] = 206,
  [SMALL_STATE(27)] = 210,
  [SMALL_STATE(28)] = 214,
  [SMALL_STATE(29)] = 218,
  [SMALL_STATE(30)] = 222,
  [SMALL_STATE(31)] = 226,
  [SMALL_STATE(32)] = 230,
  [SMALL_STATE(33)] = 234,
  [SMALL_STATE(34)] = 238,
  [SMALL_STATE(35)] = 242,
  [SMALL_STATE(36)] = 246,
  [SMALL_STATE(37)] = 250,
  [SMALL_STATE(38)] = 254,
  [SMALL_STATE(39)] = 258,
  [SMALL_STATE(40)] = 262,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_source, 8, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_source, 8, .production_id = 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 7),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_config, 7),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbt_jinja_config_repeat1, 2), SHIFT_REPEAT(22),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dbt_jinja_config_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 6),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_config, 6),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 8, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_ref, 8, .production_id = 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg_expression, 3, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
