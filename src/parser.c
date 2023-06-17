#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE_PERCENT = 1,
  anon_sym_LBRACE_PERCENT_DASH = 2,
  anon_sym_PERCENT_RBRACE = 3,
  anon_sym_DASH_PERCENT_RBRACE = 4,
  anon_sym_LBRACE_LBRACE = 5,
  anon_sym_LBRACE_LBRACE_DASH = 6,
  anon_sym_RBRACE_RBRACE = 7,
  anon_sym_DASH_RBRACE_RBRACE = 8,
  aux_sym_code_token1 = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_number_token1 = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_GT = 17,
  anon_sym_LT = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_or = 21,
  anon_sym_and = 22,
  anon_sym_contains = 23,
  sym_template = 24,
  sym_directive = 25,
  sym_output_directive = 26,
  sym_code = 27,
  aux_sym_template_repeat1 = 28,
  aux_sym_code_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_contains] = "contains",
  [sym_template] = "template",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_code] = "code",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_contains] = anon_sym_contains,
  [sym_template] = sym_template,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_code] = sym_code,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [anon_sym_contains] = {
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
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [12] = 10,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '{') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '}') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_contains);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(16),
    [sym_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [21] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(20), 1,
      anon_sym_LBRACE_PERCENT_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(26), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(3), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_template_repeat1,
  [42] = 4,
    ACTIONS(31), 1,
      aux_sym_code_token1,
    STATE(10), 1,
      aux_sym_code_repeat1,
    STATE(14), 1,
      sym_code,
    ACTIONS(29), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [56] = 4,
    ACTIONS(35), 1,
      aux_sym_code_token1,
    STATE(12), 1,
      aux_sym_code_repeat1,
    STATE(15), 1,
      sym_code,
    ACTIONS(33), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [70] = 2,
    ACTIONS(39), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [80] = 2,
    ACTIONS(43), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [90] = 2,
    ACTIONS(47), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [100] = 2,
    ACTIONS(51), 2,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_LBRACE_DASH,
  [110] = 3,
    ACTIONS(55), 1,
      aux_sym_code_token1,
    STATE(11), 1,
      aux_sym_code_repeat1,
    ACTIONS(53), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [121] = 3,
    ACTIONS(59), 1,
      aux_sym_code_token1,
    STATE(11), 1,
      aux_sym_code_repeat1,
    ACTIONS(57), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [132] = 3,
    ACTIONS(62), 1,
      aux_sym_code_token1,
    STATE(13), 1,
      aux_sym_code_repeat1,
    ACTIONS(53), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [143] = 3,
    ACTIONS(64), 1,
      aux_sym_code_token1,
    STATE(13), 1,
      aux_sym_code_repeat1,
    ACTIONS(57), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [154] = 1,
    ACTIONS(67), 2,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
  [159] = 1,
    ACTIONS(69), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [164] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 159,
  [SMALL_STATE(16)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_liquid(void) {
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
