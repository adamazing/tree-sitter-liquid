#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_LBRACE_PERCENT_DASH = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_DASH_PERCENT_RBRACE = 5,
  anon_sym_LBRACE_LBRACE = 6,
  anon_sym_LBRACE_LBRACE_DASH = 7,
  anon_sym_RBRACE_RBRACE = 8,
  anon_sym_DASH_RBRACE_RBRACE = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token2 = 13,
  aux_sym_number_token1 = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_DOT = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_LT = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_or = 24,
  anon_sym_and = 25,
  sym_contains_operator = 26,
  anon_sym_include = 27,
  anon_sym_render = 28,
  sym_template = 29,
  sym_directive = 30,
  sym_output_directive = 31,
  sym_code = 32,
  sym__literal = 33,
  sym_string = 34,
  sym_number = 35,
  sym_boolean = 36,
  sym__expression = 37,
  sym_selector_expression = 38,
  sym_binary_operator = 39,
  sym_include_expression = 40,
  sym_render_expression = 41,
  sym_binary_expression = 42,
  aux_sym_template_repeat1 = 43,
  aux_sym_code_repeat1 = 44,
  aux_sym_selector_expression_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [sym_contains_operator] = "contains_operator",
  [anon_sym_include] = "include",
  [anon_sym_render] = "render",
  [sym_template] = "template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_code] = "code",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_include_expression] = "include_expression",
  [sym_render_expression] = "render_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_selector_expression_repeat1] = "selector_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [sym_contains_operator] = sym_contains_operator,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_render] = anon_sym_render,
  [sym_template] = sym_template,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_code] = sym_code,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_include_expression] = sym_include_expression,
  [sym_render_expression] = sym_render_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_selector_expression_repeat1] = aux_sym_selector_expression_repeat1,
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
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [sym_contains_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_render] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_include_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_render_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_field = 1,
  field_include = 2,
  field_included_file = 3,
  field_operand = 4,
  field_render = 5,
  field_rendered_file = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_include] = "include",
  [field_included_file] = "included_file",
  [field_operand] = "operand",
  [field_render] = "render",
  [field_rendered_file] = "rendered_file",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_field, 1, .inherited = true},
    {field_operand, 0},
  [2] =
    {field_include, 0},
    {field_included_file, 1},
  [4] =
    {field_render, 0},
    {field_rendered_file, 1},
  [6] =
    {field_field, 1},
  [7] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
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
      ADVANCE_MAP(
        '!', 3,
        '"', 23,
        '%', 5,
        '\'', 20,
        '-', 2,
        '.', 28,
        '<', 33,
        '=', 4,
        '>', 32,
        '{', 1,
        '}', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '}') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(19);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_render);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_contains_operator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [sym_contains_operator] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_render] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(34),
    [sym_directive] = STATE(21),
    [sym_output_directive] = STATE(21),
    [aux_sym_template_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_selector_expression_repeat1,
    ACTIONS(13), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(15), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [32] = 4,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_selector_expression_repeat1,
    ACTIONS(19), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(21), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [64] = 4,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_selector_expression_repeat1,
    ACTIONS(23), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(25), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [96] = 10,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      anon_sym_include,
    ACTIONS(44), 1,
      anon_sym_render,
    STATE(8), 1,
      aux_sym_code_repeat1,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(32), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(6), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [139] = 6,
    ACTIONS(54), 1,
      sym_contains_operator,
    STATE(18), 1,
      sym_binary_operator,
    ACTIONS(50), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(46), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(48), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
  [174] = 2,
    ACTIONS(56), 11,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(58), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [201] = 10,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_number_token1,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(80), 1,
      anon_sym_render,
    STATE(8), 1,
      aux_sym_code_repeat1,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(6), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [244] = 6,
    ACTIONS(54), 1,
      sym_contains_operator,
    STATE(18), 1,
      sym_binary_operator,
    ACTIONS(50), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(52), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(83), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(85), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
  [279] = 2,
    ACTIONS(87), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(89), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [305] = 11,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      anon_sym_include,
    ACTIONS(44), 1,
      anon_sym_render,
    STATE(5), 1,
      aux_sym_code_repeat1,
    STATE(29), 1,
      sym_code,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(6), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [349] = 2,
    ACTIONS(93), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(95), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [375] = 11,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      anon_sym_include,
    ACTIONS(44), 1,
      anon_sym_render,
    STATE(5), 1,
      aux_sym_code_repeat1,
    STATE(30), 1,
      sym_code,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
    STATE(6), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [419] = 2,
    ACTIONS(99), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(101), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [445] = 2,
    ACTIONS(103), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(105), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [471] = 2,
    ACTIONS(107), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(109), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [497] = 2,
    ACTIONS(83), 10,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_or,
      anon_sym_and,
      sym_contains_operator,
      anon_sym_include,
      anon_sym_render,
    ACTIONS(85), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [523] = 8,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      anon_sym_include,
    ACTIONS(44), 1,
      anon_sym_render,
    ACTIONS(40), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 9,
      sym__literal,
      sym_string,
      sym_number,
      sym_boolean,
      sym__expression,
      sym_selector_expression,
      sym_include_expression,
      sym_render_expression,
      sym_binary_expression,
  [557] = 6,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(116), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(119), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(19), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [578] = 2,
    ACTIONS(127), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
    ACTIONS(125), 5,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      anon_sym_include,
      anon_sym_render,
  [591] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(19), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [612] = 2,
    ACTIONS(133), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [622] = 2,
    ACTIONS(137), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [632] = 2,
    ACTIONS(141), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [642] = 2,
    ACTIONS(145), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [652] = 3,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_string,
  [662] = 3,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
  [672] = 3,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
  [682] = 1,
    ACTIONS(147), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [687] = 1,
    ACTIONS(149), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [692] = 1,
    ACTIONS(151), 1,
      aux_sym_string_token2,
  [696] = 1,
    ACTIONS(153), 1,
      aux_sym_string_token1,
  [700] = 1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
  [704] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [708] = 1,
    ACTIONS(159), 1,
      sym_identifier,
  [712] = 1,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 349,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 523,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 578,
  [SMALL_STATE(21)] = 591,
  [SMALL_STATE(22)] = 612,
  [SMALL_STATE(23)] = 622,
  [SMALL_STATE(24)] = 632,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 662,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 682,
  [SMALL_STATE(30)] = 687,
  [SMALL_STATE(31)] = 692,
  [SMALL_STATE(32)] = 696,
  [SMALL_STATE(33)] = 700,
  [SMALL_STATE(34)] = 704,
  [SMALL_STATE(35)] = 708,
  [SMALL_STATE(36)] = 712,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 2, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 2, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, 0, 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, 0, 5),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(35),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_expression_repeat1, 2, 0, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_expression_repeat1, 2, 0, 4),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_expression, 2, 0, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_expression, 2, 0, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render_expression, 2, 0, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render_expression, 2, 0, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_liquid(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
