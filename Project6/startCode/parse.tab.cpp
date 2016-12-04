/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "parse.y" /* yacc.c:339  */

#include "tablemanager.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <vector>

TableManager& tm = TableManager::getInstance();
int yylex (void);
extern int yylineno;
extern char *yytext;
void yyerror (char const *);

#line 85 "parse.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.hpp".  */
#ifndef YY_YY_PARSE_TAB_HPP_INCLUDED
# define YY_YY_PARSE_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPERSAND = 258,
    AND = 259,
    AS = 260,
    ASSERT = 261,
    AT = 262,
    BACKQUOTE = 263,
    BAR = 264,
    BREAK = 265,
    CIRCUMFLEX = 266,
    CLASS = 267,
    COLON = 268,
    COMMA = 269,
    CONTINUE = 270,
    DEDENT = 271,
    DEF = 272,
    DEL = 273,
    DOT = 274,
    DOUBLESLASH = 275,
    DOUBLESTAR = 276,
    ELIF = 277,
    ELSE = 278,
    ENDMARKER = 279,
    EQEQUAL = 280,
    EQUAL = 281,
    EXCEPT = 282,
    EXEC = 283,
    FINALLY = 284,
    FOR = 285,
    FROM = 286,
    GLOBAL = 287,
    GREATER = 288,
    GREATEREQUAL = 289,
    GRLT = 290,
    IF = 291,
    IMPORT = 292,
    IN = 293,
    INDENT = 294,
    IS = 295,
    LAMBDA = 296,
    LBRACE = 297,
    LESSEQUAL = 298,
    LEFTSHIFT = 299,
    LESS = 300,
    LPAR = 301,
    LSQB = 302,
    MINUS = 303,
    NEWLINE = 304,
    NOT = 305,
    NOTEQUAL = 306,
    OR = 307,
    PASS = 308,
    PERCENT = 309,
    PLUS = 310,
    PRINT = 311,
    RAISE = 312,
    RBRACE = 313,
    RETURN = 314,
    RIGHTSHIFT = 315,
    RPAR = 316,
    RSQB = 317,
    SEMI = 318,
    SLASH = 319,
    STAR = 320,
    STRING = 321,
    TILDE = 322,
    TRY = 323,
    WHILE = 324,
    WITH = 325,
    YIELD = 326,
    PLUSEQUAL = 327,
    MINEQUAL = 328,
    PERCENTEQUAL = 329,
    SLASHEQUAL = 330,
    STAREQUAL = 331,
    AMPEREQUAL = 332,
    CIRCUMFLEXEQUAL = 333,
    DOUBLESTAREQUAL = 334,
    LEFTSHIFTEQUAL = 335,
    RIGHTSHIFTEQUAL = 336,
    VBAREQUAL = 337,
    DOUBLESLASHEQUAL = 338,
    FLOATNUMBER = 339,
    INTNUMBER = 340,
    NAME = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "parse.y" /* yacc.c:355  */

  Ast* ast;
  char* c;
  int i;
  std::vector<Ast*>* vec;

#line 219 "parse.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "parse.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  142
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  504

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    62,    71,    72,    75,    78,    79,
      82,    83,    86,    87,    90,    91,    94,    95,    98,    99,
     102,   110,   111,   114,   115,   118,   119,   122,   123,   126,
     127,   130,   131,   134,   135,   138,   141,   142,   145,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   159,   179,
     198,   217,   236,   256,   257,   258,   259,   260,   261,   280,
     299,   309,   310,   313,   314,   318,   344,   347,   348,   351,
     352,   355,   358,   361,   362,   363,   364,   365,   368,   371,
     374,   375,   378,   381,   382,   385,   386,   389,   390,   393,
     394,   397,   400,   401,   404,   405,   408,   409,   412,   413,
     414,   417,   418,   421,   422,   425,   428,   429,   432,   433,
     436,   437,   440,   441,   444,   445,   448,   449,   450,   451,
     452,   453,   454,   455,   458,   459,   462,   463,   466,   467,
     470,   471,   474,   475,   478,   479,   482,   483,   486,   487,
     490,   493,   494,   497,   498,   501,   502,   505,   506,   509,
     510,   514,   515,   515,   521,   525,   532,   533,   536,   537,
     540,   541,   550,   551,   554,   555,   558,   559,   562,   563,
     566,   567,   570,   571,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   588,   589,   592,   593,   596,
     597,   600,   601,   604,   605,   608,   609,   619,   632,   633,
     643,   659,   675,   693,   694,   701,   702,   705,   715,   726,
     727,   730,   731,   732,   733,   734,   735,   736,   740,   743,
     744,   747,   748,   751,   752,   755,   756,   759,   760,   763,
     764,   767,   768,   771,   772,   775,   776,   777,   780,   783,
     784,   785,   788,   789,   792,   793,   796,   797,   800,   804,
     807,   808,   811,   812,   815,   816,   819,   820,   823,   824,
     827,   828,   829,   830,   831,   832,   835,   836,   839,   840,
     843,   844,   847,   848,   851,   852,   855,   856,   860,   861,
     864,   865,   868,   869,   872,   876,   877,   880,   881,   882,
     885,   886,   887,   890,   891,   892,   895,   896,   897,   900,
     901,   902,   905,   906,   907,   911,   912,   913,   916,   917,
     918,   921,   922,   923,   926,   929,   932,   933,   934,   937,
     938,   939
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPERSAND", "AND", "AS", "ASSERT", "AT",
  "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX", "CLASS", "COLON", "COMMA",
  "CONTINUE", "DEDENT", "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESTAR",
  "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL", "EXCEPT", "EXEC",
  "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER", "GREATEREQUAL", "GRLT",
  "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA", "LBRACE", "LESSEQUAL",
  "LEFTSHIFT", "LESS", "LPAR", "LSQB", "MINUS", "NEWLINE", "NOT",
  "NOTEQUAL", "OR", "PASS", "PERCENT", "PLUS", "PRINT", "RAISE", "RBRACE",
  "RETURN", "RIGHTSHIFT", "RPAR", "RSQB", "SEMI", "SLASH", "STAR",
  "STRING", "TILDE", "TRY", "WHILE", "WITH", "YIELD", "PLUSEQUAL",
  "MINEQUAL", "PERCENTEQUAL", "SLASHEQUAL", "STAREQUAL", "AMPEREQUAL",
  "CIRCUMFLEXEQUAL", "DOUBLESTAREQUAL", "LEFTSHIFTEQUAL",
  "RIGHTSHIFTEQUAL", "VBAREQUAL", "DOUBLESLASHEQUAL", "FLOATNUMBER",
  "INTNUMBER", "NAME", "$accept", "start", "single_input", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "fpdef", "fplist", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "print_stmt", "opt_test", "opt_test_2", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "return_stmt", "yield_stmt",
  "raise_stmt", "opt_COMMA_test", "opt_test_3", "import_stmt",
  "import_name", "import_from", "star_DOT", "plus_DOT", "pick_STAR_import",
  "import_as_name", "dotted_as_name", "import_as_names", "dotted_as_names",
  "dotted_name", "global_stmt", "exec_stmt", "assert_stmt",
  "compound_stmt", "if_stmt", "star_ELIF", "while_stmt", "for_stmt",
  "try_stmt", "plus_except", "opt_ELSE", "opt_FINALLY", "with_stmt",
  "star_COMMA_with_item", "with_item", "except_clause", "pick_AS_COMMA",
  "opt_AS_COMMA", "suite", "$@1", "plus_stmt", "testlist_safe", "old_test",
  "old_lambdef", "test", "opt_IF_ELSE", "or_test", "and_test", "not_test",
  "comparison", "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "term", "factor", "power",
  "star_trailer", "atom", "pick_yield_expr_testlist_comp",
  "opt_yield_test", "opt_listmaker", "opt_dictorsetmaker", "plus_STRING",
  "listmaker", "testlist_comp", "lambdef", "trailer", "subscriptlist",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "testlist", "dictorsetmaker", "pick_comp_for", "pick_for_test",
  "classdef", "opt_testlist", "arglist", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "encoding_decl", "yield_expr", "star_fpdef_notest",
  "star_COMMA_expr", "star_COMMA_fpdef", "star_COMMA_test",
  "star_test_COLON_test", "star_COMMA_subscript",
  "star_COMMA_import_as_name", "plus_COMMA_test", "plus_COMMA_old_test",
  "dictarg", "listarg", "arglist_postlist", "small_stmt_STAR_OR_SEMI", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -388

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-388)))

#define YYTABLE_NINF -304

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     418,   766,   -28,   766,  -388,   -21,  -388,    50,   453,   453,
     453,   107,    61,   766,   -28,    22,   766,   674,   766,   453,
     144,   816,  -388,   453,   684,   766,   766,    88,   453,   138,
     766,   766,   766,  -388,  -388,   155,   157,  -388,  -388,   499,
     134,   152,    43,  -388,  -388,   160,  -388,    98,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,   148,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
     149,    12,   161,  -388,   870,   158,   153,   163,    58,     2,
      21,  -388,  -388,    57,  -388,  -388,   116,  -388,  -388,  -388,
    -388,   162,  -388,    23,  -388,   131,    33,   126,    81,  -388,
      35,   136,    34,   -28,   140,  -388,   165,  -388,   167,    40,
     766,     3,  -388,   166,    -2,   175,    84,   117,  -388,   103,
    -388,   123,  -388,  -388,   105,   124,  -388,  -388,  -388,  -388,
     766,  -388,   149,   190,  -388,  -388,  -388,   333,   194,   195,
     203,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
     652,   164,   125,   766,  -388,   816,   816,  -388,   816,  -388,
    -388,  -388,  -388,  -388,   168,  -388,  -388,   172,  -388,   453,
     453,   453,   453,  -388,  -388,   453,   453,   453,   453,   453,
     453,   453,   128,    46,   734,   196,    57,   674,   674,   674,
     674,   674,   674,   674,   674,   674,   674,   674,   674,   674,
    -388,   766,   129,    46,  -388,  -388,   766,   333,   766,   -25,
     206,   453,  -388,   766,   766,  -388,  -388,    37,    -3,   333,
     -28,   130,  -388,   208,   159,   766,   137,   141,  -388,   766,
     220,   766,   453,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
     453,  -388,  -388,  -388,   221,  -388,   766,  -388,   197,  -388,
     121,   333,   766,   225,   453,    98,  -388,  -388,   149,    28,
     161,  -388,  -388,  -388,   158,   153,   163,    58,     2,    21,
      21,  -388,  -388,  -388,  -388,  -388,   766,   766,   179,    97,
    -388,   227,  -388,   228,   224,   236,   191,   240,   242,   453,
    -388,   230,  -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,  -388,  -388,   202,  -388,
    -388,  -388,   209,  -388,   210,   333,    81,   243,   254,    -3,
     183,  -388,   269,  -388,   263,  -388,   256,  -388,  -388,     3,
    -388,  -388,  -388,  -388,   267,  -388,    20,  -388,   108,   245,
     248,   766,  -388,  -388,   243,  -388,   766,   275,   282,   293,
     284,   195,   333,   158,  -388,  -388,   766,  -388,  -388,  -388,
     766,  -388,  -388,    46,   744,   289,  -388,   218,  -388,   766,
    -388,  -388,   260,   298,  -388,  -388,  -388,   766,  -388,   333,
    -388,   251,   231,   183,  -388,   766,   290,   208,   297,  -388,
    -388,   175,   766,  -388,  -388,  -388,   816,   794,   300,  -388,
     580,    86,   333,   307,   294,   333,   309,  -388,  -388,  -388,
    -388,  -388,   310,  -388,  -388,  -388,   240,  -388,   331,  -388,
     333,  -388,   323,  -388,  -388,   263,   334,   336,  -388,   264,
     220,   340,    85,    24,   110,   342,  -388,   302,   766,  -388,
     580,   341,  -388,  -388,   766,  -388,  -388,   333,   345,  -388,
     344,   333,   744,  -388,   766,  -388,  -388,  -388,   347,  -388,
     333,   333,  -388,  -388,   766,   794,  -388,  -388,  -388,   794,
     354,   794,  -388,  -388,  -388,   794,  -388,  -388,  -388,  -388,
    -388,   333,  -388,  -388,  -388,  -388,   333,   256,  -388,   355,
     113,  -388,   794,   110,   358,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,   794,  -388
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    78,     0,    79,     0,     0,     0,
       0,    95,     0,     0,     0,    28,   226,   222,   224,     0,
       8,     0,    72,     0,    68,    84,    81,   228,     0,     0,
       0,     0,   286,   217,   216,   215,     0,     4,     2,    11,
       0,    17,     0,   123,   121,     9,    36,   321,    39,    40,
      41,    42,    43,    73,    74,    75,    77,    76,    44,    89,
      90,    45,    46,    47,    37,   116,   117,   118,   119,   120,
     298,   165,   166,   168,   171,   172,   185,   187,   189,   191,
     195,   198,   206,   210,   218,   163,    64,   122,     3,    82,
     215,   115,   108,     0,   282,     0,     0,     0,   292,    71,
     113,     0,    95,     0,     0,   111,     0,   106,    91,   104,
       0,     0,    33,     0,     0,    26,   298,     0,   225,   298,
     221,     0,   220,   219,   298,     0,   223,   204,   170,   203,
       0,    65,   298,    88,    80,   227,   205,     0,     0,   142,
     144,   285,     1,     8,    10,     9,     7,    16,    19,    18,
     320,     0,     0,   297,   249,     0,     0,   162,     0,   176,
     175,   177,   179,   181,   183,   178,   174,     0,   180,     0,
       0,     0,     0,   193,   194,     0,     0,     0,     0,     0,
       0,     0,     0,    15,   243,   208,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,    15,    13,   214,     0,     0,   259,    28,
       0,   291,   248,     0,     0,    94,    96,     0,     0,     0,
       0,     0,   234,   289,     0,     0,     0,     0,    23,     0,
     295,     0,     0,   251,   254,   255,   213,   231,   232,   211,
       0,   229,   230,   212,    70,    67,     0,    83,     0,   151,
       0,     0,     0,     0,     0,   321,    38,   110,   298,     0,
     167,   169,   184,   182,   173,   186,   188,   190,   192,   197,
     196,   202,   201,   200,   199,   237,     0,     0,     0,   269,
      14,   262,   265,   264,     0,   240,     0,   304,     0,     0,
     209,    64,    62,    61,    48,    49,    52,    51,    50,    53,
      55,    58,    56,    57,    54,    59,   114,   109,     0,   283,
     257,   258,     0,    22,     0,     0,   292,    86,     0,     0,
       0,    98,   102,    93,   307,   100,   127,   107,   103,   288,
      35,    34,   233,    32,    30,    25,    28,    24,   301,     0,
       0,     0,    66,    69,    86,   152,   146,     0,   137,     0,
     129,   142,     0,   143,   319,   296,     0,   314,   315,   235,
       0,   266,   268,   261,     0,     0,   236,   243,   238,   243,
     207,    63,     0,     0,    21,    20,   290,     0,   112,     0,
      92,     0,     0,   306,   105,     0,   125,   289,     0,    31,
      27,    26,   300,   250,   252,   253,     0,     0,   310,    87,
       0,   150,     0,     0,   139,     0,     0,   141,   140,   164,
     267,   260,   318,   317,   263,   239,   304,   242,   245,    12,
       0,    85,   131,    99,   101,   307,     0,     0,   287,     0,
     295,     0,   279,    28,   273,   157,   159,   158,   309,   308,
     155,     0,   147,   148,     0,   145,   133,     0,     0,   132,
     135,     0,     0,   302,   247,   241,   244,   256,     0,   305,
       0,     0,    29,   293,     0,     0,   278,   276,   277,     0,
       0,     0,   272,   270,   271,     0,   156,   154,   153,   149,
     136,     0,   134,   128,   316,   246,     0,   127,   124,   301,
     281,   161,     0,   275,   313,   138,   130,   126,   299,   280,
     160,   274,   312,   311
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -388,  -388,  -388,  -388,  -388,   338,  -388,   170,   337,  -388,
     343,  -388,  -202,    -4,    59,  -388,  -388,   -97,  -388,    38,
       1,   244,  -388,   217,   106,  -388,  -388,  -388,  -388,  -388,
    -388,  -388,  -388,  -388,  -388,  -388,    49,  -388,  -388,  -388,
    -388,   296,   301,    77,    19,   200,   101,  -388,     4,  -388,
    -388,  -388,  -388,  -388,   -65,  -388,  -388,  -388,   -27,  -388,
    -388,  -388,    76,   177,  -388,  -388,  -388,  -199,  -388,    -9,
    -388,  -387,  -388,    -1,  -388,  -150,   276,   -17,  -388,  -388,
      18,   268,   271,   262,  -388,   265,   -52,   -10,  -388,   253,
    -388,  -388,  -388,  -388,  -388,   417,  -388,  -388,  -388,  -388,
    -388,    78,    83,  -388,  -388,    -7,   102,  -388,  -388,  -388,
     405,  -388,    93,  -353,  -388,   -36,   346,  -388,   -32,   -94,
    -388,  -388,  -388,   139,    75,   156,    39,   -85,   -13,    62,
      54,    82,   -12,  -332,  -388,    29,   235
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   278,    42,    43,
      44,   210,   113,   230,   114,   389,   228,   115,   224,   440,
     249,    47,    48,   291,   200,    49,   131,   342,    50,    51,
      52,    53,    54,    55,    56,    57,   378,   247,    58,    59,
      60,   103,   104,   323,   324,   107,   325,   108,   109,    61,
      62,    63,    64,    65,   386,    66,    67,    68,   348,   404,
     449,    69,   253,   139,   349,   444,   445,   250,   400,   441,
     434,   494,   436,    70,   157,    71,    72,    73,    74,   169,
      75,    76,    77,    78,   175,    79,    80,    81,    82,   185,
      83,   120,   121,   125,   117,    84,   126,   122,    85,   186,
     286,   287,   288,   455,   456,    99,    86,   118,   393,   233,
      87,   312,   280,   281,   361,   472,   473,   474,   466,   467,
     468,    95,    88,    89,   330,   212,   337,   154,   395,   368,
     384,   343,   476,   282,   283,   414,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    46,    94,   101,   128,   259,    93,   314,   310,   127,
     435,   412,   106,   129,   223,   116,   119,   124,   136,   226,
     326,   111,   234,   132,   133,   237,    98,   100,    98,   138,
     140,   235,   413,  -294,   238,   110,   313,   469,    45,   242,
      46,   178,   202,   320,   170,   221,   207,   245,   155,   111,
     176,   356,   350,   102,     3,     5,   202,   177,    92,   202,
       7,   112,   321,   227,   156,    96,   111,   276,   111,   203,
     111,   -97,   204,   213,   319,   179,   182,   145,   490,   208,
     156,  -294,   491,   322,   493,   180,   181,    15,    16,   112,
     170,   442,    17,    18,    19,   211,    21,   231,   153,   412,
     443,    23,   173,   183,   184,   500,   112,   217,   112,   222,
     112,   277,    27,    28,   232,   232,   375,   153,   174,   153,
     413,   465,   392,   360,   269,   270,   102,   232,   134,   244,
      33,    34,    90,   232,   141,   240,    97,   156,   232,   205,
     240,   261,   187,   232,    -5,   206,   471,   105,   346,   465,
     347,   137,   258,   408,    27,  -284,   123,   142,   146,     2,
      -6,   150,   152,   153,   171,   158,   172,   170,   271,   272,
     273,   274,   209,   355,   214,   236,   201,   218,   219,   225,
     422,   220,   279,   285,   239,   362,   243,   264,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     306,   229,   279,   446,   246,   309,   450,   251,   254,   252,
     263,   257,   317,   256,   275,   307,   328,   289,   262,   315,
     331,   457,   329,   333,   332,   339,     3,   334,   335,   316,
     338,   470,   387,   340,   336,   341,   345,   284,   352,   391,
     359,   363,   364,   365,   394,   344,   432,   437,   480,  -242,
      98,   140,   483,   366,   367,   369,   187,   377,    98,    15,
      16,   487,   488,   372,    17,    18,    19,   379,    21,   322,
     373,   374,   353,    23,   382,   357,   358,   383,   385,   370,
    -303,   388,   495,   396,    27,    28,   397,   496,   402,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,    33,    34,    90,   403,   405,   406,   415,   419,
     311,   420,   423,   427,   438,   437,   318,   424,   429,   437,
     447,   437,   451,   448,   452,   437,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,     1,
     398,     3,   437,     4,   454,   401,   458,   460,     6,   461,
     462,     8,   437,   464,   156,   409,   475,   478,   481,   410,
     486,     9,   279,   279,    11,    12,   285,   492,   417,   392,
      14,   346,   502,   308,    15,    16,   421,   144,   147,    17,
      18,    19,   248,    21,   426,   148,    22,   430,    23,    24,
      25,   431,    26,   399,   255,   390,   380,   371,   215,    27,
      28,    46,   425,   216,    32,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    33,    34,    90,
     327,   381,   497,   482,     1,     2,     3,   407,     4,   351,
       5,   477,   260,     6,   267,     7,     8,   398,   265,   290,
     268,    46,   266,   479,   135,   416,     9,   149,    10,    11,
      12,   279,   418,   485,    13,    14,   411,   501,   499,    15,
      16,     3,   428,   489,    17,    18,    19,    20,    21,   463,
     241,    22,   376,    23,    24,    25,   498,    26,   453,   459,
     439,   484,   503,     0,    27,    28,    29,    30,    31,    32,
     354,     0,     0,     0,     0,    16,     0,     0,     0,    17,
      18,    19,    33,    34,    35,     1,     2,     3,    23,     4,
       0,     5,     0,     0,     6,     0,     7,     8,     0,    27,
      28,     0,     0,     0,     0,     0,     0,     9,     0,    10,
      11,    12,     0,     0,     0,    13,    14,    33,    34,    90,
      15,    16,     0,     0,     0,    17,    18,    19,   143,    21,
       0,     0,    22,     0,    23,    24,    25,     0,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    90,     1,     2,     3,     0,
       4,     0,     5,     0,     0,     6,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
      10,    11,    12,     0,     0,     0,    13,    14,     0,     0,
       0,    15,    16,     0,     0,     0,    17,    18,    19,     0,
      21,     0,     0,    22,     0,    23,    24,    25,     0,    26,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     1,     0,
       3,     0,     4,     0,    33,    34,    90,     6,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     3,    11,    12,     0,     0,     0,     0,    14,
       0,     0,     3,    15,    16,     0,     0,     0,    17,    18,
      19,     0,    21,     0,     0,    22,     0,    23,    24,    25,
       0,    26,     0,     0,     0,    15,    16,     0,    27,    28,
      17,    18,    19,    32,    21,    15,    16,     0,     0,    23,
      17,    18,    19,     0,    21,     0,    33,    34,    90,    23,
      27,    28,     3,     0,   130,    32,     0,     0,     0,     0,
      27,    28,     3,   284,     0,     0,     0,     0,    33,    34,
      90,     0,     0,     0,     0,   276,     0,     0,    33,    34,
      90,     0,     0,     0,     3,    15,    16,     0,     0,     0,
      17,    18,    19,     0,    21,    15,    16,     0,     0,    23,
      17,    18,    19,     0,    21,     0,     0,     0,     0,    23,
      27,    28,     3,     0,     0,     0,     0,    15,    16,     0,
      27,    28,    17,    18,    19,     0,    21,     0,    33,    34,
      90,    23,     0,     0,     3,     0,     0,     0,    33,    34,
      90,     0,    27,    28,     0,   433,    16,     0,     0,     0,
      17,    18,    19,     0,    21,     0,     0,     0,     0,    23,
      33,    34,    90,     0,     0,     0,     0,     0,    16,     0,
      27,    28,    17,    18,    19,     0,    21,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,    33,    34,
      90,     0,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
      33,    34,    90,   160,   161,   162,     0,     0,   163,     0,
     164,     0,     0,   165,     0,   166,     0,     0,     0,     0,
     167,   168
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,    10,    21,   155,     2,   209,   207,    19,
     397,   364,    13,    23,   111,    16,    17,    18,    28,    21,
     219,    46,   116,    24,    25,   119,     8,     9,    10,    30,
      31,   116,   364,    13,   119,    13,    61,    13,     0,   124,
      39,    20,    19,    46,     9,     5,    13,   132,    36,    46,
      48,    23,   251,    19,     8,    12,    19,    55,    86,    19,
      17,    86,    65,    65,    52,    86,    46,    21,    46,    46,
      46,    37,    49,    38,    37,    54,    19,    39,   465,    46,
      52,    61,   469,    86,   471,    64,    65,    41,    42,    86,
       9,     5,    46,    47,    48,    14,    50,    13,    14,   452,
      14,    55,    44,    46,    47,   492,    86,   103,    86,   110,
      86,    65,    66,    67,    30,    30,   315,    14,    60,    14,
     452,    36,    14,    26,   176,   177,    19,    30,    26,   130,
      84,    85,    86,    30,    32,    30,    86,    52,    30,     8,
      30,   158,    26,    30,     0,    14,    36,    86,    27,    36,
      29,    13,   153,   352,    66,     0,    17,     0,    24,     7,
       0,    63,    14,    14,    11,     4,     3,     9,   178,   179,
     180,   181,    46,   258,    38,    58,    14,    37,    13,    13,
     379,    14,   183,   184,    61,   279,    62,   169,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     201,    26,   203,   402,    14,   206,   405,    13,     5,    14,
      38,    86,   213,    49,    86,    86,    86,    21,    50,    13,
      61,   420,    14,    86,   225,   232,     8,    86,   229,   211,
     231,   433,   329,   240,    14,    14,    39,    19,    13,   336,
      61,    14,    14,    19,   338,   246,   396,   397,   447,    13,
     232,   252,   451,    62,    14,    13,    26,    14,   240,    41,
      42,   460,   461,    61,    46,    47,    48,    13,    50,    86,
      61,    61,   254,    55,     5,   276,   277,    14,    22,   289,
      62,    14,   481,    38,    66,    67,    38,   486,    13,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    84,    85,    86,    23,    13,    23,    19,    49,
     208,    13,    61,    23,    14,   465,   214,    86,    21,   469,
      13,   471,    13,    29,    14,   475,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,     6,
     341,     8,   492,    10,    13,   346,    23,    13,    15,    13,
      86,    18,   502,    13,    52,   356,    14,    16,    13,   360,
      13,    28,   363,   364,    31,    32,   367,    13,   369,    14,
      37,    27,    14,   203,    41,    42,   377,    39,    41,    46,
      47,    48,    49,    50,   385,    42,    53,   391,    55,    56,
      57,   392,    59,   344,   150,   336,   319,   291,   102,    66,
      67,   400,   383,   102,    71,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    84,    85,    86,
     220,   320,   487,   450,     6,     7,     8,   351,    10,   252,
      12,   440,   156,    15,   172,    17,    18,   438,   170,   186,
     175,   440,   171,   444,    27,   367,    28,    42,    30,    31,
      32,   452,   369,   454,    36,    37,   363,   493,   490,    41,
      42,     8,   387,   464,    46,    47,    48,    49,    50,   430,
     124,    53,   316,    55,    56,    57,   489,    59,   416,   425,
     398,   452,   494,    -1,    66,    67,    68,    69,    70,    71,
     255,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    84,    85,    86,     6,     7,     8,    55,    10,
      -1,    12,    -1,    -1,    15,    -1,    17,    18,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    84,    85,    86,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    56,    57,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
       8,    -1,    10,    -1,    84,    85,    86,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,     8,    31,    32,    -1,    -1,    -1,    -1,    37,
      -1,    -1,     8,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    59,    -1,    -1,    -1,    41,    42,    -1,    66,    67,
      46,    47,    48,    71,    50,    41,    42,    -1,    -1,    55,
      46,    47,    48,    -1,    50,    -1,    84,    85,    86,    55,
      66,    67,     8,    -1,    60,    71,    -1,    -1,    -1,    -1,
      66,    67,     8,    19,    -1,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    -1,    -1,    21,    -1,    -1,    84,    85,
      86,    -1,    -1,    -1,     8,    41,    42,    -1,    -1,    -1,
      46,    47,    48,    -1,    50,    41,    42,    -1,    -1,    55,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,
      66,    67,     8,    -1,    -1,    -1,    -1,    41,    42,    -1,
      66,    67,    46,    47,    48,    -1,    50,    -1,    84,    85,
      86,    55,    -1,    -1,     8,    -1,    -1,    -1,    84,    85,
      86,    -1,    66,    67,    -1,    41,    42,    -1,    -1,    -1,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      66,    67,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      86,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      84,    85,    86,    33,    34,    35,    -1,    -1,    38,    -1,
      40,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,
      50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,    10,    12,    15,    17,    18,    28,
      30,    31,    32,    36,    37,    41,    42,    46,    47,    48,
      49,    50,    53,    55,    56,    57,    59,    66,    67,    68,
      69,    70,    71,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    95,    96,    97,   106,   107,   108,   109,   112,
     115,   116,   117,   118,   119,   120,   121,   122,   125,   126,
     127,   136,   137,   138,   139,   140,   142,   143,   144,   148,
     160,   162,   163,   164,   165,   167,   168,   169,   170,   172,
     173,   174,   175,   177,   182,   185,   193,   197,   209,   210,
      86,   160,    86,   135,   160,   208,    86,    86,   167,   192,
     167,   192,    19,   128,   129,    86,   160,   132,   134,   135,
      13,    46,    86,    99,   101,   104,   160,   181,   194,   160,
     178,   179,   184,   210,   160,   180,   183,   174,   164,   174,
      60,   113,   160,   160,   193,   182,   174,    13,   160,   150,
     160,   193,     0,    49,    92,   106,    24,    95,    97,   197,
      63,   223,    14,    14,   214,    36,    52,   161,     4,    25,
      33,    34,    35,    38,    40,    43,    45,    50,    51,   166,
       9,    11,     3,    44,    60,   171,    48,    55,    20,    54,
      64,    65,    19,    46,    47,   176,   186,    26,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     111,    14,    19,    46,    49,     8,    14,    13,    46,    46,
      98,    14,   212,    38,    38,   128,   129,   135,    37,    13,
      14,     5,   160,   104,   105,    13,    21,    65,   103,    26,
     100,    13,    30,   196,   206,   214,    58,   206,   214,    61,
      30,   203,   214,    62,   160,   214,    14,   124,    49,   107,
     154,    13,    14,   149,     5,   108,    49,    86,   160,   162,
     163,   164,    50,    38,   167,   168,   169,   170,   172,   173,
     173,   174,   174,   174,   174,    86,    21,    65,    94,   160,
     199,   200,   220,   221,    19,   160,   187,   188,   189,    21,
     176,   110,   193,   210,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   160,    86,    94,   160,
     154,   193,   198,    61,    99,    13,   167,   160,   193,    37,
      46,    65,    86,   130,   131,   133,   154,   132,    86,    14,
     211,    61,   160,    86,    86,   160,    14,   213,   160,   192,
     192,    14,   114,   218,   160,    39,    27,    29,   145,   151,
     154,   150,    13,   167,   223,   214,    23,   160,   160,    61,
      26,   201,   206,    14,    14,    19,    62,    14,   216,    13,
     174,   111,    61,    61,    61,   154,   212,    14,   123,    13,
     130,   133,     5,    14,   217,    22,   141,   104,    14,   102,
     101,   104,    14,   195,   206,   215,    38,    38,   160,   123,
     155,   160,    13,    23,   146,    13,    23,   149,   154,   160,
     160,   199,   200,   220,   222,    19,   188,   160,   189,    49,
      13,   160,   154,    61,    86,   131,   160,    23,   211,    21,
     100,   160,   162,    41,   157,   158,   159,   162,    14,   218,
     106,   156,     5,    14,   152,   153,   154,    13,    29,   147,
     154,    13,    14,   216,    13,   190,   191,   154,    23,   217,
      13,    13,    86,   213,    13,    36,   205,   206,   207,    13,
      99,    36,   202,   203,   204,    14,   219,   156,    16,   160,
     154,    13,   145,   154,   222,   160,    13,   154,   154,   160,
     158,   158,    13,   158,   158,   154,   154,   141,   215,   205,
     158,   202,    14,   219
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   116,   117,   117,   117,   117,   117,   118,   119,
     120,   120,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     130,   131,   131,   132,   132,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   154,   155,   154,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   172,   173,   173,
     173,   173,   173,   174,   174,   174,   174,   175,   175,   176,
     176,   177,   177,   177,   177,   177,   177,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   186,   186,   187,   188,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   199,   199,   199,   199,   200,   200,   201,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   210,   210,   211,   211,   211,
     212,   212,   212,   213,   213,   213,   214,   214,   214,   215,
     215,   215,   216,   216,   216,   217,   217,   217,   218,   218,
     218,   219,   219,   219,   220,   221,   222,   222,   222,   223,
     223,   223
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       5,     3,     2,     2,     3,     2,     0,     4,     0,     3,
       0,     3,     2,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     3,     0,     2,     4,     2,     0,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     0,     3,     0,     1,
       1,     2,     5,     4,     2,     0,     2,     1,     1,     3,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     3,
       3,     2,     5,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     5,     5,     0,     7,     4,
       9,     6,     6,     6,     4,     3,     3,     0,     3,     0,
       5,     3,     0,     3,     1,     3,     1,     1,     1,     2,
       0,     1,     0,     5,     2,     1,     2,     1,     1,     1,
       4,     3,     2,     1,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     2,     2,     2,     1,     4,     2,     2,
       0,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     1,     0,     2,     1,     2,
       2,     2,     2,     4,     3,     3,     3,     2,     2,     3,
       1,     4,     1,     0,     1,     0,     2,     1,     2,     2,
       4,     2,     1,     1,     1,     1,     7,     4,     1,     0,
       3,     2,     1,     3,     1,     1,     2,     3,     1,     0,
       1,     1,     5,     4,     3,     2,     1,     1,     5,     4,
       3,     2,     1,     3,     1,     2,     1,     3,     1,     0,
       3,     1,     0,     4,     1,     0,     3,     1,     0,     5,
       1,     0,     3,     1,     0,     3,     1,     0,     3,     3,
       2,     3,     3,     2,     2,     2,     3,     1,     1,     3,
       1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 78 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0;  }
#line 1814 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 79 "parse.y" /* yacc.c:1646  */
    { }
#line 1820 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 1826 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1832 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "parse.y" /* yacc.c:1646  */
    { 
	    
	    (yyval.ast) = new FuncNode((yyvsp[-3].c),(yyvsp[0].ast));
	    std::string s((yyvsp[-3].c));
	    tm.addTable(s,(yyval.ast));
	}
#line 1843 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 141 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1849 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 142 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1855 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 145 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-2].ast);}
#line 1861 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 148 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1867 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 149 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1873 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 159 "parse.y" /* yacc.c:1646  */
    {
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V') {
	        if(tm.getCurrentScope() == 0){
		        a = new PlusExp(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) );
		        tm .addTable( (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) ) );
																	
	        }
	        else 
                (yyval.ast) = new PlusExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
	        if(tm.getCurrentScope() == 0){
		        a = new PlusExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast));
		        tm .addTable( (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast)) );
	        }
	        else
	            (yyval.ast) = new PlusExp((yyvsp[-2].ast),(yyvsp[0].ast));	
	    }	  
    }
#line 1898 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 179 "parse.y" /* yacc.c:1646  */
    { 
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
	        if(tm.getCurrentScope() == 0){    
		        a = new MinusExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) );
			    tm .addTable( (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) ) );
			}
			else
			   (yyval.ast) = new MinusExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new MinusExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) ));
			}	  
			 else
			    (yyval.ast) = new MinusExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
    }
#line 1922 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 198 "parse.y" /* yacc.c:1646  */
    { 
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){
			    a = new MultExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) );
			    tm .addTable(   (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) ) );
			}
			else
			   (yyval.ast) = new MultExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new MultExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) ));
		    }	  
			else
			    (yyval.ast) = new MultExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
    }
#line 1946 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 217 "parse.y" /* yacc.c:1646  */
    { 
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){   
			    a = new DivExp(tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) );
			    tm.addTable( (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) ));
			}
			else
			   (yyval.ast) = new DivExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new DivExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) ) );
			}	  
			else
			    (yyval.ast) = new DivExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
    }
#line 1970 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 236 "parse.y" /* yacc.c:1646  */
    { 
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){
			    a = new ModExp(tm.getEntry((yyvsp[-2].ast)->getVariable()),tm.getEntry((yyvsp[0].ast)->getVariable()));
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),tm.getEntry((yyvsp[0].ast)->getVariable()) ) );
			}
			else
			   (yyval.ast) = new ModExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new ModExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(),a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) ) );
			}	  
			else
			    (yyval.ast) = new ModExp((yyvsp[-2].ast),(yyvsp[0].ast));
			  
	    }
    }
#line 1995 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 261 "parse.y" /* yacc.c:1646  */
    { 
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){  
			    a = new ExpoExp(tm.getEntry((yyvsp[-2].ast)->getVariable()),tm.getEntry((yyvsp[0].ast)->getVariable()) );
			    tm .addTable(   (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) ) );
			}
			else
			   (yyval.ast) = new ExpoExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new ExpoExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),(yyvsp[0].ast)));
			}	  
			else
			    (yyval.ast) = new ExpoExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
    }
#line 2019 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 280 "parse.y" /* yacc.c:1646  */
    { 
	    Ast* a;
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){
			    a = new DoubleSlashExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), tm.getEntry((yyvsp[0].ast)->getVariable()) ) );
			}
			else
			    (yyval.ast) = new DoubleSlashExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new DoubleSlashExp( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) );
			    tm .addTable(  (yyvsp[-2].ast)->getVariable(), a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) ) );
		    }	  
			else
			    (yyval.ast) = new DoubleSlashExp((yyvsp[-2].ast),(yyvsp[0].ast));
	        }
    }
#line 2043 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 299 "parse.y" /* yacc.c:1646  */
    {     
	    if(tm.getCurrentScope() > 0){
	        Ast* a = new AssignNode((yyvsp[-1].ast),(yyvsp[0].ast));
	        (yyval.ast) = a;
	    }
	    else
	        tm.addTable((yyvsp[-1].ast)->getVariable(),(yyvsp[0].ast));
	}
#line 2056 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 309 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2062 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 310 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2068 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 313 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)= (yyvsp[-1].ast); }
#line 2074 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 314 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2080 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 318 "parse.y" /* yacc.c:1646  */
    {
        if(tm.getCurrentScope() == 0)	{
			(yyval.ast) = new PrintNode((yyvsp[0].ast));
			if((yyvsp[0].ast)->getNodetype() == 'V'){
				if(tm.checkName((yyvsp[0].ast)->getVariable(),tm.getCurrentScope()) ){
					if((tm.getEntry((yyvsp[0].ast)->getVariable()))->getNodetype() == 'F')
					    std::cout << std::fixed << std::setprecision(3) << "pyt> " 
												<< (tm.getEntry((yyvsp[0].ast)->getVariable()))->getNumber() << std::endl;
					else 
						std::cout << "pyt> " 
								  << (tm.getEntry((yyvsp[0].ast)->getVariable()))->getNumber()  << std::endl;
				}
				else
					std::cout << "symbol not initialized" << std::endl;
			}
			else {
				if(eval((yyvsp[0].ast))->getNodetype() == 'F')
				    std::cout << std::fixed << std::setprecision(3) << "pyt> " << (eval((yyvsp[0].ast))->getNumber()) << std::endl; 
				else
				    std::cout << "pyt> " << (eval((yyvsp[0].ast))->getNumber()) << std::endl; 
			}
		}
		else 
		    (yyval.ast) = new PrintNode((yyvsp[0].ast));
	    //treeFree($2);
	}
#line 2111 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 344 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2117 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 347 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2123 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 348 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2129 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 351 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2135 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 352 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2141 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 355 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2147 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 358 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2153 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 368 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2159 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 371 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2165 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 374 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ReturnNode((yyvsp[0].ast)); }
#line 2171 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 375 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2177 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 381 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2183 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 382 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2189 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 393 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2195 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 394 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2201 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 437 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2207 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 440 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2213 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 441 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2219 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 444 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2225 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 445 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2231 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 458 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2237 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 459 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2243 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 466 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2249 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 467 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2255 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 470 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2261 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 471 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2267 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 474 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2273 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 475 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 2279 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 490 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2285 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 514 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)= (yyvsp[0].ast); }
#line 2291 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 515 "parse.y" /* yacc.c:1646  */
    { tm.pushScope(); }
#line 2297 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 515 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.ast) = new SuiteNode( tm.getCurrentScope(), (yyvsp[-1].vec)->rbegin(), (yyvsp[-1].vec)->rend()); 
	    tm.popScope();    
	}
#line 2306 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 521 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.vec)= (yyvsp[0].vec); 
		(yyval.vec)->push_back((yyvsp[-1].ast));
	}
#line 2315 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 525 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.vec) = new std::vector<Ast*>();
		(yyval.vec)->reserve(4);
		(yyval.vec)->push_back((yyvsp[0].ast));
	}
#line 2325 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 550 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-1].ast); }
#line 2331 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 551 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2337 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 558 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2343 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 562 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2349 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 566 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2355 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 570 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2361 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 588 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2367 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 592 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2373 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 596 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2379 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 600 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2385 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 608 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2391 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 609 "parse.y" /* yacc.c:1646  */
    { 
	    if((yyvsp[-2].ast)->getNodetype() == 'V'){
		    (yyvsp[-2].ast) = TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable());
	    }  
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
		    (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    } 
	    Ast* plus = new PlusExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    (yyval.ast) = plus->getOutput((yyvsp[-2].ast),(yyvsp[0].ast));
	}
#line 2406 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 619 "parse.y" /* yacc.c:1646  */
    { 
		
	    if((yyvsp[-2].ast)->getNodetype() == 'V'){
		   (yyvsp[-2].ast) = TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable());
	    } 
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
		   (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    } 
	    Ast* minus = new MinusExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    (yyval.ast) = minus->getOutput((yyvsp[-2].ast),(yyvsp[0].ast));
	}
#line 2422 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 632 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2428 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 633 "parse.y" /* yacc.c:1646  */
    {  
	    if((yyvsp[-2].ast)->getNodetype() == 'V'){
	      (yyvsp[-2].ast) = TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable());
	    } 
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
	      (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
        }
	    Ast* mult = new MultExp((yyvsp[-2].ast),(yyvsp[0].ast));
	    (yyval.ast) = mult->getOutput((yyvsp[-2].ast),(yyvsp[0].ast));
	}
#line 2443 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 643 "parse.y" /* yacc.c:1646  */
    {
	    if((yyvsp[-2].ast)->getNodetype() == 'V'){
		   (yyvsp[-2].ast) = TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable());
	    }  
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
		    (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    }
	    if((yyvsp[0].ast)->getNumber() == 0){
		    std::cout << "DivisionByZeroError" << std::endl;
		    (yyval.ast) = new IntNumber('I',0);
	    }
        else{		
		    Ast* div = new DivExp((yyvsp[-2].ast),(yyvsp[0].ast));
		    (yyval.ast) = div->getOutput((yyvsp[-2].ast),(yyvsp[0].ast)); 
        }		
	}
#line 2464 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 659 "parse.y" /* yacc.c:1646  */
    {
	    if((yyvsp[-2].ast)->getNodetype() == 'V'){
		    (yyvsp[-2].ast) = TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable());
	    } 
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
		    (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    }
	    if((yyvsp[0].ast)->getNumber() == 0){
		    std::cout << "DivisionByZeroError" << std::endl;
		    (yyval.ast) = new IntNumber('I',0);
        }
	    else {
		    Ast* percent = new ModExp((yyvsp[-2].ast),(yyvsp[0].ast));
		    (yyval.ast) = percent->getOutput((yyvsp[-2].ast),(yyvsp[0].ast));
	    }
	}
#line 2485 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 675 "parse.y" /* yacc.c:1646  */
    {     
	    if((yyvsp[-2].ast)->getNodetype() == 'V'){
		    (yyvsp[-2].ast) = TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable());
	    } 
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
		    (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
        }
	    if((yyvsp[0].ast)->getNumber() == 0){
		    std::cout << "DivisionByZeroError" << std::endl;
		    (yyval.ast) = new IntNumber('I',0);
	    }	
	    else {
		    Ast* dslash = new DoubleSlashExp((yyvsp[-2].ast),(yyvsp[0].ast));
		    (yyval.ast) = dslash->getOutput((yyvsp[-2].ast),(yyvsp[0].ast));
        }	
	}
#line 2506 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 693 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2512 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 694 "parse.y" /* yacc.c:1646  */
    {
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
	      (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    } 
	    Ast* uminus = new UMinusExp((yyvsp[0].ast));
	    (yyval.ast) = uminus->getOutput((yyvsp[0].ast),NULL);
	}
#line 2524 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 701 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2530 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 702 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2536 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 705 "parse.y" /* yacc.c:1646  */
    { 
	    if((yyvsp[-3].ast)->getNodetype() == 'V'){
	        (yyvsp[-3].ast) = TableManager::getInstance().getEntry((yyvsp[-3].ast)->getVariable());
	    } 
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
	        (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    }
	    Ast* expo = new ExpoExp((yyvsp[-3].ast),(yyvsp[0].ast));
	    (yyval.ast) = expo->getOutput((yyvsp[-3].ast),(yyvsp[0].ast));     
	}
#line 2551 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 715 "parse.y" /* yacc.c:1646  */
    {   
	    if((yyvsp[0].ast)) {
		    (yyval.ast) = new CallNode();
		    (yyval.ast)->eval((yyvsp[-1].ast));
		    (yyval.ast)=(yyvsp[-1].ast);
		}
		else
            (yyval.ast) = (yyvsp[-1].ast);
	}
#line 2565 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 726 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new VoidNode(1); }
#line 2571 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 727 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0;}
#line 2577 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 730 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2583 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 731 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2589 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 732 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2595 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 733 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2601 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 734 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = new Variable('V',(yyvsp[0].c)); }
#line 2607 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 735 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = new IntNumber('I',atoi((yyvsp[0].c))); }
#line 2613 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 736 "parse.y" /* yacc.c:1646  */
    {
	    double d = atof((yyvsp[0].c));
	    (yyval.ast) = new FloatNumber('F',d); 
	}
#line 2622 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 740 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2628 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 743 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2634 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 744 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2640 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 747 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2646 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 748 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2652 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 751 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2658 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 752 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2664 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 755 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2670 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 756 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0;}
#line 2676 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 763 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2682 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 764 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2688 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 767 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2694 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 768 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2700 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 771 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2706 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 772 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2712 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 804 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2718 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 807 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-3].ast);}
#line 2724 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 808 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2730 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 811 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2736 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 812 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2742 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 815 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2748 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 816 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2754 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 819 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2760 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 820 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2766 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 823 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2772 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 824 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2778 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 868 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2784 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 869 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2790 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 876 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2796 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 877 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2802 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 916 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2808 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 917 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2814 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 918 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2820 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 2824 "parse.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 942 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}
