#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_lit_string_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_lit_string_token2 = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  sym__identifier = 12,
  anon_sym_EQ = 13,
  sym__text = 14,
  sym_source_file = 15,
  sym__jinja_block = 16,
  sym__expr = 17,
  sym_fn_call = 18,
  sym_argument_list = 19,
  sym_lit_string = 20,
  sym_list = 21,
  sym_identifier = 22,
  sym_kwarg = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_argument_list_repeat1 = 25,
  aux_sym_list_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_lit_string_token1] = "lit_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_lit_string_token2] = "lit_string_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__identifier] = "_identifier",
  [anon_sym_EQ] = "=",
  [sym__text] = "_text",
  [sym_source_file] = "source_file",
  [sym__jinja_block] = "_jinja_block",
  [sym__expr] = "_expr",
  [sym_fn_call] = "fn_call",
  [sym_argument_list] = "argument_list",
  [sym_lit_string] = "lit_string",
  [sym_list] = "list",
  [sym_identifier] = "identifier",
  [sym_kwarg] = "kwarg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_lit_string_token1] = aux_sym_lit_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_lit_string_token2] = aux_sym_lit_string_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__identifier] = sym__identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__text] = sym__text,
  [sym_source_file] = sym_source_file,
  [sym__jinja_block] = sym__jinja_block,
  [sym__expr] = sym__expr,
  [sym_fn_call] = sym_fn_call,
  [sym_argument_list] = sym_argument_list,
  [sym_lit_string] = sym_lit_string,
  [sym_list] = sym_list,
  [sym_identifier] = sym_identifier,
  [sym_kwarg] = sym_kwarg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja_block] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_argument_list = 2,
  field_fn_name = 3,
  field_value = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_argument_list] = "argument_list",
  [field_fn_name] = "fn_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument_list, 1},
    {field_fn_name, 0},
  [2] =
    {field_arg, 0},
    {field_value, 2},
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
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '{') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(6);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
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
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
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
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 11},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__jinja_block] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [sym__text] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
    STATE(25), 4,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
  [28] = 7,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
    STATE(24), 5,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
      sym_kwarg,
  [54] = 7,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_identifier,
    STATE(29), 4,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
  [79] = 7,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_identifier,
    STATE(29), 4,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
  [104] = 6,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
    STATE(32), 5,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
      sym_kwarg,
  [127] = 6,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 4,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
  [149] = 6,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
    STATE(37), 4,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
  [171] = 6,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
    STATE(29), 4,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_list,
  [193] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(34), 1,
      sym__text,
    STATE(10), 2,
      sym__jinja_block,
      aux_sym_source_file_repeat1,
  [207] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__text,
    STATE(10), 2,
      sym__jinja_block,
      aux_sym_source_file_repeat1,
  [221] = 1,
    ACTIONS(41), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [228] = 1,
    ACTIONS(43), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [235] = 1,
    ACTIONS(45), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [242] = 1,
    ACTIONS(47), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [249] = 1,
    ACTIONS(49), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [256] = 1,
    ACTIONS(51), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [263] = 1,
    ACTIONS(53), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [270] = 1,
    ACTIONS(55), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [277] = 1,
    ACTIONS(57), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [284] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_list_repeat1,
  [294] = 3,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_list_repeat1,
  [304] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym__text,
  [312] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [322] = 3,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_list_repeat1,
  [332] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
  [342] = 3,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
  [352] = 2,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_EQ,
  [359] = 1,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [364] = 2,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_argument_list,
  [371] = 1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [376] = 1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [381] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [385] = 1,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
  [389] = 1,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
  [393] = 1,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
  [397] = 1,
    ACTIONS(97), 1,
      anon_sym_RBRACE_RBRACE,
  [401] = 1,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
  [405] = 1,
    ACTIONS(99), 1,
      aux_sym_lit_string_token2,
  [409] = 1,
    ACTIONS(101), 1,
      aux_sym_lit_string_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 312,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 332,
  [SMALL_STATE(27)] = 342,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 359,
  [SMALL_STATE(30)] = 364,
  [SMALL_STATE(31)] = 371,
  [SMALL_STATE(32)] = 376,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 385,
  [SMALL_STATE(35)] = 389,
  [SMALL_STATE(36)] = 393,
  [SMALL_STATE(37)] = 397,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 405,
  [SMALL_STATE(40)] = 409,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_block, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_block, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
