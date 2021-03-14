#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 984
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 34
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 56

enum {
  sym_identifier = 1,
  aux_sym_select_statement_token1 = 2,
  aux_sym_cte_def_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  aux_sym_select_body_token1 = 7,
  aux_sym_select_set_operator_token1 = 8,
  aux_sym_select_set_operator_token2 = 9,
  aux_sym_select_set_operator_token3 = 10,
  aux_sym_select_set_operator_token4 = 11,
  aux_sym_select_set_operator_token5 = 12,
  aux_sym_dataset_definition_token1 = 13,
  aux_sym_group_by_clause_token1 = 14,
  aux_sym_group_by_clause_token2 = 15,
  aux_sym_having_clause_token1 = 16,
  aux_sym_order_by_clause_token1 = 17,
  aux_sym_order_by_clause_token2 = 18,
  aux_sym_order_by_clause_token3 = 19,
  aux_sym_where_clause_token1 = 20,
  anon_sym_LBRACE_LBRACE = 21,
  anon_sym_ref = 22,
  anon_sym_RBRACE_RBRACE = 23,
  anon_sym_source = 24,
  anon_sym_EQ = 25,
  anon_sym_LBRACE = 26,
  anon_sym_COLON = 27,
  anon_sym_RBRACE = 28,
  anon_sym_config = 29,
  aux_sym_cross_join_token1 = 30,
  aux_sym_cross_join_token2 = 31,
  aux_sym_join_clause_on_token1 = 32,
  aux_sym_join_clause_using_token1 = 33,
  aux_sym_qualified_join_token1 = 34,
  aux_sym_qualified_join_token2 = 35,
  aux_sym_qualified_join_token3 = 36,
  aux_sym_qualified_join_token4 = 37,
  aux_sym_qualified_join_token5 = 38,
  aux_sym_limit_clause_token1 = 39,
  anon_sym_DOT = 40,
  anon_sym_STAR = 41,
  sym_string_literal = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_lit_null_token1 = 44,
  sym_lit_integer = 45,
  sym_lit_decimal = 46,
  aux_sym_lit_boolean_token1 = 47,
  aux_sym_lit_boolean_token2 = 48,
  anon_sym_DQUOTE = 49,
  anon_sym_LT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_BANG_EQ = 52,
  anon_sym_GT_EQ = 53,
  anon_sym_GT = 54,
  anon_sym_LT_GT = 55,
  aux_sym_comparison_operator_token1 = 56,
  aux_sym_comparison_operator_token2 = 57,
  aux_sym_comparison_operator_token3 = 58,
  anon_sym_AND = 59,
  anon_sym_and = 60,
  anon_sym_OR = 61,
  anon_sym_or = 62,
  anon_sym_PLUS = 63,
  anon_sym_DASH = 64,
  anon_sym_SLASH = 65,
  anon_sym_PERCENT = 66,
  anon_sym_CARET = 67,
  aux_sym_window_frame_start_token1 = 68,
  aux_sym_window_frame_start_token2 = 69,
  aux_sym_window_frame_start_token3 = 70,
  aux_sym_window_frame_start_token4 = 71,
  aux_sym_window_frame_start_token5 = 72,
  aux_sym_window_specification_token1 = 73,
  aux_sym_window_specification_token2 = 74,
  aux_sym_window_specification_token3 = 75,
  aux_sym_window_specification_token4 = 76,
  aux_sym_window_function_token1 = 77,
  sym_select_statement = 78,
  sym_cte_def = 79,
  sym_cte_clause_list = 80,
  sym_select_body = 81,
  sym_select_wrapper = 82,
  sym_select_set_operator = 83,
  sym_dataset_definition = 84,
  sym_group_by_clause = 85,
  sym_having_clause = 86,
  sym_order_by_clause = 87,
  sym_where_clause = 88,
  sym_subquery = 89,
  sym_dbt_jinja_ref = 90,
  sym_dbt_jinja_source = 91,
  sym_jinja_kwargs_expression = 92,
  sym_jinja_dict_expression = 93,
  sym_dbt_jinja_config = 94,
  sym_table_alias = 95,
  sym_table_reference = 96,
  sym_cross_join = 97,
  sym_join_clause_on = 98,
  sym_join_clause_using = 99,
  sym_join_target = 100,
  sym_qualified_join = 101,
  sym_join_clause = 102,
  sym_limit_clause = 103,
  sym_select_all = 104,
  sym_column_alias = 105,
  sym_select_expr = 106,
  sym_column_list = 107,
  sym_lit_string = 108,
  sym_lit_null = 109,
  sym_lit_boolean = 110,
  sym_quoted_identifier = 111,
  sym_qualified_identifier = 112,
  sym__expression = 113,
  sym_comparison_operator = 114,
  sym_parenthesized_expression = 115,
  sym_boolean_operator = 116,
  sym_unary_operator = 117,
  sym_binary_operator = 118,
  sym_agg_function = 119,
  sym_window_frame_start = 120,
  sym_window_frame_end = 121,
  sym_window_specification = 122,
  sym_window_function = 123,
  sym_function_call = 124,
  sym_primary_expression = 125,
  aux_sym_cte_clause_list_repeat1 = 126,
  aux_sym_select_wrapper_repeat1 = 127,
  aux_sym_dataset_definition_repeat1 = 128,
  aux_sym_group_by_clause_repeat1 = 129,
  aux_sym_order_by_clause_repeat1 = 130,
  aux_sym_jinja_kwargs_expression_repeat1 = 131,
  aux_sym_jinja_dict_expression_repeat1 = 132,
  aux_sym_join_clause_using_repeat1 = 133,
  aux_sym_column_list_repeat1 = 134,
  aux_sym_comparison_operator_repeat1 = 135,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_select_statement_token1] = "WITH",
  [aux_sym_cte_def_token1] = "AS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_select_body_token1] = "SELECT",
  [aux_sym_select_set_operator_token1] = "UNION",
  [aux_sym_select_set_operator_token2] = "ALL",
  [aux_sym_select_set_operator_token3] = "DISTINCT",
  [aux_sym_select_set_operator_token4] = "INTERSECT",
  [aux_sym_select_set_operator_token5] = "EXCEPT",
  [aux_sym_dataset_definition_token1] = "FROM",
  [aux_sym_group_by_clause_token1] = "GROUP",
  [aux_sym_group_by_clause_token2] = "BY",
  [aux_sym_having_clause_token1] = "HAVING",
  [aux_sym_order_by_clause_token1] = "ORDER",
  [aux_sym_order_by_clause_token2] = "ASC",
  [aux_sym_order_by_clause_token3] = "DESC",
  [aux_sym_where_clause_token1] = "WHERE",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_ref] = "ref",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_source] = "source",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_config] = "config",
  [aux_sym_cross_join_token1] = "CROSS",
  [aux_sym_cross_join_token2] = "JOIN",
  [aux_sym_join_clause_on_token1] = "ON",
  [aux_sym_join_clause_using_token1] = "USING",
  [aux_sym_qualified_join_token1] = "INNER",
  [aux_sym_qualified_join_token2] = "LEFT",
  [aux_sym_qualified_join_token3] = "OUTER",
  [aux_sym_qualified_join_token4] = "RIGHT",
  [aux_sym_qualified_join_token5] = "FULL",
  [aux_sym_limit_clause_token1] = "LIMIT",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_string_literal] = "string_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_lit_null_token1] = "NULL",
  [sym_lit_integer] = "lit_integer",
  [sym_lit_decimal] = "lit_decimal",
  [aux_sym_lit_boolean_token1] = "TRUE",
  [aux_sym_lit_boolean_token2] = "FALSE",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_GT] = "<>",
  [aux_sym_comparison_operator_token1] = "IN",
  [aux_sym_comparison_operator_token2] = "NOT",
  [aux_sym_comparison_operator_token3] = "IS",
  [anon_sym_AND] = "AND",
  [anon_sym_and] = "and",
  [anon_sym_OR] = "OR",
  [anon_sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [aux_sym_window_frame_start_token1] = "UNBOUNDED",
  [aux_sym_window_frame_start_token2] = "PRECEDING",
  [aux_sym_window_frame_start_token3] = "FOLLOWING",
  [aux_sym_window_frame_start_token4] = "CURRENT",
  [aux_sym_window_frame_start_token5] = "ROW",
  [aux_sym_window_specification_token1] = "PARTITION",
  [aux_sym_window_specification_token2] = "ROWS",
  [aux_sym_window_specification_token3] = "BETWEEN",
  [aux_sym_window_specification_token4] = "AND",
  [aux_sym_window_function_token1] = "OVER",
  [sym_select_statement] = "select_statement",
  [sym_cte_def] = "cte_def",
  [sym_cte_clause_list] = "cte_clause_list",
  [sym_select_body] = "select_body",
  [sym_select_wrapper] = "select_wrapper",
  [sym_select_set_operator] = "select_set_operator",
  [sym_dataset_definition] = "dataset_definition",
  [sym_group_by_clause] = "group_by_clause",
  [sym_having_clause] = "having_clause",
  [sym_order_by_clause] = "order_by_clause",
  [sym_where_clause] = "where_clause",
  [sym_subquery] = "subquery",
  [sym_dbt_jinja_ref] = "dbt_jinja_ref",
  [sym_dbt_jinja_source] = "dbt_jinja_source",
  [sym_jinja_kwargs_expression] = "jinja_kwargs_expression",
  [sym_jinja_dict_expression] = "jinja_dict_expression",
  [sym_dbt_jinja_config] = "dbt_jinja_config",
  [sym_table_alias] = "table_alias",
  [sym_table_reference] = "table_reference",
  [sym_cross_join] = "cross_join",
  [sym_join_clause_on] = "join_clause_on",
  [sym_join_clause_using] = "join_clause_using",
  [sym_join_target] = "join_target",
  [sym_qualified_join] = "qualified_join",
  [sym_join_clause] = "join_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_select_all] = "select_all",
  [sym_column_alias] = "column_alias",
  [sym_select_expr] = "select_expr",
  [sym_column_list] = "column_list",
  [sym_lit_string] = "lit_string",
  [sym_lit_null] = "lit_null",
  [sym_lit_boolean] = "lit_boolean",
  [sym_quoted_identifier] = "quoted_identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym__expression] = "_expression",
  [sym_comparison_operator] = "comparison_operator",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_boolean_operator] = "boolean_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_agg_function] = "agg_function",
  [sym_window_frame_start] = "window_frame_start",
  [sym_window_frame_end] = "window_frame_end",
  [sym_window_specification] = "window_specification",
  [sym_window_function] = "window_function",
  [sym_function_call] = "function_call",
  [sym_primary_expression] = "primary_expression",
  [aux_sym_cte_clause_list_repeat1] = "cte_clause_list_repeat1",
  [aux_sym_select_wrapper_repeat1] = "select_wrapper_repeat1",
  [aux_sym_dataset_definition_repeat1] = "dataset_definition_repeat1",
  [aux_sym_group_by_clause_repeat1] = "group_by_clause_repeat1",
  [aux_sym_order_by_clause_repeat1] = "order_by_clause_repeat1",
  [aux_sym_jinja_kwargs_expression_repeat1] = "jinja_kwargs_expression_repeat1",
  [aux_sym_jinja_dict_expression_repeat1] = "jinja_dict_expression_repeat1",
  [aux_sym_join_clause_using_repeat1] = "join_clause_using_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym_comparison_operator_repeat1] = "comparison_operator_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_select_statement_token1] = aux_sym_select_statement_token1,
  [aux_sym_cte_def_token1] = aux_sym_cte_def_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_select_body_token1] = aux_sym_select_body_token1,
  [aux_sym_select_set_operator_token1] = aux_sym_select_set_operator_token1,
  [aux_sym_select_set_operator_token2] = aux_sym_select_set_operator_token2,
  [aux_sym_select_set_operator_token3] = aux_sym_select_set_operator_token3,
  [aux_sym_select_set_operator_token4] = aux_sym_select_set_operator_token4,
  [aux_sym_select_set_operator_token5] = aux_sym_select_set_operator_token5,
  [aux_sym_dataset_definition_token1] = aux_sym_dataset_definition_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_group_by_clause_token2] = aux_sym_group_by_clause_token2,
  [aux_sym_having_clause_token1] = aux_sym_having_clause_token1,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_order_by_clause_token2] = aux_sym_order_by_clause_token2,
  [aux_sym_order_by_clause_token3] = aux_sym_order_by_clause_token3,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_config] = anon_sym_config,
  [aux_sym_cross_join_token1] = aux_sym_cross_join_token1,
  [aux_sym_cross_join_token2] = aux_sym_cross_join_token2,
  [aux_sym_join_clause_on_token1] = aux_sym_join_clause_on_token1,
  [aux_sym_join_clause_using_token1] = aux_sym_join_clause_using_token1,
  [aux_sym_qualified_join_token1] = aux_sym_qualified_join_token1,
  [aux_sym_qualified_join_token2] = aux_sym_qualified_join_token2,
  [aux_sym_qualified_join_token3] = aux_sym_qualified_join_token3,
  [aux_sym_qualified_join_token4] = aux_sym_qualified_join_token4,
  [aux_sym_qualified_join_token5] = aux_sym_qualified_join_token5,
  [aux_sym_limit_clause_token1] = aux_sym_limit_clause_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_lit_null_token1] = aux_sym_lit_null_token1,
  [sym_lit_integer] = sym_lit_integer,
  [sym_lit_decimal] = sym_lit_decimal,
  [aux_sym_lit_boolean_token1] = aux_sym_lit_boolean_token1,
  [aux_sym_lit_boolean_token2] = aux_sym_lit_boolean_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [aux_sym_comparison_operator_token1] = aux_sym_comparison_operator_token1,
  [aux_sym_comparison_operator_token2] = aux_sym_comparison_operator_token2,
  [aux_sym_comparison_operator_token3] = aux_sym_comparison_operator_token3,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_window_frame_start_token1] = aux_sym_window_frame_start_token1,
  [aux_sym_window_frame_start_token2] = aux_sym_window_frame_start_token2,
  [aux_sym_window_frame_start_token3] = aux_sym_window_frame_start_token3,
  [aux_sym_window_frame_start_token4] = aux_sym_window_frame_start_token4,
  [aux_sym_window_frame_start_token5] = aux_sym_window_frame_start_token5,
  [aux_sym_window_specification_token1] = aux_sym_window_specification_token1,
  [aux_sym_window_specification_token2] = aux_sym_window_specification_token2,
  [aux_sym_window_specification_token3] = aux_sym_window_specification_token3,
  [aux_sym_window_specification_token4] = anon_sym_AND,
  [aux_sym_window_function_token1] = aux_sym_window_function_token1,
  [sym_select_statement] = sym_select_statement,
  [sym_cte_def] = sym_cte_def,
  [sym_cte_clause_list] = sym_cte_clause_list,
  [sym_select_body] = sym_select_body,
  [sym_select_wrapper] = sym_select_wrapper,
  [sym_select_set_operator] = sym_select_set_operator,
  [sym_dataset_definition] = sym_dataset_definition,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_having_clause] = sym_having_clause,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_subquery] = sym_subquery,
  [sym_dbt_jinja_ref] = sym_dbt_jinja_ref,
  [sym_dbt_jinja_source] = sym_dbt_jinja_source,
  [sym_jinja_kwargs_expression] = sym_jinja_kwargs_expression,
  [sym_jinja_dict_expression] = sym_jinja_dict_expression,
  [sym_dbt_jinja_config] = sym_dbt_jinja_config,
  [sym_table_alias] = sym_table_alias,
  [sym_table_reference] = sym_table_reference,
  [sym_cross_join] = sym_cross_join,
  [sym_join_clause_on] = sym_join_clause_on,
  [sym_join_clause_using] = sym_join_clause_using,
  [sym_join_target] = sym_join_target,
  [sym_qualified_join] = sym_qualified_join,
  [sym_join_clause] = sym_join_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_select_all] = sym_select_all,
  [sym_column_alias] = sym_column_alias,
  [sym_select_expr] = sym_select_expr,
  [sym_column_list] = sym_column_list,
  [sym_lit_string] = sym_lit_string,
  [sym_lit_null] = sym_lit_null,
  [sym_lit_boolean] = sym_lit_boolean,
  [sym_quoted_identifier] = sym_quoted_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym__expression] = sym__expression,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_agg_function] = sym_agg_function,
  [sym_window_frame_start] = sym_window_frame_start,
  [sym_window_frame_end] = sym_window_frame_end,
  [sym_window_specification] = sym_window_specification,
  [sym_window_function] = sym_window_function,
  [sym_function_call] = sym_function_call,
  [sym_primary_expression] = sym_primary_expression,
  [aux_sym_cte_clause_list_repeat1] = aux_sym_cte_clause_list_repeat1,
  [aux_sym_select_wrapper_repeat1] = aux_sym_select_wrapper_repeat1,
  [aux_sym_dataset_definition_repeat1] = aux_sym_dataset_definition_repeat1,
  [aux_sym_group_by_clause_repeat1] = aux_sym_group_by_clause_repeat1,
  [aux_sym_order_by_clause_repeat1] = aux_sym_order_by_clause_repeat1,
  [aux_sym_jinja_kwargs_expression_repeat1] = aux_sym_jinja_kwargs_expression_repeat1,
  [aux_sym_jinja_dict_expression_repeat1] = aux_sym_jinja_dict_expression_repeat1,
  [aux_sym_join_clause_using_repeat1] = aux_sym_join_clause_using_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym_comparison_operator_repeat1] = aux_sym_comparison_operator_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_select_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cte_def_token1] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_body_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_set_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_set_operator_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_set_operator_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_set_operator_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_set_operator_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dataset_definition_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_group_by_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_having_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_order_by_clause_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
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
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cross_join_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cross_join_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_clause_on_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_join_clause_using_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualified_join_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualified_join_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualified_join_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualified_join_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_qualified_join_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_null_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_lit_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_decimal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lit_boolean_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_boolean_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comparison_operator_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comparison_operator_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comparison_operator_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_frame_start_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_frame_start_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_frame_start_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_frame_start_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_frame_start_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_specification_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_specification_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_specification_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_specification_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_window_function_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_cte_def] = {
    .visible = true,
    .named = true,
  },
  [sym_cte_clause_list] = {
    .visible = true,
    .named = true,
  },
  [sym_select_body] = {
    .visible = true,
    .named = true,
  },
  [sym_select_wrapper] = {
    .visible = true,
    .named = true,
  },
  [sym_select_set_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_dataset_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_having_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_subquery] = {
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
  [sym_jinja_kwargs_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_dict_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dbt_jinja_config] = {
    .visible = true,
    .named = true,
  },
  [sym_table_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_table_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_join] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause_on] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause_using] = {
    .visible = true,
    .named = true,
  },
  [sym_join_target] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_join] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_select_all] = {
    .visible = true,
    .named = true,
  },
  [sym_column_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_null] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_agg_function] = {
    .visible = true,
    .named = true,
  },
  [sym_window_frame_start] = {
    .visible = true,
    .named = true,
  },
  [sym_window_frame_end] = {
    .visible = true,
    .named = true,
  },
  [sym_window_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_window_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cte_clause_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_wrapper_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dataset_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jinja_kwargs_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jinja_dict_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_join_clause_using_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comparison_operator_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_argument = 2,
  field_column_list = 3,
  field_config_dict = 4,
  field_config_kwargs = 5,
  field_cte_name = 6,
  field_ctes = 7,
  field_dataset_definition = 8,
  field_dbt_model_name = 9,
  field_dbt_package_name = 10,
  field_dbt_source_name = 11,
  field_dbt_source_table = 12,
  field_group_by_clause = 13,
  field_having_clause = 14,
  field_having_expression = 15,
  field_identifier = 16,
  field_join_clause_list = 17,
  field_join_condition = 18,
  field_join_using_field = 19,
  field_key = 20,
  field_left = 21,
  field_limit_clause = 22,
  field_literal = 23,
  field_model_config = 24,
  field_operator = 25,
  field_order_by_clause = 26,
  field_ref = 27,
  field_right = 28,
  field_select = 29,
  field_source = 30,
  field_subquery = 31,
  field_table_reference = 32,
  field_value = 33,
  field_where_clause = 34,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_column_list] = "column_list",
  [field_config_dict] = "config_dict",
  [field_config_kwargs] = "config_kwargs",
  [field_cte_name] = "cte_name",
  [field_ctes] = "ctes",
  [field_dataset_definition] = "dataset_definition",
  [field_dbt_model_name] = "dbt_model_name",
  [field_dbt_package_name] = "dbt_package_name",
  [field_dbt_source_name] = "dbt_source_name",
  [field_dbt_source_table] = "dbt_source_table",
  [field_group_by_clause] = "group_by_clause",
  [field_having_clause] = "having_clause",
  [field_having_expression] = "having_expression",
  [field_identifier] = "identifier",
  [field_join_clause_list] = "join_clause_list",
  [field_join_condition] = "join_condition",
  [field_join_using_field] = "join_using_field",
  [field_key] = "key",
  [field_left] = "left",
  [field_limit_clause] = "limit_clause",
  [field_literal] = "literal",
  [field_model_config] = "model_config",
  [field_operator] = "operator",
  [field_order_by_clause] = "order_by_clause",
  [field_ref] = "ref",
  [field_right] = "right",
  [field_select] = "select",
  [field_source] = "source",
  [field_subquery] = "subquery",
  [field_table_reference] = "table_reference",
  [field_value] = "value",
  [field_where_clause] = "where_clause",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 1},
  [18] = {.index = 21, .length = 1},
  [19] = {.index = 22, .length = 1},
  [20] = {.index = 23, .length = 2},
  [21] = {.index = 25, .length = 3},
  [22] = {.index = 28, .length = 2},
  [23] = {.index = 30, .length = 3},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 2},
  [26] = {.index = 37, .length = 2},
  [27] = {.index = 39, .length = 2},
  [28] = {.index = 41, .length = 2},
  [29] = {.index = 43, .length = 1},
  [30] = {.index = 44, .length = 3},
  [31] = {.index = 47, .length = 3},
  [32] = {.index = 50, .length = 3},
  [33] = {.index = 53, .length = 3},
  [34] = {.index = 56, .length = 3},
  [35] = {.index = 59, .length = 3},
  [36] = {.index = 62, .length = 2},
  [37] = {.index = 64, .length = 1},
  [38] = {.index = 65, .length = 1},
  [39] = {.index = 66, .length = 4},
  [40] = {.index = 70, .length = 4},
  [41] = {.index = 74, .length = 4},
  [42] = {.index = 78, .length = 4},
  [43] = {.index = 82, .length = 4},
  [44] = {.index = 86, .length = 1},
  [45] = {.index = 87, .length = 5},
  [46] = {.index = 92, .length = 2},
  [47] = {.index = 94, .length = 4},
  [48] = {.index = 98, .length = 1},
  [49] = {.index = 99, .length = 4},
  [50] = {.index = 103, .length = 1},
  [51] = {.index = 104, .length = 2},
  [52] = {.index = 106, .length = 2},
  [53] = {.index = 108, .length = 1},
  [54] = {.index = 109, .length = 2},
  [55] = {.index = 111, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_select, 0},
  [1] =
    {field_column_list, 1},
  [2] =
    {field_order_by_clause, 1},
  [3] =
    {field_limit_clause, 1},
  [4] =
    {field_model_config, 0},
    {field_select, 1},
  [6] =
    {field_ctes, 1},
    {field_select, 2},
  [8] =
    {field_argument, 1},
  [9] =
    {field_column_list, 1},
    {field_dataset_definition, 2},
  [11] =
    {field_alias, 0},
  [12] =
    {field_limit_clause, 2},
    {field_order_by_clause, 1},
  [14] =
    {field_order_by_clause, 2},
  [15] =
    {field_limit_clause, 2},
  [16] =
    {field_literal, 1},
  [17] =
    {field_subquery, 0},
  [18] =
    {field_ref, 0},
  [19] =
    {field_source, 0},
  [20] =
    {field_table_reference, 1},
  [21] =
    {field_identifier, 0},
  [22] =
    {field_alias, 1},
  [23] =
    {field_left, 0},
    {field_right, 2},
  [25] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [28] =
    {field_limit_clause, 3},
    {field_order_by_clause, 2},
  [30] =
    {field_ctes, 2},
    {field_model_config, 0},
    {field_select, 3},
  [33] =
    {field_group_by_clause, 2},
    {field_table_reference, 1},
  [35] =
    {field_having_clause, 2},
    {field_table_reference, 1},
  [37] =
    {field_table_reference, 1},
    {field_where_clause, 2},
  [39] =
    {field_join_clause_list, 2},
    {field_table_reference, 1},
  [41] =
    {field_cte_name, 0},
    {field_select, 3},
  [43] =
    {field_having_expression, 1},
  [44] =
    {field_group_by_clause, 2},
    {field_having_clause, 3},
    {field_table_reference, 1},
  [47] =
    {field_group_by_clause, 3},
    {field_table_reference, 1},
    {field_where_clause, 2},
  [50] =
    {field_having_clause, 3},
    {field_table_reference, 1},
    {field_where_clause, 2},
  [53] =
    {field_group_by_clause, 3},
    {field_join_clause_list, 2},
    {field_table_reference, 1},
  [56] =
    {field_having_clause, 3},
    {field_join_clause_list, 2},
    {field_table_reference, 1},
  [59] =
    {field_join_clause_list, 2},
    {field_table_reference, 1},
    {field_where_clause, 3},
  [62] =
    {field_key, 0},
    {field_value, 2},
  [64] =
    {field_config_kwargs, 3},
  [65] =
    {field_config_dict, 3},
  [66] =
    {field_group_by_clause, 3},
    {field_having_clause, 4},
    {field_table_reference, 1},
    {field_where_clause, 2},
  [70] =
    {field_group_by_clause, 3},
    {field_having_clause, 4},
    {field_join_clause_list, 2},
    {field_table_reference, 1},
  [74] =
    {field_group_by_clause, 4},
    {field_join_clause_list, 2},
    {field_table_reference, 1},
    {field_where_clause, 3},
  [78] =
    {field_having_clause, 4},
    {field_join_clause_list, 2},
    {field_table_reference, 1},
    {field_where_clause, 3},
  [82] =
    {field_key, 0},
    {field_key, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [86] =
    {field_join_condition, 1},
  [87] =
    {field_group_by_clause, 4},
    {field_having_clause, 5},
    {field_join_clause_list, 2},
    {field_table_reference, 1},
    {field_where_clause, 3},
  [92] =
    {field_key, 1},
    {field_value, 3},
  [94] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [98] =
    {field_dbt_model_name, 3},
  [99] =
    {field_key, 1},
    {field_key, 4, .inherited = true},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [103] =
    {field_join_using_field, 2},
  [104] =
    {field_dbt_model_name, 5},
    {field_dbt_package_name, 3},
  [106] =
    {field_dbt_source_name, 3},
    {field_dbt_source_table, 5},
  [108] =
    {field_join_using_field, 1},
  [109] =
    {field_join_using_field, 2},
    {field_join_using_field, 3, .inherited = true},
  [111] =
    {field_join_using_field, 0, .inherited = true},
    {field_join_using_field, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43020
    ? (c < 3976
      ? (c < 2674
        ? (c < 1869
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1786 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))))))
          : (c <= 1957 || (c < 2451
            ? (c < 2144
              ? (c < 2048
                ? (c < 2036
                  ? (c < 1994
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2088
                  ? (c < 2084
                    ? c == 2074
                    : c <= 2084)
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2384
                ? (c < 2308
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2392 && c <= 2401)
                    : c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))
            : (c <= 2472 || (c < 2565
              ? (c < 2510
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2544
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2529)
                  : (c <= 2545 || c == 2556))))
              : (c <= 2570 || (c < 2613
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))))))))))
        : (c <= 2676 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3168
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))))))))))
      : (c <= 3980 || (c < 8016
        ? (c < 5920
          ? (c < 4746
            ? (c < 4256
              ? (c < 4193
                ? (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4293 || (c < 4682
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))))
            : (c <= 4749 || (c < 4992
              ? (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))
              : (c <= 5007 || (c < 5761
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))))))))
          : (c <= 5937 || (c < 6981
            ? (c < 6320
              ? (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6576
                ? (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))))
            : (c <= 6987 || (c < 7401
              ? (c < 7245
                ? (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7404 || (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))))
        : (c <= 8023 || (c < 11631
          ? (c < 8458
            ? (c < 8144
              ? (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))
              : (c <= 8147 || (c < 8305
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))))
            : (c <= 8467 || (c < 8544
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))
              : (c <= 8584 || (c < 11506
                ? (c < 11360
                  ? (c < 11312
                    ? (c >= 11264 && c <= 11310)
                    : c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
          : (c <= 11631 || (c < 12704
            ? (c < 12293
              ? (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))
              : (c <= 12295 || (c < 12445
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12735 || (c < 42623
              ? (c < 42192
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42946
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))))))))))))
    : (c <= 43042 || (c < 70453
      ? (c < 66176
        ? (c < 64112
          ? (c < 43697
            ? (c < 43471
              ? (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43471 || (c < 43584
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))))
            : (c <= 43697 || (c < 43793
              ? (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65147
            ? (c < 64326
              ? (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65017 || (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || c == 65145))))))
            : (c <= 65147 || (c < 65498
              ? (c < 65382
                ? (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65437 || (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))))))))))
        : (c <= 66204 || (c < 68416
          ? (c < 67639
            ? (c < 66736
              ? (c < 66432
                ? (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))
              : (c <= 66771 || (c < 67392
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))))))
            : (c <= 67640 || (c < 68030
              ? (c < 67808
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))))
              : (c <= 68031 || (c < 68192
                ? (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))))))))
          : (c <= 68437 || (c < 69968
            ? (c < 69415
              ? (c < 68800
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))
                : (c <= 68850 || (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))
              : (c <= 69415 || (c < 69763
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))
                : (c <= 69807 || (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))))))
            : (c <= 70002 || (c < 70282
              ? (c < 70108
                ? (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))
                : (c <= 70108 || (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))))
              : (c <= 70285 || (c < 70415
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))
                : (c <= 70416 || (c < 70442
                  ? (c >= 70419 && c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))))))))))))
      : (c <= 70457 || (c < 113808
        ? (c < 72818
          ? (c < 71945
            ? (c < 71040
              ? (c < 70727
                ? (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))
                : (c <= 70730 || (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || c == 70855))))
              : (c <= 71086 || (c < 71352
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))
                : (c <= 71352 || (c < 71840
                  ? (c < 71680
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))))))
            : (c <= 71945 || (c < 72192
              ? (c < 72001
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))
                : (c <= 72001 || (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))))
              : (c <= 72192 || (c < 72349
                ? (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43020
    ? (c < 3976
      ? (c < 2674
        ? (c < 1869
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'B' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1786 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))))))
          : (c <= 1957 || (c < 2451
            ? (c < 2144
              ? (c < 2048
                ? (c < 2036
                  ? (c < 1994
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2088
                  ? (c < 2084
                    ? c == 2074
                    : c <= 2084)
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2384
                ? (c < 2308
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2392 && c <= 2401)
                    : c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))
            : (c <= 2472 || (c < 2565
              ? (c < 2510
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2544
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2529)
                  : (c <= 2545 || c == 2556))))
              : (c <= 2570 || (c < 2613
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))))))))))
        : (c <= 2676 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 2990
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3168
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))))))))))
      : (c <= 3980 || (c < 8016
        ? (c < 5920
          ? (c < 4746
            ? (c < 4256
              ? (c < 4193
                ? (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4293 || (c < 4682
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))))
            : (c <= 4749 || (c < 4992
              ? (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))
              : (c <= 5007 || (c < 5761
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))))))))
          : (c <= 5937 || (c < 6981
            ? (c < 6320
              ? (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6576
                ? (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))))
            : (c <= 6987 || (c < 7401
              ? (c < 7245
                ? (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7404 || (c < 7680
                ? (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))))
        : (c <= 8023 || (c < 11631
          ? (c < 8458
            ? (c < 8144
              ? (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))
              : (c <= 8147 || (c < 8305
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))))
            : (c <= 8467 || (c < 8544
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))
              : (c <= 8584 || (c < 11506
                ? (c < 11360
                  ? (c < 11312
                    ? (c >= 11264 && c <= 11310)
                    : c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
          : (c <= 11631 || (c < 12704
            ? (c < 12293
              ? (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))
              : (c <= 12295 || (c < 12445
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12735 || (c < 42623
              ? (c < 42192
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42946
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))))))))))))
    : (c <= 43042 || (c < 70453
      ? (c < 66176
        ? (c < 64112
          ? (c < 43697
            ? (c < 43471
              ? (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43471 || (c < 43584
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))))))
            : (c <= 43697 || (c < 43793
              ? (c < 43739
                ? (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65147
            ? (c < 64326
              ? (c < 64298
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65017 || (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || c == 65145))))))
            : (c <= 65147 || (c < 65498
              ? (c < 65382
                ? (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65437 || (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65599
                ? (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))))))))))
        : (c <= 66204 || (c < 68416
          ? (c < 67639
            ? (c < 66736
              ? (c < 66432
                ? (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))
                : (c <= 66461 || (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))
              : (c <= 66771 || (c < 67392
                ? (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))))))
            : (c <= 67640 || (c < 68030
              ? (c < 67808
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))))
              : (c <= 68031 || (c < 68192
                ? (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))))))))
          : (c <= 68437 || (c < 69968
            ? (c < 69415
              ? (c < 68800
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))
                : (c <= 68850 || (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))
              : (c <= 69415 || (c < 69763
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))
                : (c <= 69807 || (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))))))
            : (c <= 70002 || (c < 70282
              ? (c < 70108
                ? (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))
                : (c <= 70108 || (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))))
              : (c <= 70285 || (c < 70415
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))
                : (c <= 70416 || (c < 70442
                  ? (c >= 70419 && c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))))))))))))
      : (c <= 70457 || (c < 113808
        ? (c < 72818
          ? (c < 71945
            ? (c < 71040
              ? (c < 70727
                ? (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))
                : (c <= 70730 || (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || c == 70855))))
              : (c <= 71086 || (c < 71352
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))
                : (c <= 71352 || (c < 71840
                  ? (c < 71680
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))))))
            : (c <= 71945 || (c < 72192
              ? (c < 72001
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))
                : (c <= 72001 || (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))))
              : (c <= 72192 || (c < 72349
                ? (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43052
    ? (c < 3718
      ? (c < 2730
        ? (c < 2042
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2534
            ? (c < 2447
              ? (c < 2230
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)))
                : (c <= 2247 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3142
          ? (c < 2918
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))
            : (c <= 2927 || (c < 3006
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))))
              : (c <= 3010 || (c < 3072
                ? (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || (c < 3046
                    ? c == 3031
                    : c <= 3055)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c >= 3133 && c <= 3140)))))))))
          : (c <= 3144 || (c < 3398
            ? (c < 3260
              ? (c < 3200
                ? (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)))
                : (c <= 3203 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))))
              : (c <= 3268 || (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? c == 3294
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))))
            : (c <= 3400 || (c < 3530
              ? (c < 3457
                ? (c < 3423
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)
                  : (c <= 3427 || (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || (c < 3520
                    ? c == 3517
                    : c <= 3526)))))
              : (c <= 3530 || (c < 3585
                ? (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)))
                : (c <= 3642 || (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || c == 3716))))))))))))
      : (c <= 3722 || (c < 7296
        ? (c < 5024
          ? (c < 4256
            ? (c < 3893
              ? (c < 3784
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)))
                : (c <= 3789 || (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)))))
              : (c <= 3893 || (c < 3974
                ? (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)))
                : (c <= 3991 || (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))))))
            : (c <= 4293 || (c < 4786
              ? (c < 4688
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))
                : (c <= 4694 || (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))))
              : (c <= 4789 || (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c >= 4992 && c <= 5007)))))))))
          : (c <= 5109 || (c < 6400
            ? (c < 5998
              ? (c < 5870
                ? (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))
                : (c <= 5880 || (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))))
              : (c <= 6000 || (c < 6155
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6160 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6800
              ? (c < 6576
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))))
              : (c <= 6809 || (c < 7019
                ? (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6848 || (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))))
        : (c <= 7304 || (c < 11264
          ? (c < 8178
            ? (c < 8027
              ? (c < 7675
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))
              : (c <= 8027 || (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))))
            : (c <= 8180 || (c < 8458
              ? (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))
              : (c <= 8467 || (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))))
          : (c <= 11310 || (c < 12353
            ? (c < 11696
              ? (c < 11565
                ? (c < 11499
                  ? (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)))))
              : (c <= 11702 || (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))))
            : (c <= 12438 || (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)))))
              : (c <= 42237 || (c < 42775
                ? (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))
                : (c <= 42783 || (c < 42946
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42943)
                  : (c <= 42954 || (c >= 42997 && c <= 43047)))))))))))))))
    : (c <= 43052 || (c < 71096
      ? (c < 66864
        ? (c < 64914
          ? (c < 43816
            ? (c < 43520
              ? (c < 43261
                ? (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))
                : (c <= 43309 || (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)))))
              : (c <= 43574 || (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))))
            : (c <= 43822 || (c < 64275
              ? (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))
              : (c <= 64279 || (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65549
            ? (c < 65151
              ? (c < 65137
                ? (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)
                  : (c <= 65071 || (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || (c < 65149
                    ? c == 65147
                    : c <= 65149)))))
              : (c <= 65276 || (c < 65474
                ? (c < 65343
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65343 || (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))))
            : (c <= 65574 || (c < 66349
              ? (c < 65856
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))
                : (c <= 65908 || (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))))
              : (c <= 66378 || (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))))))))
        : (c <= 66915 || (c < 69632
          ? (c < 68152
            ? (c < 67808
              ? (c < 67594
                ? (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)))))
              : (c <= 67826 || (c < 68096
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)))
                : (c <= 68099 || (c < 68117
                  ? (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))))
            : (c <= 68154 || (c < 68800
              ? (c < 68352
                ? (c < 68224
                  ? (c < 68192
                    ? c == 68159
                    : c <= 68220)
                  : (c <= 68252 || (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)))
                : (c <= 68405 || (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)))))
              : (c <= 68850 || (c < 69376
                ? (c < 69248
                  ? (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)
                  : (c <= 69289 || (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)))
                : (c <= 69404 || (c < 69552
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69456)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69702 || (c < 70384
            ? (c < 70094
              ? (c < 69942
                ? (c < 69840
                  ? (c < 69759
                    ? (c >= 69734 && c <= 69743)
                    : c <= 69818)
                  : (c <= 69864 || (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)))
                : (c <= 69951 || (c < 70006
                  ? (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)
                  : (c <= 70006 || (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)))))
              : (c <= 70106 || (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70199 || (c < 70272
                    ? c == 70206
                    : c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70378)))))))
            : (c <= 70393 || (c < 70487
              ? (c < 70450
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)
                  : (c <= 70416 || (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)))
                : (c <= 70451 || (c < 70471
                  ? (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)
                  : (c <= 70472 || (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)))))
              : (c <= 70487 || (c < 70750
                ? (c < 70512
                  ? (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)
                  : (c <= 70516 || (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)))
                : (c <= 70753 || (c < 70864
                  ? (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)
                  : (c <= 70873 || (c >= 71040 && c <= 71093)))))))))))))
      : (c <= 71104 || (c < 119894
        ? (c < 73104
          ? (c < 72163
            ? (c < 71935
              ? (c < 71360
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)
                  : (c <= 71236 || (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)))
                : (c <= 71369 || (c < 71472
                  ? (c < 71453
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71467)
                  : (c <= 71481 || (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)))))
              : (c <= 71942 || (c < 71995
                ? (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)))
                : (c <= 72003 || (c < 72106
                  ? (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)
                  : (c <= 72151 || (c >= 72154 && c <= 72161)))))))
            : (c <= 72164 || (c < 72873
              ? (c < 72704
                ? (c < 72272
                  ? (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)
                  : (c <= 72345 || (c < 72384
                    ? c == 72349
                    : c <= 72440)))
                : (c <= 72712 || (c < 72784
                  ? (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)
                  : (c <= 72793 || (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)))))
              : (c <= 72886 || (c < 73023
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73014 || (c < 73020
                    ? c == 73018
                    : c <= 73021)))
                : (c <= 73031 || (c < 73063
                  ? (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)
                  : (c <= 73064 || (c >= 73066 && c <= 73102)))))))))
          : (c <= 73105 || (c < 94095
            ? (c < 92768
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)
                  : (c <= 73462 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 82944
                  ? (c < 77824
                    ? (c >= 74880 && c <= 75075)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))))
              : (c <= 92777 || (c < 93027
                ? (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))
                : (c <= 93047 || (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c >= 94031 && c <= 94087)))))))
            : (c <= 94111 || (c < 113776
              ? (c < 101632
                ? (c < 94192
                  ? (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)
                  : (c <= 94193 || (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)))
                : (c <= 101640 || (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110878)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))))
              : (c <= 113788 || (c < 119163
                ? (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)))
                : (c <= 119170 || (c < 119362
                  ? (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)
                  : (c <= 119364 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 124928
          ? (c < 120630
            ? (c < 120094
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)))))
              : (c <= 120121 || (c < 120488
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)))
                : (c <= 120512 || (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))))))
            : (c <= 120654 || (c < 121505
              ? (c < 120782
                ? (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)))
                : (c <= 120831 || (c < 121461
                  ? (c < 121403
                    ? (c >= 121344 && c <= 121398)
                    : c <= 121452)
                  : (c <= 121461 || (c < 121499
                    ? c == 121476
                    : c <= 121503)))))
              : (c <= 121519 || (c < 123136
                ? (c < 122907
                  ? (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)
                  : (c <= 122913 || (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)))
                : (c <= 123180 || (c < 123214
                  ? (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)
                  : (c <= 123214 || (c >= 123584 && c <= 123641)))))))))
          : (c <= 125124 || (c < 126557
            ? (c < 126523
              ? (c < 126497
                ? (c < 125264
                  ? (c < 125184
                    ? (c >= 125136 && c <= 125142)
                    : c <= 125259)
                  : (c <= 125273 || (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)))
                : (c <= 126498 || (c < 126505
                  ? (c < 126503
                    ? c == 126500
                    : c <= 126503)
                  : (c <= 126514 || (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)))))
              : (c <= 126523 || (c < 126545
                ? (c < 126537
                  ? (c < 126535
                    ? c == 126530
                    : c <= 126535)
                  : (c <= 126537 || (c < 126541
                    ? c == 126539
                    : c <= 126543)))
                : (c <= 126546 || (c < 126553
                  ? (c < 126551
                    ? c == 126548
                    : c <= 126551)
                  : (c <= 126553 || c == 126555))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43052
    ? (c < 3718
      ? (c < 2730
        ? (c < 2042
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'B'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2534
            ? (c < 2447
              ? (c < 2230
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)))
                : (c <= 2247 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))))
            : (c <= 2545 || (c < 2622
              ? (c < 2579
                ? (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)))))
              : (c <= 2626 || (c < 2662
                ? (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)
                  : (c <= 2641 || (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3142
          ? (c < 2918
            ? (c < 2831
              ? (c < 2768
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)))
                : (c <= 2768 || (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2815 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))))
              : (c <= 2832 || (c < 2887
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))
            : (c <= 2927 || (c < 3006
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))))
              : (c <= 3010 || (c < 3072
                ? (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || (c < 3046
                    ? c == 3031
                    : c <= 3055)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c >= 3133 && c <= 3140)))))))))
          : (c <= 3144 || (c < 3398
            ? (c < 3260
              ? (c < 3200
                ? (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)))
                : (c <= 3203 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))))
              : (c <= 3268 || (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? c == 3294
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))))
            : (c <= 3400 || (c < 3530
              ? (c < 3457
                ? (c < 3423
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)
                  : (c <= 3427 || (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || (c < 3520
                    ? c == 3517
                    : c <= 3526)))))
              : (c <= 3530 || (c < 3585
                ? (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)))
                : (c <= 3642 || (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || c == 3716))))))))))))
      : (c <= 3722 || (c < 7296
        ? (c < 5024
          ? (c < 4256
            ? (c < 3893
              ? (c < 3784
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)))
                : (c <= 3789 || (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)))))
              : (c <= 3893 || (c < 3974
                ? (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)))
                : (c <= 3991 || (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))))))
            : (c <= 4293 || (c < 4786
              ? (c < 4688
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))
                : (c <= 4694 || (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))))
              : (c <= 4789 || (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c >= 4992 && c <= 5007)))))))))
          : (c <= 5109 || (c < 6400
            ? (c < 5998
              ? (c < 5870
                ? (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))
                : (c <= 5880 || (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)
                  : (c <= 5940 || (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)))))
              : (c <= 6000 || (c < 6155
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)
                  : (c <= 6103 || (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)))
                : (c <= 6157 || (c < 6272
                  ? (c < 6176
                    ? (c >= 6160 && c <= 6169)
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))
            : (c <= 6430 || (c < 6800
              ? (c < 6576
                ? (c < 6470
                  ? (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)
                  : (c <= 6509 || (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)))))
              : (c <= 6809 || (c < 7019
                ? (c < 6847
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6845)
                  : (c <= 6848 || (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))))
        : (c <= 7304 || (c < 11264
          ? (c < 8178
            ? (c < 8027
              ? (c < 7675
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))
              : (c <= 8027 || (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))))
            : (c <= 8180 || (c < 8458
              ? (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))
              : (c <= 8467 || (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))))
          : (c <= 11310 || (c < 12353
            ? (c < 11696
              ? (c < 11565
                ? (c < 11499
                  ? (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)
                  : (c <= 11507 || (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)))
                : (c <= 11565 || (c < 11647
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)))))
              : (c <= 11702 || (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))))
            : (c <= 12438 || (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12441 && c <= 12442)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)))))
              : (c <= 42237 || (c < 42775
                ? (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))
                : (c <= 42783 || (c < 42946
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42943)
                  : (c <= 42954 || (c >= 42997 && c <= 43047)))))))))))))))
    : (c <= 43052 || (c < 71096
      ? (c < 66864
        ? (c < 64914
          ? (c < 43816
            ? (c < 43520
              ? (c < 43261
                ? (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))
                : (c <= 43309 || (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)))))
              : (c <= 43574 || (c < 43744
                ? (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)))
                : (c <= 43759 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))))))
            : (c <= 43822 || (c < 64275
              ? (c < 44032
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)))))
              : (c <= 64279 || (c < 64323
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || (c < 64320
                    ? c == 64318
                    : c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65549
            ? (c < 65151
              ? (c < 65137
                ? (c < 65056
                  ? (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)
                  : (c <= 65071 || (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || (c < 65149
                    ? c == 65147
                    : c <= 65149)))))
              : (c <= 65276 || (c < 65474
                ? (c < 65343
                  ? (c < 65313
                    ? (c >= 65296 && c <= 65305)
                    : c <= 65338)
                  : (c <= 65343 || (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))))
            : (c <= 65574 || (c < 66349
              ? (c < 65856
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))
                : (c <= 65908 || (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))))
              : (c <= 66378 || (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))))))))
        : (c <= 66915 || (c < 69632
          ? (c < 68152
            ? (c < 67808
              ? (c < 67594
                ? (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)))))
              : (c <= 67826 || (c < 68096
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)))
                : (c <= 68099 || (c < 68117
                  ? (c < 68108
                    ? (c >= 68101 && c <= 68102)
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))))
            : (c <= 68154 || (c < 68800
              ? (c < 68352
                ? (c < 68224
                  ? (c < 68192
                    ? c == 68159
                    : c <= 68220)
                  : (c <= 68252 || (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)))
                : (c <= 68405 || (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)))))
              : (c <= 68850 || (c < 69376
                ? (c < 69248
                  ? (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)
                  : (c <= 69289 || (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)))
                : (c <= 69404 || (c < 69552
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69456)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69702 || (c < 70384
            ? (c < 70094
              ? (c < 69942
                ? (c < 69840
                  ? (c < 69759
                    ? (c >= 69734 && c <= 69743)
                    : c <= 69818)
                  : (c <= 69864 || (c < 69888
                    ? (c >= 69872 && c <= 69881)
                    : c <= 69940)))
                : (c <= 69951 || (c < 70006
                  ? (c < 69968
                    ? (c >= 69956 && c <= 69959)
                    : c <= 70003)
                  : (c <= 70006 || (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)))))
              : (c <= 70106 || (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70199 || (c < 70272
                    ? c == 70206
                    : c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70378)))))))
            : (c <= 70393 || (c < 70487
              ? (c < 70450
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)
                  : (c <= 70416 || (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)))
                : (c <= 70451 || (c < 70471
                  ? (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)
                  : (c <= 70472 || (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)))))
              : (c <= 70487 || (c < 70750
                ? (c < 70512
                  ? (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)
                  : (c <= 70516 || (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)))
                : (c <= 70753 || (c < 70864
                  ? (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)
                  : (c <= 70873 || (c >= 71040 && c <= 71093)))))))))))))
      : (c <= 71104 || (c < 119894
        ? (c < 73104
          ? (c < 72163
            ? (c < 71935
              ? (c < 71360
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)
                  : (c <= 71236 || (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)))
                : (c <= 71369 || (c < 71472
                  ? (c < 71453
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71467)
                  : (c <= 71481 || (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)))))
              : (c <= 71942 || (c < 71995
                ? (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)))
                : (c <= 72003 || (c < 72106
                  ? (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)
                  : (c <= 72151 || (c >= 72154 && c <= 72161)))))))
            : (c <= 72164 || (c < 72873
              ? (c < 72704
                ? (c < 72272
                  ? (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)
                  : (c <= 72345 || (c < 72384
                    ? c == 72349
                    : c <= 72440)))
                : (c <= 72712 || (c < 72784
                  ? (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)
                  : (c <= 72793 || (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)))))
              : (c <= 72886 || (c < 73023
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73014 || (c < 73020
                    ? c == 73018
                    : c <= 73021)))
                : (c <= 73031 || (c < 73063
                  ? (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)
                  : (c <= 73064 || (c >= 73066 && c <= 73102)))))))))
          : (c <= 73105 || (c < 94095
            ? (c < 92768
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)
                  : (c <= 73462 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 82944
                  ? (c < 77824
                    ? (c >= 74880 && c <= 75075)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))))
              : (c <= 92777 || (c < 93027
                ? (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))
                : (c <= 93047 || (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c >= 94031 && c <= 94087)))))))
            : (c <= 94111 || (c < 113776
              ? (c < 101632
                ? (c < 94192
                  ? (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)
                  : (c <= 94193 || (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)))
                : (c <= 101640 || (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110878)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))))
              : (c <= 113788 || (c < 119163
                ? (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)))
                : (c <= 119170 || (c < 119362
                  ? (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)
                  : (c <= 119364 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 124928
          ? (c < 120630
            ? (c < 120094
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)))))
              : (c <= 120121 || (c < 120488
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)))
                : (c <= 120512 || (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))))))
            : (c <= 120654 || (c < 121505
              ? (c < 120782
                ? (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)))
                : (c <= 120831 || (c < 121461
                  ? (c < 121403
                    ? (c >= 121344 && c <= 121398)
                    : c <= 121452)
                  : (c <= 121461 || (c < 121499
                    ? c == 121476
                    : c <= 121503)))))
              : (c <= 121519 || (c < 123136
                ? (c < 122907
                  ? (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)
                  : (c <= 122913 || (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)))
                : (c <= 123180 || (c < 123214
                  ? (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)
                  : (c <= 123214 || (c >= 123584 && c <= 123641)))))))))
          : (c <= 125124 || (c < 126557
            ? (c < 126523
              ? (c < 126497
                ? (c < 125264
                  ? (c < 125184
                    ? (c >= 125136 && c <= 125142)
                    : c <= 125259)
                  : (c <= 125273 || (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)))
                : (c <= 126498 || (c < 126505
                  ? (c < 126503
                    ? c == 126500
                    : c <= 126503)
                  : (c <= 126514 || (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)))))
              : (c <= 126523 || (c < 126545
                ? (c < 126537
                  ? (c < 126535
                    ? c == 126530
                    : c <= 126535)
                  : (c <= 126537 || (c < 126541
                    ? c == 126539
                    : c <= 126543)))
                : (c <= 126546 || (c < 126553
                  ? (c < 126551
                    ? c == 126548
                    : c <= 126551)
                  : (c <= 126553 || c == 126555))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead == 'O') ADVANCE(204);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(228);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(295);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(212);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z') ||
          lookahead == 170 ||
          lookahead == 181 ||
          lookahead == 186 ||
          (192 <= lookahead && lookahead <= 214) ||
          (216 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 705) ||
          (710 <= lookahead && lookahead <= 721) ||
          (736 <= lookahead && lookahead <= 740) ||
          lookahead == 748 ||
          lookahead == 750 ||
          (880 <= lookahead && lookahead <= 884) ||
          lookahead == 886 ||
          lookahead == 887 ||
          (891 <= lookahead && lookahead <= 893) ||
          lookahead == 895 ||
          lookahead == 902 ||
          (904 <= lookahead && lookahead <= 906) ||
          lookahead == 908 ||
          (910 <= lookahead && lookahead <= 929) ||
          (931 <= lookahead && lookahead <= 1013) ||
          (1015 <= lookahead && lookahead <= 1153) ||
          (1162 <= lookahead && lookahead <= 1327) ||
          (1329 <= lookahead && lookahead <= 1366) ||
          lookahead == 1369 ||
          (1376 <= lookahead && lookahead <= 1416) ||
          (1488 <= lookahead && lookahead <= 1514) ||
          (1519 <= lookahead && lookahead <= 1522) ||
          (1568 <= lookahead && lookahead <= 1610) ||
          lookahead == 1646 ||
          lookahead == 1647 ||
          (1649 <= lookahead && lookahead <= 1747) ||
          lookahead == 1749 ||
          lookahead == 1765 ||
          lookahead == 1766 ||
          lookahead == 1774 ||
          lookahead == 1775 ||
          (1786 <= lookahead && lookahead <= 1788) ||
          lookahead == 1791 ||
          lookahead == 1808 ||
          (1810 <= lookahead && lookahead <= 1839) ||
          (1869 <= lookahead && lookahead <= 1957) ||
          lookahead == 1969 ||
          (1994 <= lookahead && lookahead <= 2026) ||
          lookahead == 2036 ||
          lookahead == 2037 ||
          lookahead == 2042 ||
          (2048 <= lookahead && lookahead <= 2069) ||
          lookahead == 2074 ||
          lookahead == 2084 ||
          lookahead == 2088 ||
          (2112 <= lookahead && lookahead <= 2136) ||
          (2144 <= lookahead && lookahead <= 2154) ||
          (2208 <= lookahead && lookahead <= 2228) ||
          (2230 <= lookahead && lookahead <= 2247) ||
          (2308 <= lookahead && lookahead <= 2361) ||
          lookahead == 2365 ||
          lookahead == 2384 ||
          (2392 <= lookahead && lookahead <= 2401) ||
          (2417 <= lookahead && lookahead <= 2432) ||
          (2437 <= lookahead && lookahead <= 2444) ||
          lookahead == 2447 ||
          lookahead == 2448 ||
          (2451 <= lookahead && lookahead <= 2472) ||
          (2474 <= lookahead && lookahead <= 2480) ||
          lookahead == 2482 ||
          (2486 <= lookahead && lookahead <= 2489) ||
          lookahead == 2493 ||
          lookahead == 2510 ||
          lookahead == 2524 ||
          lookahead == 2525 ||
          (2527 <= lookahead && lookahead <= 2529) ||
          lookahead == 2544 ||
          lookahead == 2545 ||
          lookahead == 2556 ||
          (2565 <= lookahead && lookahead <= 2570) ||
          lookahead == 2575 ||
          lookahead == 2576 ||
          (2579 <= lookahead && lookahead <= 2600) ||
          (2602 <= lookahead && lookahead <= 2608) ||
          lookahead == 2610 ||
          lookahead == 2611 ||
          lookahead == 2613 ||
          lookahead == 2614 ||
          lookahead == 2616 ||
          lookahead == 2617 ||
          (2649 <= lookahead && lookahead <= 2652) ||
          lookahead == 2654 ||
          (2674 <= lookahead && lookahead <= 2676) ||
          (2693 <= lookahead && lookahead <= 2701) ||
          (2703 <= lookahead && lookahead <= 2705) ||
          (2707 <= lookahead && lookahead <= 2728) ||
          (2730 <= lookahead && lookahead <= 2736) ||
          lookahead == 2738 ||
          lookahead == 2739 ||
          (2741 <= lookahead && lookahead <= 2745) ||
          lookahead == 2749 ||
          lookahead == 2768 ||
          lookahead == 2784 ||
          lookahead == 2785 ||
          lookahead == 2809 ||
          (2821 <= lookahead && lookahead <= 2828) ||
          lookahead == 2831 ||
          lookahead == 2832 ||
          (2835 <= lookahead && lookahead <= 2856) ||
          (2858 <= lookahead && lookahead <= 2864) ||
          lookahead == 2866 ||
          lookahead == 2867 ||
          (2869 <= lookahead && lookahead <= 2873) ||
          lookahead == 2877 ||
          lookahead == 2908 ||
          lookahead == 2909 ||
          (2911 <= lookahead && lookahead <= 2913) ||
          lookahead == 2929 ||
          lookahead == 2947 ||
          (2949 <= lookahead && lookahead <= 2954) ||
          (2958 <= lookahead && lookahead <= 2960) ||
          (2962 <= lookahead && lookahead <= 2965) ||
          lookahead == 2969 ||
          lookahead == 2970 ||
          lookahead == 2972 ||
          lookahead == 2974 ||
          lookahead == 2975 ||
          lookahead == 2979 ||
          lookahead == 2980 ||
          (2984 <= lookahead && lookahead <= 2986) ||
          (2990 <= lookahead && lookahead <= 3001) ||
          lookahead == 3024 ||
          (3077 <= lookahead && lookahead <= 3084) ||
          (3086 <= lookahead && lookahead <= 3088) ||
          (3090 <= lookahead && lookahead <= 3112) ||
          (3114 <= lookahead && lookahead <= 3129) ||
          lookahead == 3133 ||
          (3160 <= lookahead && lookahead <= 3162) ||
          lookahead == 3168 ||
          lookahead == 3169 ||
          lookahead == 3200 ||
          (3205 <= lookahead && lookahead <= 3212) ||
          (3214 <= lookahead && lookahead <= 3216) ||
          (3218 <= lookahead && lookahead <= 3240) ||
          (3242 <= lookahead && lookahead <= 3251) ||
          (3253 <= lookahead && lookahead <= 3257) ||
          lookahead == 3261 ||
          lookahead == 3294 ||
          lookahead == 3296 ||
          lookahead == 3297 ||
          lookahead == 3313 ||
          lookahead == 3314 ||
          (3332 <= lookahead && lookahead <= 3340) ||
          (3342 <= lookahead && lookahead <= 3344) ||
          (3346 <= lookahead && lookahead <= 3386) ||
          lookahead == 3389 ||
          lookahead == 3406 ||
          (3412 <= lookahead && lookahead <= 3414) ||
          (3423 <= lookahead && lookahead <= 3425) ||
          (3450 <= lookahead && lookahead <= 3455) ||
          (3461 <= lookahead && lookahead <= 3478) ||
          (3482 <= lookahead && lookahead <= 3505) ||
          (3507 <= lookahead && lookahead <= 3515) ||
          lookahead == 3517 ||
          (3520 <= lookahead && lookahead <= 3526) ||
          (3585 <= lookahead && lookahead <= 3632) ||
          lookahead == 3634 ||
          (3648 <= lookahead && lookahead <= 3654) ||
          lookahead == 3713 ||
          lookahead == 3714 ||
          lookahead == 3716 ||
          (3718 <= lookahead && lookahead <= 3722) ||
          (3724 <= lookahead && lookahead <= 3747) ||
          lookahead == 3749 ||
          (3751 <= lookahead && lookahead <= 3760) ||
          lookahead == 3762 ||
          lookahead == 3773 ||
          (3776 <= lookahead && lookahead <= 3780) ||
          lookahead == 3782 ||
          (3804 <= lookahead && lookahead <= 3807) ||
          lookahead == 3840 ||
          (3904 <= lookahead && lookahead <= 3911) ||
          (3913 <= lookahead && lookahead <= 3948) ||
          (3976 <= lookahead && lookahead <= 3980) ||
          (4096 <= lookahead && lookahead <= 4138) ||
          lookahead == 4159 ||
          (4176 <= lookahead && lookahead <= 4181) ||
          (4186 <= lookahead && lookahead <= 4189) ||
          lookahead == 4193 ||
          lookahead == 4197 ||
          lookahead == 4198 ||
          (4206 <= lookahead && lookahead <= 4208) ||
          (4213 <= lookahead && lookahead <= 4225) ||
          lookahead == 4238 ||
          (4256 <= lookahead && lookahead <= 4293) ||
          lookahead == 4295 ||
          lookahead == 4301 ||
          (4304 <= lookahead && lookahead <= 4346) ||
          (4348 <= lookahead && lookahead <= 4680) ||
          (4682 <= lookahead && lookahead <= 4685) ||
          (4688 <= lookahead && lookahead <= 4694) ||
          lookahead == 4696 ||
          (4698 <= lookahead && lookahead <= 4701) ||
          (4704 <= lookahead && lookahead <= 4744) ||
          (4746 <= lookahead && lookahead <= 4749) ||
          (4752 <= lookahead && lookahead <= 4784) ||
          (4786 <= lookahead && lookahead <= 4789) ||
          (4792 <= lookahead && lookahead <= 4798) ||
          lookahead == 4800 ||
          (4802 <= lookahead && lookahead <= 4805) ||
          (4808 <= lookahead && lookahead <= 4822) ||
          (4824 <= lookahead && lookahead <= 4880) ||
          (4882 <= lookahead && lookahead <= 4885) ||
          (4888 <= lookahead && lookahead <= 4954) ||
          (4992 <= lookahead && lookahead <= 5007) ||
          (5024 <= lookahead && lookahead <= 5109) ||
          (5112 <= lookahead && lookahead <= 5117) ||
          (5121 <= lookahead && lookahead <= 5740) ||
          (5743 <= lookahead && lookahead <= 5759) ||
          (5761 <= lookahead && lookahead <= 5786) ||
          (5792 <= lookahead && lookahead <= 5866) ||
          (5870 <= lookahead && lookahead <= 5880) ||
          (5888 <= lookahead && lookahead <= 5900) ||
          (5902 <= lookahead && lookahead <= 5905) ||
          (5920 <= lookahead && lookahead <= 5937) ||
          (5952 <= lookahead && lookahead <= 5969) ||
          (5984 <= lookahead && lookahead <= 5996) ||
          (5998 <= lookahead && lookahead <= 6000) ||
          (6016 <= lookahead && lookahead <= 6067) ||
          lookahead == 6103 ||
          lookahead == 6108 ||
          (6176 <= lookahead && lookahead <= 6264) ||
          (6272 <= lookahead && lookahead <= 6312) ||
          lookahead == 6314 ||
          (6320 <= lookahead && lookahead <= 6389) ||
          (6400 <= lookahead && lookahead <= 6430) ||
          (6480 <= lookahead && lookahead <= 6509) ||
          (6512 <= lookahead && lookahead <= 6516) ||
          (6528 <= lookahead && lookahead <= 6571) ||
          (6576 <= lookahead && lookahead <= 6601) ||
          (6656 <= lookahead && lookahead <= 6678) ||
          (6688 <= lookahead && lookahead <= 6740) ||
          lookahead == 6823 ||
          (6917 <= lookahead && lookahead <= 6963) ||
          (6981 <= lookahead && lookahead <= 6987) ||
          (7043 <= lookahead && lookahead <= 7072) ||
          lookahead == 7086 ||
          lookahead == 7087 ||
          (7098 <= lookahead && lookahead <= 7141) ||
          (7168 <= lookahead && lookahead <= 7203) ||
          (7245 <= lookahead && lookahead <= 7247) ||
          (7258 <= lookahead && lookahead <= 7293) ||
          (7296 <= lookahead && lookahead <= 7304) ||
          (7312 <= lookahead && lookahead <= 7354) ||
          (7357 <= lookahead && lookahead <= 7359) ||
          (7401 <= lookahead && lookahead <= 7404) ||
          (7406 <= lookahead && lookahead <= 7411) ||
          lookahead == 7413 ||
          lookahead == 7414 ||
          lookahead == 7418 ||
          (7424 <= lookahead && lookahead <= 7615) ||
          (7680 <= lookahead && lookahead <= 7957) ||
          (7960 <= lookahead && lookahead <= 7965) ||
          (7968 <= lookahead && lookahead <= 8005) ||
          (8008 <= lookahead && lookahead <= 8013) ||
          (8016 <= lookahead && lookahead <= 8023) ||
          lookahead == 8025 ||
          lookahead == 8027 ||
          lookahead == 8029 ||
          (8031 <= lookahead && lookahead <= 8061) ||
          (8064 <= lookahead && lookahead <= 8116) ||
          (8118 <= lookahead && lookahead <= 8124) ||
          lookahead == 8126 ||
          (8130 <= lookahead && lookahead <= 8132) ||
          (8134 <= lookahead && lookahead <= 8140) ||
          (8144 <= lookahead && lookahead <= 8147) ||
          (8150 <= lookahead && lookahead <= 8155) ||
          (8160 <= lookahead && lookahead <= 8172) ||
          (8178 <= lookahead && lookahead <= 8180) ||
          (8182 <= lookahead && lookahead <= 8188) ||
          lookahead == 8305 ||
          lookahead == 8319 ||
          (8336 <= lookahead && lookahead <= 8348) ||
          lookahead == 8450 ||
          lookahead == 8455 ||
          (8458 <= lookahead && lookahead <= 8467) ||
          lookahead == 8469 ||
          (8472 <= lookahead && lookahead <= 8477) ||
          lookahead == 8484 ||
          lookahead == 8486 ||
          lookahead == 8488 ||
          (8490 <= lookahead && lookahead <= 8505) ||
          (8508 <= lookahead && lookahead <= 8511) ||
          (8517 <= lookahead && lookahead <= 8521) ||
          lookahead == 8526 ||
          (8544 <= lookahead && lookahead <= 8584) ||
          (11264 <= lookahead && lookahead <= 11310) ||
          (11312 <= lookahead && lookahead <= 11358) ||
          (11360 <= lookahead && lookahead <= 11492) ||
          (11499 <= lookahead && lookahead <= 11502) ||
          lookahead == 11506 ||
          lookahead == 11507 ||
          (11520 <= lookahead && lookahead <= 11557) ||
          lookahead == 11559 ||
          lookahead == 11565 ||
          (11568 <= lookahead && lookahead <= 11623) ||
          lookahead == 11631 ||
          (11648 <= lookahead && lookahead <= 11670) ||
          (11680 <= lookahead && lookahead <= 11686) ||
          (11688 <= lookahead && lookahead <= 11694) ||
          (11696 <= lookahead && lookahead <= 11702) ||
          (11704 <= lookahead && lookahead <= 11710) ||
          (11712 <= lookahead && lookahead <= 11718) ||
          (11720 <= lookahead && lookahead <= 11726) ||
          (11728 <= lookahead && lookahead <= 11734) ||
          (11736 <= lookahead && lookahead <= 11742) ||
          (12293 <= lookahead && lookahead <= 12295) ||
          (12321 <= lookahead && lookahead <= 12329) ||
          (12337 <= lookahead && lookahead <= 12341) ||
          (12344 <= lookahead && lookahead <= 12348) ||
          (12353 <= lookahead && lookahead <= 12438) ||
          (12445 <= lookahead && lookahead <= 12447) ||
          (12449 <= lookahead && lookahead <= 12538) ||
          (12540 <= lookahead && lookahead <= 12543) ||
          (12549 <= lookahead && lookahead <= 12591) ||
          (12593 <= lookahead && lookahead <= 12686) ||
          (12704 <= lookahead && lookahead <= 12735) ||
          (12784 <= lookahead && lookahead <= 12799) ||
          (13312 <= lookahead && lookahead <= 19903) ||
          (19968 <= lookahead && lookahead <= 40956) ||
          (40960 <= lookahead && lookahead <= 42124) ||
          (42192 <= lookahead && lookahead <= 42237) ||
          (42240 <= lookahead && lookahead <= 42508) ||
          (42512 <= lookahead && lookahead <= 42527) ||
          lookahead == 42538 ||
          lookahead == 42539 ||
          (42560 <= lookahead && lookahead <= 42606) ||
          (42623 <= lookahead && lookahead <= 42653) ||
          (42656 <= lookahead && lookahead <= 42735) ||
          (42775 <= lookahead && lookahead <= 42783) ||
          (42786 <= lookahead && lookahead <= 42888) ||
          (42891 <= lookahead && lookahead <= 42943) ||
          (42946 <= lookahead && lookahead <= 42954) ||
          (42997 <= lookahead && lookahead <= 43009) ||
          (43011 <= lookahead && lookahead <= 43013) ||
          (43015 <= lookahead && lookahead <= 43018) ||
          (43020 <= lookahead && lookahead <= 43042) ||
          (43072 <= lookahead && lookahead <= 43123) ||
          (43138 <= lookahead && lookahead <= 43187) ||
          (43250 <= lookahead && lookahead <= 43255) ||
          lookahead == 43259 ||
          lookahead == 43261 ||
          lookahead == 43262 ||
          (43274 <= lookahead && lookahead <= 43301) ||
          (43312 <= lookahead && lookahead <= 43334) ||
          (43360 <= lookahead && lookahead <= 43388) ||
          (43396 <= lookahead && lookahead <= 43442) ||
          lookahead == 43471 ||
          (43488 <= lookahead && lookahead <= 43492) ||
          (43494 <= lookahead && lookahead <= 43503) ||
          (43514 <= lookahead && lookahead <= 43518) ||
          (43520 <= lookahead && lookahead <= 43560) ||
          (43584 <= lookahead && lookahead <= 43586) ||
          (43588 <= lookahead && lookahead <= 43595) ||
          (43616 <= lookahead && lookahead <= 43638) ||
          lookahead == 43642 ||
          (43646 <= lookahead && lookahead <= 43695) ||
          lookahead == 43697 ||
          lookahead == 43701 ||
          lookahead == 43702 ||
          (43705 <= lookahead && lookahead <= 43709) ||
          lookahead == 43712 ||
          lookahead == 43714 ||
          (43739 <= lookahead && lookahead <= 43741) ||
          (43744 <= lookahead && lookahead <= 43754) ||
          (43762 <= lookahead && lookahead <= 43764) ||
          (43777 <= lookahead && lookahead <= 43782) ||
          (43785 <= lookahead && lookahead <= 43790) ||
          (43793 <= lookahead && lookahead <= 43798) ||
          (43808 <= lookahead && lookahead <= 43814) ||
          (43816 <= lookahead && lookahead <= 43822) ||
          (43824 <= lookahead && lookahead <= 43866) ||
          (43868 <= lookahead && lookahead <= 43881) ||
          (43888 <= lookahead && lookahead <= 44002) ||
          (44032 <= lookahead && lookahead <= 55203) ||
          (55216 <= lookahead && lookahead <= 55238) ||
          (55243 <= lookahead && lookahead <= 55291) ||
          (63744 <= lookahead && lookahead <= 64109) ||
          (64112 <= lookahead && lookahead <= 64217) ||
          (64256 <= lookahead && lookahead <= 64262) ||
          (64275 <= lookahead && lookahead <= 64279) ||
          lookahead == 64285 ||
          (64287 <= lookahead && lookahead <= 64296) ||
          (64298 <= lookahead && lookahead <= 64310) ||
          (64312 <= lookahead && lookahead <= 64316) ||
          lookahead == 64318 ||
          lookahead == 64320 ||
          lookahead == 64321 ||
          lookahead == 64323 ||
          lookahead == 64324 ||
          (64326 <= lookahead && lookahead <= 64433) ||
          (64467 <= lookahead && lookahead <= 64605) ||
          (64612 <= lookahead && lookahead <= 64829) ||
          (64848 <= lookahead && lookahead <= 64911) ||
          (64914 <= lookahead && lookahead <= 64967) ||
          (65008 <= lookahead && lookahead <= 65017) ||
          lookahead == 65137 ||
          lookahead == 65139 ||
          lookahead == 65143 ||
          lookahead == 65145 ||
          lookahead == 65147 ||
          lookahead == 65149 ||
          (65151 <= lookahead && lookahead <= 65276) ||
          (65313 <= lookahead && lookahead <= 65338) ||
          (65345 <= lookahead && lookahead <= 65370) ||
          (65382 <= lookahead && lookahead <= 65437) ||
          (65440 <= lookahead && lookahead <= 65470) ||
          (65474 <= lookahead && lookahead <= 65479) ||
          (65482 <= lookahead && lookahead <= 65487) ||
          (65490 <= lookahead && lookahead <= 65495) ||
          (65498 <= lookahead && lookahead <= 65500) ||
          (65536 <= lookahead && lookahead <= 65547) ||
          (65549 <= lookahead && lookahead <= 65574) ||
          (65576 <= lookahead && lookahead <= 65594) ||
          lookahead == 65596 ||
          lookahead == 65597 ||
          (65599 <= lookahead && lookahead <= 65613) ||
          (65616 <= lookahead && lookahead <= 65629) ||
          (65664 <= lookahead && lookahead <= 65786) ||
          (65856 <= lookahead && lookahead <= 65908) ||
          (66176 <= lookahead && lookahead <= 66204) ||
          (66208 <= lookahead && lookahead <= 66256) ||
          (66304 <= lookahead && lookahead <= 66335) ||
          (66349 <= lookahead && lookahead <= 66378) ||
          (66384 <= lookahead && lookahead <= 66421) ||
          (66432 <= lookahead && lookahead <= 66461) ||
          (66464 <= lookahead && lookahead <= 66499) ||
          (66504 <= lookahead && lookahead <= 66511) ||
          (66513 <= lookahead && lookahead <= 66517) ||
          (66560 <= lookahead && lookahead <= 66717) ||
          (66736 <= lookahead && lookahead <= 66771) ||
          (66776 <= lookahead && lookahead <= 66811) ||
          (66816 <= lookahead && lookahead <= 66855) ||
          (66864 <= lookahead && lookahead <= 66915) ||
          (67072 <= lookahead && lookahead <= 67382) ||
          (67392 <= lookahead && lookahead <= 67413) ||
          (67424 <= lookahead && lookahead <= 67431) ||
          (67584 <= lookahead && lookahead <= 67589) ||
          lookahead == 67592 ||
          (67594 <= lookahead && lookahead <= 67637) ||
          lookahead == 67639 ||
          lookahead == 67640 ||
          lookahead == 67644 ||
          (67647 <= lookahead && lookahead <= 67669) ||
          (67680 <= lookahead && lookahead <= 67702) ||
          (67712 <= lookahead && lookahead <= 67742) ||
          (67808 <= lookahead && lookahead <= 67826) ||
          lookahead == 67828 ||
          lookahead == 67829 ||
          (67840 <= lookahead && lookahead <= 67861) ||
          (67872 <= lookahead && lookahead <= 67897) ||
          (67968 <= lookahead && lookahead <= 68023) ||
          lookahead == 68030 ||
          lookahead == 68031 ||
          lookahead == 68096 ||
          (68112 <= lookahead && lookahead <= 68115) ||
          (68117 <= lookahead && lookahead <= 68119) ||
          (68121 <= lookahead && lookahead <= 68149) ||
          (68192 <= lookahead && lookahead <= 68220) ||
          (68224 <= lookahead && lookahead <= 68252) ||
          (68288 <= lookahead && lookahead <= 68295) ||
          (68297 <= lookahead && lookahead <= 68324) ||
          (68352 <= lookahead && lookahead <= 68405) ||
          (68416 <= lookahead && lookahead <= 68437) ||
          (68448 <= lookahead && lookahead <= 68466) ||
          (68480 <= lookahead && lookahead <= 68497) ||
          (68608 <= lookahead && lookahead <= 68680) ||
          (68736 <= lookahead && lookahead <= 68786) ||
          (68800 <= lookahead && lookahead <= 68850) ||
          (68864 <= lookahead && lookahead <= 68899) ||
          (69248 <= lookahead && lookahead <= 69289) ||
          lookahead == 69296 ||
          lookahead == 69297 ||
          (69376 <= lookahead && lookahead <= 69404) ||
          lookahead == 69415 ||
          (69424 <= lookahead && lookahead <= 69445) ||
          (69552 <= lookahead && lookahead <= 69572) ||
          (69600 <= lookahead && lookahead <= 69622) ||
          (69635 <= lookahead && lookahead <= 69687) ||
          (69763 <= lookahead && lookahead <= 69807) ||
          (69840 <= lookahead && lookahead <= 69864) ||
          (69891 <= lookahead && lookahead <= 69926) ||
          lookahead == 69956 ||
          lookahead == 69959 ||
          (69968 <= lookahead && lookahead <= 70002) ||
          lookahead == 70006 ||
          (70019 <= lookahead && lookahead <= 70066) ||
          (70081 <= lookahead && lookahead <= 70084) ||
          lookahead == 70106 ||
          lookahead == 70108 ||
          (70144 <= lookahead && lookahead <= 70161) ||
          (70163 <= lookahead && lookahead <= 70187) ||
          (70272 <= lookahead && lookahead <= 70278) ||
          lookahead == 70280 ||
          (70282 <= lookahead && lookahead <= 70285) ||
          (70287 <= lookahead && lookahead <= 70301) ||
          (70303 <= lookahead && lookahead <= 70312) ||
          (70320 <= lookahead && lookahead <= 70366) ||
          (70405 <= lookahead && lookahead <= 70412) ||
          lookahead == 70415 ||
          lookahead == 70416 ||
          (70419 <= lookahead && lookahead <= 70440) ||
          (70442 <= lookahead && lookahead <= 70448) ||
          lookahead == 70450 ||
          lookahead == 70451 ||
          (70453 <= lookahead && lookahead <= 70457) ||
          lookahead == 70461 ||
          lookahead == 70480 ||
          (70493 <= lookahead && lookahead <= 70497) ||
          (70656 <= lookahead && lookahead <= 70708) ||
          (70727 <= lookahead && lookahead <= 70730) ||
          (70751 <= lookahead && lookahead <= 70753) ||
          (70784 <= lookahead && lookahead <= 70831) ||
          lookahead == 70852 ||
          lookahead == 70853 ||
          lookahead == 70855 ||
          (71040 <= lookahead && lookahead <= 71086) ||
          (71128 <= lookahead && lookahead <= 71131) ||
          (71168 <= lookahead && lookahead <= 71215) ||
          lookahead == 71236 ||
          (71296 <= lookahead && lookahead <= 71338) ||
          lookahead == 71352 ||
          (71424 <= lookahead && lookahead <= 71450) ||
          (71680 <= lookahead && lookahead <= 71723) ||
          (71840 <= lookahead && lookahead <= 71903) ||
          (71935 <= lookahead && lookahead <= 71942) ||
          lookahead == 71945 ||
          (71948 <= lookahead && lookahead <= 71955) ||
          lookahead == 71957 ||
          lookahead == 71958 ||
          (71960 <= lookahead && lookahead <= 71983) ||
          lookahead == 71999 ||
          lookahead == 72001 ||
          (72096 <= lookahead && lookahead <= 72103) ||
          (72106 <= lookahead && lookahead <= 72144) ||
          lookahead == 72161 ||
          lookahead == 72163 ||
          lookahead == 72192 ||
          (72203 <= lookahead && lookahead <= 72242) ||
          lookahead == 72250 ||
          lookahead == 72272 ||
          (72284 <= lookahead && lookahead <= 72329) ||
          lookahead == 72349 ||
          (72384 <= lookahead && lookahead <= 72440) ||
          (72704 <= lookahead && lookahead <= 72712) ||
          (72714 <= lookahead && lookahead <= 72750) ||
          lookahead == 72768 ||
          (72818 <= lookahead && lookahead <= 72847) ||
          (72960 <= lookahead && lookahead <= 72966) ||
          lookahead == 72968 ||
          lookahead == 72969 ||
          (72971 <= lookahead && lookahead <= 73008) ||
          lookahead == 73030 ||
          (73056 <= lookahead && lookahead <= 73061) ||
          lookahead == 73063 ||
          lookahead == 73064 ||
          (73066 <= lookahead && lookahead <= 73097) ||
          lookahead == 73112 ||
          (73440 <= lookahead && lookahead <= 73458) ||
          lookahead == 73648 ||
          (73728 <= lookahead && lookahead <= 74649) ||
          (74752 <= lookahead && lookahead <= 74862) ||
          (74880 <= lookahead && lookahead <= 75075) ||
          (77824 <= lookahead && lookahead <= 78894) ||
          (82944 <= lookahead && lookahead <= 83526) ||
          (92160 <= lookahead && lookahead <= 92728) ||
          (92736 <= lookahead && lookahead <= 92766) ||
          (92880 <= lookahead && lookahead <= 92909) ||
          (92928 <= lookahead && lookahead <= 92975) ||
          (92992 <= lookahead && lookahead <= 92995) ||
          (93027 <= lookahead && lookahead <= 93047) ||
          (93053 <= lookahead && lookahead <= 93071) ||
          (93760 <= lookahead && lookahead <= 93823) ||
          (93952 <= lookahead && lookahead <= 94026) ||
          lookahead == 94032 ||
          (94099 <= lookahead && lookahead <= 94111) ||
          lookahead == 94176 ||
          lookahead == 94177 ||
          lookahead == 94179 ||
          (94208 <= lookahead && lookahead <= 100343) ||
          (100352 <= lookahead && lookahead <= 101589) ||
          (101632 <= lookahead && lookahead <= 101640) ||
          (110592 <= lookahead && lookahead <= 110878) ||
          (110928 <= lookahead && lookahead <= 110930) ||
          (110948 <= lookahead && lookahead <= 110951) ||
          (110960 <= lookahead && lookahead <= 111355) ||
          (113664 <= lookahead && lookahead <= 113770) ||
          (113776 <= lookahead && lookahead <= 113788) ||
          (113792 <= lookahead && lookahead <= 113800) ||
          (113808 <= lookahead && lookahead <= 113817) ||
          (119808 <= lookahead && lookahead <= 119892) ||
          (119894 <= lookahead && lookahead <= 119964) ||
          lookahead == 119966 ||
          lookahead == 119967 ||
          lookahead == 119970 ||
          lookahead == 119973 ||
          lookahead == 119974 ||
          (119977 <= lookahead && lookahead <= 119980) ||
          (119982 <= lookahead && lookahead <= 119993) ||
          lookahead == 119995 ||
          (119997 <= lookahead && lookahead <= 120003) ||
          (120005 <= lookahead && lookahead <= 120069) ||
          (120071 <= lookahead && lookahead <= 120074) ||
          (120077 <= lookahead && lookahead <= 120084) ||
          (120086 <= lookahead && lookahead <= 120092) ||
          (120094 <= lookahead && lookahead <= 120121) ||
          (120123 <= lookahead && lookahead <= 120126) ||
          (120128 <= lookahead && lookahead <= 120132) ||
          lookahead == 120134 ||
          (120138 <= lookahead && lookahead <= 120144) ||
          (120146 <= lookahead && lookahead <= 120485) ||
          (120488 <= lookahead && lookahead <= 120512) ||
          (120514 <= lookahead && lookahead <= 120538) ||
          (120540 <= lookahead && lookahead <= 120570) ||
          (120572 <= lookahead && lookahead <= 120596) ||
          (120598 <= lookahead && lookahead <= 120628) ||
          (120630 <= lookahead && lookahead <= 120654) ||
          (120656 <= lookahead && lookahead <= 120686) ||
          (120688 <= lookahead && lookahead <= 120712) ||
          (120714 <= lookahead && lookahead <= 120744) ||
          (120746 <= lookahead && lookahead <= 120770) ||
          (120772 <= lookahead && lookahead <= 120779) ||
          (123136 <= lookahead && lookahead <= 123180) ||
          (123191 <= lookahead && lookahead <= 123197) ||
          lookahead == 123214 ||
          (123584 <= lookahead && lookahead <= 123627) ||
          (124928 <= lookahead && lookahead <= 125124) ||
          (125184 <= lookahead && lookahead <= 125251) ||
          lookahead == 125259 ||
          (126464 <= lookahead && lookahead <= 126467) ||
          (126469 <= lookahead && lookahead <= 126495) ||
          lookahead == 126497 ||
          lookahead == 126498 ||
          lookahead == 126500 ||
          lookahead == 126503 ||
          (126505 <= lookahead && lookahead <= 126514) ||
          (126516 <= lookahead && lookahead <= 126519) ||
          lookahead == 126521 ||
          lookahead == 126523 ||
          lookahead == 126530 ||
          lookahead == 126535 ||
          lookahead == 126537 ||
          lookahead == 126539 ||
          (126541 <= lookahead && lookahead <= 126543) ||
          lookahead == 126545 ||
          lookahead == 126546 ||
          lookahead == 126548 ||
          lookahead == 126551 ||
          lookahead == 126553 ||
          lookahead == 126555 ||
          lookahead == 126557 ||
          lookahead == 126559 ||
          lookahead == 126561 ||
          lookahead == 126562 ||
          lookahead == 126564 ||
          (126567 <= lookahead && lookahead <= 126570) ||
          (126572 <= lookahead && lookahead <= 126578) ||
          (126580 <= lookahead && lookahead <= 126583) ||
          (126585 <= lookahead && lookahead <= 126588) ||
          lookahead == 126590 ||
          (126592 <= lookahead && lookahead <= 126601) ||
          (126603 <= lookahead && lookahead <= 126619) ||
          (126625 <= lookahead && lookahead <= 126627) ||
          (126629 <= lookahead && lookahead <= 126633) ||
          (126635 <= lookahead && lookahead <= 126651) ||
          (131072 <= lookahead && lookahead <= 173789) ||
          (173824 <= lookahead && lookahead <= 177972) ||
          (177984 <= lookahead && lookahead <= 178205) ||
          (178208 <= lookahead && lookahead <= 183969) ||
          (183984 <= lookahead && lookahead <= 191456) ||
          (194560 <= lookahead && lookahead <= 195101) ||
          (196608 <= lookahead && lookahead <= 201546)) ADVANCE(325);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(325);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(325);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(338);
      END_STATE();
    case 6:
      if (lookahead == 'N') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(342);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 51:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 52:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 53:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(355);
      END_STATE();
    case 54:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 55:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 74:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(335);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 89:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 100:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 109:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 127:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 128:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 131:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(357);
      END_STATE();
    case 132:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 134:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 135:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 137:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(206);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(325);
      END_STATE();
    case 138:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(8);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(89);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 139:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(106);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      END_STATE();
    case 140:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(12);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      END_STATE();
    case 141:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(351);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '+') ADVANCE(348);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '<') ADVANCE(327);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'O') ADVANCE(205);
      if (lookahead == '^') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(295);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(212);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(325);
      END_STATE();
    case 142:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(319);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(295);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(212);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(325);
      END_STATE();
    case 143:
      if (eof) ADVANCE(144);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(325);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token4);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token4);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token5);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token5);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token3);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token3);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(165);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_cross_join_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_cross_join_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_cross_join_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_cross_join_token2);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_qualified_join_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_qualified_join_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_qualified_join_token2);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_qualified_join_token2);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_qualified_join_token3);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_qualified_join_token3);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_qualified_join_token4);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_qualified_join_token4);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_qualified_join_token5);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_qualified_join_token5);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_lit_integer);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_lit_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_lit_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(341);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(339);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(219);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(198);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(200);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(231);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(231);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(231);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(231);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(341);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(325);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(325);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(280);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(255);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(307);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(157);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(245);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(309);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(240);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(253);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(310);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(315);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(296);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(285);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(251);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(301);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(255);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(216);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '>') ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_comparison_operator_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_comparison_operator_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_comparison_operator_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_comparison_operator_token2);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_comparison_operator_token3);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_AND);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(325);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_window_frame_start_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_window_frame_start_token2);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_window_frame_start_token3);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_window_frame_start_token4);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_window_frame_start_token5);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_window_specification_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_window_specification_token2);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_window_specification_token3);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_window_specification_token4);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_window_function_token1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(5);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(8);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(12);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_cte_def_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 21:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_join_clause_on_token1);
      END_STATE();
    case 26:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token2);
      END_STATE();
    case 34:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_dataset_definition_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_lit_null_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_lit_boolean_token1);
      END_STATE();
    case 49:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_lit_boolean_token2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_join_clause_using_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_select_body_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_select_set_operator_token3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 141},
  [3] = {.lex_state = 138},
  [4] = {.lex_state = 141},
  [5] = {.lex_state = 138},
  [6] = {.lex_state = 138},
  [7] = {.lex_state = 138},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 138},
  [11] = {.lex_state = 138},
  [12] = {.lex_state = 138},
  [13] = {.lex_state = 138},
  [14] = {.lex_state = 138},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 138},
  [17] = {.lex_state = 138},
  [18] = {.lex_state = 138},
  [19] = {.lex_state = 138},
  [20] = {.lex_state = 138},
  [21] = {.lex_state = 138},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 138},
  [24] = {.lex_state = 138},
  [25] = {.lex_state = 138},
  [26] = {.lex_state = 138},
  [27] = {.lex_state = 138},
  [28] = {.lex_state = 138},
  [29] = {.lex_state = 138},
  [30] = {.lex_state = 138},
  [31] = {.lex_state = 138},
  [32] = {.lex_state = 138},
  [33] = {.lex_state = 138},
  [34] = {.lex_state = 138},
  [35] = {.lex_state = 138},
  [36] = {.lex_state = 138},
  [37] = {.lex_state = 138},
  [38] = {.lex_state = 138},
  [39] = {.lex_state = 137},
  [40] = {.lex_state = 137},
  [41] = {.lex_state = 138},
  [42] = {.lex_state = 137},
  [43] = {.lex_state = 137},
  [44] = {.lex_state = 138},
  [45] = {.lex_state = 137},
  [46] = {.lex_state = 137},
  [47] = {.lex_state = 137},
  [48] = {.lex_state = 137},
  [49] = {.lex_state = 137},
  [50] = {.lex_state = 137},
  [51] = {.lex_state = 137},
  [52] = {.lex_state = 137},
  [53] = {.lex_state = 137},
  [54] = {.lex_state = 137},
  [55] = {.lex_state = 137},
  [56] = {.lex_state = 137},
  [57] = {.lex_state = 137},
  [58] = {.lex_state = 137},
  [59] = {.lex_state = 137},
  [60] = {.lex_state = 137},
  [61] = {.lex_state = 137},
  [62] = {.lex_state = 137},
  [63] = {.lex_state = 139},
  [64] = {.lex_state = 137},
  [65] = {.lex_state = 137},
  [66] = {.lex_state = 137},
  [67] = {.lex_state = 137},
  [68] = {.lex_state = 139},
  [69] = {.lex_state = 139},
  [70] = {.lex_state = 137},
  [71] = {.lex_state = 137},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 137},
  [75] = {.lex_state = 139},
  [76] = {.lex_state = 137},
  [77] = {.lex_state = 137},
  [78] = {.lex_state = 137},
  [79] = {.lex_state = 137},
  [80] = {.lex_state = 139},
  [81] = {.lex_state = 137},
  [82] = {.lex_state = 139},
  [83] = {.lex_state = 137},
  [84] = {.lex_state = 137},
  [85] = {.lex_state = 137},
  [86] = {.lex_state = 137},
  [87] = {.lex_state = 137},
  [88] = {.lex_state = 137},
  [89] = {.lex_state = 139},
  [90] = {.lex_state = 137},
  [91] = {.lex_state = 137},
  [92] = {.lex_state = 137},
  [93] = {.lex_state = 137},
  [94] = {.lex_state = 137},
  [95] = {.lex_state = 137},
  [96] = {.lex_state = 137},
  [97] = {.lex_state = 139},
  [98] = {.lex_state = 139},
  [99] = {.lex_state = 137},
  [100] = {.lex_state = 137},
  [101] = {.lex_state = 137},
  [102] = {.lex_state = 137},
  [103] = {.lex_state = 137},
  [104] = {.lex_state = 137},
  [105] = {.lex_state = 137},
  [106] = {.lex_state = 137},
  [107] = {.lex_state = 137},
  [108] = {.lex_state = 137},
  [109] = {.lex_state = 137},
  [110] = {.lex_state = 137},
  [111] = {.lex_state = 137},
  [112] = {.lex_state = 137},
  [113] = {.lex_state = 137},
  [114] = {.lex_state = 137},
  [115] = {.lex_state = 137},
  [116] = {.lex_state = 137},
  [117] = {.lex_state = 137},
  [118] = {.lex_state = 137},
  [119] = {.lex_state = 137},
  [120] = {.lex_state = 137},
  [121] = {.lex_state = 137},
  [122] = {.lex_state = 137},
  [123] = {.lex_state = 137},
  [124] = {.lex_state = 137},
  [125] = {.lex_state = 137},
  [126] = {.lex_state = 137},
  [127] = {.lex_state = 137},
  [128] = {.lex_state = 137},
  [129] = {.lex_state = 137},
  [130] = {.lex_state = 139},
  [131] = {.lex_state = 139},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 139},
  [134] = {.lex_state = 139},
  [135] = {.lex_state = 139},
  [136] = {.lex_state = 139},
  [137] = {.lex_state = 139},
  [138] = {.lex_state = 139},
  [139] = {.lex_state = 139},
  [140] = {.lex_state = 139},
  [141] = {.lex_state = 139},
  [142] = {.lex_state = 139},
  [143] = {.lex_state = 139},
  [144] = {.lex_state = 139},
  [145] = {.lex_state = 139},
  [146] = {.lex_state = 139},
  [147] = {.lex_state = 139},
  [148] = {.lex_state = 139},
  [149] = {.lex_state = 139},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 139},
  [153] = {.lex_state = 139},
  [154] = {.lex_state = 139},
  [155] = {.lex_state = 139},
  [156] = {.lex_state = 139},
  [157] = {.lex_state = 139},
  [158] = {.lex_state = 139},
  [159] = {.lex_state = 139},
  [160] = {.lex_state = 140},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 140},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 140},
  [166] = {.lex_state = 140},
  [167] = {.lex_state = 140},
  [168] = {.lex_state = 140},
  [169] = {.lex_state = 140},
  [170] = {.lex_state = 140},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 140},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 140},
  [177] = {.lex_state = 140},
  [178] = {.lex_state = 140},
  [179] = {.lex_state = 140},
  [180] = {.lex_state = 140},
  [181] = {.lex_state = 140},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 140},
  [186] = {.lex_state = 140},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 140},
  [189] = {.lex_state = 140},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 140},
  [192] = {.lex_state = 140},
  [193] = {.lex_state = 140},
  [194] = {.lex_state = 140},
  [195] = {.lex_state = 140},
  [196] = {.lex_state = 140},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 140},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 140},
  [201] = {.lex_state = 140},
  [202] = {.lex_state = 140},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 140},
  [206] = {.lex_state = 140},
  [207] = {.lex_state = 140},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 140},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 140},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 140},
  [221] = {.lex_state = 140},
  [222] = {.lex_state = 140},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 137},
  [255] = {.lex_state = 137},
  [256] = {.lex_state = 137},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 137},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 139},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 139},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 138},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 2},
  [318] = {.lex_state = 138},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 2},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 138},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 2},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 138},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 1},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 1},
  [348] = {.lex_state = 2},
  [349] = {.lex_state = 138},
  [350] = {.lex_state = 142},
  [351] = {.lex_state = 138},
  [352] = {.lex_state = 142},
  [353] = {.lex_state = 142},
  [354] = {.lex_state = 138},
  [355] = {.lex_state = 140},
  [356] = {.lex_state = 142},
  [357] = {.lex_state = 142},
  [358] = {.lex_state = 142},
  [359] = {.lex_state = 142},
  [360] = {.lex_state = 142},
  [361] = {.lex_state = 140},
  [362] = {.lex_state = 142},
  [363] = {.lex_state = 138},
  [364] = {.lex_state = 142},
  [365] = {.lex_state = 138},
  [366] = {.lex_state = 142},
  [367] = {.lex_state = 142},
  [368] = {.lex_state = 142},
  [369] = {.lex_state = 142},
  [370] = {.lex_state = 142},
  [371] = {.lex_state = 142},
  [372] = {.lex_state = 142},
  [373] = {.lex_state = 142},
  [374] = {.lex_state = 142},
  [375] = {.lex_state = 142},
  [376] = {.lex_state = 142},
  [377] = {.lex_state = 142},
  [378] = {.lex_state = 142},
  [379] = {.lex_state = 142},
  [380] = {.lex_state = 142},
  [381] = {.lex_state = 142},
  [382] = {.lex_state = 142},
  [383] = {.lex_state = 142},
  [384] = {.lex_state = 142},
  [385] = {.lex_state = 142},
  [386] = {.lex_state = 142},
  [387] = {.lex_state = 142},
  [388] = {.lex_state = 142},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 138},
  [392] = {.lex_state = 138},
  [393] = {.lex_state = 138},
  [394] = {.lex_state = 138},
  [395] = {.lex_state = 138},
  [396] = {.lex_state = 138},
  [397] = {.lex_state = 138},
  [398] = {.lex_state = 138},
  [399] = {.lex_state = 137},
  [400] = {.lex_state = 137},
  [401] = {.lex_state = 137},
  [402] = {.lex_state = 137},
  [403] = {.lex_state = 137},
  [404] = {.lex_state = 137},
  [405] = {.lex_state = 138},
  [406] = {.lex_state = 138},
  [407] = {.lex_state = 138},
  [408] = {.lex_state = 138},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 138},
  [412] = {.lex_state = 140},
  [413] = {.lex_state = 2},
  [414] = {.lex_state = 138},
  [415] = {.lex_state = 140},
  [416] = {.lex_state = 2},
  [417] = {.lex_state = 140},
  [418] = {.lex_state = 2},
  [419] = {.lex_state = 2},
  [420] = {.lex_state = 2},
  [421] = {.lex_state = 138},
  [422] = {.lex_state = 138},
  [423] = {.lex_state = 2},
  [424] = {.lex_state = 138},
  [425] = {.lex_state = 2},
  [426] = {.lex_state = 138},
  [427] = {.lex_state = 138},
  [428] = {.lex_state = 138},
  [429] = {.lex_state = 140},
  [430] = {.lex_state = 138},
  [431] = {.lex_state = 138},
  [432] = {.lex_state = 138},
  [433] = {.lex_state = 138},
  [434] = {.lex_state = 143},
  [435] = {.lex_state = 143},
  [436] = {.lex_state = 138},
  [437] = {.lex_state = 138},
  [438] = {.lex_state = 143},
  [439] = {.lex_state = 138},
  [440] = {.lex_state = 143},
  [441] = {.lex_state = 138},
  [442] = {.lex_state = 143},
  [443] = {.lex_state = 143},
  [444] = {.lex_state = 143},
  [445] = {.lex_state = 143},
  [446] = {.lex_state = 143},
  [447] = {.lex_state = 138},
  [448] = {.lex_state = 143},
  [449] = {.lex_state = 143},
  [450] = {.lex_state = 143},
  [451] = {.lex_state = 138},
  [452] = {.lex_state = 143},
  [453] = {.lex_state = 138},
  [454] = {.lex_state = 140},
  [455] = {.lex_state = 140},
  [456] = {.lex_state = 140},
  [457] = {.lex_state = 140},
  [458] = {.lex_state = 140},
  [459] = {.lex_state = 140},
  [460] = {.lex_state = 140},
  [461] = {.lex_state = 143},
  [462] = {.lex_state = 140},
  [463] = {.lex_state = 140},
  [464] = {.lex_state = 140},
  [465] = {.lex_state = 143},
  [466] = {.lex_state = 138},
  [467] = {.lex_state = 140},
  [468] = {.lex_state = 140},
  [469] = {.lex_state = 140},
  [470] = {.lex_state = 140},
  [471] = {.lex_state = 138},
  [472] = {.lex_state = 138},
  [473] = {.lex_state = 140},
  [474] = {.lex_state = 138},
  [475] = {.lex_state = 140},
  [476] = {.lex_state = 140},
  [477] = {.lex_state = 140},
  [478] = {.lex_state = 140},
  [479] = {.lex_state = 2},
  [480] = {.lex_state = 138},
  [481] = {.lex_state = 138},
  [482] = {.lex_state = 138},
  [483] = {.lex_state = 140},
  [484] = {.lex_state = 140},
  [485] = {.lex_state = 2},
  [486] = {.lex_state = 2},
  [487] = {.lex_state = 138},
  [488] = {.lex_state = 140},
  [489] = {.lex_state = 140},
  [490] = {.lex_state = 138},
  [491] = {.lex_state = 138},
  [492] = {.lex_state = 140},
  [493] = {.lex_state = 2},
  [494] = {.lex_state = 138},
  [495] = {.lex_state = 140},
  [496] = {.lex_state = 138},
  [497] = {.lex_state = 2},
  [498] = {.lex_state = 138},
  [499] = {.lex_state = 2},
  [500] = {.lex_state = 2},
  [501] = {.lex_state = 138},
  [502] = {.lex_state = 3},
  [503] = {.lex_state = 3},
  [504] = {.lex_state = 3},
  [505] = {.lex_state = 3},
  [506] = {.lex_state = 2},
  [507] = {.lex_state = 2},
  [508] = {.lex_state = 2},
  [509] = {.lex_state = 2},
  [510] = {.lex_state = 2},
  [511] = {.lex_state = 2},
  [512] = {.lex_state = 140},
  [513] = {.lex_state = 138},
  [514] = {.lex_state = 140},
  [515] = {.lex_state = 2},
  [516] = {.lex_state = 138},
  [517] = {.lex_state = 138},
  [518] = {.lex_state = 140},
  [519] = {.lex_state = 138},
  [520] = {.lex_state = 2},
  [521] = {.lex_state = 138},
  [522] = {.lex_state = 138},
  [523] = {.lex_state = 2},
  [524] = {.lex_state = 140},
  [525] = {.lex_state = 140},
  [526] = {.lex_state = 138},
  [527] = {.lex_state = 2},
  [528] = {.lex_state = 2},
  [529] = {.lex_state = 2},
  [530] = {.lex_state = 140},
  [531] = {.lex_state = 138},
  [532] = {.lex_state = 138},
  [533] = {.lex_state = 138},
  [534] = {.lex_state = 2},
  [535] = {.lex_state = 138},
  [536] = {.lex_state = 138},
  [537] = {.lex_state = 2},
  [538] = {.lex_state = 138},
  [539] = {.lex_state = 138},
  [540] = {.lex_state = 138},
  [541] = {.lex_state = 138},
  [542] = {.lex_state = 138},
  [543] = {.lex_state = 138},
  [544] = {.lex_state = 138},
  [545] = {.lex_state = 138},
  [546] = {.lex_state = 138},
  [547] = {.lex_state = 138},
  [548] = {.lex_state = 138},
  [549] = {.lex_state = 138},
  [550] = {.lex_state = 138},
  [551] = {.lex_state = 138},
  [552] = {.lex_state = 138},
  [553] = {.lex_state = 138},
  [554] = {.lex_state = 138},
  [555] = {.lex_state = 138},
  [556] = {.lex_state = 138},
  [557] = {.lex_state = 138},
  [558] = {.lex_state = 138},
  [559] = {.lex_state = 138},
  [560] = {.lex_state = 138},
  [561] = {.lex_state = 138},
  [562] = {.lex_state = 138},
  [563] = {.lex_state = 138},
  [564] = {.lex_state = 138},
  [565] = {.lex_state = 138},
  [566] = {.lex_state = 138},
  [567] = {.lex_state = 138},
  [568] = {.lex_state = 138},
  [569] = {.lex_state = 138},
  [570] = {.lex_state = 138},
  [571] = {.lex_state = 138},
  [572] = {.lex_state = 138},
  [573] = {.lex_state = 138},
  [574] = {.lex_state = 138},
  [575] = {.lex_state = 138},
  [576] = {.lex_state = 138},
  [577] = {.lex_state = 138},
  [578] = {.lex_state = 138},
  [579] = {.lex_state = 138},
  [580] = {.lex_state = 138},
  [581] = {.lex_state = 138},
  [582] = {.lex_state = 138},
  [583] = {.lex_state = 138},
  [584] = {.lex_state = 138},
  [585] = {.lex_state = 2},
  [586] = {.lex_state = 138},
  [587] = {.lex_state = 138},
  [588] = {.lex_state = 138},
  [589] = {.lex_state = 2},
  [590] = {.lex_state = 138},
  [591] = {.lex_state = 138},
  [592] = {.lex_state = 138},
  [593] = {.lex_state = 138},
  [594] = {.lex_state = 138},
  [595] = {.lex_state = 2},
  [596] = {.lex_state = 138},
  [597] = {.lex_state = 138},
  [598] = {.lex_state = 138},
  [599] = {.lex_state = 138},
  [600] = {.lex_state = 138},
  [601] = {.lex_state = 138},
  [602] = {.lex_state = 138},
  [603] = {.lex_state = 138},
  [604] = {.lex_state = 2},
  [605] = {.lex_state = 138},
  [606] = {.lex_state = 2},
  [607] = {.lex_state = 138},
  [608] = {.lex_state = 138},
  [609] = {.lex_state = 3},
  [610] = {.lex_state = 138},
  [611] = {.lex_state = 138},
  [612] = {.lex_state = 138},
  [613] = {.lex_state = 138},
  [614] = {.lex_state = 138},
  [615] = {.lex_state = 138},
  [616] = {.lex_state = 138},
  [617] = {.lex_state = 138},
  [618] = {.lex_state = 138},
  [619] = {.lex_state = 138},
  [620] = {.lex_state = 138},
  [621] = {.lex_state = 138},
  [622] = {.lex_state = 138},
  [623] = {.lex_state = 138},
  [624] = {.lex_state = 138},
  [625] = {.lex_state = 138},
  [626] = {.lex_state = 138},
  [627] = {.lex_state = 138},
  [628] = {.lex_state = 2},
  [629] = {.lex_state = 138},
  [630] = {.lex_state = 138},
  [631] = {.lex_state = 138},
  [632] = {.lex_state = 2},
  [633] = {.lex_state = 138},
  [634] = {.lex_state = 2},
  [635] = {.lex_state = 138},
  [636] = {.lex_state = 2},
  [637] = {.lex_state = 138},
  [638] = {.lex_state = 138},
  [639] = {.lex_state = 138},
  [640] = {.lex_state = 138},
  [641] = {.lex_state = 138},
  [642] = {.lex_state = 138},
  [643] = {.lex_state = 138},
  [644] = {.lex_state = 138},
  [645] = {.lex_state = 138},
  [646] = {.lex_state = 138},
  [647] = {.lex_state = 2},
  [648] = {.lex_state = 2},
  [649] = {.lex_state = 2},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 2},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 2},
  [655] = {.lex_state = 2},
  [656] = {.lex_state = 2},
  [657] = {.lex_state = 2},
  [658] = {.lex_state = 2},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 2},
  [661] = {.lex_state = 2},
  [662] = {.lex_state = 2},
  [663] = {.lex_state = 2},
  [664] = {.lex_state = 2},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 2},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 2},
  [670] = {.lex_state = 2},
  [671] = {.lex_state = 2},
  [672] = {.lex_state = 2},
  [673] = {.lex_state = 2},
  [674] = {.lex_state = 2},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 2},
  [677] = {.lex_state = 2},
  [678] = {.lex_state = 2},
  [679] = {.lex_state = 2},
  [680] = {.lex_state = 2},
  [681] = {.lex_state = 2},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 2},
  [684] = {.lex_state = 2},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 2},
  [688] = {.lex_state = 2},
  [689] = {.lex_state = 2},
  [690] = {.lex_state = 2},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 2},
  [693] = {.lex_state = 2},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 2},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 138},
  [705] = {.lex_state = 2},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 2},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 2},
  [720] = {.lex_state = 2},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 2},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 2},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 2},
  [735] = {.lex_state = 2},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 2},
  [743] = {.lex_state = 138},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 138},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 2},
  [750] = {.lex_state = 2},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 2},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 140},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 2},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 2},
  [778] = {.lex_state = 140},
  [779] = {.lex_state = 192},
  [780] = {.lex_state = 140},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 138},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 140},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 2},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 192},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 141},
  [813] = {.lex_state = 141},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 2},
  [817] = {.lex_state = 141},
  [818] = {.lex_state = 192},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 2},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 140},
  [824] = {.lex_state = 2},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 2},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 192},
  [832] = {.lex_state = 192},
  [833] = {.lex_state = 2},
  [834] = {.lex_state = 141},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 138},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 141},
  [841] = {.lex_state = 138},
  [842] = {.lex_state = 2},
  [843] = {.lex_state = 2},
  [844] = {.lex_state = 192},
  [845] = {.lex_state = 141},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 141},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 2},
  [850] = {.lex_state = 141},
  [851] = {.lex_state = 140},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 138},
  [855] = {.lex_state = 2},
  [856] = {.lex_state = 2},
  [857] = {.lex_state = 2},
  [858] = {.lex_state = 2},
  [859] = {.lex_state = 2},
  [860] = {.lex_state = 2},
  [861] = {.lex_state = 2},
  [862] = {.lex_state = 138},
  [863] = {.lex_state = 21},
  [864] = {.lex_state = 2},
  [865] = {.lex_state = 2},
  [866] = {.lex_state = 21},
  [867] = {.lex_state = 21},
  [868] = {.lex_state = 21},
  [869] = {.lex_state = 21},
  [870] = {.lex_state = 21},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 2},
  [873] = {.lex_state = 2},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 141},
  [876] = {.lex_state = 21},
  [877] = {.lex_state = 2},
  [878] = {.lex_state = 2},
  [879] = {.lex_state = 21},
  [880] = {.lex_state = 21},
  [881] = {.lex_state = 21},
  [882] = {.lex_state = 21},
  [883] = {.lex_state = 21},
  [884] = {.lex_state = 2},
  [885] = {.lex_state = 2},
  [886] = {.lex_state = 21},
  [887] = {.lex_state = 2},
  [888] = {.lex_state = 2},
  [889] = {.lex_state = 21},
  [890] = {.lex_state = 21},
  [891] = {.lex_state = 21},
  [892] = {.lex_state = 21},
  [893] = {.lex_state = 21},
  [894] = {.lex_state = 2},
  [895] = {.lex_state = 2},
  [896] = {.lex_state = 21},
  [897] = {.lex_state = 2},
  [898] = {.lex_state = 2},
  [899] = {.lex_state = 21},
  [900] = {.lex_state = 21},
  [901] = {.lex_state = 21},
  [902] = {.lex_state = 21},
  [903] = {.lex_state = 21},
  [904] = {.lex_state = 2},
  [905] = {.lex_state = 2},
  [906] = {.lex_state = 21},
  [907] = {.lex_state = 2},
  [908] = {.lex_state = 2},
  [909] = {.lex_state = 21},
  [910] = {.lex_state = 21},
  [911] = {.lex_state = 21},
  [912] = {.lex_state = 21},
  [913] = {.lex_state = 21},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 138},
  [919] = {.lex_state = 139},
  [920] = {.lex_state = 21},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 0},
  [927] = {.lex_state = 2},
  [928] = {.lex_state = 138},
  [929] = {.lex_state = 2},
  [930] = {.lex_state = 21},
  [931] = {.lex_state = 141},
  [932] = {.lex_state = 141},
  [933] = {.lex_state = 138},
  [934] = {.lex_state = 138},
  [935] = {.lex_state = 2},
  [936] = {.lex_state = 138},
  [937] = {.lex_state = 139},
  [938] = {.lex_state = 0},
  [939] = {.lex_state = 21},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 21},
  [942] = {.lex_state = 138},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 138},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 21},
  [947] = {.lex_state = 138},
  [948] = {.lex_state = 21},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 138},
  [951] = {.lex_state = 138},
  [952] = {.lex_state = 138},
  [953] = {.lex_state = 138},
  [954] = {.lex_state = 138},
  [955] = {.lex_state = 138},
  [956] = {.lex_state = 21},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 138},
  [959] = {.lex_state = 138},
  [960] = {.lex_state = 138},
  [961] = {.lex_state = 138},
  [962] = {.lex_state = 138},
  [963] = {.lex_state = 138},
  [964] = {.lex_state = 138},
  [965] = {.lex_state = 138},
  [966] = {.lex_state = 138},
  [967] = {.lex_state = 138},
  [968] = {.lex_state = 138},
  [969] = {.lex_state = 138},
  [970] = {.lex_state = 138},
  [971] = {.lex_state = 138},
  [972] = {.lex_state = 138},
  [973] = {.lex_state = 138},
  [974] = {.lex_state = 138},
  [975] = {.lex_state = 138},
  [976] = {.lex_state = 138},
  [977] = {.lex_state = 138},
  [978] = {.lex_state = 138},
  [979] = {.lex_state = 138},
  [980] = {.lex_state = 138},
  [981] = {.lex_state = 138},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_cte_def_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_select_body_token1] = ACTIONS(1),
    [aux_sym_select_set_operator_token1] = ACTIONS(1),
    [aux_sym_select_set_operator_token2] = ACTIONS(1),
    [aux_sym_select_set_operator_token3] = ACTIONS(1),
    [aux_sym_select_set_operator_token4] = ACTIONS(1),
    [aux_sym_select_set_operator_token5] = ACTIONS(1),
    [aux_sym_dataset_definition_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token2] = ACTIONS(1),
    [aux_sym_having_clause_token1] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_order_by_clause_token3] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [aux_sym_cross_join_token1] = ACTIONS(1),
    [aux_sym_cross_join_token2] = ACTIONS(1),
    [aux_sym_join_clause_on_token1] = ACTIONS(1),
    [aux_sym_join_clause_using_token1] = ACTIONS(1),
    [aux_sym_qualified_join_token1] = ACTIONS(1),
    [aux_sym_qualified_join_token2] = ACTIONS(1),
    [aux_sym_qualified_join_token3] = ACTIONS(1),
    [aux_sym_qualified_join_token4] = ACTIONS(1),
    [aux_sym_qualified_join_token5] = ACTIONS(1),
    [aux_sym_limit_clause_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_lit_null_token1] = ACTIONS(1),
    [sym_lit_integer] = ACTIONS(1),
    [sym_lit_decimal] = ACTIONS(1),
    [aux_sym_lit_boolean_token1] = ACTIONS(1),
    [aux_sym_lit_boolean_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [aux_sym_comparison_operator_token1] = ACTIONS(1),
    [aux_sym_comparison_operator_token2] = ACTIONS(1),
    [aux_sym_comparison_operator_token3] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_window_frame_start_token1] = ACTIONS(1),
    [aux_sym_window_frame_start_token2] = ACTIONS(1),
    [aux_sym_window_frame_start_token3] = ACTIONS(1),
    [aux_sym_window_frame_start_token4] = ACTIONS(1),
    [aux_sym_window_frame_start_token5] = ACTIONS(1),
    [aux_sym_window_specification_token1] = ACTIONS(1),
    [aux_sym_window_specification_token2] = ACTIONS(1),
    [aux_sym_window_specification_token3] = ACTIONS(1),
    [aux_sym_window_specification_token4] = ACTIONS(1),
    [aux_sym_window_function_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_select_statement] = STATE(848),
    [sym_select_body] = STATE(430),
    [sym_select_wrapper] = STATE(714),
    [sym_dbt_jinja_config] = STATE(634),
    [aux_sym_select_statement_token1] = ACTIONS(3),
    [aux_sym_select_body_token1] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(9), 38,
      ts_builtin_sym_end,
      aux_sym_cte_def_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [48] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(9), 34,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [95] = 2,
    ACTIONS(17), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(15), 35,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [140] = 3,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(19), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [186] = 3,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(25), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [232] = 3,
    ACTIONS(35), 1,
      aux_sym_window_function_token1,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(31), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [278] = 3,
    ACTIONS(41), 1,
      aux_sym_window_function_token1,
    ACTIONS(39), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(37), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [324] = 10,
    ACTIONS(51), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(53), 1,
      aux_sym_comparison_operator_token3,
    ACTIONS(59), 1,
      anon_sym_CARET,
    STATE(44), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(55), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(45), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(43), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
  [384] = 3,
    ACTIONS(65), 1,
      aux_sym_window_function_token1,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(61), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [430] = 2,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(67), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [473] = 2,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(71), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [516] = 2,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(75), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [559] = 2,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(79), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [602] = 2,
    ACTIONS(85), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(83), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [645] = 2,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(87), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [688] = 2,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(91), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [731] = 2,
    ACTIONS(97), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(95), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [774] = 2,
    ACTIONS(101), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(99), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [817] = 2,
    ACTIONS(105), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(103), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [860] = 2,
    ACTIONS(109), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(107), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [903] = 2,
    ACTIONS(113), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(111), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [946] = 3,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(117), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(115), 32,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [991] = 2,
    ACTIONS(121), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(119), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1034] = 2,
    ACTIONS(125), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(123), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1077] = 2,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(127), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1120] = 2,
    ACTIONS(133), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(131), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1163] = 3,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(117), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(115), 32,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1208] = 5,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(135), 27,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
  [1257] = 2,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(139), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1300] = 2,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(143), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1343] = 2,
    ACTIONS(149), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(147), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1386] = 2,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1429] = 4,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 29,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1476] = 3,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 32,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1521] = 2,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(155), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1564] = 5,
    ACTIONS(59), 1,
      anon_sym_CARET,
    ACTIONS(57), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(159), 27,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
  [1613] = 2,
    ACTIONS(165), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(163), 33,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      anon_sym_EQ,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [1656] = 2,
    ACTIONS(15), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(17), 19,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [1696] = 2,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(125), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [1735] = 7,
    ACTIONS(173), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(176), 1,
      aux_sym_comparison_operator_token3,
    STATE(41), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(161), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(170), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(167), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(159), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
  [1783] = 2,
    ACTIONS(155), 16,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(157), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [1821] = 3,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(11), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [1861] = 7,
    ACTIONS(51), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(53), 1,
      aux_sym_comparison_operator_token3,
    STATE(41), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(183), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(49), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(45), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(181), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
  [1909] = 3,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 15,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(11), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [1949] = 2,
    ACTIONS(15), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(17), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [1986] = 3,
    ACTIONS(187), 1,
      anon_sym_DOT,
    ACTIONS(19), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(23), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2025] = 10,
    ACTIONS(195), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(197), 1,
      aux_sym_comparison_operator_token3,
    ACTIONS(201), 1,
      anon_sym_CARET,
    STATE(258), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(199), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(189), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(55), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2078] = 3,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(25), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(29), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2117] = 3,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(25), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(29), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2156] = 3,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(25), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(29), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2195] = 3,
    ACTIONS(209), 1,
      anon_sym_DOT,
    ACTIONS(25), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(29), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2234] = 3,
    ACTIONS(211), 1,
      aux_sym_window_function_token1,
    ACTIONS(61), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(63), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2273] = 2,
    ACTIONS(9), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(11), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2310] = 10,
    ACTIONS(219), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(221), 1,
      aux_sym_comparison_operator_token3,
    ACTIONS(225), 1,
      anon_sym_CARET,
    STATE(256), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(213), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(55), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2363] = 3,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(19), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(23), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2402] = 3,
    ACTIONS(229), 1,
      aux_sym_window_function_token1,
    ACTIONS(31), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(33), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2441] = 3,
    ACTIONS(231), 1,
      aux_sym_window_function_token1,
    ACTIONS(37), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(39), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2480] = 3,
    ACTIONS(233), 1,
      aux_sym_window_function_token1,
    ACTIONS(31), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(33), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2519] = 3,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(19), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(23), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2558] = 2,
    ACTIONS(9), 15,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(11), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2595] = 3,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(19), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(23), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2634] = 3,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(9), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [2673] = 3,
    ACTIONS(241), 1,
      aux_sym_window_function_token1,
    ACTIONS(61), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(63), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2712] = 3,
    ACTIONS(243), 1,
      aux_sym_window_function_token1,
    ACTIONS(37), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(39), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2751] = 4,
    ACTIONS(225), 1,
      anon_sym_CARET,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2791] = 2,
    ACTIONS(95), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(97), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2827] = 2,
    ACTIONS(17), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(15), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [2863] = 2,
    ACTIONS(11), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(9), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [2899] = 3,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(117), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2937] = 2,
    ACTIONS(103), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(105), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [2973] = 18,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(51), 1,
      sym_quoted_identifier,
    STATE(55), 1,
      sym_primary_expression,
    STATE(465), 1,
      sym_column_list,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(440), 2,
      sym_select_all,
      sym_select_expr,
    STATE(400), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [3041] = 18,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(48), 1,
      sym_primary_expression,
    STATE(49), 1,
      sym_quoted_identifier,
    STATE(461), 1,
      sym_column_list,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(438), 2,
      sym_select_all,
      sym_select_expr,
    STATE(399), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [3109] = 2,
    ACTIONS(67), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(69), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3145] = 3,
    ACTIONS(287), 1,
      aux_sym_window_function_token1,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(61), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3183] = 2,
    ACTIONS(87), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(89), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3219] = 2,
    ACTIONS(99), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(101), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3255] = 2,
    ACTIONS(147), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(149), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3291] = 2,
    ACTIONS(127), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(129), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3327] = 3,
    ACTIONS(289), 1,
      aux_sym_window_function_token1,
    ACTIONS(39), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(37), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3365] = 2,
    ACTIONS(71), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(73), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3401] = 3,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(23), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(19), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3439] = 2,
    ACTIONS(83), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(85), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3475] = 2,
    ACTIONS(155), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(157), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3511] = 2,
    ACTIONS(95), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(97), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3547] = 2,
    ACTIONS(119), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(121), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3583] = 3,
    ACTIONS(225), 1,
      anon_sym_CARET,
    ACTIONS(115), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(117), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3621] = 2,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(113), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3657] = 3,
    ACTIONS(293), 1,
      aux_sym_window_function_token1,
    ACTIONS(33), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(31), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3695] = 3,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(117), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3733] = 5,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(199), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(137), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3775] = 2,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(81), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3811] = 2,
    ACTIONS(143), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(145), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3847] = 2,
    ACTIONS(91), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(93), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3883] = 2,
    ACTIONS(75), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(77), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3919] = 2,
    ACTIONS(111), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(113), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [3955] = 3,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(29), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(25), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [3993] = 10,
    ACTIONS(303), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(305), 1,
      aux_sym_comparison_operator_token3,
    ACTIONS(309), 1,
      anon_sym_CARET,
    STATE(260), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(55), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(297), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(43), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
  [4045] = 2,
    ACTIONS(123), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(125), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4081] = 5,
    ACTIONS(225), 1,
      anon_sym_CARET,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(161), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4123] = 3,
    ACTIONS(225), 1,
      anon_sym_CARET,
    ACTIONS(151), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4161] = 5,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(199), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(161), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4203] = 3,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(151), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4241] = 2,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(133), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4277] = 4,
    ACTIONS(201), 1,
      anon_sym_CARET,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4317] = 2,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(153), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4353] = 2,
    ACTIONS(147), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(149), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4389] = 2,
    ACTIONS(143), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(145), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4425] = 2,
    ACTIONS(131), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(133), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4461] = 2,
    ACTIONS(107), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(109), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4497] = 2,
    ACTIONS(139), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(141), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4533] = 2,
    ACTIONS(163), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(165), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4569] = 2,
    ACTIONS(75), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(77), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4605] = 2,
    ACTIONS(151), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(153), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4641] = 2,
    ACTIONS(79), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(81), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4677] = 2,
    ACTIONS(107), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(109), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4713] = 2,
    ACTIONS(83), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(85), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4749] = 2,
    ACTIONS(71), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(73), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4785] = 2,
    ACTIONS(87), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(89), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4821] = 2,
    ACTIONS(91), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(93), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4857] = 2,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(141), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4893] = 2,
    ACTIONS(67), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(69), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4929] = 2,
    ACTIONS(119), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(121), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [4965] = 2,
    ACTIONS(99), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(101), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [5001] = 2,
    ACTIONS(103), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(105), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [5037] = 2,
    ACTIONS(127), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(129), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [5073] = 3,
    ACTIONS(225), 1,
      anon_sym_CARET,
    ACTIONS(115), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(117), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [5111] = 5,
    ACTIONS(225), 1,
      anon_sym_CARET,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(135), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(137), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [5153] = 2,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
    ACTIONS(165), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [5189] = 2,
    ACTIONS(101), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(99), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5224] = 2,
    ACTIONS(133), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(131), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5259] = 2,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5294] = 2,
    ACTIONS(109), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(107), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5329] = 2,
    ACTIONS(149), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(147), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5364] = 2,
    ACTIONS(73), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(71), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5399] = 2,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(155), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5434] = 2,
    ACTIONS(89), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(87), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5469] = 2,
    ACTIONS(121), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(119), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5504] = 3,
    ACTIONS(309), 1,
      anon_sym_CARET,
    ACTIONS(117), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(115), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5541] = 2,
    ACTIONS(77), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(75), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5576] = 2,
    ACTIONS(93), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(91), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5611] = 2,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(139), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5646] = 2,
    ACTIONS(113), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(111), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5681] = 2,
    ACTIONS(125), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(123), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5716] = 2,
    ACTIONS(97), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(95), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5751] = 5,
    ACTIONS(309), 1,
      anon_sym_CARET,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(159), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
  [5792] = 2,
    ACTIONS(165), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(163), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [5827] = 3,
    ACTIONS(309), 1,
      anon_sym_CARET,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5864] = 4,
    ACTIONS(309), 1,
      anon_sym_CARET,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5903] = 17,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(51), 1,
      sym_quoted_identifier,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(452), 2,
      sym_select_all,
      sym_select_expr,
    STATE(400), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [5968] = 17,
    ACTIONS(249), 1,
      anon_sym_STAR,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(48), 1,
      sym_primary_expression,
    STATE(49), 1,
      sym_quoted_identifier,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(452), 2,
      sym_select_all,
      sym_select_expr,
    STATE(399), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6033] = 2,
    ACTIONS(85), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(83), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [6068] = 2,
    ACTIONS(69), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(67), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [6103] = 2,
    ACTIONS(81), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(79), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [6138] = 5,
    ACTIONS(309), 1,
      anon_sym_CARET,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(135), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
  [6179] = 3,
    ACTIONS(309), 1,
      anon_sym_CARET,
    ACTIONS(117), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(115), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6216] = 2,
    ACTIONS(129), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(127), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [6251] = 2,
    ACTIONS(105), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(103), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [6286] = 2,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(143), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
  [6321] = 3,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6357] = 16,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(492), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6418] = 3,
    ACTIONS(335), 1,
      aux_sym_window_function_token1,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6453] = 16,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(489), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6514] = 16,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(495), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6575] = 3,
    ACTIONS(341), 1,
      aux_sym_window_function_token1,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6610] = 3,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6645] = 3,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6680] = 2,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6713] = 9,
    ACTIONS(353), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(355), 1,
      aux_sym_comparison_operator_token3,
    ACTIONS(359), 1,
      anon_sym_CARET,
    STATE(361), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(349), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(347), 6,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [6760] = 2,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 26,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [6793] = 16,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(484), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6854] = 16,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(478), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6915] = 16,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(483), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [6976] = 3,
    ACTIONS(367), 1,
      aux_sym_window_function_token1,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7011] = 15,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(406), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7069] = 2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7101] = 2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7133] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7165] = 2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7197] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7229] = 2,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7261] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(417), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7319] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(476), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7377] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(447), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7435] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7467] = 2,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7499] = 15,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(351), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7557] = 2,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7589] = 2,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7621] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(457), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7679] = 2,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7711] = 3,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_window_specification_token2,
  [7745] = 2,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7777] = 5,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(349), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(135), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [7815] = 2,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7847] = 2,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7879] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(456), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [7937] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [7969] = 15,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(354), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8027] = 4,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_window_specification_token2,
  [8063] = 3,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_window_specification_token2,
  [8097] = 5,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(349), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [8135] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(439), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8193] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(525), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8251] = 2,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [8283] = 2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [8315] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [8347] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(415), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8405] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(412), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8463] = 15,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(48), 1,
      sym_primary_expression,
    STATE(50), 1,
      sym_quoted_identifier,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(402), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8521] = 3,
    ACTIONS(359), 1,
      anon_sym_CARET,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 24,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_window_specification_token2,
  [8555] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(462), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8613] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(431), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8671] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(455), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8729] = 15,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(407), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8787] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(429), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8845] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [8877] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(467), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8935] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(477), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [8993] = 2,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [9025] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [9057] = 2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 25,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      anon_sym_EQ,
      aux_sym_limit_clause_token1,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [9089] = 15,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(403), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9147] = 15,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(404), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9205] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(518), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9263] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(473), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9321] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(530), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9379] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(464), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9437] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(463), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9495] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(349), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9553] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(441), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9611] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(468), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9669] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(475), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9727] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(514), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9785] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(458), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9843] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(472), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9901] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(437), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [9959] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(459), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10017] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(460), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10075] = 15,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(48), 1,
      sym_primary_expression,
    STATE(50), 1,
      sym_quoted_identifier,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(401), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10133] = 15,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(408), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10191] = 15,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(421), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10249] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(466), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10307] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(470), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10365] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(488), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10423] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(469), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10481] = 15,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(349), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10539] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(524), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10597] = 15,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(9), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(349), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10655] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(512), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10713] = 15,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(169), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(454), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10771] = 15,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(263), 1,
      sym_primary_expression,
    STATE(268), 1,
      sym_quoted_identifier,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(432), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10829] = 15,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(98), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(405), 3,
      sym__expression,
      sym_comparison_operator,
      sym_boolean_operator,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [10887] = 7,
    ACTIONS(435), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(438), 1,
      aux_sym_comparison_operator_token3,
    STATE(254), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(432), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(429), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(161), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [10928] = 7,
    ACTIONS(447), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(450), 1,
      aux_sym_comparison_operator_token3,
    STATE(255), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(444), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(441), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(161), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [10969] = 7,
    ACTIONS(219), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(221), 1,
      aux_sym_comparison_operator_token3,
    STATE(255), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(181), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(213), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(183), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [11010] = 3,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(9), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11043] = 7,
    ACTIONS(195), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(197), 1,
      aux_sym_comparison_operator_token3,
    STATE(254), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(189), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(183), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [11084] = 3,
    ACTIONS(455), 1,
      aux_sym_window_function_token1,
    ACTIONS(33), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(31), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11116] = 7,
    ACTIONS(303), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(305), 1,
      aux_sym_comparison_operator_token3,
    STATE(264), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(183), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(301), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(297), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(181), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
  [11156] = 3,
    ACTIONS(457), 1,
      aux_sym_window_function_token1,
    ACTIONS(39), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(37), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11188] = 3,
    ACTIONS(459), 1,
      aux_sym_window_function_token1,
    ACTIONS(63), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(61), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11220] = 10,
    ACTIONS(467), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(469), 1,
      aux_sym_comparison_operator_token3,
    ACTIONS(473), 1,
      anon_sym_CARET,
    STATE(389), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(55), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(465), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(43), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      aux_sym_window_specification_token2,
    ACTIONS(461), 6,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
  [11266] = 7,
    ACTIONS(481), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(484), 1,
      aux_sym_comparison_operator_token3,
    STATE(264), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(161), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(478), 3,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(475), 5,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(159), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
  [11306] = 2,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(9), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11336] = 2,
    ACTIONS(17), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(15), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11366] = 3,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(23), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(19), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11398] = 3,
    ACTIONS(489), 1,
      anon_sym_DOT,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(25), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11430] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(300), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11483] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(192), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11536] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(34), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11589] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11642] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(35), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11695] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(281), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11748] = 2,
    ACTIONS(121), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(119), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11777] = 2,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(155), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11806] = 2,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(71), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11835] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11888] = 2,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(147), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [11917] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(70), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [11970] = 3,
    ACTIONS(473), 1,
      anon_sym_CARET,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(115), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_window_specification_token2,
  [12001] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(23), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12054] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(294), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12107] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(296), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12160] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(493), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(294), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12213] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(33), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12266] = 15,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    ACTIONS(503), 1,
      aux_sym_where_clause_token1,
    ACTIONS(505), 1,
      aux_sym_cross_join_token1,
    ACTIONS(507), 1,
      aux_sym_cross_join_token2,
    ACTIONS(513), 1,
      aux_sym_qualified_join_token5,
    STATE(411), 1,
      sym_where_clause,
    STATE(453), 1,
      sym_group_by_clause,
    STATE(490), 1,
      sym_having_clause,
    ACTIONS(509), 2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token3,
    ACTIONS(511), 2,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token4,
    STATE(343), 2,
      sym_join_clause,
      aux_sym_dataset_definition_repeat1,
    STATE(393), 2,
      sym_cross_join,
      sym_qualified_join,
    ACTIONS(495), 6,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [12321] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(302), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12374] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(102), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12427] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(103), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12480] = 2,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(111), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [12509] = 2,
    ACTIONS(125), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(123), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [12538] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(102), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12591] = 5,
    ACTIONS(473), 1,
      anon_sym_CARET,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(159), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      aux_sym_window_specification_token2,
  [12626] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(105), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12679] = 3,
    ACTIONS(473), 1,
      anon_sym_CARET,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_window_specification_token2,
  [12710] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(307), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12763] = 14,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      aux_sym_lit_null_token1,
    ACTIONS(397), 1,
      sym_lit_integer,
    ACTIONS(399), 1,
      sym_lit_decimal,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      aux_sym_comparison_operator_token2,
    STATE(268), 1,
      sym_quoted_identifier,
    STATE(308), 1,
      sym_primary_expression,
    ACTIONS(401), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(407), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(275), 2,
      sym_agg_function,
      sym_window_function,
    STATE(277), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12816] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(106), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12869] = 4,
    ACTIONS(473), 1,
      anon_sym_CARET,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_window_specification_token2,
  [12902] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(156), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [12955] = 2,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(151), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [12984] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(155), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13037] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(28), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13090] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(132), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13143] = 14,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_lit_null_token1,
    ACTIONS(417), 1,
      sym_lit_integer,
    ACTIONS(419), 1,
      sym_lit_decimal,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_comparison_operator_token2,
    STATE(6), 1,
      sym_quoted_identifier,
    STATE(29), 1,
      sym_primary_expression,
    ACTIONS(421), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(24), 2,
      sym_agg_function,
      sym_window_function,
    STATE(12), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13196] = 5,
    ACTIONS(473), 1,
      anon_sym_CARET,
    ACTIONS(471), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(135), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      aux_sym_window_specification_token2,
  [13231] = 3,
    ACTIONS(473), 1,
      anon_sym_CARET,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(115), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_window_specification_token2,
  [13262] = 2,
    ACTIONS(129), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(127), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13291] = 2,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(103), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13320] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(149), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13373] = 2,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(99), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13402] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(146), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13455] = 2,
    ACTIONS(97), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(95), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13484] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(148), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13537] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(211), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13590] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(146), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13643] = 15,
    ACTIONS(499), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    ACTIONS(503), 1,
      aux_sym_where_clause_token1,
    ACTIONS(507), 1,
      aux_sym_cross_join_token2,
    ACTIONS(513), 1,
      aux_sym_qualified_join_token5,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      aux_sym_cross_join_token1,
    STATE(411), 1,
      sym_where_clause,
    STATE(453), 1,
      sym_group_by_clause,
    STATE(490), 1,
      sym_having_clause,
    ACTIONS(509), 2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token3,
    ACTIONS(511), 2,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token4,
    STATE(337), 2,
      sym_join_clause,
      aux_sym_dataset_definition_repeat1,
    STATE(393), 2,
      sym_cross_join,
      sym_qualified_join,
    ACTIONS(495), 6,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [13698] = 2,
    ACTIONS(93), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(91), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13727] = 2,
    ACTIONS(89), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(87), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13756] = 2,
    ACTIONS(85), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(83), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13785] = 2,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(79), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13814] = 2,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(75), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13843] = 14,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_lit_null_token1,
    ACTIONS(377), 1,
      sym_lit_integer,
    ACTIONS(379), 1,
      sym_lit_decimal,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_comparison_operator_token2,
    STATE(97), 1,
      sym_quoted_identifier,
    STATE(139), 1,
      sym_primary_expression,
    ACTIONS(381), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(138), 2,
      sym_agg_function,
      sym_window_function,
    STATE(135), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [13896] = 2,
    ACTIONS(165), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(163), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13925] = 2,
    ACTIONS(141), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(139), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [13954] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(202), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14007] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(201), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14060] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(202), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14113] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(200), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14166] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(198), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14219] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(91), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14272] = 2,
    ACTIONS(109), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(107), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [14301] = 14,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_lit_null_token1,
    ACTIONS(275), 1,
      sym_lit_integer,
    ACTIONS(277), 1,
      sym_lit_decimal,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_comparison_operator_token2,
    STATE(50), 1,
      sym_quoted_identifier,
    STATE(90), 1,
      sym_primary_expression,
    ACTIONS(279), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(285), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(123), 2,
      sym_agg_function,
      sym_window_function,
    STATE(118), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14354] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(127), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14407] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(128), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14460] = 15,
    ACTIONS(499), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    ACTIONS(503), 1,
      aux_sym_where_clause_token1,
    ACTIONS(507), 1,
      aux_sym_cross_join_token2,
    ACTIONS(513), 1,
      aux_sym_qualified_join_token5,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      aux_sym_cross_join_token1,
    STATE(414), 1,
      sym_where_clause,
    STATE(433), 1,
      sym_group_by_clause,
    STATE(481), 1,
      sym_having_clause,
    ACTIONS(509), 2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token3,
    ACTIONS(511), 2,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token4,
    STATE(365), 2,
      sym_join_clause,
      aux_sym_dataset_definition_repeat1,
    STATE(393), 2,
      sym_cross_join,
      sym_qualified_join,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [14515] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(114), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14568] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(66), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14621] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(100), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14674] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(101), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14727] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(100), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14780] = 15,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    ACTIONS(503), 1,
      aux_sym_where_clause_token1,
    ACTIONS(505), 1,
      aux_sym_cross_join_token1,
    ACTIONS(507), 1,
      aux_sym_cross_join_token2,
    ACTIONS(513), 1,
      aux_sym_qualified_join_token5,
    STATE(414), 1,
      sym_where_clause,
    STATE(433), 1,
      sym_group_by_clause,
    STATE(481), 1,
      sym_having_clause,
    ACTIONS(509), 2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token3,
    ACTIONS(511), 2,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token4,
    STATE(363), 2,
      sym_join_clause,
      aux_sym_dataset_definition_repeat1,
    STATE(393), 2,
      sym_cross_join,
      sym_qualified_join,
    ACTIONS(525), 6,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [14835] = 14,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 1,
      aux_sym_lit_null_token1,
    ACTIONS(255), 1,
      sym_lit_integer,
    ACTIONS(257), 1,
      sym_lit_decimal,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_comparison_operator_token2,
    STATE(52), 1,
      sym_quoted_identifier,
    STATE(87), 1,
      sym_primary_expression,
    ACTIONS(259), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(86), 2,
      sym_agg_function,
      sym_window_function,
    STATE(81), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [14888] = 2,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(143), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [14917] = 2,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(67), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [14946] = 2,
    ACTIONS(133), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(131), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
      aux_sym_comparison_operator_token2,
      aux_sym_comparison_operator_token3,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      aux_sym_window_specification_token2,
  [14975] = 14,
    ACTIONS(313), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_lit_null_token1,
    ACTIONS(323), 1,
      sym_lit_integer,
    ACTIONS(325), 1,
      sym_lit_decimal,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_comparison_operator_token2,
    STATE(166), 1,
      sym_quoted_identifier,
    STATE(194), 1,
      sym_primary_expression,
    ACTIONS(327), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(217), 2,
      sym_agg_function,
      sym_window_function,
    STATE(221), 8,
      sym_lit_string,
      sym_lit_null,
      sym_lit_boolean,
      sym_qualified_identifier,
      sym_parenthesized_expression,
      sym_unary_operator,
      sym_binary_operator,
      sym_function_call,
  [15028] = 2,
    ACTIONS(531), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(529), 21,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      aux_sym_window_specification_token2,
  [15056] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(388), 1,
      sym_table_alias,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(539), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15093] = 3,
    ACTIONS(531), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(541), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(529), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15122] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(381), 1,
      sym_table_alias,
    ACTIONS(543), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(545), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15159] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(375), 1,
      sym_table_alias,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(549), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15196] = 3,
    ACTIONS(541), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(553), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(551), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15225] = 6,
    ACTIONS(561), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(564), 1,
      aux_sym_comparison_operator_token3,
    STATE(355), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(558), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(555), 6,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [15260] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(388), 1,
      sym_table_alias,
    ACTIONS(533), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(539), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15297] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(381), 1,
      sym_table_alias,
    ACTIONS(543), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(545), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15334] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(375), 1,
      sym_table_alias,
    ACTIONS(547), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(549), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15371] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(373), 1,
      sym_table_alias,
    STATE(374), 1,
      sym_quoted_identifier,
    ACTIONS(567), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(569), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15408] = 7,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      aux_sym_cte_def_token1,
    STATE(373), 1,
      sym_table_alias,
    STATE(374), 1,
      sym_quoted_identifier,
    ACTIONS(567), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(569), 15,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15445] = 6,
    ACTIONS(353), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(355), 1,
      aux_sym_comparison_operator_token3,
    STATE(355), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 6,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
    ACTIONS(181), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [15480] = 2,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(17), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15506] = 9,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      aux_sym_cross_join_token1,
    ACTIONS(579), 1,
      aux_sym_cross_join_token2,
    ACTIONS(588), 1,
      aux_sym_qualified_join_token5,
    ACTIONS(582), 2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token3,
    ACTIONS(585), 2,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token4,
    STATE(363), 2,
      sym_join_clause,
      aux_sym_dataset_definition_repeat1,
    STATE(393), 2,
      sym_cross_join,
      sym_qualified_join,
    ACTIONS(571), 9,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
  [15546] = 2,
    ACTIONS(9), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(11), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15572] = 9,
    ACTIONS(579), 1,
      aux_sym_cross_join_token2,
    ACTIONS(588), 1,
      aux_sym_qualified_join_token5,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      aux_sym_cross_join_token1,
    ACTIONS(582), 2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token3,
    ACTIONS(585), 2,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token4,
    STATE(365), 2,
      sym_join_clause,
      aux_sym_dataset_definition_repeat1,
    STATE(393), 2,
      sym_cross_join,
      sym_qualified_join,
    ACTIONS(571), 9,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_limit_clause_token1,
  [15612] = 3,
    ACTIONS(597), 1,
      anon_sym_DOT,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(23), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15640] = 3,
    ACTIONS(599), 1,
      anon_sym_DOT,
    ACTIONS(25), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(29), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15668] = 2,
    ACTIONS(15), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(17), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15694] = 3,
    ACTIONS(601), 1,
      anon_sym_DOT,
    ACTIONS(19), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(23), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15722] = 3,
    ACTIONS(603), 1,
      anon_sym_DOT,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(29), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15750] = 2,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(11), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15776] = 1,
    ACTIONS(605), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15799] = 1,
    ACTIONS(607), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15822] = 1,
    ACTIONS(609), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15845] = 1,
    ACTIONS(611), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15868] = 1,
    ACTIONS(613), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [15891] = 2,
    ACTIONS(615), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(617), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15916] = 2,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(69), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15941] = 2,
    ACTIONS(621), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(619), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15966] = 2,
    ACTIONS(615), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(617), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [15991] = 1,
    ACTIONS(623), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16014] = 2,
    ACTIONS(67), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(69), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [16039] = 2,
    ACTIONS(621), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(619), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [16064] = 2,
    ACTIONS(625), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(627), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [16089] = 2,
    ACTIONS(631), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(629), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [16114] = 2,
    ACTIONS(625), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(627), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [16139] = 2,
    ACTIONS(631), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(629), 17,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
      sym_identifier,
  [16164] = 1,
    ACTIONS(633), 20,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16187] = 7,
    ACTIONS(467), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(469), 1,
      aux_sym_comparison_operator_token3,
    STATE(390), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(183), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(465), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      aux_sym_window_specification_token2,
    ACTIONS(461), 6,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
  [16221] = 7,
    ACTIONS(641), 1,
      aux_sym_comparison_operator_token2,
    ACTIONS(644), 1,
      aux_sym_comparison_operator_token3,
    STATE(390), 1,
      aux_sym_comparison_operator_repeat1,
    ACTIONS(161), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(638), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      aux_sym_window_specification_token2,
    ACTIONS(635), 6,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      aux_sym_comparison_operator_token1,
  [16255] = 1,
    ACTIONS(647), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16276] = 1,
    ACTIONS(649), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16297] = 1,
    ACTIONS(651), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16318] = 1,
    ACTIONS(653), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16339] = 1,
    ACTIONS(655), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16360] = 1,
    ACTIONS(657), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16381] = 1,
    ACTIONS(659), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16402] = 1,
    ACTIONS(661), 18,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_cross_join_token1,
      aux_sym_cross_join_token2,
      aux_sym_qualified_join_token1,
      aux_sym_qualified_join_token2,
      aux_sym_qualified_join_token3,
      aux_sym_qualified_join_token4,
      aux_sym_qualified_join_token5,
      aux_sym_limit_clause_token1,
  [16423] = 9,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(665), 1,
      aux_sym_cte_def_token1,
    STATE(443), 1,
      sym_column_alias,
    STATE(444), 1,
      sym_quoted_identifier,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    ACTIONS(669), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(671), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(667), 6,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16459] = 9,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(665), 1,
      aux_sym_cte_def_token1,
    STATE(443), 1,
      sym_column_alias,
    STATE(444), 1,
      sym_quoted_identifier,
    ACTIONS(663), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(673), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(675), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(667), 6,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16495] = 3,
    ACTIONS(669), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(531), 10,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_OR,
      anon_sym_or,
  [16517] = 2,
    ACTIONS(529), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(531), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [16537] = 2,
    ACTIONS(529), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(531), 12,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
  [16557] = 3,
    ACTIONS(673), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(529), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(531), 10,
      aux_sym_cte_def_token1,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      sym_identifier,
      anon_sym_OR,
      anon_sym_or,
  [16579] = 3,
    ACTIONS(531), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(677), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(529), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16600] = 5,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(677), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(683), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(679), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16625] = 3,
    ACTIONS(677), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(683), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(685), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16645] = 3,
    ACTIONS(677), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(683), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16665] = 11,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(693), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      sym_table_reference,
    STATE(485), 1,
      sym_qualified_identifier,
    STATE(486), 1,
      sym_dbt_jinja_source,
    STATE(497), 1,
      sym_dbt_jinja_ref,
    STATE(500), 1,
      sym_subquery,
    STATE(502), 1,
      sym_quoted_identifier,
    STATE(595), 1,
      sym_join_target,
  [16699] = 11,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(350), 1,
      sym_qualified_identifier,
    STATE(352), 1,
      sym_dbt_jinja_source,
    STATE(353), 1,
      sym_dbt_jinja_ref,
    STATE(360), 1,
      sym_subquery,
    STATE(370), 1,
      sym_quoted_identifier,
    STATE(372), 1,
      sym_table_reference,
    STATE(396), 1,
      sym_join_target,
  [16733] = 5,
    ACTIONS(499), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    STATE(436), 1,
      sym_group_by_clause,
    STATE(498), 1,
      sym_having_clause,
    ACTIONS(705), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16755] = 1,
    ACTIONS(529), 11,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      aux_sym_limit_clause_token1,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [16769] = 11,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(693), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      sym_table_reference,
    STATE(485), 1,
      sym_qualified_identifier,
    STATE(486), 1,
      sym_dbt_jinja_source,
    STATE(497), 1,
      sym_dbt_jinja_ref,
    STATE(500), 1,
      sym_subquery,
    STATE(502), 1,
      sym_quoted_identifier,
    STATE(585), 1,
      sym_join_target,
  [16803] = 5,
    ACTIONS(499), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    STATE(451), 1,
      sym_group_by_clause,
    STATE(494), 1,
      sym_having_clause,
    ACTIONS(707), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [16825] = 2,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(529), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
      aux_sym_limit_clause_token1,
      anon_sym_OR,
      anon_sym_or,
      aux_sym_window_specification_token2,
  [16841] = 11,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(693), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      sym_table_reference,
    STATE(485), 1,
      sym_qualified_identifier,
    STATE(486), 1,
      sym_dbt_jinja_source,
    STATE(497), 1,
      sym_dbt_jinja_ref,
    STATE(500), 1,
      sym_subquery,
    STATE(502), 1,
      sym_quoted_identifier,
    STATE(604), 1,
      sym_join_target,
  [16875] = 6,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(522), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(715), 2,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(711), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_limit_clause_token1,
  [16899] = 11,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(356), 1,
      sym_qualified_identifier,
    STATE(357), 1,
      sym_dbt_jinja_source,
    STATE(358), 1,
      sym_dbt_jinja_ref,
    STATE(359), 1,
      sym_subquery,
    STATE(367), 1,
      sym_quoted_identifier,
    STATE(372), 1,
      sym_table_reference,
    STATE(395), 1,
      sym_join_target,
  [16933] = 11,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(350), 1,
      sym_qualified_identifier,
    STATE(352), 1,
      sym_dbt_jinja_source,
    STATE(353), 1,
      sym_dbt_jinja_ref,
    STATE(360), 1,
      sym_subquery,
    STATE(370), 1,
      sym_quoted_identifier,
    STATE(372), 1,
      sym_table_reference,
    STATE(395), 1,
      sym_join_target,
  [16967] = 11,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(356), 1,
      sym_qualified_identifier,
    STATE(357), 1,
      sym_dbt_jinja_source,
    STATE(358), 1,
      sym_dbt_jinja_ref,
    STATE(359), 1,
      sym_subquery,
    STATE(367), 1,
      sym_quoted_identifier,
    STATE(372), 1,
      sym_table_reference,
    STATE(396), 1,
      sym_join_target,
  [17001] = 3,
    ACTIONS(677), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(683), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(727), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17019] = 9,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 1,
      aux_sym_select_set_operator_token1,
    ACTIONS(735), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(737), 1,
      aux_sym_limit_clause_token1,
    STATE(424), 1,
      aux_sym_select_wrapper_repeat1,
    STATE(600), 1,
      sym_order_by_clause,
    STATE(709), 1,
      sym_limit_clause,
    STATE(719), 1,
      sym_select_set_operator,
    ACTIONS(733), 2,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
  [17048] = 10,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
    ACTIONS(701), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(318), 1,
      sym_table_reference,
    STATE(350), 1,
      sym_qualified_identifier,
    STATE(352), 1,
      sym_dbt_jinja_source,
    STATE(353), 1,
      sym_dbt_jinja_ref,
    STATE(360), 1,
      sym_subquery,
    STATE(370), 1,
      sym_quoted_identifier,
  [17079] = 9,
    ACTIONS(731), 1,
      aux_sym_select_set_operator_token1,
    ACTIONS(735), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(737), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_select_wrapper_repeat1,
    STATE(571), 1,
      sym_order_by_clause,
    STATE(719), 1,
      sym_select_set_operator,
    STATE(747), 1,
      sym_limit_clause,
    ACTIONS(733), 2,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
  [17108] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    ACTIONS(723), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_table_reference,
    STATE(356), 1,
      sym_qualified_identifier,
    STATE(357), 1,
      sym_dbt_jinja_source,
    STATE(358), 1,
      sym_dbt_jinja_ref,
    STATE(359), 1,
      sym_subquery,
    STATE(367), 1,
      sym_quoted_identifier,
  [17139] = 3,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(685), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17156] = 9,
    ACTIONS(731), 1,
      aux_sym_select_set_operator_token1,
    ACTIONS(735), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(737), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    STATE(471), 1,
      aux_sym_select_wrapper_repeat1,
    STATE(571), 1,
      sym_order_by_clause,
    STATE(705), 1,
      sym_select_set_operator,
    STATE(747), 1,
      sym_limit_clause,
    ACTIONS(733), 2,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
  [17185] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(744), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17202] = 4,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(748), 2,
      aux_sym_order_by_clause_token2,
      aux_sym_order_by_clause_token3,
    ACTIONS(746), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [17221] = 9,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    ACTIONS(731), 1,
      aux_sym_select_set_operator_token1,
    ACTIONS(735), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(737), 1,
      aux_sym_limit_clause_token1,
    STATE(427), 1,
      aux_sym_select_wrapper_repeat1,
    STATE(600), 1,
      sym_order_by_clause,
    STATE(705), 1,
      sym_select_set_operator,
    STATE(709), 1,
      sym_limit_clause,
    ACTIONS(733), 2,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
  [17250] = 7,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(760), 1,
      aux_sym_window_specification_token2,
    STATE(535), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
  [17274] = 7,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(766), 1,
      aux_sym_window_specification_token2,
    STATE(531), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
  [17298] = 3,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    STATE(480), 1,
      sym_having_clause,
    ACTIONS(768), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17314] = 1,
    ACTIONS(770), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17326] = 1,
    ACTIONS(772), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17338] = 3,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    STATE(491), 1,
      sym_having_clause,
    ACTIONS(774), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17354] = 7,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(778), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(780), 1,
      aux_sym_window_specification_token2,
    STATE(513), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
  [17378] = 3,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(782), 7,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17394] = 7,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(788), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(790), 1,
      aux_sym_window_specification_token2,
    STATE(519), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
  [17418] = 3,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(782), 7,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17434] = 7,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(796), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(798), 1,
      aux_sym_window_specification_token2,
    STATE(516), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
  [17458] = 3,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(800), 7,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17474] = 1,
    ACTIONS(802), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17486] = 1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17498] = 1,
    ACTIONS(806), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17510] = 1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17522] = 7,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(812), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(814), 1,
      aux_sym_window_specification_token2,
    STATE(526), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
  [17546] = 3,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(800), 7,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17562] = 3,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(816), 7,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17578] = 3,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_column_list_repeat1,
    ACTIONS(816), 7,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17594] = 3,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    STATE(501), 1,
      sym_having_clause,
    ACTIONS(824), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17610] = 1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_dataset_definition_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17622] = 3,
    ACTIONS(501), 1,
      aux_sym_having_clause_token1,
    STATE(496), 1,
      sym_having_clause,
    ACTIONS(826), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17638] = 6,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(766), 1,
      aux_sym_window_specification_token2,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(597), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17659] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 1,
      aux_sym_window_specification_token2,
    STATE(643), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17680] = 6,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(790), 1,
      aux_sym_window_specification_token2,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(638), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17701] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    ACTIONS(836), 1,
      aux_sym_window_specification_token2,
    STATE(543), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17722] = 6,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(780), 1,
      aux_sym_window_specification_token2,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(574), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17743] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    ACTIONS(840), 1,
      aux_sym_window_specification_token2,
    STATE(556), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17764] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      aux_sym_window_specification_token2,
    STATE(550), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17785] = 3,
    ACTIONS(848), 1,
      aux_sym_dataset_definition_token1,
    STATE(487), 1,
      sym_dataset_definition,
    ACTIONS(846), 6,
      ts_builtin_sym_end,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17800] = 6,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(760), 1,
      aux_sym_window_specification_token2,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(568), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17821] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    ACTIONS(852), 1,
      aux_sym_window_specification_token2,
    STATE(538), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17842] = 6,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(798), 1,
      aux_sym_window_specification_token2,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(605), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17863] = 3,
    ACTIONS(854), 1,
      aux_sym_dataset_definition_token1,
    STATE(487), 1,
      sym_dataset_definition,
    ACTIONS(846), 6,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17878] = 3,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(758), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(685), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      aux_sym_window_specification_token2,
  [17893] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      aux_sym_window_specification_token2,
    STATE(646), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17914] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 1,
      aux_sym_window_specification_token2,
    STATE(598), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17935] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(866), 1,
      aux_sym_window_specification_token2,
    STATE(593), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17956] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 1,
      aux_sym_window_specification_token2,
    STATE(588), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [17977] = 5,
    ACTIONS(874), 1,
      aux_sym_select_set_operator_token1,
    STATE(471), 1,
      aux_sym_select_wrapper_repeat1,
    STATE(705), 1,
      sym_select_set_operator,
    ACTIONS(877), 2,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
    ACTIONS(872), 3,
      ts_builtin_sym_end,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [17996] = 3,
    ACTIONS(531), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(756), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(529), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_order_by_clause_token1,
      aux_sym_window_specification_token2,
  [18011] = 6,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    ACTIONS(814), 1,
      aux_sym_window_specification_token2,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(631), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18032] = 5,
    ACTIONS(874), 1,
      aux_sym_select_set_operator_token1,
    STATE(474), 1,
      aux_sym_select_wrapper_repeat1,
    STATE(719), 1,
      sym_select_set_operator,
    ACTIONS(877), 2,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
    ACTIONS(872), 3,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18051] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(882), 1,
      aux_sym_window_specification_token2,
    STATE(596), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18072] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    ACTIONS(886), 1,
      aux_sym_window_specification_token2,
    STATE(560), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18093] = 6,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 1,
      aux_sym_window_specification_token2,
    STATE(552), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18114] = 5,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(652), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18132] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(894), 1,
      aux_sym_select_statement_token1,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(606), 1,
      sym_dbt_jinja_config,
    STATE(714), 1,
      sym_select_wrapper,
    STATE(756), 1,
      sym_select_statement,
  [18154] = 1,
    ACTIONS(898), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18164] = 1,
    ACTIONS(900), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18174] = 1,
    ACTIONS(872), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18184] = 5,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    STATE(682), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18202] = 5,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(653), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18220] = 6,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(906), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(388), 1,
      sym_table_alias,
    ACTIONS(539), 2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
  [18240] = 6,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(906), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(381), 1,
      sym_table_alias,
    ACTIONS(545), 2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
  [18260] = 1,
    ACTIONS(908), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18270] = 3,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(685), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_window_specification_token2,
  [18284] = 5,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(659), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18302] = 1,
    ACTIONS(912), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18312] = 1,
    ACTIONS(914), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18322] = 5,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(666), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18340] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(894), 1,
      aux_sym_select_statement_token1,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(606), 1,
      sym_dbt_jinja_config,
    STATE(714), 1,
      sym_select_wrapper,
    STATE(821), 1,
      sym_select_statement,
  [18362] = 1,
    ACTIONS(918), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18372] = 5,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(665), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18390] = 1,
    ACTIONS(922), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18400] = 6,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(906), 1,
      aux_sym_cte_def_token1,
    STATE(374), 1,
      sym_quoted_identifier,
    STATE(375), 1,
      sym_table_alias,
    ACTIONS(549), 2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
  [18420] = 1,
    ACTIONS(924), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18430] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(894), 1,
      aux_sym_select_statement_token1,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(606), 1,
      sym_dbt_jinja_config,
    STATE(714), 1,
      sym_select_wrapper,
    STATE(814), 1,
      sym_select_statement,
  [18452] = 6,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(906), 1,
      aux_sym_cte_def_token1,
    STATE(373), 1,
      sym_table_alias,
    STATE(374), 1,
      sym_quoted_identifier,
    ACTIONS(569), 2,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
  [18472] = 1,
    ACTIONS(926), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_select_set_operator_token1,
      aux_sym_select_set_operator_token4,
      aux_sym_select_set_operator_token5,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [18482] = 3,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(928), 1,
      anon_sym_DOT,
    ACTIONS(29), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18495] = 2,
    ACTIONS(9), 2,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(11), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18506] = 2,
    ACTIONS(15), 2,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(17), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18517] = 3,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(930), 1,
      anon_sym_DOT,
    ACTIONS(23), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18530] = 3,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(932), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    STATE(744), 2,
      sym_lit_string,
      sym_lit_boolean,
  [18542] = 2,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18552] = 2,
    ACTIONS(631), 1,
      anon_sym_DQUOTE,
    ACTIONS(629), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18562] = 2,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18572] = 2,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18582] = 2,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 4,
      aux_sym_cte_def_token1,
      aux_sym_join_clause_on_token1,
      aux_sym_join_clause_using_token1,
      sym_identifier,
  [18592] = 3,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18604] = 5,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(940), 1,
      aux_sym_window_specification_token2,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
  [18620] = 3,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18632] = 5,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(670), 1,
      sym_cte_def,
    STATE(690), 1,
      sym_cte_clause_list,
    STATE(833), 1,
      sym_quoted_identifier,
  [18648] = 5,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(948), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(950), 1,
      aux_sym_window_specification_token2,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
  [18664] = 3,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(685), 3,
      anon_sym_RPAREN,
      aux_sym_order_by_clause_token1,
      aux_sym_window_specification_token2,
  [18676] = 3,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18688] = 5,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(959), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(961), 1,
      aux_sym_window_specification_token2,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
  [18704] = 3,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(932), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    STATE(668), 2,
      sym_lit_string,
      sym_lit_boolean,
  [18716] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(533), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(963), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_limit_clause_token1,
  [18728] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(532), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(963), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_limit_clause_token1,
  [18740] = 5,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(658), 1,
      sym_cte_clause_list,
    STATE(670), 1,
      sym_cte_def,
    STATE(833), 1,
      sym_quoted_identifier,
  [18756] = 3,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18768] = 3,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18780] = 5,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(971), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(973), 1,
      aux_sym_window_specification_token2,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
  [18796] = 3,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(932), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    STATE(674), 2,
      sym_lit_string,
      sym_lit_boolean,
  [18808] = 3,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    ACTIONS(932), 2,
      aux_sym_lit_boolean_token1,
      aux_sym_lit_boolean_token2,
    STATE(749), 2,
      sym_lit_string,
      sym_lit_boolean,
  [18820] = 5,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(670), 1,
      sym_cte_def,
    STATE(671), 1,
      sym_cte_clause_list,
    STATE(833), 1,
      sym_quoted_identifier,
  [18836] = 3,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      anon_sym_AND,
      anon_sym_and,
    ACTIONS(717), 2,
      anon_sym_OR,
      anon_sym_or,
  [18848] = 5,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(979), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(981), 1,
      aux_sym_window_specification_token2,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
  [18864] = 3,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    STATE(532), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(746), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_limit_clause_token1,
  [18876] = 3,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(532), 1,
      aux_sym_order_by_clause_repeat1,
    ACTIONS(986), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_limit_clause_token1,
  [18888] = 5,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(670), 1,
      sym_cte_def,
    STATE(688), 1,
      sym_cte_clause_list,
    STATE(833), 1,
      sym_quoted_identifier,
  [18904] = 5,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    ACTIONS(990), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(992), 1,
      aux_sym_window_specification_token2,
    STATE(517), 1,
      aux_sym_group_by_clause_repeat1,
  [18920] = 4,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    ACTIONS(996), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(998), 1,
      aux_sym_window_specification_token1,
    ACTIONS(1000), 1,
      aux_sym_window_specification_token2,
  [18933] = 4,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      sym_identifier,
    ACTIONS(1004), 1,
      anon_sym_STAR,
    STATE(60), 1,
      sym_quoted_identifier,
  [18946] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [18959] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(909), 1,
      sym_window_frame_start,
  [18972] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(946), 1,
      sym_window_frame_start,
  [18985] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(945), 1,
      sym_window_frame_end,
  [18998] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(906), 1,
      sym_window_frame_start,
  [19011] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    ACTIONS(852), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19024] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(903), 1,
      sym_window_frame_start,
  [19037] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(902), 1,
      sym_window_frame_start,
  [19050] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(943), 1,
      sym_window_frame_end,
  [19063] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(901), 1,
      sym_window_frame_start,
  [19076] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(941), 1,
      sym_window_frame_start,
  [19089] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(900), 1,
      sym_window_frame_start,
  [19102] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(1024), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19115] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(838), 1,
      sym_window_frame_end,
  [19128] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    ACTIONS(1028), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19141] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(899), 1,
      sym_window_frame_start,
  [19154] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(896), 1,
      sym_window_frame_start,
  [19167] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(893), 1,
      sym_window_frame_start,
  [19180] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19193] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(892), 1,
      sym_window_frame_start,
  [19206] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(891), 1,
      sym_window_frame_start,
  [19219] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(939), 1,
      sym_window_frame_start,
  [19232] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    ACTIONS(890), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19245] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(890), 1,
      sym_window_frame_start,
  [19258] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(836), 1,
      sym_window_frame_end,
  [19271] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(889), 1,
      sym_window_frame_start,
  [19284] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(886), 1,
      sym_window_frame_start,
  [19297] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(938), 1,
      sym_window_frame_end,
  [19310] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(883), 1,
      sym_window_frame_start,
  [19323] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(882), 1,
      sym_window_frame_start,
  [19336] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    ACTIONS(992), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19349] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(881), 1,
      sym_window_frame_start,
  [19362] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(880), 1,
      sym_window_frame_start,
  [19375] = 3,
    ACTIONS(737), 1,
      aux_sym_limit_clause_token1,
    STATE(700), 1,
      sym_limit_clause,
    ACTIONS(1030), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [19386] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(879), 1,
      sym_window_frame_start,
  [19399] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(876), 1,
      sym_window_frame_start,
  [19412] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(940), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19425] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(870), 1,
      sym_window_frame_start,
  [19438] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(869), 1,
      sym_window_frame_start,
  [19451] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(868), 1,
      sym_window_frame_start,
  [19464] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(867), 1,
      sym_window_frame_start,
  [19477] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(866), 1,
      sym_window_frame_start,
  [19490] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(835), 1,
      sym_window_frame_end,
  [19503] = 4,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1036), 1,
      aux_sym_window_specification_token1,
    ACTIONS(1038), 1,
      aux_sym_window_specification_token2,
  [19516] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(863), 1,
      sym_window_frame_start,
  [19529] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(770), 1,
      sym_window_frame_end,
  [19542] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(828), 1,
      sym_window_frame_end,
  [19555] = 3,
    ACTIONS(1040), 1,
      aux_sym_join_clause_on_token1,
    ACTIONS(1042), 1,
      aux_sym_join_clause_using_token1,
    STATE(391), 2,
      sym_join_clause_on,
      sym_join_clause_using,
  [19566] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(827), 1,
      sym_window_frame_end,
  [19579] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(839), 1,
      sym_window_frame_end,
  [19592] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    ACTIONS(1046), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19605] = 4,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(734), 1,
      sym_cte_def,
    STATE(833), 1,
      sym_quoted_identifier,
  [19618] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(920), 1,
      sym_window_frame_start,
  [19631] = 1,
    ACTIONS(1048), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [19638] = 4,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(1052), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1054), 1,
      aux_sym_window_specification_token1,
    ACTIONS(1056), 1,
      aux_sym_window_specification_token2,
  [19651] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19664] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(811), 1,
      sym_window_frame_end,
  [19677] = 3,
    ACTIONS(1040), 1,
      aux_sym_join_clause_on_token1,
    ACTIONS(1042), 1,
      aux_sym_join_clause_using_token1,
    STATE(392), 2,
      sym_join_clause_on,
      sym_join_clause_using,
  [19688] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(1060), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19701] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(981), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19714] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(882), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19727] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(768), 1,
      sym_window_frame_end,
  [19740] = 3,
    ACTIONS(737), 1,
      aux_sym_limit_clause_token1,
    STATE(755), 1,
      sym_limit_clause,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [19751] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(810), 1,
      sym_window_frame_end,
  [19764] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(809), 1,
      sym_window_frame_end,
  [19777] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(767), 1,
      sym_window_frame_end,
  [19790] = 3,
    ACTIONS(1040), 1,
      aux_sym_join_clause_on_token1,
    ACTIONS(1042), 1,
      aux_sym_join_clause_using_token1,
    STATE(397), 2,
      sym_join_clause_on,
      sym_join_clause_using,
  [19801] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [19814] = 4,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    ACTIONS(1064), 1,
      aux_sym_select_statement_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(701), 1,
      sym_select_wrapper,
  [19827] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(808), 1,
      sym_window_frame_end,
  [19840] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(805), 1,
      sym_window_frame_end,
  [19853] = 4,
    ACTIONS(1066), 1,
      sym_identifier,
    ACTIONS(1068), 1,
      anon_sym_LBRACE,
    STATE(794), 1,
      sym_jinja_kwargs_expression,
    STATE(796), 1,
      sym_jinja_dict_expression,
  [19866] = 3,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(685), 2,
      anon_sym_RPAREN,
      aux_sym_window_specification_token2,
  [19877] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(766), 1,
      sym_window_frame_end,
  [19890] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(804), 1,
      sym_window_frame_end,
  [19903] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(765), 1,
      sym_window_frame_end,
  [19916] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(957), 1,
      sym_window_frame_end,
  [19929] = 4,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(1075), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1077), 1,
      aux_sym_window_specification_token1,
    ACTIONS(1079), 1,
      aux_sym_window_specification_token2,
  [19942] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(910), 1,
      sym_window_frame_start,
  [19955] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(764), 1,
      sym_window_frame_end,
  [19968] = 4,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    ACTIONS(1083), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1085), 1,
      aux_sym_window_specification_token1,
    ACTIONS(1087), 1,
      aux_sym_window_specification_token2,
  [19981] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(795), 1,
      sym_window_frame_end,
  [19994] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(792), 1,
      sym_window_frame_end,
  [20007] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(911), 1,
      sym_window_frame_start,
  [20020] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(948), 1,
      sym_window_frame_start,
  [20033] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(912), 1,
      sym_window_frame_start,
  [20046] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(791), 1,
      sym_window_frame_end,
  [20059] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(787), 1,
      sym_window_frame_end,
  [20072] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(949), 1,
      sym_window_frame_end,
  [20085] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(762), 1,
      sym_window_frame_end,
  [20098] = 4,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      sym_identifier,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    STATE(74), 1,
      sym_quoted_identifier,
  [20111] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(786), 1,
      sym_window_frame_end,
  [20124] = 4,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    ACTIONS(1093), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(1095), 1,
      aux_sym_window_specification_token1,
    ACTIONS(1097), 1,
      aux_sym_window_specification_token2,
  [20137] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20150] = 4,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_STAR,
    ACTIONS(1099), 1,
      sym_identifier,
    STATE(62), 1,
      sym_quoted_identifier,
  [20163] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(913), 1,
      sym_window_frame_start,
  [20176] = 4,
    ACTIONS(5), 1,
      aux_sym_select_body_token1,
    ACTIONS(1101), 1,
      aux_sym_select_statement_token1,
    STATE(430), 1,
      sym_select_body,
    STATE(701), 1,
      sym_select_wrapper,
  [20189] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(758), 1,
      sym_window_frame_end,
  [20202] = 4,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(1089), 1,
      anon_sym_STAR,
    ACTIONS(1099), 1,
      sym_identifier,
    STATE(122), 1,
      sym_quoted_identifier,
  [20215] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(757), 1,
      sym_window_frame_end,
  [20228] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20241] = 4,
    ACTIONS(1010), 1,
      sym_lit_integer,
    ACTIONS(1012), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1014), 1,
      aux_sym_window_frame_start_token4,
    STATE(956), 1,
      sym_window_frame_start,
  [20254] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(772), 1,
      sym_window_frame_end,
  [20267] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(773), 1,
      sym_window_frame_end,
  [20280] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(775), 1,
      sym_window_frame_end,
  [20293] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20306] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(784), 1,
      sym_window_frame_end,
  [20319] = 4,
    ACTIONS(1016), 1,
      sym_lit_integer,
    ACTIONS(1018), 1,
      aux_sym_window_frame_start_token1,
    ACTIONS(1020), 1,
      aux_sym_window_frame_start_token4,
    STATE(776), 1,
      sym_window_frame_end,
  [20332] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    ACTIONS(1105), 1,
      aux_sym_window_specification_token2,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20345] = 3,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym_quoted_identifier,
  [20355] = 3,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      sym_quoted_identifier,
  [20365] = 3,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(1099), 1,
      sym_identifier,
    STATE(122), 1,
      sym_quoted_identifier,
  [20375] = 3,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym_join_clause_using_repeat1,
  [20385] = 3,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(1111), 1,
      sym_identifier,
    STATE(167), 1,
      sym_quoted_identifier,
  [20395] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20405] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20415] = 3,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(1099), 1,
      sym_identifier,
    STATE(56), 1,
      sym_quoted_identifier,
  [20425] = 2,
    ACTIONS(1117), 1,
      aux_sym_select_body_token1,
    ACTIONS(1119), 2,
      aux_sym_select_set_operator_token2,
      aux_sym_select_set_operator_token3,
  [20433] = 3,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(703), 1,
      anon_sym_DQUOTE,
    STATE(366), 1,
      sym_quoted_identifier,
  [20443] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(376), 1,
      sym_quoted_identifier,
  [20453] = 3,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(710), 1,
      sym_select_wrapper,
  [20463] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20473] = 3,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(376), 1,
      sym_quoted_identifier,
  [20483] = 3,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(1111), 1,
      sym_identifier,
    STATE(178), 1,
      sym_quoted_identifier,
  [20493] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(445), 1,
      sym_quoted_identifier,
  [20503] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(11), 1,
      sym_quoted_identifier,
  [20513] = 3,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym_quoted_identifier,
  [20523] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20533] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20543] = 3,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      sym_identifier,
    STATE(74), 1,
      sym_quoted_identifier,
  [20553] = 3,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    STATE(675), 1,
      aux_sym_jinja_kwargs_expression_repeat1,
  [20563] = 3,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(746), 1,
      sym_quoted_identifier,
  [20573] = 3,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      aux_sym_select_body_token1,
    STATE(689), 1,
      aux_sym_cte_clause_list_repeat1,
  [20583] = 3,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(707), 1,
      sym_select_wrapper,
  [20593] = 3,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(422), 1,
      sym_select_body,
    STATE(798), 1,
      sym_select_wrapper,
  [20603] = 3,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1138), 1,
      aux_sym_select_body_token1,
    STATE(673), 1,
      aux_sym_cte_clause_list_repeat1,
  [20613] = 3,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    STATE(680), 1,
      aux_sym_jinja_dict_expression_repeat1,
  [20623] = 3,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym_jinja_kwargs_expression_repeat1,
  [20633] = 3,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(1148), 1,
      sym_identifier,
    STATE(346), 1,
      sym_quoted_identifier,
  [20643] = 3,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(1148), 1,
      sym_identifier,
    STATE(267), 1,
      sym_quoted_identifier,
  [20653] = 3,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(686), 1,
      sym_quoted_identifier,
  [20663] = 3,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(382), 1,
      sym_quoted_identifier,
  [20673] = 3,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(687), 1,
      aux_sym_jinja_dict_expression_repeat1,
  [20683] = 3,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(1152), 1,
      sym_identifier,
    STATE(82), 1,
      sym_quoted_identifier,
  [20693] = 3,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
    STATE(610), 1,
      aux_sym_group_by_clause_repeat1,
  [20703] = 3,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(1152), 1,
      sym_identifier,
    STATE(153), 1,
      sym_quoted_identifier,
  [20713] = 3,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(725), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      sym_quoted_identifier,
  [20723] = 3,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(685), 1,
      aux_sym_jinja_kwargs_expression_repeat1,
  [20733] = 3,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(650), 1,
      aux_sym_join_clause_using_repeat1,
  [20743] = 3,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    STATE(687), 1,
      aux_sym_jinja_dict_expression_repeat1,
  [20753] = 3,
    ACTIONS(5), 1,
      aux_sym_select_body_token1,
    STATE(430), 1,
      sym_select_body,
    STATE(707), 1,
      sym_select_wrapper,
  [20763] = 3,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      aux_sym_select_body_token1,
    STATE(673), 1,
      aux_sym_cte_clause_list_repeat1,
  [20773] = 3,
    ACTIONS(5), 1,
      aux_sym_select_body_token1,
    STATE(430), 1,
      sym_select_body,
    STATE(710), 1,
      sym_select_wrapper,
  [20783] = 3,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(691), 1,
      aux_sym_join_clause_using_repeat1,
  [20793] = 3,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      sym_identifier,
    STATE(47), 1,
      sym_quoted_identifier,
  [20803] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(5), 1,
      sym_quoted_identifier,
  [20813] = 2,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym_window_specification,
  [20820] = 2,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_window_specification,
  [20827] = 2,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_window_specification,
  [20834] = 2,
    ACTIONS(1117), 1,
      aux_sym_select_body_token1,
    ACTIONS(1119), 1,
      aux_sym_select_set_operator_token3,
  [20841] = 2,
    ACTIONS(1179), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_window_specification,
  [20848] = 2,
    ACTIONS(1179), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_window_specification,
  [20855] = 1,
    ACTIONS(1181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [20860] = 1,
    ACTIONS(1183), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [20865] = 2,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
  [20872] = 2,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_window_specification,
  [20879] = 2,
    ACTIONS(1189), 1,
      aux_sym_cross_join_token2,
    ACTIONS(1191), 1,
      aux_sym_qualified_join_token3,
  [20886] = 2,
    ACTIONS(5), 1,
      aux_sym_select_body_token1,
    STATE(482), 1,
      sym_select_body,
  [20893] = 2,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_window_specification,
  [20900] = 1,
    ACTIONS(1193), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [20905] = 2,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_window_specification,
  [20912] = 1,
    ACTIONS(1197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [20917] = 1,
    ACTIONS(1199), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [20922] = 2,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
  [20929] = 2,
    ACTIONS(1179), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_window_specification,
  [20936] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(923), 1,
      sym_lit_string,
  [20943] = 1,
    ACTIONS(1205), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [20948] = 2,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_window_specification,
  [20955] = 1,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      aux_sym_select_body_token1,
  [20960] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(846), 1,
      sym_lit_string,
  [20967] = 2,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_window_specification,
  [20974] = 2,
    ACTIONS(896), 1,
      aux_sym_select_body_token1,
    STATE(482), 1,
      sym_select_body,
  [20981] = 2,
    ACTIONS(1209), 1,
      anon_sym_ref,
    ACTIONS(1211), 1,
      anon_sym_source,
  [20988] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_window_specification,
  [20995] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(731), 1,
      sym_lit_string,
  [21002] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(871), 1,
      sym_lit_string,
  [21009] = 1,
    ACTIONS(1215), 2,
      aux_sym_select_statement_token1,
      aux_sym_select_body_token1,
  [21014] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_window_specification,
  [21021] = 2,
    ACTIONS(1213), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_window_specification,
  [21028] = 1,
    ACTIONS(1217), 2,
      aux_sym_select_statement_token1,
      aux_sym_select_body_token1,
  [21033] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(711), 1,
      sym_lit_string,
  [21040] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(789), 1,
      sym_lit_string,
  [21047] = 2,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_window_specification,
  [21054] = 2,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
  [21061] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(790), 1,
      sym_lit_string,
  [21068] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(702), 1,
      sym_lit_string,
  [21075] = 1,
    ACTIONS(1138), 2,
      anon_sym_COMMA,
      aux_sym_select_body_token1,
  [21080] = 2,
    ACTIONS(1223), 1,
      sym_identifier,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
  [21087] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(806), 1,
      sym_lit_string,
  [21094] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(921), 1,
      sym_lit_string,
  [21101] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(924), 1,
      sym_lit_string,
  [21108] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(925), 1,
      sym_lit_string,
  [21115] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(807), 1,
      sym_lit_string,
  [21122] = 1,
    ACTIONS(1227), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [21127] = 2,
    ACTIONS(1223), 1,
      sym_identifier,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
  [21134] = 1,
    ACTIONS(1231), 2,
      aux_sym_window_frame_start_token2,
      aux_sym_window_frame_start_token3,
  [21139] = 1,
    ACTIONS(1233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21144] = 1,
    ACTIONS(1235), 2,
      aux_sym_window_frame_start_token2,
      aux_sym_window_frame_start_token3,
  [21149] = 1,
    ACTIONS(1237), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21154] = 1,
    ACTIONS(1239), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [21159] = 2,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_window_specification,
  [21166] = 1,
    ACTIONS(1243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [21171] = 2,
    ACTIONS(1245), 1,
      anon_sym_ref,
    ACTIONS(1247), 1,
      anon_sym_source,
  [21178] = 2,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(915), 1,
      sym_lit_string,
  [21185] = 2,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_window_specification,
  [21192] = 2,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      sym_window_specification,
  [21199] = 2,
    ACTIONS(1249), 1,
      anon_sym_ref,
    ACTIONS(1251), 1,
      anon_sym_source,
  [21206] = 1,
    ACTIONS(1253), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [21211] = 1,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
  [21215] = 1,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
  [21219] = 1,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
  [21223] = 1,
    ACTIONS(1261), 1,
      anon_sym_DQUOTE,
  [21227] = 1,
    ACTIONS(1263), 1,
      anon_sym_SQUOTE,
  [21231] = 1,
    ACTIONS(1265), 1,
      aux_sym_comparison_operator_token1,
  [21235] = 1,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
  [21239] = 1,
    ACTIONS(1269), 1,
      aux_sym_select_body_token1,
  [21243] = 1,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
  [21247] = 1,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
  [21251] = 1,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
  [21255] = 1,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
  [21259] = 1,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
  [21263] = 1,
    ACTIONS(1279), 1,
      anon_sym_DQUOTE,
  [21267] = 1,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
  [21271] = 1,
    ACTIONS(1283), 1,
      anon_sym_DQUOTE,
  [21275] = 1,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
  [21279] = 1,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
  [21283] = 1,
    ACTIONS(1289), 1,
      anon_sym_DQUOTE,
  [21287] = 1,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
  [21291] = 1,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
  [21295] = 1,
    ACTIONS(1293), 1,
      sym_identifier,
  [21299] = 1,
    ACTIONS(1295), 1,
      aux_sym_comparison_operator_token1,
  [21303] = 1,
    ACTIONS(1297), 1,
      sym_string_literal,
  [21307] = 1,
    ACTIONS(1299), 1,
      aux_sym_comparison_operator_token1,
  [21311] = 1,
    ACTIONS(1301), 1,
      anon_sym_SQUOTE,
  [21315] = 1,
    ACTIONS(1303), 1,
      anon_sym_DQUOTE,
  [21319] = 1,
    ACTIONS(1305), 1,
      anon_sym_SQUOTE,
  [21323] = 1,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
  [21327] = 1,
    ACTIONS(1309), 1,
      aux_sym_cross_join_token2,
  [21331] = 1,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [21335] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [21339] = 1,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
  [21343] = 1,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [21347] = 1,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [21351] = 1,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
  [21355] = 1,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
  [21359] = 1,
    ACTIONS(1323), 1,
      anon_sym_EQ,
  [21363] = 1,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
  [21367] = 1,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [21371] = 1,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [21375] = 1,
    ACTIONS(1331), 1,
      aux_sym_comparison_operator_token1,
  [21379] = 1,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
  [21383] = 1,
    ACTIONS(1335), 1,
      sym_identifier,
  [21387] = 1,
    ACTIONS(1337), 1,
      anon_sym_SQUOTE,
  [21391] = 1,
    ACTIONS(1339), 1,
      sym_string_literal,
  [21395] = 1,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
  [21399] = 1,
    ACTIONS(1343), 1,
      anon_sym_DQUOTE,
  [21403] = 1,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [21407] = 1,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
  [21411] = 1,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [21415] = 1,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
  [21419] = 1,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [21423] = 1,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [21427] = 1,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
  [21431] = 1,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
  [21435] = 1,
    ACTIONS(1359), 1,
      anon_sym_RBRACE_RBRACE,
  [21439] = 1,
    ACTIONS(1361), 1,
      anon_sym_RBRACE_RBRACE,
  [21443] = 1,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
  [21447] = 1,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
  [21451] = 1,
    ACTIONS(1367), 1,
      sym_identifier,
  [21455] = 1,
    ACTIONS(1369), 1,
      anon_sym_RBRACE_RBRACE,
  [21459] = 1,
    ACTIONS(1371), 1,
      sym_string_literal,
  [21463] = 1,
    ACTIONS(1373), 1,
      sym_lit_integer,
  [21467] = 1,
    ACTIONS(1375), 1,
      aux_sym_group_by_clause_token2,
  [21471] = 1,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [21475] = 1,
    ACTIONS(1379), 1,
      anon_sym_LPAREN,
  [21479] = 1,
    ACTIONS(1381), 1,
      aux_sym_comparison_operator_token1,
  [21483] = 1,
    ACTIONS(1383), 1,
      aux_sym_group_by_clause_token2,
  [21487] = 1,
    ACTIONS(1385), 1,
      anon_sym_SQUOTE,
  [21491] = 1,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
  [21495] = 1,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
  [21499] = 1,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
  [21503] = 1,
    ACTIONS(1393), 1,
      sym_identifier,
  [21507] = 1,
    ACTIONS(1395), 1,
      anon_sym_LPAREN,
  [21511] = 1,
    ACTIONS(1397), 1,
      sym_string_literal,
  [21515] = 1,
    ACTIONS(1399), 1,
      sym_string_literal,
  [21519] = 1,
    ACTIONS(1401), 1,
      aux_sym_cte_def_token1,
  [21523] = 1,
    ACTIONS(1403), 1,
      anon_sym_RBRACE_RBRACE,
  [21527] = 1,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
  [21531] = 1,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
  [21535] = 1,
    ACTIONS(1189), 1,
      aux_sym_cross_join_token2,
  [21539] = 1,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
  [21543] = 1,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
  [21547] = 1,
    ACTIONS(1411), 1,
      anon_sym_RBRACE_RBRACE,
  [21551] = 1,
    ACTIONS(1191), 1,
      aux_sym_qualified_join_token3,
  [21555] = 1,
    ACTIONS(1413), 1,
      sym_identifier,
  [21559] = 1,
    ACTIONS(1415), 1,
      sym_identifier,
  [21563] = 1,
    ACTIONS(1417), 1,
      sym_string_literal,
  [21567] = 1,
    ACTIONS(1419), 1,
      anon_sym_RBRACE_RBRACE,
  [21571] = 1,
    ACTIONS(1421), 1,
      anon_sym_COLON,
  [21575] = 1,
    ACTIONS(1423), 1,
      anon_sym_RBRACE_RBRACE,
  [21579] = 1,
    ACTIONS(1425), 1,
      ts_builtin_sym_end,
  [21583] = 1,
    ACTIONS(1427), 1,
      anon_sym_config,
  [21587] = 1,
    ACTIONS(1429), 1,
      anon_sym_RBRACE_RBRACE,
  [21591] = 1,
    ACTIONS(1431), 1,
      aux_sym_comparison_operator_token1,
  [21595] = 1,
    ACTIONS(1433), 1,
      anon_sym_SQUOTE,
  [21599] = 1,
    ACTIONS(1435), 1,
      anon_sym_DQUOTE,
  [21603] = 1,
    ACTIONS(1437), 1,
      aux_sym_cross_join_token2,
  [21607] = 1,
    ACTIONS(1439), 1,
      sym_identifier,
  [21611] = 1,
    ACTIONS(1441), 1,
      sym_identifier,
  [21615] = 1,
    ACTIONS(1443), 1,
      sym_identifier,
  [21619] = 1,
    ACTIONS(1445), 1,
      aux_sym_group_by_clause_token2,
  [21623] = 1,
    ACTIONS(1447), 1,
      aux_sym_group_by_clause_token2,
  [21627] = 1,
    ACTIONS(1449), 1,
      aux_sym_group_by_clause_token2,
  [21631] = 1,
    ACTIONS(1451), 1,
      aux_sym_group_by_clause_token2,
  [21635] = 1,
    ACTIONS(1453), 1,
      aux_sym_cross_join_token2,
  [21639] = 1,
    ACTIONS(1455), 1,
      aux_sym_window_specification_token4,
  [21643] = 1,
    ACTIONS(1457), 1,
      aux_sym_group_by_clause_token2,
  [21647] = 1,
    ACTIONS(1459), 1,
      aux_sym_group_by_clause_token2,
  [21651] = 1,
    ACTIONS(1461), 1,
      aux_sym_window_specification_token4,
  [21655] = 1,
    ACTIONS(1463), 1,
      aux_sym_window_specification_token4,
  [21659] = 1,
    ACTIONS(1465), 1,
      aux_sym_window_specification_token4,
  [21663] = 1,
    ACTIONS(1467), 1,
      aux_sym_window_specification_token4,
  [21667] = 1,
    ACTIONS(1469), 1,
      aux_sym_window_specification_token4,
  [21671] = 1,
    ACTIONS(1471), 1,
      anon_sym_COMMA,
  [21675] = 1,
    ACTIONS(1473), 1,
      aux_sym_group_by_clause_token2,
  [21679] = 1,
    ACTIONS(1475), 1,
      aux_sym_group_by_clause_token2,
  [21683] = 1,
    ACTIONS(1477), 1,
      anon_sym_LPAREN,
  [21687] = 1,
    ACTIONS(1479), 1,
      anon_sym_RBRACE_RBRACE,
  [21691] = 1,
    ACTIONS(1481), 1,
      aux_sym_window_specification_token4,
  [21695] = 1,
    ACTIONS(1483), 1,
      aux_sym_group_by_clause_token2,
  [21699] = 1,
    ACTIONS(1485), 1,
      aux_sym_group_by_clause_token2,
  [21703] = 1,
    ACTIONS(1487), 1,
      aux_sym_window_specification_token4,
  [21707] = 1,
    ACTIONS(1489), 1,
      aux_sym_window_specification_token4,
  [21711] = 1,
    ACTIONS(1491), 1,
      aux_sym_window_specification_token4,
  [21715] = 1,
    ACTIONS(1493), 1,
      aux_sym_window_specification_token4,
  [21719] = 1,
    ACTIONS(1495), 1,
      aux_sym_window_specification_token4,
  [21723] = 1,
    ACTIONS(1497), 1,
      aux_sym_group_by_clause_token2,
  [21727] = 1,
    ACTIONS(1499), 1,
      aux_sym_group_by_clause_token2,
  [21731] = 1,
    ACTIONS(1501), 1,
      aux_sym_window_specification_token4,
  [21735] = 1,
    ACTIONS(1503), 1,
      aux_sym_group_by_clause_token2,
  [21739] = 1,
    ACTIONS(1505), 1,
      aux_sym_group_by_clause_token2,
  [21743] = 1,
    ACTIONS(1507), 1,
      aux_sym_window_specification_token4,
  [21747] = 1,
    ACTIONS(1509), 1,
      aux_sym_window_specification_token4,
  [21751] = 1,
    ACTIONS(1511), 1,
      aux_sym_window_specification_token4,
  [21755] = 1,
    ACTIONS(1513), 1,
      aux_sym_window_specification_token4,
  [21759] = 1,
    ACTIONS(1515), 1,
      aux_sym_window_specification_token4,
  [21763] = 1,
    ACTIONS(1517), 1,
      aux_sym_group_by_clause_token2,
  [21767] = 1,
    ACTIONS(1519), 1,
      aux_sym_group_by_clause_token2,
  [21771] = 1,
    ACTIONS(1521), 1,
      aux_sym_window_specification_token4,
  [21775] = 1,
    ACTIONS(1523), 1,
      aux_sym_group_by_clause_token2,
  [21779] = 1,
    ACTIONS(1525), 1,
      aux_sym_group_by_clause_token2,
  [21783] = 1,
    ACTIONS(1527), 1,
      aux_sym_window_specification_token4,
  [21787] = 1,
    ACTIONS(1529), 1,
      aux_sym_window_specification_token4,
  [21791] = 1,
    ACTIONS(1531), 1,
      aux_sym_window_specification_token4,
  [21795] = 1,
    ACTIONS(1533), 1,
      aux_sym_window_specification_token4,
  [21799] = 1,
    ACTIONS(1535), 1,
      aux_sym_window_specification_token4,
  [21803] = 1,
    ACTIONS(1537), 1,
      aux_sym_group_by_clause_token2,
  [21807] = 1,
    ACTIONS(1539), 1,
      aux_sym_group_by_clause_token2,
  [21811] = 1,
    ACTIONS(1541), 1,
      aux_sym_window_specification_token4,
  [21815] = 1,
    ACTIONS(1543), 1,
      aux_sym_group_by_clause_token2,
  [21819] = 1,
    ACTIONS(1545), 1,
      aux_sym_group_by_clause_token2,
  [21823] = 1,
    ACTIONS(1547), 1,
      aux_sym_window_specification_token4,
  [21827] = 1,
    ACTIONS(1549), 1,
      aux_sym_window_specification_token4,
  [21831] = 1,
    ACTIONS(1551), 1,
      aux_sym_window_specification_token4,
  [21835] = 1,
    ACTIONS(1553), 1,
      aux_sym_window_specification_token4,
  [21839] = 1,
    ACTIONS(1555), 1,
      aux_sym_window_specification_token4,
  [21843] = 1,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
  [21847] = 1,
    ACTIONS(1559), 1,
      anon_sym_COMMA,
  [21851] = 1,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
  [21855] = 1,
    ACTIONS(1563), 1,
      anon_sym_EQ,
  [21859] = 1,
    ACTIONS(1231), 1,
      aux_sym_window_frame_start_token2,
  [21863] = 1,
    ACTIONS(1231), 1,
      aux_sym_window_frame_start_token5,
  [21867] = 1,
    ACTIONS(1565), 1,
      aux_sym_window_specification_token4,
  [21871] = 1,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
  [21875] = 1,
    ACTIONS(1569), 1,
      anon_sym_LPAREN,
  [21879] = 1,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
  [21883] = 1,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
  [21887] = 1,
    ACTIONS(1575), 1,
      anon_sym_COLON,
  [21891] = 1,
    ACTIONS(1577), 1,
      anon_sym_RPAREN,
  [21895] = 1,
    ACTIONS(1223), 1,
      sym_identifier,
  [21899] = 1,
    ACTIONS(1579), 1,
      aux_sym_window_specification_token3,
  [21903] = 1,
    ACTIONS(1581), 1,
      aux_sym_group_by_clause_token2,
  [21907] = 1,
    ACTIONS(1583), 1,
      aux_sym_window_specification_token4,
  [21911] = 1,
    ACTIONS(1585), 1,
      anon_sym_RBRACE_RBRACE,
  [21915] = 1,
    ACTIONS(1587), 1,
      anon_sym_RBRACE_RBRACE,
  [21919] = 1,
    ACTIONS(1589), 1,
      aux_sym_window_specification_token3,
  [21923] = 1,
    ACTIONS(1591), 1,
      aux_sym_window_specification_token3,
  [21927] = 1,
    ACTIONS(1593), 1,
      aux_sym_group_by_clause_token2,
  [21931] = 1,
    ACTIONS(1235), 1,
      aux_sym_window_frame_start_token3,
  [21935] = 1,
    ACTIONS(1235), 1,
      aux_sym_window_frame_start_token5,
  [21939] = 1,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [21943] = 1,
    ACTIONS(1597), 1,
      aux_sym_window_specification_token4,
  [21947] = 1,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
  [21951] = 1,
    ACTIONS(1601), 1,
      aux_sym_window_specification_token4,
  [21955] = 1,
    ACTIONS(1603), 1,
      aux_sym_window_specification_token3,
  [21959] = 1,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
  [21963] = 1,
    ACTIONS(1605), 1,
      aux_sym_window_specification_token3,
  [21967] = 1,
    ACTIONS(1607), 1,
      anon_sym_RPAREN,
  [21971] = 1,
    ACTIONS(1609), 1,
      aux_sym_window_specification_token4,
  [21975] = 1,
    ACTIONS(1611), 1,
      aux_sym_window_specification_token3,
  [21979] = 1,
    ACTIONS(1613), 1,
      aux_sym_window_specification_token4,
  [21983] = 1,
    ACTIONS(1615), 1,
      anon_sym_RPAREN,
  [21987] = 1,
    ACTIONS(1617), 1,
      aux_sym_window_specification_token3,
  [21991] = 1,
    ACTIONS(1619), 1,
      aux_sym_window_specification_token3,
  [21995] = 1,
    ACTIONS(1621), 1,
      aux_sym_window_specification_token3,
  [21999] = 1,
    ACTIONS(1623), 1,
      aux_sym_window_specification_token3,
  [22003] = 1,
    ACTIONS(1625), 1,
      aux_sym_window_specification_token3,
  [22007] = 1,
    ACTIONS(1627), 1,
      aux_sym_window_specification_token3,
  [22011] = 1,
    ACTIONS(1629), 1,
      aux_sym_window_specification_token4,
  [22015] = 1,
    ACTIONS(1631), 1,
      anon_sym_RPAREN,
  [22019] = 1,
    ACTIONS(1633), 1,
      aux_sym_window_specification_token3,
  [22023] = 1,
    ACTIONS(1635), 1,
      aux_sym_window_specification_token3,
  [22027] = 1,
    ACTIONS(1637), 1,
      aux_sym_window_specification_token3,
  [22031] = 1,
    ACTIONS(1639), 1,
      aux_sym_window_specification_token3,
  [22035] = 1,
    ACTIONS(1641), 1,
      aux_sym_window_specification_token3,
  [22039] = 1,
    ACTIONS(1643), 1,
      aux_sym_window_specification_token3,
  [22043] = 1,
    ACTIONS(1645), 1,
      aux_sym_window_specification_token3,
  [22047] = 1,
    ACTIONS(1647), 1,
      aux_sym_window_specification_token3,
  [22051] = 1,
    ACTIONS(1649), 1,
      aux_sym_window_specification_token3,
  [22055] = 1,
    ACTIONS(1651), 1,
      aux_sym_window_specification_token3,
  [22059] = 1,
    ACTIONS(1653), 1,
      aux_sym_window_specification_token3,
  [22063] = 1,
    ACTIONS(1655), 1,
      aux_sym_window_specification_token3,
  [22067] = 1,
    ACTIONS(1657), 1,
      aux_sym_window_specification_token3,
  [22071] = 1,
    ACTIONS(1659), 1,
      aux_sym_window_specification_token3,
  [22075] = 1,
    ACTIONS(1661), 1,
      aux_sym_window_specification_token3,
  [22079] = 1,
    ACTIONS(1663), 1,
      aux_sym_window_specification_token3,
  [22083] = 1,
    ACTIONS(1665), 1,
      aux_sym_window_specification_token3,
  [22087] = 1,
    ACTIONS(1667), 1,
      aux_sym_window_specification_token3,
  [22091] = 1,
    ACTIONS(1669), 1,
      aux_sym_window_specification_token3,
  [22095] = 1,
    ACTIONS(1671), 1,
      aux_sym_window_specification_token3,
  [22099] = 1,
    ACTIONS(1673), 1,
      aux_sym_window_specification_token3,
  [22103] = 1,
    ACTIONS(1675), 1,
      aux_sym_window_specification_token3,
  [22107] = 1,
    ACTIONS(1677), 1,
      aux_sym_window_specification_token3,
  [22111] = 1,
    ACTIONS(1679), 1,
      aux_sym_window_specification_token3,
  [22115] = 1,
    ACTIONS(1681), 1,
      anon_sym_LPAREN,
  [22119] = 1,
    ACTIONS(1683), 1,
      anon_sym_LPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 140,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 430,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 516,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 602,
  [SMALL_STATE(16)] = 645,
  [SMALL_STATE(17)] = 688,
  [SMALL_STATE(18)] = 731,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 817,
  [SMALL_STATE(21)] = 860,
  [SMALL_STATE(22)] = 903,
  [SMALL_STATE(23)] = 946,
  [SMALL_STATE(24)] = 991,
  [SMALL_STATE(25)] = 1034,
  [SMALL_STATE(26)] = 1077,
  [SMALL_STATE(27)] = 1120,
  [SMALL_STATE(28)] = 1163,
  [SMALL_STATE(29)] = 1208,
  [SMALL_STATE(30)] = 1257,
  [SMALL_STATE(31)] = 1300,
  [SMALL_STATE(32)] = 1343,
  [SMALL_STATE(33)] = 1386,
  [SMALL_STATE(34)] = 1429,
  [SMALL_STATE(35)] = 1476,
  [SMALL_STATE(36)] = 1521,
  [SMALL_STATE(37)] = 1564,
  [SMALL_STATE(38)] = 1613,
  [SMALL_STATE(39)] = 1656,
  [SMALL_STATE(40)] = 1696,
  [SMALL_STATE(41)] = 1735,
  [SMALL_STATE(42)] = 1783,
  [SMALL_STATE(43)] = 1821,
  [SMALL_STATE(44)] = 1861,
  [SMALL_STATE(45)] = 1909,
  [SMALL_STATE(46)] = 1949,
  [SMALL_STATE(47)] = 1986,
  [SMALL_STATE(48)] = 2025,
  [SMALL_STATE(49)] = 2078,
  [SMALL_STATE(50)] = 2117,
  [SMALL_STATE(51)] = 2156,
  [SMALL_STATE(52)] = 2195,
  [SMALL_STATE(53)] = 2234,
  [SMALL_STATE(54)] = 2273,
  [SMALL_STATE(55)] = 2310,
  [SMALL_STATE(56)] = 2363,
  [SMALL_STATE(57)] = 2402,
  [SMALL_STATE(58)] = 2441,
  [SMALL_STATE(59)] = 2480,
  [SMALL_STATE(60)] = 2519,
  [SMALL_STATE(61)] = 2558,
  [SMALL_STATE(62)] = 2595,
  [SMALL_STATE(63)] = 2634,
  [SMALL_STATE(64)] = 2673,
  [SMALL_STATE(65)] = 2712,
  [SMALL_STATE(66)] = 2751,
  [SMALL_STATE(67)] = 2791,
  [SMALL_STATE(68)] = 2827,
  [SMALL_STATE(69)] = 2863,
  [SMALL_STATE(70)] = 2899,
  [SMALL_STATE(71)] = 2937,
  [SMALL_STATE(72)] = 2973,
  [SMALL_STATE(73)] = 3041,
  [SMALL_STATE(74)] = 3109,
  [SMALL_STATE(75)] = 3145,
  [SMALL_STATE(76)] = 3183,
  [SMALL_STATE(77)] = 3219,
  [SMALL_STATE(78)] = 3255,
  [SMALL_STATE(79)] = 3291,
  [SMALL_STATE(80)] = 3327,
  [SMALL_STATE(81)] = 3365,
  [SMALL_STATE(82)] = 3401,
  [SMALL_STATE(83)] = 3439,
  [SMALL_STATE(84)] = 3475,
  [SMALL_STATE(85)] = 3511,
  [SMALL_STATE(86)] = 3547,
  [SMALL_STATE(87)] = 3583,
  [SMALL_STATE(88)] = 3621,
  [SMALL_STATE(89)] = 3657,
  [SMALL_STATE(90)] = 3695,
  [SMALL_STATE(91)] = 3733,
  [SMALL_STATE(92)] = 3775,
  [SMALL_STATE(93)] = 3811,
  [SMALL_STATE(94)] = 3847,
  [SMALL_STATE(95)] = 3883,
  [SMALL_STATE(96)] = 3919,
  [SMALL_STATE(97)] = 3955,
  [SMALL_STATE(98)] = 3993,
  [SMALL_STATE(99)] = 4045,
  [SMALL_STATE(100)] = 4081,
  [SMALL_STATE(101)] = 4123,
  [SMALL_STATE(102)] = 4161,
  [SMALL_STATE(103)] = 4203,
  [SMALL_STATE(104)] = 4241,
  [SMALL_STATE(105)] = 4277,
  [SMALL_STATE(106)] = 4317,
  [SMALL_STATE(107)] = 4353,
  [SMALL_STATE(108)] = 4389,
  [SMALL_STATE(109)] = 4425,
  [SMALL_STATE(110)] = 4461,
  [SMALL_STATE(111)] = 4497,
  [SMALL_STATE(112)] = 4533,
  [SMALL_STATE(113)] = 4569,
  [SMALL_STATE(114)] = 4605,
  [SMALL_STATE(115)] = 4641,
  [SMALL_STATE(116)] = 4677,
  [SMALL_STATE(117)] = 4713,
  [SMALL_STATE(118)] = 4749,
  [SMALL_STATE(119)] = 4785,
  [SMALL_STATE(120)] = 4821,
  [SMALL_STATE(121)] = 4857,
  [SMALL_STATE(122)] = 4893,
  [SMALL_STATE(123)] = 4929,
  [SMALL_STATE(124)] = 4965,
  [SMALL_STATE(125)] = 5001,
  [SMALL_STATE(126)] = 5037,
  [SMALL_STATE(127)] = 5073,
  [SMALL_STATE(128)] = 5111,
  [SMALL_STATE(129)] = 5153,
  [SMALL_STATE(130)] = 5189,
  [SMALL_STATE(131)] = 5224,
  [SMALL_STATE(132)] = 5259,
  [SMALL_STATE(133)] = 5294,
  [SMALL_STATE(134)] = 5329,
  [SMALL_STATE(135)] = 5364,
  [SMALL_STATE(136)] = 5399,
  [SMALL_STATE(137)] = 5434,
  [SMALL_STATE(138)] = 5469,
  [SMALL_STATE(139)] = 5504,
  [SMALL_STATE(140)] = 5541,
  [SMALL_STATE(141)] = 5576,
  [SMALL_STATE(142)] = 5611,
  [SMALL_STATE(143)] = 5646,
  [SMALL_STATE(144)] = 5681,
  [SMALL_STATE(145)] = 5716,
  [SMALL_STATE(146)] = 5751,
  [SMALL_STATE(147)] = 5792,
  [SMALL_STATE(148)] = 5827,
  [SMALL_STATE(149)] = 5864,
  [SMALL_STATE(150)] = 5903,
  [SMALL_STATE(151)] = 5968,
  [SMALL_STATE(152)] = 6033,
  [SMALL_STATE(153)] = 6068,
  [SMALL_STATE(154)] = 6103,
  [SMALL_STATE(155)] = 6138,
  [SMALL_STATE(156)] = 6179,
  [SMALL_STATE(157)] = 6216,
  [SMALL_STATE(158)] = 6251,
  [SMALL_STATE(159)] = 6286,
  [SMALL_STATE(160)] = 6321,
  [SMALL_STATE(161)] = 6357,
  [SMALL_STATE(162)] = 6418,
  [SMALL_STATE(163)] = 6453,
  [SMALL_STATE(164)] = 6514,
  [SMALL_STATE(165)] = 6575,
  [SMALL_STATE(166)] = 6610,
  [SMALL_STATE(167)] = 6645,
  [SMALL_STATE(168)] = 6680,
  [SMALL_STATE(169)] = 6713,
  [SMALL_STATE(170)] = 6760,
  [SMALL_STATE(171)] = 6793,
  [SMALL_STATE(172)] = 6854,
  [SMALL_STATE(173)] = 6915,
  [SMALL_STATE(174)] = 6976,
  [SMALL_STATE(175)] = 7011,
  [SMALL_STATE(176)] = 7069,
  [SMALL_STATE(177)] = 7101,
  [SMALL_STATE(178)] = 7133,
  [SMALL_STATE(179)] = 7165,
  [SMALL_STATE(180)] = 7197,
  [SMALL_STATE(181)] = 7229,
  [SMALL_STATE(182)] = 7261,
  [SMALL_STATE(183)] = 7319,
  [SMALL_STATE(184)] = 7377,
  [SMALL_STATE(185)] = 7435,
  [SMALL_STATE(186)] = 7467,
  [SMALL_STATE(187)] = 7499,
  [SMALL_STATE(188)] = 7557,
  [SMALL_STATE(189)] = 7589,
  [SMALL_STATE(190)] = 7621,
  [SMALL_STATE(191)] = 7679,
  [SMALL_STATE(192)] = 7711,
  [SMALL_STATE(193)] = 7745,
  [SMALL_STATE(194)] = 7777,
  [SMALL_STATE(195)] = 7815,
  [SMALL_STATE(196)] = 7847,
  [SMALL_STATE(197)] = 7879,
  [SMALL_STATE(198)] = 7937,
  [SMALL_STATE(199)] = 7969,
  [SMALL_STATE(200)] = 8027,
  [SMALL_STATE(201)] = 8063,
  [SMALL_STATE(202)] = 8097,
  [SMALL_STATE(203)] = 8135,
  [SMALL_STATE(204)] = 8193,
  [SMALL_STATE(205)] = 8251,
  [SMALL_STATE(206)] = 8283,
  [SMALL_STATE(207)] = 8315,
  [SMALL_STATE(208)] = 8347,
  [SMALL_STATE(209)] = 8405,
  [SMALL_STATE(210)] = 8463,
  [SMALL_STATE(211)] = 8521,
  [SMALL_STATE(212)] = 8555,
  [SMALL_STATE(213)] = 8613,
  [SMALL_STATE(214)] = 8671,
  [SMALL_STATE(215)] = 8729,
  [SMALL_STATE(216)] = 8787,
  [SMALL_STATE(217)] = 8845,
  [SMALL_STATE(218)] = 8877,
  [SMALL_STATE(219)] = 8935,
  [SMALL_STATE(220)] = 8993,
  [SMALL_STATE(221)] = 9025,
  [SMALL_STATE(222)] = 9057,
  [SMALL_STATE(223)] = 9089,
  [SMALL_STATE(224)] = 9147,
  [SMALL_STATE(225)] = 9205,
  [SMALL_STATE(226)] = 9263,
  [SMALL_STATE(227)] = 9321,
  [SMALL_STATE(228)] = 9379,
  [SMALL_STATE(229)] = 9437,
  [SMALL_STATE(230)] = 9495,
  [SMALL_STATE(231)] = 9553,
  [SMALL_STATE(232)] = 9611,
  [SMALL_STATE(233)] = 9669,
  [SMALL_STATE(234)] = 9727,
  [SMALL_STATE(235)] = 9785,
  [SMALL_STATE(236)] = 9843,
  [SMALL_STATE(237)] = 9901,
  [SMALL_STATE(238)] = 9959,
  [SMALL_STATE(239)] = 10017,
  [SMALL_STATE(240)] = 10075,
  [SMALL_STATE(241)] = 10133,
  [SMALL_STATE(242)] = 10191,
  [SMALL_STATE(243)] = 10249,
  [SMALL_STATE(244)] = 10307,
  [SMALL_STATE(245)] = 10365,
  [SMALL_STATE(246)] = 10423,
  [SMALL_STATE(247)] = 10481,
  [SMALL_STATE(248)] = 10539,
  [SMALL_STATE(249)] = 10597,
  [SMALL_STATE(250)] = 10655,
  [SMALL_STATE(251)] = 10713,
  [SMALL_STATE(252)] = 10771,
  [SMALL_STATE(253)] = 10829,
  [SMALL_STATE(254)] = 10887,
  [SMALL_STATE(255)] = 10928,
  [SMALL_STATE(256)] = 10969,
  [SMALL_STATE(257)] = 11010,
  [SMALL_STATE(258)] = 11043,
  [SMALL_STATE(259)] = 11084,
  [SMALL_STATE(260)] = 11116,
  [SMALL_STATE(261)] = 11156,
  [SMALL_STATE(262)] = 11188,
  [SMALL_STATE(263)] = 11220,
  [SMALL_STATE(264)] = 11266,
  [SMALL_STATE(265)] = 11306,
  [SMALL_STATE(266)] = 11336,
  [SMALL_STATE(267)] = 11366,
  [SMALL_STATE(268)] = 11398,
  [SMALL_STATE(269)] = 11430,
  [SMALL_STATE(270)] = 11483,
  [SMALL_STATE(271)] = 11536,
  [SMALL_STATE(272)] = 11589,
  [SMALL_STATE(273)] = 11642,
  [SMALL_STATE(274)] = 11695,
  [SMALL_STATE(275)] = 11748,
  [SMALL_STATE(276)] = 11777,
  [SMALL_STATE(277)] = 11806,
  [SMALL_STATE(278)] = 11835,
  [SMALL_STATE(279)] = 11888,
  [SMALL_STATE(280)] = 11917,
  [SMALL_STATE(281)] = 11970,
  [SMALL_STATE(282)] = 12001,
  [SMALL_STATE(283)] = 12054,
  [SMALL_STATE(284)] = 12107,
  [SMALL_STATE(285)] = 12160,
  [SMALL_STATE(286)] = 12213,
  [SMALL_STATE(287)] = 12266,
  [SMALL_STATE(288)] = 12321,
  [SMALL_STATE(289)] = 12374,
  [SMALL_STATE(290)] = 12427,
  [SMALL_STATE(291)] = 12480,
  [SMALL_STATE(292)] = 12509,
  [SMALL_STATE(293)] = 12538,
  [SMALL_STATE(294)] = 12591,
  [SMALL_STATE(295)] = 12626,
  [SMALL_STATE(296)] = 12679,
  [SMALL_STATE(297)] = 12710,
  [SMALL_STATE(298)] = 12763,
  [SMALL_STATE(299)] = 12816,
  [SMALL_STATE(300)] = 12869,
  [SMALL_STATE(301)] = 12902,
  [SMALL_STATE(302)] = 12955,
  [SMALL_STATE(303)] = 12984,
  [SMALL_STATE(304)] = 13037,
  [SMALL_STATE(305)] = 13090,
  [SMALL_STATE(306)] = 13143,
  [SMALL_STATE(307)] = 13196,
  [SMALL_STATE(308)] = 13231,
  [SMALL_STATE(309)] = 13262,
  [SMALL_STATE(310)] = 13291,
  [SMALL_STATE(311)] = 13320,
  [SMALL_STATE(312)] = 13373,
  [SMALL_STATE(313)] = 13402,
  [SMALL_STATE(314)] = 13455,
  [SMALL_STATE(315)] = 13484,
  [SMALL_STATE(316)] = 13537,
  [SMALL_STATE(317)] = 13590,
  [SMALL_STATE(318)] = 13643,
  [SMALL_STATE(319)] = 13698,
  [SMALL_STATE(320)] = 13727,
  [SMALL_STATE(321)] = 13756,
  [SMALL_STATE(322)] = 13785,
  [SMALL_STATE(323)] = 13814,
  [SMALL_STATE(324)] = 13843,
  [SMALL_STATE(325)] = 13896,
  [SMALL_STATE(326)] = 13925,
  [SMALL_STATE(327)] = 13954,
  [SMALL_STATE(328)] = 14007,
  [SMALL_STATE(329)] = 14060,
  [SMALL_STATE(330)] = 14113,
  [SMALL_STATE(331)] = 14166,
  [SMALL_STATE(332)] = 14219,
  [SMALL_STATE(333)] = 14272,
  [SMALL_STATE(334)] = 14301,
  [SMALL_STATE(335)] = 14354,
  [SMALL_STATE(336)] = 14407,
  [SMALL_STATE(337)] = 14460,
  [SMALL_STATE(338)] = 14515,
  [SMALL_STATE(339)] = 14568,
  [SMALL_STATE(340)] = 14621,
  [SMALL_STATE(341)] = 14674,
  [SMALL_STATE(342)] = 14727,
  [SMALL_STATE(343)] = 14780,
  [SMALL_STATE(344)] = 14835,
  [SMALL_STATE(345)] = 14888,
  [SMALL_STATE(346)] = 14917,
  [SMALL_STATE(347)] = 14946,
  [SMALL_STATE(348)] = 14975,
  [SMALL_STATE(349)] = 15028,
  [SMALL_STATE(350)] = 15056,
  [SMALL_STATE(351)] = 15093,
  [SMALL_STATE(352)] = 15122,
  [SMALL_STATE(353)] = 15159,
  [SMALL_STATE(354)] = 15196,
  [SMALL_STATE(355)] = 15225,
  [SMALL_STATE(356)] = 15260,
  [SMALL_STATE(357)] = 15297,
  [SMALL_STATE(358)] = 15334,
  [SMALL_STATE(359)] = 15371,
  [SMALL_STATE(360)] = 15408,
  [SMALL_STATE(361)] = 15445,
  [SMALL_STATE(362)] = 15480,
  [SMALL_STATE(363)] = 15506,
  [SMALL_STATE(364)] = 15546,
  [SMALL_STATE(365)] = 15572,
  [SMALL_STATE(366)] = 15612,
  [SMALL_STATE(367)] = 15640,
  [SMALL_STATE(368)] = 15668,
  [SMALL_STATE(369)] = 15694,
  [SMALL_STATE(370)] = 15722,
  [SMALL_STATE(371)] = 15750,
  [SMALL_STATE(372)] = 15776,
  [SMALL_STATE(373)] = 15799,
  [SMALL_STATE(374)] = 15822,
  [SMALL_STATE(375)] = 15845,
  [SMALL_STATE(376)] = 15868,
  [SMALL_STATE(377)] = 15891,
  [SMALL_STATE(378)] = 15916,
  [SMALL_STATE(379)] = 15941,
  [SMALL_STATE(380)] = 15966,
  [SMALL_STATE(381)] = 15991,
  [SMALL_STATE(382)] = 16014,
  [SMALL_STATE(383)] = 16039,
  [SMALL_STATE(384)] = 16064,
  [SMALL_STATE(385)] = 16089,
  [SMALL_STATE(386)] = 16114,
  [SMALL_STATE(387)] = 16139,
  [SMALL_STATE(388)] = 16164,
  [SMALL_STATE(389)] = 16187,
  [SMALL_STATE(390)] = 16221,
  [SMALL_STATE(391)] = 16255,
  [SMALL_STATE(392)] = 16276,
  [SMALL_STATE(393)] = 16297,
  [SMALL_STATE(394)] = 16318,
  [SMALL_STATE(395)] = 16339,
  [SMALL_STATE(396)] = 16360,
  [SMALL_STATE(397)] = 16381,
  [SMALL_STATE(398)] = 16402,
  [SMALL_STATE(399)] = 16423,
  [SMALL_STATE(400)] = 16459,
  [SMALL_STATE(401)] = 16495,
  [SMALL_STATE(402)] = 16517,
  [SMALL_STATE(403)] = 16537,
  [SMALL_STATE(404)] = 16557,
  [SMALL_STATE(405)] = 16579,
  [SMALL_STATE(406)] = 16600,
  [SMALL_STATE(407)] = 16625,
  [SMALL_STATE(408)] = 16645,
  [SMALL_STATE(409)] = 16665,
  [SMALL_STATE(410)] = 16699,
  [SMALL_STATE(411)] = 16733,
  [SMALL_STATE(412)] = 16755,
  [SMALL_STATE(413)] = 16769,
  [SMALL_STATE(414)] = 16803,
  [SMALL_STATE(415)] = 16825,
  [SMALL_STATE(416)] = 16841,
  [SMALL_STATE(417)] = 16875,
  [SMALL_STATE(418)] = 16899,
  [SMALL_STATE(419)] = 16933,
  [SMALL_STATE(420)] = 16967,
  [SMALL_STATE(421)] = 17001,
  [SMALL_STATE(422)] = 17019,
  [SMALL_STATE(423)] = 17048,
  [SMALL_STATE(424)] = 17079,
  [SMALL_STATE(425)] = 17108,
  [SMALL_STATE(426)] = 17139,
  [SMALL_STATE(427)] = 17156,
  [SMALL_STATE(428)] = 17185,
  [SMALL_STATE(429)] = 17202,
  [SMALL_STATE(430)] = 17221,
  [SMALL_STATE(431)] = 17250,
  [SMALL_STATE(432)] = 17274,
  [SMALL_STATE(433)] = 17298,
  [SMALL_STATE(434)] = 17314,
  [SMALL_STATE(435)] = 17326,
  [SMALL_STATE(436)] = 17338,
  [SMALL_STATE(437)] = 17354,
  [SMALL_STATE(438)] = 17378,
  [SMALL_STATE(439)] = 17394,
  [SMALL_STATE(440)] = 17418,
  [SMALL_STATE(441)] = 17434,
  [SMALL_STATE(442)] = 17458,
  [SMALL_STATE(443)] = 17474,
  [SMALL_STATE(444)] = 17486,
  [SMALL_STATE(445)] = 17498,
  [SMALL_STATE(446)] = 17510,
  [SMALL_STATE(447)] = 17522,
  [SMALL_STATE(448)] = 17546,
  [SMALL_STATE(449)] = 17562,
  [SMALL_STATE(450)] = 17578,
  [SMALL_STATE(451)] = 17594,
  [SMALL_STATE(452)] = 17610,
  [SMALL_STATE(453)] = 17622,
  [SMALL_STATE(454)] = 17638,
  [SMALL_STATE(455)] = 17659,
  [SMALL_STATE(456)] = 17680,
  [SMALL_STATE(457)] = 17701,
  [SMALL_STATE(458)] = 17722,
  [SMALL_STATE(459)] = 17743,
  [SMALL_STATE(460)] = 17764,
  [SMALL_STATE(461)] = 17785,
  [SMALL_STATE(462)] = 17800,
  [SMALL_STATE(463)] = 17821,
  [SMALL_STATE(464)] = 17842,
  [SMALL_STATE(465)] = 17863,
  [SMALL_STATE(466)] = 17878,
  [SMALL_STATE(467)] = 17893,
  [SMALL_STATE(468)] = 17914,
  [SMALL_STATE(469)] = 17935,
  [SMALL_STATE(470)] = 17956,
  [SMALL_STATE(471)] = 17977,
  [SMALL_STATE(472)] = 17996,
  [SMALL_STATE(473)] = 18011,
  [SMALL_STATE(474)] = 18032,
  [SMALL_STATE(475)] = 18051,
  [SMALL_STATE(476)] = 18072,
  [SMALL_STATE(477)] = 18093,
  [SMALL_STATE(478)] = 18114,
  [SMALL_STATE(479)] = 18132,
  [SMALL_STATE(480)] = 18154,
  [SMALL_STATE(481)] = 18164,
  [SMALL_STATE(482)] = 18174,
  [SMALL_STATE(483)] = 18184,
  [SMALL_STATE(484)] = 18202,
  [SMALL_STATE(485)] = 18220,
  [SMALL_STATE(486)] = 18240,
  [SMALL_STATE(487)] = 18260,
  [SMALL_STATE(488)] = 18270,
  [SMALL_STATE(489)] = 18284,
  [SMALL_STATE(490)] = 18302,
  [SMALL_STATE(491)] = 18312,
  [SMALL_STATE(492)] = 18322,
  [SMALL_STATE(493)] = 18340,
  [SMALL_STATE(494)] = 18362,
  [SMALL_STATE(495)] = 18372,
  [SMALL_STATE(496)] = 18390,
  [SMALL_STATE(497)] = 18400,
  [SMALL_STATE(498)] = 18420,
  [SMALL_STATE(499)] = 18430,
  [SMALL_STATE(500)] = 18452,
  [SMALL_STATE(501)] = 18472,
  [SMALL_STATE(502)] = 18482,
  [SMALL_STATE(503)] = 18495,
  [SMALL_STATE(504)] = 18506,
  [SMALL_STATE(505)] = 18517,
  [SMALL_STATE(506)] = 18530,
  [SMALL_STATE(507)] = 18542,
  [SMALL_STATE(508)] = 18552,
  [SMALL_STATE(509)] = 18562,
  [SMALL_STATE(510)] = 18572,
  [SMALL_STATE(511)] = 18582,
  [SMALL_STATE(512)] = 18592,
  [SMALL_STATE(513)] = 18604,
  [SMALL_STATE(514)] = 18620,
  [SMALL_STATE(515)] = 18632,
  [SMALL_STATE(516)] = 18648,
  [SMALL_STATE(517)] = 18664,
  [SMALL_STATE(518)] = 18676,
  [SMALL_STATE(519)] = 18688,
  [SMALL_STATE(520)] = 18704,
  [SMALL_STATE(521)] = 18716,
  [SMALL_STATE(522)] = 18728,
  [SMALL_STATE(523)] = 18740,
  [SMALL_STATE(524)] = 18756,
  [SMALL_STATE(525)] = 18768,
  [SMALL_STATE(526)] = 18780,
  [SMALL_STATE(527)] = 18796,
  [SMALL_STATE(528)] = 18808,
  [SMALL_STATE(529)] = 18820,
  [SMALL_STATE(530)] = 18836,
  [SMALL_STATE(531)] = 18848,
  [SMALL_STATE(532)] = 18864,
  [SMALL_STATE(533)] = 18876,
  [SMALL_STATE(534)] = 18888,
  [SMALL_STATE(535)] = 18904,
  [SMALL_STATE(536)] = 18920,
  [SMALL_STATE(537)] = 18933,
  [SMALL_STATE(538)] = 18946,
  [SMALL_STATE(539)] = 18959,
  [SMALL_STATE(540)] = 18972,
  [SMALL_STATE(541)] = 18985,
  [SMALL_STATE(542)] = 18998,
  [SMALL_STATE(543)] = 19011,
  [SMALL_STATE(544)] = 19024,
  [SMALL_STATE(545)] = 19037,
  [SMALL_STATE(546)] = 19050,
  [SMALL_STATE(547)] = 19063,
  [SMALL_STATE(548)] = 19076,
  [SMALL_STATE(549)] = 19089,
  [SMALL_STATE(550)] = 19102,
  [SMALL_STATE(551)] = 19115,
  [SMALL_STATE(552)] = 19128,
  [SMALL_STATE(553)] = 19141,
  [SMALL_STATE(554)] = 19154,
  [SMALL_STATE(555)] = 19167,
  [SMALL_STATE(556)] = 19180,
  [SMALL_STATE(557)] = 19193,
  [SMALL_STATE(558)] = 19206,
  [SMALL_STATE(559)] = 19219,
  [SMALL_STATE(560)] = 19232,
  [SMALL_STATE(561)] = 19245,
  [SMALL_STATE(562)] = 19258,
  [SMALL_STATE(563)] = 19271,
  [SMALL_STATE(564)] = 19284,
  [SMALL_STATE(565)] = 19297,
  [SMALL_STATE(566)] = 19310,
  [SMALL_STATE(567)] = 19323,
  [SMALL_STATE(568)] = 19336,
  [SMALL_STATE(569)] = 19349,
  [SMALL_STATE(570)] = 19362,
  [SMALL_STATE(571)] = 19375,
  [SMALL_STATE(572)] = 19386,
  [SMALL_STATE(573)] = 19399,
  [SMALL_STATE(574)] = 19412,
  [SMALL_STATE(575)] = 19425,
  [SMALL_STATE(576)] = 19438,
  [SMALL_STATE(577)] = 19451,
  [SMALL_STATE(578)] = 19464,
  [SMALL_STATE(579)] = 19477,
  [SMALL_STATE(580)] = 19490,
  [SMALL_STATE(581)] = 19503,
  [SMALL_STATE(582)] = 19516,
  [SMALL_STATE(583)] = 19529,
  [SMALL_STATE(584)] = 19542,
  [SMALL_STATE(585)] = 19555,
  [SMALL_STATE(586)] = 19566,
  [SMALL_STATE(587)] = 19579,
  [SMALL_STATE(588)] = 19592,
  [SMALL_STATE(589)] = 19605,
  [SMALL_STATE(590)] = 19618,
  [SMALL_STATE(591)] = 19631,
  [SMALL_STATE(592)] = 19638,
  [SMALL_STATE(593)] = 19651,
  [SMALL_STATE(594)] = 19664,
  [SMALL_STATE(595)] = 19677,
  [SMALL_STATE(596)] = 19688,
  [SMALL_STATE(597)] = 19701,
  [SMALL_STATE(598)] = 19714,
  [SMALL_STATE(599)] = 19727,
  [SMALL_STATE(600)] = 19740,
  [SMALL_STATE(601)] = 19751,
  [SMALL_STATE(602)] = 19764,
  [SMALL_STATE(603)] = 19777,
  [SMALL_STATE(604)] = 19790,
  [SMALL_STATE(605)] = 19801,
  [SMALL_STATE(606)] = 19814,
  [SMALL_STATE(607)] = 19827,
  [SMALL_STATE(608)] = 19840,
  [SMALL_STATE(609)] = 19853,
  [SMALL_STATE(610)] = 19866,
  [SMALL_STATE(611)] = 19877,
  [SMALL_STATE(612)] = 19890,
  [SMALL_STATE(613)] = 19903,
  [SMALL_STATE(614)] = 19916,
  [SMALL_STATE(615)] = 19929,
  [SMALL_STATE(616)] = 19942,
  [SMALL_STATE(617)] = 19955,
  [SMALL_STATE(618)] = 19968,
  [SMALL_STATE(619)] = 19981,
  [SMALL_STATE(620)] = 19994,
  [SMALL_STATE(621)] = 20007,
  [SMALL_STATE(622)] = 20020,
  [SMALL_STATE(623)] = 20033,
  [SMALL_STATE(624)] = 20046,
  [SMALL_STATE(625)] = 20059,
  [SMALL_STATE(626)] = 20072,
  [SMALL_STATE(627)] = 20085,
  [SMALL_STATE(628)] = 20098,
  [SMALL_STATE(629)] = 20111,
  [SMALL_STATE(630)] = 20124,
  [SMALL_STATE(631)] = 20137,
  [SMALL_STATE(632)] = 20150,
  [SMALL_STATE(633)] = 20163,
  [SMALL_STATE(634)] = 20176,
  [SMALL_STATE(635)] = 20189,
  [SMALL_STATE(636)] = 20202,
  [SMALL_STATE(637)] = 20215,
  [SMALL_STATE(638)] = 20228,
  [SMALL_STATE(639)] = 20241,
  [SMALL_STATE(640)] = 20254,
  [SMALL_STATE(641)] = 20267,
  [SMALL_STATE(642)] = 20280,
  [SMALL_STATE(643)] = 20293,
  [SMALL_STATE(644)] = 20306,
  [SMALL_STATE(645)] = 20319,
  [SMALL_STATE(646)] = 20332,
  [SMALL_STATE(647)] = 20345,
  [SMALL_STATE(648)] = 20355,
  [SMALL_STATE(649)] = 20365,
  [SMALL_STATE(650)] = 20375,
  [SMALL_STATE(651)] = 20385,
  [SMALL_STATE(652)] = 20395,
  [SMALL_STATE(653)] = 20405,
  [SMALL_STATE(654)] = 20415,
  [SMALL_STATE(655)] = 20425,
  [SMALL_STATE(656)] = 20433,
  [SMALL_STATE(657)] = 20443,
  [SMALL_STATE(658)] = 20453,
  [SMALL_STATE(659)] = 20463,
  [SMALL_STATE(660)] = 20473,
  [SMALL_STATE(661)] = 20483,
  [SMALL_STATE(662)] = 20493,
  [SMALL_STATE(663)] = 20503,
  [SMALL_STATE(664)] = 20513,
  [SMALL_STATE(665)] = 20523,
  [SMALL_STATE(666)] = 20533,
  [SMALL_STATE(667)] = 20543,
  [SMALL_STATE(668)] = 20553,
  [SMALL_STATE(669)] = 20563,
  [SMALL_STATE(670)] = 20573,
  [SMALL_STATE(671)] = 20583,
  [SMALL_STATE(672)] = 20593,
  [SMALL_STATE(673)] = 20603,
  [SMALL_STATE(674)] = 20613,
  [SMALL_STATE(675)] = 20623,
  [SMALL_STATE(676)] = 20633,
  [SMALL_STATE(677)] = 20643,
  [SMALL_STATE(678)] = 20653,
  [SMALL_STATE(679)] = 20663,
  [SMALL_STATE(680)] = 20673,
  [SMALL_STATE(681)] = 20683,
  [SMALL_STATE(682)] = 20693,
  [SMALL_STATE(683)] = 20703,
  [SMALL_STATE(684)] = 20713,
  [SMALL_STATE(685)] = 20723,
  [SMALL_STATE(686)] = 20733,
  [SMALL_STATE(687)] = 20743,
  [SMALL_STATE(688)] = 20753,
  [SMALL_STATE(689)] = 20763,
  [SMALL_STATE(690)] = 20773,
  [SMALL_STATE(691)] = 20783,
  [SMALL_STATE(692)] = 20793,
  [SMALL_STATE(693)] = 20803,
  [SMALL_STATE(694)] = 20813,
  [SMALL_STATE(695)] = 20820,
  [SMALL_STATE(696)] = 20827,
  [SMALL_STATE(697)] = 20834,
  [SMALL_STATE(698)] = 20841,
  [SMALL_STATE(699)] = 20848,
  [SMALL_STATE(700)] = 20855,
  [SMALL_STATE(701)] = 20860,
  [SMALL_STATE(702)] = 20865,
  [SMALL_STATE(703)] = 20872,
  [SMALL_STATE(704)] = 20879,
  [SMALL_STATE(705)] = 20886,
  [SMALL_STATE(706)] = 20893,
  [SMALL_STATE(707)] = 20900,
  [SMALL_STATE(708)] = 20905,
  [SMALL_STATE(709)] = 20912,
  [SMALL_STATE(710)] = 20917,
  [SMALL_STATE(711)] = 20922,
  [SMALL_STATE(712)] = 20929,
  [SMALL_STATE(713)] = 20936,
  [SMALL_STATE(714)] = 20943,
  [SMALL_STATE(715)] = 20948,
  [SMALL_STATE(716)] = 20955,
  [SMALL_STATE(717)] = 20960,
  [SMALL_STATE(718)] = 20967,
  [SMALL_STATE(719)] = 20974,
  [SMALL_STATE(720)] = 20981,
  [SMALL_STATE(721)] = 20988,
  [SMALL_STATE(722)] = 20995,
  [SMALL_STATE(723)] = 21002,
  [SMALL_STATE(724)] = 21009,
  [SMALL_STATE(725)] = 21014,
  [SMALL_STATE(726)] = 21021,
  [SMALL_STATE(727)] = 21028,
  [SMALL_STATE(728)] = 21033,
  [SMALL_STATE(729)] = 21040,
  [SMALL_STATE(730)] = 21047,
  [SMALL_STATE(731)] = 21054,
  [SMALL_STATE(732)] = 21061,
  [SMALL_STATE(733)] = 21068,
  [SMALL_STATE(734)] = 21075,
  [SMALL_STATE(735)] = 21080,
  [SMALL_STATE(736)] = 21087,
  [SMALL_STATE(737)] = 21094,
  [SMALL_STATE(738)] = 21101,
  [SMALL_STATE(739)] = 21108,
  [SMALL_STATE(740)] = 21115,
  [SMALL_STATE(741)] = 21122,
  [SMALL_STATE(742)] = 21127,
  [SMALL_STATE(743)] = 21134,
  [SMALL_STATE(744)] = 21139,
  [SMALL_STATE(745)] = 21144,
  [SMALL_STATE(746)] = 21149,
  [SMALL_STATE(747)] = 21154,
  [SMALL_STATE(748)] = 21159,
  [SMALL_STATE(749)] = 21166,
  [SMALL_STATE(750)] = 21171,
  [SMALL_STATE(751)] = 21178,
  [SMALL_STATE(752)] = 21185,
  [SMALL_STATE(753)] = 21192,
  [SMALL_STATE(754)] = 21199,
  [SMALL_STATE(755)] = 21206,
  [SMALL_STATE(756)] = 21211,
  [SMALL_STATE(757)] = 21215,
  [SMALL_STATE(758)] = 21219,
  [SMALL_STATE(759)] = 21223,
  [SMALL_STATE(760)] = 21227,
  [SMALL_STATE(761)] = 21231,
  [SMALL_STATE(762)] = 21235,
  [SMALL_STATE(763)] = 21239,
  [SMALL_STATE(764)] = 21243,
  [SMALL_STATE(765)] = 21247,
  [SMALL_STATE(766)] = 21251,
  [SMALL_STATE(767)] = 21255,
  [SMALL_STATE(768)] = 21259,
  [SMALL_STATE(769)] = 21263,
  [SMALL_STATE(770)] = 21267,
  [SMALL_STATE(771)] = 21271,
  [SMALL_STATE(772)] = 21275,
  [SMALL_STATE(773)] = 21279,
  [SMALL_STATE(774)] = 21283,
  [SMALL_STATE(775)] = 21287,
  [SMALL_STATE(776)] = 21291,
  [SMALL_STATE(777)] = 21295,
  [SMALL_STATE(778)] = 21299,
  [SMALL_STATE(779)] = 21303,
  [SMALL_STATE(780)] = 21307,
  [SMALL_STATE(781)] = 21311,
  [SMALL_STATE(782)] = 21315,
  [SMALL_STATE(783)] = 21319,
  [SMALL_STATE(784)] = 21323,
  [SMALL_STATE(785)] = 21327,
  [SMALL_STATE(786)] = 21331,
  [SMALL_STATE(787)] = 21335,
  [SMALL_STATE(788)] = 21339,
  [SMALL_STATE(789)] = 21343,
  [SMALL_STATE(790)] = 21347,
  [SMALL_STATE(791)] = 21351,
  [SMALL_STATE(792)] = 21355,
  [SMALL_STATE(793)] = 21359,
  [SMALL_STATE(794)] = 21363,
  [SMALL_STATE(795)] = 21367,
  [SMALL_STATE(796)] = 21371,
  [SMALL_STATE(797)] = 21375,
  [SMALL_STATE(798)] = 21379,
  [SMALL_STATE(799)] = 21383,
  [SMALL_STATE(800)] = 21387,
  [SMALL_STATE(801)] = 21391,
  [SMALL_STATE(802)] = 21395,
  [SMALL_STATE(803)] = 21399,
  [SMALL_STATE(804)] = 21403,
  [SMALL_STATE(805)] = 21407,
  [SMALL_STATE(806)] = 21411,
  [SMALL_STATE(807)] = 21415,
  [SMALL_STATE(808)] = 21419,
  [SMALL_STATE(809)] = 21423,
  [SMALL_STATE(810)] = 21427,
  [SMALL_STATE(811)] = 21431,
  [SMALL_STATE(812)] = 21435,
  [SMALL_STATE(813)] = 21439,
  [SMALL_STATE(814)] = 21443,
  [SMALL_STATE(815)] = 21447,
  [SMALL_STATE(816)] = 21451,
  [SMALL_STATE(817)] = 21455,
  [SMALL_STATE(818)] = 21459,
  [SMALL_STATE(819)] = 21463,
  [SMALL_STATE(820)] = 21467,
  [SMALL_STATE(821)] = 21471,
  [SMALL_STATE(822)] = 21475,
  [SMALL_STATE(823)] = 21479,
  [SMALL_STATE(824)] = 21483,
  [SMALL_STATE(825)] = 21487,
  [SMALL_STATE(826)] = 21491,
  [SMALL_STATE(827)] = 21495,
  [SMALL_STATE(828)] = 21499,
  [SMALL_STATE(829)] = 21503,
  [SMALL_STATE(830)] = 21507,
  [SMALL_STATE(831)] = 21511,
  [SMALL_STATE(832)] = 21515,
  [SMALL_STATE(833)] = 21519,
  [SMALL_STATE(834)] = 21523,
  [SMALL_STATE(835)] = 21527,
  [SMALL_STATE(836)] = 21531,
  [SMALL_STATE(837)] = 21535,
  [SMALL_STATE(838)] = 21539,
  [SMALL_STATE(839)] = 21543,
  [SMALL_STATE(840)] = 21547,
  [SMALL_STATE(841)] = 21551,
  [SMALL_STATE(842)] = 21555,
  [SMALL_STATE(843)] = 21559,
  [SMALL_STATE(844)] = 21563,
  [SMALL_STATE(845)] = 21567,
  [SMALL_STATE(846)] = 21571,
  [SMALL_STATE(847)] = 21575,
  [SMALL_STATE(848)] = 21579,
  [SMALL_STATE(849)] = 21583,
  [SMALL_STATE(850)] = 21587,
  [SMALL_STATE(851)] = 21591,
  [SMALL_STATE(852)] = 21595,
  [SMALL_STATE(853)] = 21599,
  [SMALL_STATE(854)] = 21603,
  [SMALL_STATE(855)] = 21607,
  [SMALL_STATE(856)] = 21611,
  [SMALL_STATE(857)] = 21615,
  [SMALL_STATE(858)] = 21619,
  [SMALL_STATE(859)] = 21623,
  [SMALL_STATE(860)] = 21627,
  [SMALL_STATE(861)] = 21631,
  [SMALL_STATE(862)] = 21635,
  [SMALL_STATE(863)] = 21639,
  [SMALL_STATE(864)] = 21643,
  [SMALL_STATE(865)] = 21647,
  [SMALL_STATE(866)] = 21651,
  [SMALL_STATE(867)] = 21655,
  [SMALL_STATE(868)] = 21659,
  [SMALL_STATE(869)] = 21663,
  [SMALL_STATE(870)] = 21667,
  [SMALL_STATE(871)] = 21671,
  [SMALL_STATE(872)] = 21675,
  [SMALL_STATE(873)] = 21679,
  [SMALL_STATE(874)] = 21683,
  [SMALL_STATE(875)] = 21687,
  [SMALL_STATE(876)] = 21691,
  [SMALL_STATE(877)] = 21695,
  [SMALL_STATE(878)] = 21699,
  [SMALL_STATE(879)] = 21703,
  [SMALL_STATE(880)] = 21707,
  [SMALL_STATE(881)] = 21711,
  [SMALL_STATE(882)] = 21715,
  [SMALL_STATE(883)] = 21719,
  [SMALL_STATE(884)] = 21723,
  [SMALL_STATE(885)] = 21727,
  [SMALL_STATE(886)] = 21731,
  [SMALL_STATE(887)] = 21735,
  [SMALL_STATE(888)] = 21739,
  [SMALL_STATE(889)] = 21743,
  [SMALL_STATE(890)] = 21747,
  [SMALL_STATE(891)] = 21751,
  [SMALL_STATE(892)] = 21755,
  [SMALL_STATE(893)] = 21759,
  [SMALL_STATE(894)] = 21763,
  [SMALL_STATE(895)] = 21767,
  [SMALL_STATE(896)] = 21771,
  [SMALL_STATE(897)] = 21775,
  [SMALL_STATE(898)] = 21779,
  [SMALL_STATE(899)] = 21783,
  [SMALL_STATE(900)] = 21787,
  [SMALL_STATE(901)] = 21791,
  [SMALL_STATE(902)] = 21795,
  [SMALL_STATE(903)] = 21799,
  [SMALL_STATE(904)] = 21803,
  [SMALL_STATE(905)] = 21807,
  [SMALL_STATE(906)] = 21811,
  [SMALL_STATE(907)] = 21815,
  [SMALL_STATE(908)] = 21819,
  [SMALL_STATE(909)] = 21823,
  [SMALL_STATE(910)] = 21827,
  [SMALL_STATE(911)] = 21831,
  [SMALL_STATE(912)] = 21835,
  [SMALL_STATE(913)] = 21839,
  [SMALL_STATE(914)] = 21843,
  [SMALL_STATE(915)] = 21847,
  [SMALL_STATE(916)] = 21851,
  [SMALL_STATE(917)] = 21855,
  [SMALL_STATE(918)] = 21859,
  [SMALL_STATE(919)] = 21863,
  [SMALL_STATE(920)] = 21867,
  [SMALL_STATE(921)] = 21871,
  [SMALL_STATE(922)] = 21875,
  [SMALL_STATE(923)] = 21879,
  [SMALL_STATE(924)] = 21883,
  [SMALL_STATE(925)] = 21887,
  [SMALL_STATE(926)] = 21891,
  [SMALL_STATE(927)] = 21895,
  [SMALL_STATE(928)] = 21899,
  [SMALL_STATE(929)] = 21903,
  [SMALL_STATE(930)] = 21907,
  [SMALL_STATE(931)] = 21911,
  [SMALL_STATE(932)] = 21915,
  [SMALL_STATE(933)] = 21919,
  [SMALL_STATE(934)] = 21923,
  [SMALL_STATE(935)] = 21927,
  [SMALL_STATE(936)] = 21931,
  [SMALL_STATE(937)] = 21935,
  [SMALL_STATE(938)] = 21939,
  [SMALL_STATE(939)] = 21943,
  [SMALL_STATE(940)] = 21947,
  [SMALL_STATE(941)] = 21951,
  [SMALL_STATE(942)] = 21955,
  [SMALL_STATE(943)] = 21959,
  [SMALL_STATE(944)] = 21963,
  [SMALL_STATE(945)] = 21967,
  [SMALL_STATE(946)] = 21971,
  [SMALL_STATE(947)] = 21975,
  [SMALL_STATE(948)] = 21979,
  [SMALL_STATE(949)] = 21983,
  [SMALL_STATE(950)] = 21987,
  [SMALL_STATE(951)] = 21991,
  [SMALL_STATE(952)] = 21995,
  [SMALL_STATE(953)] = 21999,
  [SMALL_STATE(954)] = 22003,
  [SMALL_STATE(955)] = 22007,
  [SMALL_STATE(956)] = 22011,
  [SMALL_STATE(957)] = 22015,
  [SMALL_STATE(958)] = 22019,
  [SMALL_STATE(959)] = 22023,
  [SMALL_STATE(960)] = 22027,
  [SMALL_STATE(961)] = 22031,
  [SMALL_STATE(962)] = 22035,
  [SMALL_STATE(963)] = 22039,
  [SMALL_STATE(964)] = 22043,
  [SMALL_STATE(965)] = 22047,
  [SMALL_STATE(966)] = 22051,
  [SMALL_STATE(967)] = 22055,
  [SMALL_STATE(968)] = 22059,
  [SMALL_STATE(969)] = 22063,
  [SMALL_STATE(970)] = 22067,
  [SMALL_STATE(971)] = 22071,
  [SMALL_STATE(972)] = 22075,
  [SMALL_STATE(973)] = 22079,
  [SMALL_STATE(974)] = 22083,
  [SMALL_STATE(975)] = 22087,
  [SMALL_STATE(976)] = 22091,
  [SMALL_STATE(977)] = 22095,
  [SMALL_STATE(978)] = 22099,
  [SMALL_STATE(979)] = 22103,
  [SMALL_STATE(980)] = 22107,
  [SMALL_STATE(981)] = 22111,
  [SMALL_STATE(982)] = 22115,
  [SMALL_STATE(983)] = 22119,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_identifier, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_identifier, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agg_function, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agg_function, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agg_function, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_agg_function, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 9),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 8),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 7),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_function, 7),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_function, 7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_function, 6),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_function, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 13),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 13),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 2, .production_id = 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3, .production_id = 13),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lit_string, 3, .production_id = 13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_function, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_function, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 14),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 14),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 11),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 11),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 15),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 15),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_null, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lit_null, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 21),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_boolean, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lit_boolean, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_specification, 10),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_window_specification, 10),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(278),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(278),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(780),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(272),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(289),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(289),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(778),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(293),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(342),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(342),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(823),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(340),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(317),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(317),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(797),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(313),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 2, .production_id = 17),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 3, .production_id = 27),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 3, .production_id = 20),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operator, 3, .production_id = 20),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 18),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1, .production_id = 18),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 16),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1, .production_id = 16),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 15),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1, .production_id = 15),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause_on, 2, .production_id = 44),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(327),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(327),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(851),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(329),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, .production_id = 14),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1, .production_id = 14),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(418),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(785),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(416),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(837),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(704),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(841),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(419),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataset_definition_repeat1, 2), SHIFT_REPEAT(862),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_target, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2, .production_id = 14),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1, .production_id = 9),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2, .production_id = 15),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 2, .production_id = 19),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subquery, 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subquery, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_ref, 8, .production_id = 51),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 8, .production_id = 51),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2, .production_id = 16),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 48),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_ref, 6, .production_id = 48),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dbt_jinja_source, 8, .production_id = 52),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_source, 8, .production_id = 52),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2, .production_id = 18),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(283),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(283),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(761),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comparison_operator_repeat1, 2), SHIFT_REPEAT(285),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_join, 5),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_join, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause_using, 4, .production_id = 50),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_join, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_join, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_join, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause_using, 5, .production_id = 54),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expr, 1),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expr, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 3, .production_id = 26),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 4, .production_id = 35),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2, .production_id = 29),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2), SHIFT_REPEAT(215),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 4, .production_id = 33),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_all, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_all, 5),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 4, .production_id = 31),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expr, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1, .production_id = 9),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 2, .production_id = 19),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_all, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(151),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(150),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 5, .production_id = 41),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 3, .production_id = 24),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_body, 2, .production_id = 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_wrapper_repeat1, 2),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_wrapper_repeat1, 2), SHIFT_REPEAT(655),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_wrapper_repeat1, 2), SHIFT_REPEAT(697),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 5, .production_id = 40),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 4, .production_id = 34),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_body, 3, .production_id = 8),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 3, .production_id = 25),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 5, .production_id = 39),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 5, .production_id = 42),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 4, .production_id = 30),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 4, .production_id = 32),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataset_definition, 6, .production_id = 45),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2), SHIFT_REPEAT(243),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 4),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 2), SHIFT_REPEAT(216),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 5),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 3, .production_id = 11),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_by_clause_repeat1, 3),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 2, .production_id = 3),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2), SHIFT_REPEAT(245),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_set_operator, 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwargs_expression, 3, .production_id = 36),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cte_clause_list, 1),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cte_clause_list_repeat1, 2), SHIFT_REPEAT(589),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cte_clause_list_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwargs_expression, 4, .production_id = 43),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_kwargs_expression_repeat1, 2, .production_id = 47),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_kwargs_expression_repeat1, 2, .production_id = 47), SHIFT_REPEAT(927),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_expression_repeat1, 2, .production_id = 47), SHIFT_REPEAT(739),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_expression_repeat1, 2, .production_id = 47),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cte_clause_list, 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_join_clause_using_repeat1, 2, .production_id = 55),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_clause_using_repeat1, 2, .production_id = 55), SHIFT_REPEAT(669),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 4, .production_id = 22),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2, .production_id = 5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3, .production_id = 6),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 2, .production_id = 4),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4, .production_id = 23),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1, .production_id = 1),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cte_def, 5, .production_id = 28),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 6, .production_id = 37),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbt_jinja_config, 6, .production_id = 38),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwargs_expression, 4, .production_id = 36),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwargs_expression, 5, .production_id = 43),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_kwargs_expression_repeat1, 4, .production_id = 46),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_join_clause_using_repeat1, 2, .production_id = 53),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 3, .production_id = 12),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_expression_repeat1, 4, .production_id = 46),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_wrapper, 3, .production_id = 10),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_set_operator, 2),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict_expression, 5, .production_id = 46),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict_expression, 6, .production_id = 49),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_start, 2),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_frame_end, 2),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
