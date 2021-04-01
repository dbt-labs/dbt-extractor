#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_SQUOTE = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_LBRACE_LBRACE = 3,
  anon_sym_ref = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_RBRACE_RBRACE = 8,
  anon_sym_source = 9,
  anon_sym_config = 10,
  sym_identifier = 11,
  anon_sym_EQ = 12,
  sym_text = 13,
  sym_source_file = 14,
  sym_lit_string = 15,
  sym_dbt_jinja_ref = 16,
  sym_dbt_jinja_source = 17,
  sym_dbt_jinja_config = 18,
  sym_dbt_python_jinja = 19,
  sym_kwarg_expression = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_dbt_jinja_config_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
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
  [sym_dbt_python_jinja] = "dbt_python_jinja",
  [sym_kwarg_expression] = "kwarg_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dbt_jinja_config_repeat1] = "dbt_jinja_config_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
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
  [sym_dbt_python_jinja] = sym_dbt_python_jinja,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [sym_dbt_python_jinja] = {
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
  field_config_param = 2,
  field_dbt_model_name = 3,
  field_dbt_package_name = 4,
  field_dbt_source_name = 5,
  field_dbt_source_table = 6,
  field_source_name_param = 7,
  field_source_table_param = 8,
  field_string_val = 9,
  field_value = 10,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_config_param] = "config_param",
  [field_dbt_model_name] = "dbt_model_name",
  [field_dbt_package_name] = "dbt_package_name",
  [field_dbt_source_name] = "dbt_source_name",
  [field_dbt_source_table] = "dbt_source_table",
  [field_source_name_param] = "source_name_param",
  [field_source_table_param] = "source_table_param",
  [field_string_val] = "string_val",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_string_val, 1},
  [1] =
    {field_dbt_model_name, 3},
  [2] =
    {field_arg, 0},
    {field_value, 2},
  [4] =
    {field_config_param, 3},
  [5] =
    {field_dbt_model_name, 5},
    {field_dbt_package_name, 3},
  [7] =
    {field_source_name_param, 3},
    {field_source_table_param, 5},
  [9] =
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
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 21},
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
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
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
    [sym_source_file] = STATE(31),
    [sym_dbt_jinja_ref] = STATE(2),
    [sym_dbt_jinja_source] = STATE(2),
    [sym_dbt_jinja_config] = STATE(2),
    [sym_dbt_python_jinja] = STATE(2),
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
    STATE(3), 5,
      sym_dbt_jinja_ref,
      sym_dbt_jinja_source,
      sym_dbt_jinja_config,
      sym_dbt_python_jinja,
      aux_sym_source_file_repeat1,
  [17] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(18), 1,
      sym_text,
    STATE(3), 5,
      sym_dbt_jinja_ref,
      sym_dbt_jinja_source,
      sym_dbt_jinja_config,
      sym_dbt_python_jinja,
      aux_sym_source_file_repeat1,
  [34] = 4,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_text,
    STATE(30), 1,
      sym_lit_string,
  [47] = 4,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_text,
    STATE(23), 1,
      sym_lit_string,
  [60] = 2,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_text,
  [68] = 2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_text,
  [76] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_text,
  [84] = 2,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_text,
  [92] = 3,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_lit_string,
  [102] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_text,
    STATE(20), 1,
      sym_kwarg_expression,
  [112] = 2,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_text,
  [120] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [130] = 2,
    ACTIONS(64), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_text,
  [138] = 3,
    ACTIONS(66), 1,
      anon_sym_ref,
    ACTIONS(68), 1,
      anon_sym_source,
    ACTIONS(70), 1,
      anon_sym_config,
  [148] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_text,
  [156] = 2,
    ACTIONS(78), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_text,
  [164] = 2,
    ACTIONS(82), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_text,
  [172] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [182] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_dbt_jinja_config_repeat1,
  [192] = 3,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_lit_string,
  [202] = 3,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_lit_string,
  [212] = 2,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [219] = 2,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(26), 1,
      sym_kwarg_expression,
  [226] = 2,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
  [233] = 1,
    ACTIONS(60), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [238] = 1,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [243] = 1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [248] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [252] = 1,
    ACTIONS(106), 1,
      anon_sym_COMMA,
  [256] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [260] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACE_RBRACE,
  [264] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE_RBRACE,
  [268] = 1,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
  [272] = 1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [276] = 1,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
  [280] = 1,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [284] = 1,
    ACTIONS(122), 1,
      anon_sym_EQ,
  [288] = 1,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
  [292] = 1,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
  [296] = 1,
    ACTIONS(126), 1,
      sym_text,
  [300] = 1,
    ACTIONS(128), 1,
      sym_text,
  [304] = 1,
    ACTIONS(130), 1,
      anon_sym_RBRACE_RBRACE,
  [308] = 1,
    ACTIONS(132), 1,
      anon_sym_COMMA,
  [312] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACE_RBRACE,
  [316] = 1,
    ACTIONS(136), 1,
      anon_sym_RBRACE_RBRACE,
  [320] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACE_RBRACE,
  [324] = 1,
    ACTIONS(140), 1,
      anon_sym_RBRACE_RBRACE,
  [328] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE_RBRACE,
  [332] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACE_RBRACE,
  [336] = 1,
    ACTIONS(146), 1,
      sym_identifier,
  [340] = 1,
    ACTIONS(148), 1,
      sym_identifier,
  [344] = 1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
  [348] = 1,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
  [352] = 1,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 148,
  [SMALL_STATE(17)] = 156,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 172,
  [SMALL_STATE(20)] = 182,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 202,
  [SMALL_STATE(23)] = 212,
  [SMALL_STATE(24)] = 219,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 233,
  [SMALL_STATE(27)] = 238,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 248,
  [SMALL_STATE(30)] = 252,
  [SMALL_STATE(31)] = 256,
  [SMALL_STATE(32)] = 260,
  [SMALL_STATE(33)] = 264,
  [SMALL_STATE(34)] = 268,
  [SMALL_STATE(35)] = 272,
  [SMALL_STATE(36)] = 276,
  [SMALL_STATE(37)] = 280,
  [SMALL_STATE(38)] = 284,
  [SMALL_STATE(39)] = 288,
  [SMALL_STATE(40)] = 292,
  [SMALL_STATE(41)] = 296,
  [SMALL_STATE(42)] = 300,
  [SMALL_STATE(43)] = 304,
  [SMALL_STATE(44)] = 308,
  [SMALL_STATE(45)] = 312,
  [SMALL_STATE(46)] = 316,
  [SMALL_STATE(47)] = 320,
  [SMALL_STATE(48)] = 324,
  [SMALL_STATE(49)] = 328,
  [SMALL_STATE(50)] = 332,
  [SMALL_STATE(51)] = 336,
  [SMALL_STATE(52)] = 340,
  [SMALL_STATE(53)] = 344,
  [SMALL_STATE(54)] = 348,
  [SMALL_STATE(55)] = 352,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_source, 8, .production_id = 7),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_source, 8, .production_id = 7),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_python_jinja, 8, .production_id = 6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_python_jinja, 8, .production_id = 6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 8, .production_id = 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_ref, 8, .production_id = 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_python_jinja, 8, .production_id = 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_python_jinja, 8, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_config, 7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbt_jinja_config_repeat1, 2), SHIFT_REPEAT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dbt_jinja_config_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_config, 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_python_jinja, 6, .production_id = 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_python_jinja, 6, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_python_jinja, 6, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_python_jinja, 6, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg_expression, 3, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
