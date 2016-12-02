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

#include "ast.h"
#include "symboltable.h"
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

int yylex (void);
extern int yylineno;
extern char *yytext;
void yyerror (char const *);

#line 86 "parse.tab.cpp" /* yacc.c:339  */

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
# define YYDEBUG 1
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
#line 23 "parse.y" /* yacc.c:355  */

  Ast* ast;
  char* c;
  int i;
  std::vector<Ast*>* vec;

#line 220 "parse.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "parse.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   937

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  503

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
       0,    61,    61,    62,    63,    72,    73,    76,    79,    80,
      83,    84,    87,    88,    91,    92,    95,    96,    99,   100,
     103,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   127,   130,   131,   134,   137,   138,   141,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   155,   192,
     224,   256,   288,   321,   322,   323,   324,   325,   326,   358,
     390,   398,   399,   402,   403,   407,   443,   446,   447,   450,
     451,   454,   457,   460,   461,   462,   463,   464,   467,   470,
     473,   474,   477,   480,   481,   484,   485,   488,   489,   492,
     493,   496,   499,   500,   503,   504,   507,   508,   511,   512,
     513,   516,   517,   520,   521,   524,   527,   528,   531,   532,
     535,   536,   539,   540,   543,   544,   547,   548,   549,   550,
     551,   552,   553,   554,   557,   558,   561,   562,   565,   566,
     569,   570,   573,   574,   577,   578,   581,   582,   585,   586,
     589,   592,   593,   596,   597,   600,   601,   604,   605,   608,
     609,   613,   614,   620,   625,   632,   633,   636,   637,   640,
     641,   650,   651,   654,   655,   658,   659,   662,   663,   666,
     667,   670,   671,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   688,   689,   692,   693,   696,   697,
     700,   701,   704,   705,   708,   709,   719,   733,   734,   744,
     761,   778,   796,   797,   804,   805,   808,   818,   826,   827,
     830,   831,   832,   833,   834,   835,   836,   840,   843,   844,
     847,   848,   851,   852,   855,   856,   859,   860,   863,   864,
     867,   868,   871,   872,   875,   876,   877,   880,   883,   884,
     885,   888,   889,   892,   893,   896,   897,   900,   904,   907,
     908,   911,   912,   915,   916,   919,   920,   923,   924,   927,
     928,   929,   930,   931,   932,   935,   936,   939,   940,   943,
     944,   947,   948,   951,   952,   955,   956,   960,   961,   964,
     965,   968,   969,   972,   976,   977,   980,   981,   982,   985,
     986,   987,   990,   991,   992,   995,   996,   997,  1000,  1001,
    1002,  1005,  1006,  1007,  1011,  1012,  1013,  1016,  1017,  1018,
    1021,  1022,  1023,  1026,  1029,  1032,  1033,  1034,  1037,  1038,
    1039
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
  "opt_AS_COMMA", "suite", "plus_stmt", "testlist_safe", "old_test",
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

#define YYPACT_NINF -379

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-379)))

#define YYTABLE_NINF -303

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     400,   801,   -31,   801,  -379,    42,  -379,    44,   258,   258,
     258,    66,    65,   801,   -31,    22,   801,   718,   801,   258,
     160,   851,  -379,   258,   151,   801,   801,    95,   258,   150,
     801,   801,   801,  -379,  -379,   166,   175,  -379,  -379,   481,
     154,   170,    83,  -379,  -379,   179,  -379,   118,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,   171,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
     172,    69,   180,  -379,   345,   181,   177,   186,    63,     2,
      25,  -379,  -379,    50,  -379,  -379,    61,  -379,  -379,  -379,
    -379,   182,  -379,    24,  -379,    40,    47,   145,   113,  -379,
      33,   156,    43,   -31,   158,  -379,   190,  -379,   194,   153,
     801,     5,  -379,   196,    11,   184,   132,   155,  -379,   101,
    -379,   159,  -379,  -379,   134,   152,  -379,  -379,  -379,  -379,
     801,  -379,   172,   201,  -379,  -379,  -379,   634,   203,   205,
     216,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
     696,   174,   141,   801,  -379,   851,   851,  -379,   851,  -379,
    -379,  -379,  -379,  -379,   188,  -379,  -379,   202,  -379,   258,
     258,   258,   258,  -379,  -379,   258,   258,   258,   258,   258,
     258,   258,   148,    17,   769,   220,    50,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
    -379,   801,   157,    17,  -379,  -379,   801,   634,   801,     0,
     229,   258,  -379,   801,   801,  -379,  -379,    80,    -9,   634,
     -31,   162,  -379,   230,   191,   801,   168,   169,  -379,   801,
     242,   801,   258,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
     258,  -379,  -379,  -379,   243,  -379,   801,  -379,   221,  -379,
     147,   634,   801,   246,   258,   118,  -379,  -379,   172,    26,
     180,  -379,  -379,  -379,   181,   177,   186,    63,     2,    25,
      25,  -379,  -379,  -379,  -379,  -379,   801,   801,   200,   124,
    -379,   250,  -379,   251,   248,   255,   207,   256,   260,   258,
    -379,   245,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   213,  -379,
    -379,  -379,   217,  -379,   219,   634,   113,   263,   269,    -9,
     197,  -379,   279,  -379,   271,  -379,   280,  -379,  -379,     5,
    -379,  -379,  -379,  -379,   287,  -379,    20,  -379,   135,   265,
     272,   801,  -379,  -379,   263,   562,   801,   294,   286,   298,
     289,   205,   634,   181,  -379,  -379,   801,  -379,  -379,  -379,
     801,  -379,  -379,    17,   779,   296,  -379,   728,  -379,   801,
    -379,  -379,   268,   305,  -379,  -379,  -379,   801,  -379,   634,
    -379,   262,   233,   197,  -379,   801,   324,   230,   300,  -379,
    -379,   184,   801,  -379,  -379,  -379,   851,   829,   334,  -379,
     562,   333,    39,   634,   337,   323,   634,   340,  -379,  -379,
    -379,  -379,  -379,   342,  -379,  -379,  -379,   256,  -379,   341,
    -379,   634,  -379,   335,  -379,  -379,   271,   344,   347,  -379,
     275,   242,   351,    68,    28,    88,   353,  -379,   313,   801,
    -379,  -379,  -379,  -379,  -379,   801,  -379,  -379,   634,   356,
    -379,   346,   634,   779,  -379,   801,  -379,  -379,  -379,   358,
    -379,   634,   634,  -379,  -379,   801,   829,  -379,  -379,  -379,
     829,   359,   829,  -379,  -379,  -379,   829,  -379,  -379,  -379,
     634,  -379,  -379,  -379,  -379,   634,   280,  -379,   360,    89,
    -379,   829,    88,   361,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,   829,  -379
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    78,     0,    79,     0,     0,     0,
       0,    95,     0,     0,     0,    28,   225,   221,   223,     0,
       8,     0,    72,     0,    68,    84,    81,   227,     0,     0,
       0,     0,   285,   216,   215,   214,     0,     4,     2,    11,
       0,    17,     0,   123,   121,     9,    36,   320,    39,    40,
      41,    42,    43,    73,    74,    75,    77,    76,    44,    89,
      90,    45,    46,    47,    37,   116,   117,   118,   119,   120,
     297,   164,   165,   167,   170,   171,   184,   186,   188,   190,
     194,   197,   205,   209,   217,   162,    64,   122,     3,    82,
     214,   115,   108,     0,   281,     0,     0,     0,   291,    71,
     113,     0,    95,     0,     0,   111,     0,   106,    91,   104,
       0,     0,    33,     0,     0,    26,   297,     0,   224,   297,
     220,     0,   219,   218,   297,     0,   222,   203,   169,   202,
       0,    65,   297,    88,    80,   226,   204,     0,     0,   142,
     144,   284,     1,     8,    10,     9,     7,    16,    19,    18,
     319,     0,     0,   296,   248,     0,     0,   161,     0,   175,
     174,   176,   178,   180,   182,   177,   173,     0,   179,     0,
       0,     0,     0,   192,   193,     0,     0,     0,     0,     0,
       0,     0,     0,    15,   242,   207,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,    15,    13,   213,     0,     0,   258,    28,
       0,   290,   247,     0,     0,    94,    96,     0,     0,     0,
       0,     0,   233,   288,     0,     0,     0,     0,    23,     0,
     294,     0,     0,   250,   253,   254,   212,   230,   231,   210,
       0,   228,   229,   211,    70,    67,     0,    83,     0,   151,
       0,     0,     0,     0,     0,   320,    38,   110,   297,     0,
     166,   168,   183,   181,   172,   185,   187,   189,   191,   196,
     195,   201,   200,   199,   198,   236,     0,     0,     0,   268,
      14,   261,   264,   263,     0,   239,     0,   303,     0,     0,
     208,    64,    62,    61,    48,    49,    52,    51,    50,    53,
      55,    58,    56,    57,    54,    59,   114,   109,     0,   282,
     256,   257,     0,    22,     0,     0,   291,    86,     0,     0,
       0,    98,   102,    93,   306,   100,   127,   107,   103,   287,
      35,    34,   232,    32,    30,    25,    28,    24,   300,     0,
       0,     0,    66,    69,    86,     0,   146,     0,   137,     0,
     129,   142,     0,   143,   318,   295,     0,   313,   314,   234,
       0,   265,   267,   260,     0,     0,   235,   242,   237,   242,
     206,    63,     0,     0,    21,    20,   289,     0,   112,     0,
      92,     0,     0,   305,   105,     0,   125,   288,     0,    31,
      27,    26,   299,   249,   251,   252,     0,     0,   309,    87,
     154,     0,   150,     0,     0,   139,     0,     0,   141,   140,
     163,   266,   259,   317,   316,   262,   238,   303,   241,   244,
      12,     0,    85,   131,    99,   101,   306,     0,     0,   286,
       0,   294,     0,   278,    28,   272,   156,   158,   157,   308,
     307,   153,   152,   147,   148,     0,   145,   133,     0,     0,
     132,   135,     0,     0,   301,   246,   240,   243,   255,     0,
     304,     0,     0,    29,   292,     0,     0,   277,   275,   276,
       0,     0,     0,   271,   269,   270,     0,   155,   149,   136,
       0,   134,   128,   315,   245,     0,   127,   124,   300,   280,
     160,     0,   274,   312,   138,   130,   126,   298,   279,   159,
     273,   311,   310
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,  -379,  -379,  -379,  -379,   338,  -379,   178,   348,  -379,
     350,  -379,  -203,    -5,    46,  -379,  -379,   -97,  -379,    36,
       1,   237,  -379,   284,   102,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,    53,  -379,  -379,  -379,
    -379,   292,   297,    79,    19,   183,    84,  -379,     9,  -379,
    -379,  -379,  -379,  -379,   -86,  -379,  -379,  -379,   -46,  -379,
    -379,  -379,    58,   161,  -379,  -379,  -379,  -199,    14,  -379,
    -378,  -379,    -1,  -379,  -150,   264,   -11,  -379,  -379,    18,
     241,   252,   244,  -379,   247,   -21,   -10,  -379,   235,  -379,
    -379,  -379,  -379,  -379,   392,  -379,  -379,  -379,  -379,  -379,
      57,    56,  -379,  -379,    -7,   100,  -379,  -379,  -379,   384,
    -379,    64,  -343,  -379,   -63,   309,  -379,   -55,  -112,  -379,
    -379,  -379,   140,    48,   123,    12,   -85,   -48,    34,    32,
      62,   -32,  -342,  -379,    -8,   208
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   278,    42,    43,
      44,   210,   113,   230,   114,   389,   228,   115,   224,   400,
     249,    47,    48,   291,   200,    49,   131,   342,    50,    51,
      52,    53,    54,    55,    56,    57,   378,   247,    58,    59,
      60,   103,   104,   323,   324,   107,   325,   108,   109,    61,
      62,    63,    64,    65,   386,    66,    67,    68,   348,   405,
     450,    69,   253,   139,   349,   445,   446,   250,   401,   435,
     493,   437,    70,   157,    71,    72,    73,    74,   169,    75,
      76,    77,    78,   175,    79,    80,    81,    82,   185,    83,
     120,   121,   125,   117,    84,   126,   122,    85,   186,   286,
     287,   288,   456,   457,    99,    86,   118,   393,   233,    87,
     312,   280,   281,   361,   473,   474,   475,   467,   468,   469,
      95,    88,    89,   330,   212,   337,   154,   395,   368,   384,
     343,   477,   282,   283,   415,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    46,    94,   101,   234,   259,   314,   237,   310,   127,
     128,    93,   106,   129,   223,   116,   119,   124,   136,   436,
     326,   413,   414,   132,   133,     3,    98,   100,    98,   138,
     140,   235,   226,  -293,   238,   110,    45,   320,   276,   242,
      46,   470,   170,   202,   443,   178,   111,   245,   205,   356,
     176,   111,   350,   444,   206,    92,   321,   177,    15,    16,
     207,   313,   102,    17,    18,    19,   111,    21,   111,   182,
     203,   213,    23,   204,   111,   145,   227,   322,   156,   179,
     -97,  -293,   277,    27,    28,   102,   112,   187,   489,   180,
     181,   112,   490,   208,   492,     5,   183,   184,   232,   202,
       7,    33,    34,    90,   466,   155,   112,   173,   112,   222,
     413,   414,   217,   499,   112,   153,   375,   319,   240,   232,
     156,   156,   170,   174,   472,   466,   134,   211,    96,   244,
      97,   232,   141,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   231,   153,   261,   153,   392,
     360,   105,   258,   409,   232,   269,   270,   123,   221,     3,
      -5,    27,   232,   137,   240,   232,  -283,   362,   271,   272,
     273,   274,   202,   355,   346,   142,   347,     2,   146,    -6,
     423,   150,   279,   285,   158,   152,   153,   264,   171,   172,
     170,   209,    15,    16,   214,   218,   201,    17,    18,    19,
     306,    21,   279,   219,   447,   309,    23,   451,   220,   225,
     229,   130,   317,   236,   243,   246,   251,    27,    28,   252,
     239,   254,   458,   256,   332,   339,   394,   257,   335,   316,
     338,   471,   387,   340,   275,    33,    34,    90,   262,   391,
     263,   289,   315,   307,   329,   344,   433,   438,   328,   479,
      98,   140,   331,   482,   333,   334,   336,   341,    98,   352,
     345,   359,   486,   487,   363,   364,     3,   365,  -241,   366,
     367,   187,   353,   369,   372,   357,   358,   377,   373,   370,
     374,   494,   379,   322,   382,   383,   495,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
      16,   388,   385,   396,    17,    18,    19,   403,   311,   404,
     397,   406,   407,    23,   318,   416,   438,   420,   421,   425,
     438,   430,   438,   424,    27,    28,   438,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     398,   438,    33,    34,    90,   402,    46,   428,   439,   442,
     448,   438,   449,   452,   455,   410,   453,   461,   459,   411,
     462,   463,   279,   279,   465,   156,   285,   476,   418,   480,
     159,   485,   491,   346,   392,   501,   422,   144,   160,   161,
     162,   308,   390,   163,   427,   164,   431,   255,   165,   147,
     166,   432,   148,   371,   215,   167,   168,   399,   380,   216,
     496,    46,   426,   327,   381,   481,     1,     2,     3,   408,
       4,   265,     5,   351,   441,     6,   267,     7,     8,   135,
     260,   290,   268,   266,   417,   419,   149,   412,     9,   500,
      10,    11,    12,   241,   498,   429,    13,    14,   398,   376,
     497,    15,    16,   464,   478,   483,    17,    18,    19,    20,
      21,   454,   279,    22,   484,    23,    24,    25,   460,    26,
     440,   502,     0,   354,   488,     0,    27,    28,    29,    30,
      31,    32,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,    33,    34,    35,     1,     2,     3,
       0,     4,     0,     5,     0,     0,     6,     0,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    10,    11,    12,     0,     0,     0,    13,    14,     0,
       0,     0,    15,    16,     0,     0,     0,    17,    18,    19,
     143,    21,     0,     0,    22,     0,    23,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    90,     1,     2,
       3,     0,     4,     0,     5,     0,     0,     6,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,    10,    11,    12,     0,     0,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,     0,    17,    18,
      19,     0,    21,     0,     0,    22,     0,    23,    24,    25,
       0,    26,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       1,     0,     3,     0,     4,     0,    33,    34,    90,     6,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    11,    12,     0,     0,     0,
       0,    14,     0,     0,     0,    15,    16,     0,     0,     0,
      17,    18,    19,   248,    21,     0,     0,    22,     0,    23,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
      27,    28,     1,     0,     3,    32,     4,     0,     0,     0,
       0,     6,     0,     0,     8,     0,     0,     0,    33,    34,
      90,     0,     0,     0,     9,     0,     3,    11,    12,     0,
       0,     0,     0,    14,     0,     0,     3,    15,    16,     0,
       0,     0,    17,    18,    19,     0,    21,   284,     0,    22,
       0,    23,    24,    25,     0,    26,     0,     0,     0,    15,
      16,     0,    27,    28,    17,    18,    19,    32,    21,    15,
      16,     0,     0,    23,    17,    18,    19,     3,    21,     0,
      33,    34,    90,    23,    27,    28,     0,     3,   284,    32,
    -302,     0,     0,     0,    27,    28,     0,     0,     0,     0,
     276,     0,    33,    34,    90,     0,     0,     0,     0,     3,
      15,    16,    33,    34,    90,    17,    18,    19,     0,    21,
      15,    16,     0,     0,    23,    17,    18,    19,     0,    21,
       0,     0,     0,     0,    23,    27,    28,     3,     0,     0,
       0,     0,    15,    16,     0,    27,    28,    17,    18,    19,
       0,    21,     0,    33,    34,    90,    23,     0,     0,     3,
       0,     0,     0,    33,    34,    90,     0,    27,    28,     0,
     434,    16,     0,     0,     0,    17,    18,    19,     0,    21,
       0,     0,     0,     0,    23,    33,    34,    90,     0,     0,
       0,     0,     0,    16,     0,    27,    28,    17,    18,    19,
       0,    21,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    33,    34,    90,     0,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    90
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,    10,   116,   155,   209,   119,   207,    19,
      21,     2,    13,    23,   111,    16,    17,    18,    28,   397,
     219,   364,   364,    24,    25,     8,     8,     9,    10,    30,
      31,   116,    21,    13,   119,    13,     0,    46,    21,   124,
      39,    13,     9,    19,     5,    20,    46,   132,     8,    23,
      48,    46,   251,    14,    14,    86,    65,    55,    41,    42,
      13,    61,    19,    46,    47,    48,    46,    50,    46,    19,
      46,    38,    55,    49,    46,    39,    65,    86,    52,    54,
      37,    61,    65,    66,    67,    19,    86,    26,   466,    64,
      65,    86,   470,    46,   472,    12,    46,    47,    30,    19,
      17,    84,    85,    86,    36,    36,    86,    44,    86,   110,
     453,   453,   103,   491,    86,    14,   315,    37,    30,    30,
      52,    52,     9,    60,    36,    36,    26,    14,    86,   130,
      86,    30,    32,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    13,    14,   158,    14,    14,
      26,    86,   153,   352,    30,   176,   177,    17,     5,     8,
       0,    66,    30,    13,    30,    30,     0,   279,   178,   179,
     180,   181,    19,   258,    27,     0,    29,     7,    24,     0,
     379,    63,   183,   184,     4,    14,    14,   169,    11,     3,
       9,    46,    41,    42,    38,    37,    14,    46,    47,    48,
     201,    50,   203,    13,   403,   206,    55,   406,    14,    13,
      26,    60,   213,    58,    62,    14,    13,    66,    67,    14,
      61,     5,   421,    49,   225,   232,   338,    86,   229,   211,
     231,   434,   329,   240,    86,    84,    85,    86,    50,   336,
      38,    21,    13,    86,    14,   246,   396,   397,    86,   448,
     232,   252,    61,   452,    86,    86,    14,    14,   240,    13,
      39,    61,   461,   462,    14,    14,     8,    19,    13,    62,
      14,    26,   254,    13,    61,   276,   277,    14,    61,   289,
      61,   480,    13,    86,     5,    14,   485,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      42,    14,    22,    38,    46,    47,    48,    13,   208,    23,
      38,    13,    23,    55,   214,    19,   466,    49,    13,    86,
     470,    21,   472,    61,    66,    67,   476,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     341,   491,    84,    85,    86,   346,   345,    23,    14,    16,
      13,   501,    29,    13,    13,   356,    14,    13,    23,   360,
      13,    86,   363,   364,    13,    52,   367,    14,   369,    13,
      25,    13,    13,    27,    14,    14,   377,    39,    33,    34,
      35,   203,   336,    38,   385,    40,   391,   150,    43,    41,
      45,   392,    42,   291,   102,    50,    51,   344,   319,   102,
     486,   400,   383,   220,   320,   451,     6,     7,     8,   351,
      10,   170,    12,   252,   400,    15,   172,    17,    18,    27,
     156,   186,   175,   171,   367,   369,    42,   363,    28,   492,
      30,    31,    32,   124,   489,   387,    36,    37,   439,   316,
     488,    41,    42,   431,   445,   453,    46,    47,    48,    49,
      50,   417,   453,    53,   455,    55,    56,    57,   426,    59,
     398,   493,    -1,   255,   465,    -1,    66,    67,    68,    69,
      70,    71,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    84,    85,    86,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    50,    -1,    -1,    53,    -1,    55,    56,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,     8,    -1,    10,    -1,    84,    85,    86,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    -1,    55,
      56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,     6,    -1,     8,    71,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    -1,    28,    -1,     8,    31,    32,    -1,
      -1,    -1,    -1,    37,    -1,    -1,     8,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    19,    -1,    53,
      -1,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    41,
      42,    -1,    66,    67,    46,    47,    48,    71,    50,    41,
      42,    -1,    -1,    55,    46,    47,    48,     8,    50,    -1,
      84,    85,    86,    55,    66,    67,    -1,     8,    19,    71,
      62,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      21,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,     8,
      41,    42,    84,    85,    86,    46,    47,    48,    -1,    50,
      41,    42,    -1,    -1,    55,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    55,    66,    67,     8,    -1,    -1,
      -1,    -1,    41,    42,    -1,    66,    67,    46,    47,    48,
      -1,    50,    -1,    84,    85,    86,    55,    -1,    -1,     8,
      -1,    -1,    -1,    84,    85,    86,    -1,    66,    67,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    55,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    66,    67,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86
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
     159,   161,   162,   163,   164,   166,   167,   168,   169,   171,
     172,   173,   174,   176,   181,   184,   192,   196,   208,   209,
      86,   159,    86,   135,   159,   207,    86,    86,   166,   191,
     166,   191,    19,   128,   129,    86,   159,   132,   134,   135,
      13,    46,    86,    99,   101,   104,   159,   180,   193,   159,
     177,   178,   183,   209,   159,   179,   182,   173,   163,   173,
      60,   113,   159,   159,   192,   181,   173,    13,   159,   150,
     159,   192,     0,    49,    92,   106,    24,    95,    97,   196,
      63,   222,    14,    14,   213,    36,    52,   160,     4,    25,
      33,    34,    35,    38,    40,    43,    45,    50,    51,   165,
       9,    11,     3,    44,    60,   170,    48,    55,    20,    54,
      64,    65,    19,    46,    47,   175,   185,    26,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     111,    14,    19,    46,    49,     8,    14,    13,    46,    46,
      98,    14,   211,    38,    38,   128,   129,   135,    37,    13,
      14,     5,   159,   104,   105,    13,    21,    65,   103,    26,
     100,    13,    30,   195,   205,   213,    58,   205,   213,    61,
      30,   202,   213,    62,   159,   213,    14,   124,    49,   107,
     154,    13,    14,   149,     5,   108,    49,    86,   159,   161,
     162,   163,    50,    38,   166,   167,   168,   169,   171,   172,
     172,   173,   173,   173,   173,    86,    21,    65,    94,   159,
     198,   199,   219,   220,    19,   159,   186,   187,   188,    21,
     175,   110,   192,   209,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   159,    86,    94,   159,
     154,   192,   197,    61,    99,    13,   166,   159,   192,    37,
      46,    65,    86,   130,   131,   133,   154,   132,    86,    14,
     210,    61,   159,    86,    86,   159,    14,   212,   159,   191,
     191,    14,   114,   217,   159,    39,    27,    29,   145,   151,
     154,   150,    13,   166,   222,   213,    23,   159,   159,    61,
      26,   200,   205,    14,    14,    19,    62,    14,   215,    13,
     173,   111,    61,    61,    61,   154,   211,    14,   123,    13,
     130,   133,     5,    14,   216,    22,   141,   104,    14,   102,
     101,   104,    14,   194,   205,   214,    38,    38,   159,   123,
     106,   155,   159,    13,    23,   146,    13,    23,   149,   154,
     159,   159,   198,   199,   219,   221,    19,   187,   159,   188,
      49,    13,   159,   154,    61,    86,   131,   159,    23,   210,
      21,   100,   159,   161,    41,   156,   157,   158,   161,    14,
     217,   155,    16,     5,    14,   152,   153,   154,    13,    29,
     147,   154,    13,    14,   215,    13,   189,   190,   154,    23,
     216,    13,    13,    86,   212,    13,    36,   204,   205,   206,
      13,    99,    36,   201,   202,   203,    14,   218,   159,   154,
      13,   145,   154,   221,   159,    13,   154,   154,   159,   157,
     157,    13,   157,   157,   154,   154,   141,   214,   204,   157,
     201,    14,   218
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
     153,   154,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   185,   186,   187,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     198,   198,   198,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   209,   209,   210,   210,   210,   211,
     211,   211,   212,   212,   212,   213,   213,   213,   214,   214,
     214,   215,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   218,   219,   220,   221,   221,   221,   222,   222,
     222
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
       0,     1,     4,     2,     1,     2,     1,     1,     1,     4,
       3,     2,     1,     4,     0,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     2,     2,     2,     1,     4,     2,     2,     0,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     2,     1,     2,     2,
       2,     2,     4,     3,     3,     3,     2,     2,     3,     1,
       4,     1,     0,     1,     0,     2,     1,     2,     2,     4,
       2,     1,     1,     1,     1,     7,     4,     1,     0,     3,
       2,     1,     3,     1,     1,     2,     3,     1,     0,     1,
       1,     5,     4,     3,     2,     1,     1,     5,     4,     3,
       2,     1,     3,     1,     2,     1,     3,     1,     0,     3,
       1,     0,     4,     1,     0,     3,     1,     0,     5,     1,
       0,     3,     1,     0,     3,     1,     0,     3,     3,     2,
       3,     3,     2,     2,     2,     3,     1,     1,     3,     1,
       0
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
#line 79 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 1817 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 80 "parse.y" /* yacc.c:1646  */
    { }
#line 1823 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 1829 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast); }
#line 1835 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 103 "parse.y" /* yacc.c:1646  */
    { TableManager::getInstance().pushScope();(yyval.ast) = new FuncNode((yyvsp[-3].c),(yyvsp[0].ast));}
#line 1841 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 137 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1847 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 138 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1853 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 141 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-2].ast);}
#line 1859 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 144 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1865 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1871 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 155 "parse.y" /* yacc.c:1646  */
    {

	Ast* a;
	if((yyvsp[0].ast)->getNodetype() == 'V') {
	  a = new PlusExp( 
                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                         TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                         );
	  SymbolTable s;
	  s.insert(
                                        (yyvsp[-2].ast)->getVariable(),
                                        a->getOutput(
                                                     TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                     TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                    )
                                            );
	  TableManager::getInstance().addTable(s); 
											
	}
	else {
	  a = new PlusExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                         );
	  SymbolTable s;
	  s.insert(
                                        (yyvsp[-2].ast)->getVariable(),
                                        a->getOutput(
                                                    TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                     (yyvsp[0].ast)
                                                    )
                                            );
	  TableManager::getInstance().addTable(s); 
	}
      	
	  std::cout << ">>> " ; 
	}
#line 1913 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 192 "parse.y" /* yacc.c:1646  */
    { 
	  Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new MinusExp(
                           TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                           TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                           );
	  SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                      TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                      TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                        )
                                            );
	}
	else {
	  a = new MinusExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                         (yyvsp[0].ast)
                                                        )
                                            );
        }	  
	   std::cout << ">>> " ;  
        }
#line 1950 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 224 "parse.y" /* yacc.c:1646  */
    { 
	   Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	    a = new MultExp(
                           TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                           TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                           );
	  SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                      TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                      TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                        )
                                            );
	}
	else {
	  a = new MultExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                         (yyvsp[0].ast)
                                                        )
                                            );
        }	  
	   std::cout << ">>> " ;  
	}
#line 1987 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 256 "parse.y" /* yacc.c:1646  */
    { 
	 Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new DivExp(
                           TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                           TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                           );
	  SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                      TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                      TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                        )
                                            );
	}
	else {
	  a = new DivExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                         (yyvsp[0].ast)
                                                        )
                                            );
        }	  
	   std::cout << ">>> " ;  
	}
#line 2024 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 288 "parse.y" /* yacc.c:1646  */
    { 
	  Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new ModExp(
                           TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                           TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                           );
	  SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                      TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                      TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                        )
                                            );
	}
	else {
	  a = new ModExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                         (yyvsp[0].ast)
                                                        )
                                            );
        }	  
	   std::cout << ">>> " ;  
	}
#line 2061 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 326 "parse.y" /* yacc.c:1646  */
    { 
	 Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new ExpoExp(
                           TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                           TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                           );
	  SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                      TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                      TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                        )
                                            );
	}
	else {
	  a = new ExpoExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                         (yyvsp[0].ast)
                                                        )
                                            );
        }	  
	   std::cout << ">>> " ;  
	}
#line 2098 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 358 "parse.y" /* yacc.c:1646  */
    { 
	Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new DoubleSlashExp(
                           TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                           TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                           );
	  SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                      TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                      TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable())
                                                        )
                                            );
	}
	else {
	  a = new DoubleSlashExp(
                          TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 SymbolTable s;
	  s.insert(
                                            (yyvsp[-2].ast)->getVariable(),
                                            a->getOutput(
                                                         TableManager::getInstance().getEntry((yyvsp[-2].ast)->getVariable()),
                                                         (yyvsp[0].ast)
                                                        )
                                            );
        }	  
	   std::cout << ">>> " ;  
	}
#line 2135 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 390 "parse.y" /* yacc.c:1646  */
    {
	    SymbolTable symb;
		symb.insert((yyvsp[-1].ast)->getVariable(),(yyvsp[0].ast));
	    TableManager::getInstance().addTable(symb); 
	    std::cout << ">>> ";
	}
#line 2146 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 398 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2152 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 399 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2158 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 402 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)= (yyvsp[-1].ast); }
#line 2164 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 403 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2170 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 407 "parse.y" /* yacc.c:1646  */
    {
         if(TableManager::getInstance().getCurrentScope() == 0)	{
	     (yyval.ast) = new PrintNode((yyvsp[0].ast));
	     if((yyvsp[0].ast)->getNodetype() == 'V'){
		  if(TableManager::getInstance().checkName((yyvsp[0].ast)->getVariable()) ){
		      if((TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable()))->getNodetype() == 'F'){
			std::cout << std::fixed << std::setprecision(3) << "= " 
                                                << (TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable()))->getNumber() 
                                                << std::endl << ">>> "; 
		      }
                      else {
			std::cout << "= " 
                                  << (TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable()))->getNumber() 
                                  << std::endl << ">>> "; 
                      }
			
                 }
		 else  { 
		   std::cout << "symbol not initialized" << std::endl;
		 }
	    }
            else {
	         if(eval((yyvsp[0].ast))->getNodetype() == 'F')
	            std::cout << std::fixed << std::setprecision(3) << "= " << (eval((yyvsp[0].ast))->getNumber()) << std::endl << ">>> "; 
		else
		    std::cout << "= " << (eval((yyvsp[0].ast))->getNumber()) << std::endl << ">>> "; 
	    }
		}
		else {
		   (yyval.ast) = new PrintNode((yyvsp[0].ast));
           		   
		}
		
	    //treeFree($2);
	    //SymbolTable::getInstance().display(); 
	}
#line 2211 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 443 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2217 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 446 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2223 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 447 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2229 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 450 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2235 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 451 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2241 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 454 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2247 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 457 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2253 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 467 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2259 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 470 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) =0; }
#line 2265 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 473 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ReturnNode((yyvsp[0].ast)); }
#line 2271 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 474 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) =0; }
#line 2277 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 480 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2283 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 481 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2289 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 492 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2295 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 493 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2301 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 536 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2307 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 539 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-3].ast);}
#line 2313 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 540 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2319 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 543 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-2].ast);}
#line 2325 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 544 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2331 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 557 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2337 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 558 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2343 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 565 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2349 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 566 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2355 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 569 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-3].ast);}
#line 2361 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 570 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) =(yyvsp[0].ast);}
#line 2367 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 573 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[-3].ast);}
#line 2373 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 574 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-3].ast);}
#line 2379 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 589 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2385 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 613 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)= (yyvsp[0].ast);}
#line 2391 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 614 "parse.y" /* yacc.c:1646  */
    { 
	       (yyval.ast) = new SuiteNode((yyvsp[-1].vec)->rbegin(), (yyvsp[-1].vec)->rend()); 
		   TableManager::getInstance().pushScope(); 
	}
#line 2400 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 620 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.vec)= (yyvsp[0].vec); 
		(yyval.vec)->push_back((yyvsp[-1].ast));
	}
#line 2409 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 625 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.vec) = new std::vector<Ast*>();
		(yyval.vec)->reserve(4);
		(yyval.vec)->push_back((yyvsp[0].ast));
	}
#line 2419 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 650 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-1].ast); }
#line 2425 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 651 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2431 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 658 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2437 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 662 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2443 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 666 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2449 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 670 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2455 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 688 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2461 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 692 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2467 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 696 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2473 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 700 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2479 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 708 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2485 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 709 "parse.y" /* yacc.c:1646  */
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
#line 2500 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 719 "parse.y" /* yacc.c:1646  */
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
#line 2517 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 733 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2523 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 734 "parse.y" /* yacc.c:1646  */
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
#line 2538 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 744 "parse.y" /* yacc.c:1646  */
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
#line 2560 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 761 "parse.y" /* yacc.c:1646  */
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
#line 2582 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 778 "parse.y" /* yacc.c:1646  */
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
#line 2603 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 796 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2609 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 797 "parse.y" /* yacc.c:1646  */
    {
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
	      (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    } 
	    Ast* uminus = new UMinusExp((yyvsp[0].ast));
	    (yyval.ast) = uminus->getOutput((yyvsp[0].ast),NULL);
	}
#line 2621 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 804 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2627 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 805 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2633 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 808 "parse.y" /* yacc.c:1646  */
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
#line 2648 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 818 "parse.y" /* yacc.c:1646  */
    {  
	    if((yyvsp[0].ast)) 
		    (yyval.ast)= new CallNode((yyvsp[-1].ast));
		else
            (yyval.ast) = (yyvsp[-1].ast);		
	}
#line 2659 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 826 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2665 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 827 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2671 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 830 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2677 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 831 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2683 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 832 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2689 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 833 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2695 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 834 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = new Variable('V',(yyvsp[0].c));  }
#line 2701 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 835 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = new IntNumber('I',atoi((yyvsp[0].c)));}
#line 2707 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 836 "parse.y" /* yacc.c:1646  */
    {
	    double d = atof((yyvsp[0].c));
	    (yyval.ast) = new FloatNumber('F',d); 
	}
#line 2716 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 840 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2722 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 843 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2728 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 844 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2734 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 847 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2740 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 848 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2746 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 851 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2752 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 852 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2758 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 855 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2764 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 856 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2770 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 863 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);}
#line 2776 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 864 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);}
#line 2782 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 867 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2788 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 868 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2794 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 871 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2800 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 872 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2806 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 904 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast); }
#line 2812 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 907 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-3].ast);}
#line 2818 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 908 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2824 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 911 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2830 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 912 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2836 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 915 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2842 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 916 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2848 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 919 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2854 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 920 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2860 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 923 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2866 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 924 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2872 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 968 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2878 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 969 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2884 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 976 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2890 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 977 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2896 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1016 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2902 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1017 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2908 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1018 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2914 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 2918 "parse.tab.cpp" /* yacc.c:1646  */
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
#line 1042 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}
