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
#define YYFINAL  141
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   941

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  501

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
       0,    60,    60,    61,    75,    78,    79,    82,    83,    86,
      87,    90,    91,    94,    95,    98,    99,   102,   109,   110,
     113,   114,   117,   118,   121,   122,   125,   126,   129,   130,
     133,   134,   137,   140,   141,   144,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   158,   199,   234,   268,   294,
     321,   322,   323,   324,   325,   326,   351,   377,   391,   392,
     395,   396,   400,   433,   436,   437,   440,   441,   444,   447,
     450,   451,   452,   453,   454,   457,   460,   463,   464,   467,
     470,   471,   474,   475,   478,   479,   482,   483,   486,   489,
     490,   493,   494,   497,   498,   501,   502,   503,   506,   507,
     510,   511,   514,   517,   518,   521,   522,   525,   526,   529,
     530,   533,   534,   537,   538,   539,   540,   541,   542,   543,
     544,   547,   548,   551,   552,   555,   556,   559,   560,   563,
     564,   567,   568,   571,   572,   575,   576,   579,   582,   583,
     586,   587,   590,   591,   594,   595,   598,   599,   603,   604,
     604,   612,   617,   624,   625,   628,   629,   632,   633,   642,
     643,   646,   647,   650,   651,   654,   655,   658,   659,   662,
     663,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   680,   681,   684,   685,   688,   689,   692,   693,
     696,   697,   700,   701,   711,   725,   726,   736,   753,   770,
     788,   789,   796,   797,   800,   810,   823,   824,   827,   828,
     829,   830,   831,   832,   833,   837,   840,   841,   844,   845,
     848,   849,   852,   853,   856,   857,   860,   861,   864,   865,
     868,   869,   872,   873,   874,   877,   880,   881,   882,   885,
     886,   889,   890,   893,   894,   897,   901,   904,   905,   908,
     909,   912,   913,   916,   917,   920,   921,   924,   925,   926,
     927,   928,   929,   932,   933,   936,   937,   940,   941,   944,
     945,   948,   949,   952,   953,   957,   958,   961,   962,   965,
     966,   969,   973,   974,   977,   978,   979,   982,   983,   984,
     987,   988,   989,   992,   993,   994,   997,   998,   999,  1002,
    1003,  1004,  1008,  1009,  1010,  1013,  1014,  1015,  1018,  1019,
    1020,  1023,  1026,  1029,  1030,  1031,  1034,  1035,  1036
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
  "INTNUMBER", "NAME", "$accept", "start", "file_input",
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

#define YYPACT_NINF -384

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-384)))

#define YYTABLE_NINF -301

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     415,   825,   -50,   825,  -384,   -27,  -384,    10,    56,    56,
      56,   107,    19,   825,   -50,    31,   825,   733,   825,    56,
    -384,   168,  -384,    56,   743,   825,   825,    78,    56,   143,
     825,   825,   825,  -384,  -384,   167,   169,  -384,   496,   144,
     166,   153,  -384,  -384,  -384,  -384,   111,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
     161,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,   163,
      85,   177,  -384,   890,   173,   172,   182,    86,    42,     2,
    -384,  -384,    69,  -384,  -384,   327,  -384,  -384,  -384,  -384,
     174,  -384,    46,  -384,   131,    24,   141,   157,  -384,    36,
     148,    75,   -50,   152,  -384,   178,  -384,   176,    52,   825,
      -8,  -384,   180,     4,   170,   120,   136,  -384,   118,  -384,
     134,  -384,  -384,   122,   138,  -384,  -384,  -384,  -384,   825,
    -384,   163,   184,  -384,  -384,  -384,   649,   190,   191,   201,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,   711,   158,   125,
     825,  -384,   168,   168,  -384,   168,  -384,  -384,  -384,  -384,
    -384,   162,  -384,  -384,   175,  -384,    56,    56,    56,    56,
    -384,  -384,    56,    56,    56,    56,    56,    56,    56,   142,
      34,   793,   187,    69,   733,   733,   733,   733,   733,   733,
     733,   733,   733,   733,   733,   733,   733,  -384,   825,   147,
      34,  -384,  -384,   825,   649,   825,     0,   204,    56,  -384,
     825,   825,  -384,  -384,    94,   -13,   649,   -50,   150,  -384,
     206,   179,   825,   155,   171,  -384,   825,   208,   825,    56,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,    56,  -384,  -384,
    -384,   215,  -384,   825,  -384,   199,  -384,    33,   649,   825,
     226,    56,   111,  -384,  -384,   163,    20,   177,  -384,  -384,
    -384,   173,   172,   182,    86,    42,     2,     2,  -384,  -384,
    -384,  -384,  -384,   825,   825,   188,   129,  -384,   229,  -384,
     242,   239,   248,   200,   249,   251,    56,  -384,   240,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,   207,  -384,  -384,  -384,   209,
    -384,   213,   649,   157,   253,   252,   -13,   189,  -384,   271,
    -384,   263,  -384,   256,  -384,  -384,    -8,  -384,  -384,  -384,
    -384,   265,  -384,     7,  -384,   124,   243,   244,   825,  -384,
    -384,   253,  -384,   825,   270,   261,   273,   277,   191,   649,
     173,  -384,  -384,   825,  -384,  -384,  -384,   825,  -384,  -384,
      34,   803,   282,  -384,   330,  -384,   825,  -384,  -384,   254,
     289,  -384,  -384,  -384,   825,  -384,   649,  -384,   245,   218,
     189,  -384,   825,   284,   206,   288,  -384,  -384,   170,   825,
    -384,  -384,  -384,   168,   853,   291,  -384,   577,    44,   649,
     297,   283,   649,   298,  -384,  -384,  -384,  -384,  -384,   301,
    -384,  -384,  -384,   249,  -384,   303,  -384,   649,  -384,   295,
    -384,  -384,   263,   307,   308,  -384,   236,   208,   326,    11,
      41,   117,   329,  -384,   292,   825,  -384,   577,   325,  -384,
    -384,   825,  -384,  -384,   649,   332,  -384,   319,   649,   803,
    -384,   825,  -384,  -384,  -384,   334,  -384,   649,   649,  -384,
    -384,   825,   853,  -384,  -384,  -384,   853,   335,   853,  -384,
    -384,  -384,   853,  -384,  -384,  -384,  -384,  -384,   649,  -384,
    -384,  -384,  -384,   649,   256,  -384,   337,   128,  -384,   853,
     117,   340,  -384,  -384,  -384,  -384,  -384,  -384,  -384,   853,
    -384
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       8,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,    92,     0,     0,     0,    25,   223,   219,   221,     0,
       5,     0,    69,     0,    65,    81,    78,   225,     0,     0,
       0,     0,   283,   214,   213,   212,     0,     2,     8,     0,
      14,     0,   120,   118,     6,    33,   318,    36,    37,    38,
      39,    40,    70,    71,    72,    74,    73,    41,    86,    87,
      42,    43,    44,    34,   113,   114,   115,   116,   117,   295,
     162,   163,   165,   168,   169,   182,   184,   186,   188,   192,
     195,   203,   207,   215,   160,    61,   119,     3,    79,   212,
     112,   105,     0,   279,     0,     0,     0,   289,    68,   110,
       0,    92,     0,     0,   108,     0,   103,    88,   101,     0,
       0,    30,     0,     0,    23,   295,     0,   222,   295,   218,
       0,   217,   216,   295,     0,   220,   201,   167,   200,     0,
      62,   295,    85,    77,   224,   202,     0,     0,   139,   141,
     282,     1,     7,     4,    13,    16,    15,   317,     0,     0,
     294,   246,     0,     0,   159,     0,   173,   172,   174,   176,
     178,   180,   175,   171,     0,   177,     0,     0,     0,     0,
     190,   191,     0,     0,     0,     0,     0,     0,     0,     0,
      12,   240,   205,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,     0,
      12,    10,   211,     0,     0,   256,    25,     0,   288,   245,
       0,     0,    91,    93,     0,     0,     0,     0,     0,   231,
     286,     0,     0,     0,     0,    20,     0,   292,     0,     0,
     248,   251,   252,   210,   228,   229,   208,     0,   226,   227,
     209,    67,    64,     0,    80,     0,   148,     0,     0,     0,
       0,     0,   318,    35,   107,   295,     0,   164,   166,   181,
     179,   170,   183,   185,   187,   189,   194,   193,   199,   198,
     197,   196,   234,     0,     0,     0,   266,    11,   259,   262,
     261,     0,   237,     0,   301,     0,     0,   206,    61,    59,
      58,    45,    46,    49,    48,    47,    50,    52,    55,    53,
      54,    51,    56,   111,   106,     0,   280,   254,   255,     0,
      19,     0,     0,   289,    83,     0,     0,     0,    95,    99,
      90,   304,    97,   124,   104,   100,   285,    32,    31,   230,
      29,    27,    22,    25,    21,   298,     0,     0,     0,    63,
      66,    83,   149,   143,     0,   134,     0,   126,   139,     0,
     140,   316,   293,     0,   311,   312,   232,     0,   263,   265,
     258,     0,     0,   233,   240,   235,   240,   204,    60,     0,
       0,    18,    17,   287,     0,   109,     0,    89,     0,     0,
     303,   102,     0,   122,   286,     0,    28,    24,    23,   297,
     247,   249,   250,     0,     0,   307,    84,     0,   147,     0,
       0,   136,     0,     0,   138,   137,   161,   264,   257,   315,
     314,   260,   236,   301,   239,   242,     9,     0,    82,   128,
      96,    98,   304,     0,     0,   284,     0,   292,     0,   276,
      25,   270,   154,   156,   155,   306,   305,   152,     0,   144,
     145,     0,   142,   130,     0,     0,   129,   132,     0,     0,
     299,   244,   238,   241,   253,     0,   302,     0,     0,    26,
     290,     0,     0,   275,   273,   274,     0,     0,     0,   269,
     267,   268,     0,   153,   151,   150,   146,   133,     0,   131,
     125,   313,   243,     0,   124,   121,   298,   278,   158,     0,
     272,   310,   135,   127,   123,   296,   277,   157,   271,   309,
     308
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -384,  -384,  -384,  -384,   317,  -384,   164,   318,  -384,   316,
    -384,  -199,   -26,    28,  -384,  -384,   -96,  -384,  -346,     1,
     219,  -384,   302,    79,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,    27,  -384,  -384,  -384,  -384,
     268,   269,    58,     3,   165,    62,  -384,     8,  -384,  -384,
    -384,  -384,  -384,  -109,  -384,  -384,  -384,   -63,  -384,  -384,
    -384,    38,   145,  -384,  -384,  -384,  -198,  -384,   -48,  -384,
    -383,  -384,    -1,  -384,  -149,   234,   -12,  -384,  -384,    18,
     223,   225,   222,  -384,   241,   -49,   -15,  -384,   212,  -384,
    -384,  -384,  -384,  -384,   384,  -384,  -384,  -384,  -384,  -384,
      48,    51,  -384,  -384,    -5,   103,  -384,  -384,  -384,   377,
    -384,    59,  -342,  -384,   -70,   305,  -384,   -61,   -84,  -384,
    -384,  -384,   140,    40,   116,     9,   -83,   -55,    22,    15,
      47,   -52,  -340,  -384,     5,   192
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,   275,    41,    42,    43,
     207,   112,   227,   113,   386,   225,   114,   221,    44,   246,
      46,    47,   288,   197,    48,   130,   339,    49,    50,    51,
      52,    53,    54,    55,    56,   375,   244,    57,    58,    59,
     102,   103,   320,   321,   106,   322,   107,   108,    60,    61,
      62,    63,    64,   383,    65,    66,    67,   345,   401,   446,
      68,   250,   138,   346,   441,   442,   247,   397,   438,   431,
     491,   433,    69,   154,    70,    71,    72,    73,   166,    74,
      75,    76,    77,   172,    78,    79,    80,    81,   182,    82,
     119,   120,   124,   116,    83,   125,   121,    84,   183,   283,
     284,   285,   452,   453,    98,    85,   117,   390,   230,    86,
     309,   277,   278,   358,   469,   470,   471,   463,   464,   465,
      94,    87,    88,   327,   209,   334,   151,   392,   365,   381,
     340,   473,   279,   280,   411,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    45,    93,   256,   126,   100,   307,   311,   128,   127,
      92,   432,   105,   135,   220,   115,   118,   123,   323,   409,
    -291,   410,   175,   131,   132,   223,    97,    99,    97,   137,
     139,   231,   232,   317,   234,   235,    91,   204,   110,    45,
     239,   229,     3,   353,   109,   167,   110,   462,   242,   439,
     347,   437,   318,   110,   466,   273,   176,   218,   440,    95,
     343,   310,   344,   153,     3,   199,   177,   178,  -291,   224,
     205,   199,   153,   319,   210,    15,    16,   110,   111,   487,
      17,    18,    19,   488,    21,   490,   111,   110,   179,    23,
     173,   437,   200,   111,   101,   201,    96,   174,    16,   274,
      27,    28,    17,    18,    19,   104,   497,   409,   219,   410,
     214,    23,   -94,   199,   372,   180,   181,   111,    33,    34,
      89,   152,    27,    28,   266,   267,   101,   111,   241,   133,
     170,   316,   150,   228,   150,   140,   150,   153,   389,   202,
      33,    34,    89,   258,    27,   203,   171,   237,   229,   255,
     229,   405,   237,   468,   229,   357,   136,   122,   229,   229,
     268,   269,   270,   271,   462,     5,   167,  -281,   143,   141,
       7,   208,   352,     2,   147,   149,     3,   150,   419,   276,
     282,   155,   167,   168,   261,   169,   211,   206,   198,   215,
     217,   216,   359,   222,   233,   236,   226,   303,   243,   276,
     240,   443,   306,   248,   447,   249,   251,   253,   286,   314,
      16,   254,   259,   260,    17,    18,    19,   312,    21,   454,
     326,   329,   333,    23,   336,   332,   313,   335,   272,   338,
     384,   467,   337,   304,    27,    28,   325,   388,   342,   349,
     328,   330,   341,   360,   429,   434,   477,    97,   139,   356,
     480,   391,    33,    34,    89,    97,   361,   331,   362,   484,
     485,  -239,   363,   364,   366,   376,   184,   374,   369,   350,
     370,   367,   354,   355,   371,   319,   379,   380,   382,   385,
     492,   393,   394,   399,   400,   493,   402,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     403,   412,   417,   416,   421,   435,   420,   424,   308,   426,
     444,   448,   445,   434,   315,   449,   451,   434,   455,   434,
     457,   458,   459,   434,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   395,     3,   461,
     434,   475,   398,   472,   153,   478,   343,   483,   489,   281,
     434,   389,   406,   184,   499,   142,   407,   145,   144,   276,
     276,   387,   427,   282,   305,   414,   252,   368,   396,   212,
     213,    15,    16,   418,   377,   494,    17,    18,    19,   378,
      21,   423,   324,   422,   479,    23,   404,   257,   428,   474,
     262,   264,  -300,   263,   348,   287,    27,    28,    45,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   134,   413,   265,    33,    34,    89,   415,   146,   408,
     498,     1,     2,     3,   425,     4,   496,     5,   238,   373,
       6,   495,     7,     8,   395,   450,   460,   456,    45,   500,
     476,     0,   436,     9,   351,    10,    11,    12,   276,     0,
     482,    13,    14,     0,   481,     0,    15,    16,     0,     0,
     486,    17,    18,    19,    20,    21,     0,     0,    22,     0,
      23,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,    31,    32,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,    33,
      34,    35,     1,     2,     3,     0,     4,     0,     5,     0,
       0,     6,     0,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,    10,    11,    12,     0,
       0,     0,    13,    14,     0,     0,     0,    15,    16,     0,
       0,     0,    17,    18,    19,    20,    21,     0,     0,    22,
       0,    23,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    89,     1,     2,     3,     0,     4,     0,     5,
       0,     0,     6,     0,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,    10,    11,    12,
       0,     0,     0,    13,    14,     0,     0,     0,    15,    16,
       0,     0,     0,    17,    18,    19,     0,    21,     0,     0,
      22,     0,    23,    24,    25,     0,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     1,     0,     3,     0,     4,
       0,    33,    34,    89,     6,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
      11,    12,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,     0,     0,     0,    17,    18,    19,   245,    21,
       0,     0,    22,     0,    23,    24,    25,     0,    26,     0,
       0,     0,     0,     0,     0,    27,    28,     1,     0,     3,
      32,     4,     0,     0,     0,     0,     6,     0,     0,     8,
       0,     0,     0,    33,    34,    89,     0,     0,     0,     9,
       0,     3,    11,    12,     0,     0,     0,     0,    14,     0,
       0,     3,    15,    16,     0,     0,     0,    17,    18,    19,
       0,    21,     0,     0,    22,     0,    23,    24,    25,     0,
      26,     0,     0,     0,    15,    16,     0,    27,    28,    17,
      18,    19,    32,    21,    15,    16,     0,     0,    23,    17,
      18,    19,     0,    21,     0,    33,    34,    89,    23,    27,
      28,     3,     0,   129,    32,     0,     0,     0,     0,    27,
      28,     3,   281,     0,     0,     0,     0,    33,    34,    89,
       0,     0,     0,     0,   273,     0,     0,    33,    34,    89,
       0,     0,     0,     3,    15,    16,     0,     0,     0,    17,
      18,    19,     0,    21,    15,    16,     0,     0,    23,    17,
      18,    19,     0,    21,     0,     0,     0,     0,    23,    27,
      28,     3,     0,     0,     0,     0,    15,    16,     0,    27,
      28,    17,    18,    19,     0,    21,     0,    33,    34,    89,
      23,     0,     0,     0,     0,     0,     0,    33,    34,    89,
       0,    27,    28,     0,   430,    16,     0,     0,     0,    17,
      18,    19,     0,    21,     0,     0,     0,     0,    23,    33,
      34,    89,     0,     0,     0,   156,     0,     0,     0,    27,
      28,     0,     0,   157,   158,   159,     0,     0,   160,     0,
     161,     0,     0,   162,     0,   163,     0,    33,    34,    89,
     164,   165
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,   152,    19,    10,   204,   206,    23,    21,
       2,   394,    13,    28,   110,    16,    17,    18,   216,   361,
      13,   361,    20,    24,    25,    21,     8,     9,    10,    30,
      31,   115,   115,    46,   118,   118,    86,    13,    46,    38,
     123,    30,     8,    23,    13,     9,    46,    36,   131,     5,
     248,   397,    65,    46,    13,    21,    54,     5,    14,    86,
      27,    61,    29,    52,     8,    19,    64,    65,    61,    65,
      46,    19,    52,    86,    38,    41,    42,    46,    86,   462,
      46,    47,    48,   466,    50,   468,    86,    46,    19,    55,
      48,   437,    46,    86,    19,    49,    86,    55,    42,    65,
      66,    67,    46,    47,    48,    86,   489,   449,   109,   449,
     102,    55,    37,    19,   312,    46,    47,    86,    84,    85,
      86,    36,    66,    67,   173,   174,    19,    86,   129,    26,
      44,    37,    14,    13,    14,    32,    14,    52,    14,     8,
      84,    85,    86,   155,    66,    14,    60,    30,    30,   150,
      30,   349,    30,    36,    30,    26,    13,    17,    30,    30,
     175,   176,   177,   178,    36,    12,     9,     0,    24,     0,
      17,    14,   255,     7,    63,    14,     8,    14,   376,   180,
     181,     4,     9,    11,   166,     3,    38,    46,    14,    37,
      14,    13,   276,    13,    58,    61,    26,   198,    14,   200,
      62,   399,   203,    13,   402,    14,     5,    49,    21,   210,
      42,    86,    50,    38,    46,    47,    48,    13,    50,   417,
      14,   222,    14,    55,   229,   226,   208,   228,    86,    14,
     326,   430,   237,    86,    66,    67,    86,   333,    39,    13,
      61,    86,   243,    14,   393,   394,   444,   229,   249,    61,
     448,   335,    84,    85,    86,   237,    14,    86,    19,   457,
     458,    13,    62,    14,    13,    13,    26,    14,    61,   251,
      61,   286,   273,   274,    61,    86,     5,    14,    22,    14,
     478,    38,    38,    13,    23,   483,    13,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
      23,    19,    13,    49,    86,    14,    61,    23,   205,    21,
      13,    13,    29,   462,   211,    14,    13,   466,    23,   468,
      13,    13,    86,   472,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   338,     8,    13,
     489,    16,   343,    14,    52,    13,    27,    13,    13,    19,
     499,    14,   353,    26,    14,    38,   357,    41,    40,   360,
     361,   333,   388,   364,   200,   366,   147,   288,   341,   101,
     101,    41,    42,   374,   316,   484,    46,    47,    48,   317,
      50,   382,   217,   380,   447,    55,   348,   153,   389,   437,
     167,   169,    62,   168,   249,   183,    66,    67,   397,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    27,   364,   172,    84,    85,    86,   366,    41,   360,
     490,     6,     7,     8,   384,    10,   487,    12,   123,   313,
      15,   486,    17,    18,   435,   413,   427,   422,   437,   491,
     441,    -1,   395,    28,   252,    30,    31,    32,   449,    -1,
     451,    36,    37,    -1,   449,    -1,    41,    42,    -1,    -1,
     461,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    84,
      85,    86,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,     8,    -1,    10,
      -1,    84,    85,    86,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    -1,    55,    56,    57,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,     6,    -1,     8,
      71,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    84,    85,    86,    -1,    -1,    -1,    28,
      -1,     8,    31,    32,    -1,    -1,    -1,    -1,    37,    -1,
      -1,     8,    41,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    56,    57,    -1,
      59,    -1,    -1,    -1,    41,    42,    -1,    66,    67,    46,
      47,    48,    71,    50,    41,    42,    -1,    -1,    55,    46,
      47,    48,    -1,    50,    -1,    84,    85,    86,    55,    66,
      67,     8,    -1,    60,    71,    -1,    -1,    -1,    -1,    66,
      67,     8,    19,    -1,    -1,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,     8,    41,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    41,    42,    -1,    -1,    55,    46,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,    66,
      67,     8,    -1,    -1,    -1,    -1,    41,    42,    -1,    66,
      67,    46,    47,    48,    -1,    50,    -1,    84,    85,    86,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      -1,    66,    67,    -1,    41,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,    84,
      85,    86,    -1,    -1,    -1,    25,    -1,    -1,    -1,    66,
      67,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    -1,
      40,    -1,    -1,    43,    -1,    45,    -1,    84,    85,    86,
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
      92,    94,    95,    96,   105,   106,   107,   108,   111,   114,
     115,   116,   117,   118,   119,   120,   121,   124,   125,   126,
     135,   136,   137,   138,   139,   141,   142,   143,   147,   159,
     161,   162,   163,   164,   166,   167,   168,   169,   171,   172,
     173,   174,   176,   181,   184,   192,   196,   208,   209,    86,
     159,    86,   134,   159,   207,    86,    86,   166,   191,   166,
     191,    19,   127,   128,    86,   159,   131,   133,   134,    13,
      46,    86,    98,   100,   103,   159,   180,   193,   159,   177,
     178,   183,   209,   159,   179,   182,   173,   163,   173,    60,
     112,   159,   159,   192,   181,   173,    13,   159,   149,   159,
     192,     0,    91,    24,    94,    96,   196,    63,   222,    14,
      14,   213,    36,    52,   160,     4,    25,    33,    34,    35,
      38,    40,    43,    45,    50,    51,   165,     9,    11,     3,
      44,    60,   170,    48,    55,    20,    54,    64,    65,    19,
      46,    47,   175,   185,    26,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   110,    14,    19,
      46,    49,     8,    14,    13,    46,    46,    97,    14,   211,
      38,    38,   127,   128,   134,    37,    13,    14,     5,   159,
     103,   104,    13,    21,    65,   102,    26,    99,    13,    30,
     195,   205,   213,    58,   205,   213,    61,    30,   202,   213,
      62,   159,   213,    14,   123,    49,   106,   153,    13,    14,
     148,     5,   107,    49,    86,   159,   161,   162,   163,    50,
      38,   166,   167,   168,   169,   171,   172,   172,   173,   173,
     173,   173,    86,    21,    65,    93,   159,   198,   199,   219,
     220,    19,   159,   186,   187,   188,    21,   175,   109,   192,
     209,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   159,    86,    93,   159,   153,   192,   197,
      61,    98,    13,   166,   159,   192,    37,    46,    65,    86,
     129,   130,   132,   153,   131,    86,    14,   210,    61,   159,
      86,    86,   159,    14,   212,   159,   191,   191,    14,   113,
     217,   159,    39,    27,    29,   144,   150,   153,   149,    13,
     166,   222,   213,    23,   159,   159,    61,    26,   200,   205,
      14,    14,    19,    62,    14,   215,    13,   173,   110,    61,
      61,    61,   153,   211,    14,   122,    13,   129,   132,     5,
      14,   216,    22,   140,   103,    14,   101,   100,   103,    14,
     194,   205,   214,    38,    38,   159,   122,   154,   159,    13,
      23,   145,    13,    23,   148,   153,   159,   159,   198,   199,
     219,   221,    19,   187,   159,   188,    49,    13,   159,   153,
      61,    86,   130,   159,    23,   210,    21,    99,   159,   161,
      41,   156,   157,   158,   161,    14,   217,   105,   155,     5,
      14,   151,   152,   153,    13,    29,   146,   153,    13,    14,
     215,    13,   189,   190,   153,    23,   216,    13,    13,    86,
     212,    13,    36,   204,   205,   206,    13,    98,    36,   201,
     202,   203,    14,   218,   155,    16,   159,   153,    13,   144,
     153,   221,   159,    13,   153,   153,   159,   157,   157,    13,
     157,   157,   153,   153,   140,   214,   204,   157,   201,    14,
     218
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   105,   105,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   115,
     116,   116,   116,   116,   116,   117,   118,   119,   119,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   130,   130,
     131,   131,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   154,
     153,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   172,   172,   172,   172,   172,
     173,   173,   173,   173,   174,   174,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   185,   186,   187,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   192,   193,   193,   194,
     194,   195,   195,   196,   196,   197,   197,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   209,   209,   210,   210,   210,   211,   211,   211,
     212,   212,   212,   213,   213,   213,   214,   214,   214,   215,
     215,   215,   216,   216,   216,   217,   217,   217,   218,   218,
     218,   219,   220,   221,   221,   221,   222,   222,   222
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     0,     6,
       3,     1,     0,     2,     1,     2,     2,     5,     3,     2,
       2,     3,     2,     0,     4,     0,     3,     0,     3,     2,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       3,     0,     2,     4,     2,     0,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     1,     2,     0,     3,     0,     1,     1,     2,     5,
       4,     2,     0,     2,     1,     1,     3,     1,     3,     1,
       3,     1,     2,     1,     3,     1,     3,     3,     2,     5,
       2,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     5,     5,     0,     7,     4,     9,     6,     6,
       6,     4,     3,     3,     0,     3,     0,     5,     3,     0,
       3,     1,     3,     1,     1,     1,     2,     0,     1,     0,
       5,     2,     1,     2,     1,     1,     1,     4,     3,     2,
       1,     4,     0,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       2,     2,     2,     1,     4,     2,     2,     0,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     2,     1,     2,     2,     2,     2,
       4,     3,     3,     3,     2,     2,     3,     1,     4,     1,
       0,     1,     0,     2,     1,     2,     2,     4,     2,     1,
       1,     1,     1,     7,     4,     1,     0,     3,     2,     1,
       3,     1,     1,     2,     3,     1,     0,     1,     1,     5,
       4,     3,     2,     1,     1,     5,     4,     3,     2,     1,
       3,     1,     2,     1,     3,     1,     0,     3,     1,     0,
       4,     1,     0,     3,     1,     0,     5,     1,     0,     3,
       1,     0,     3,     1,     0,     3,     3,     2,     3,     3,
       2,     2,     2,     3,     1,     1,     3,     1,     0
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
        case 5:
#line 78 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 1815 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "parse.y" /* yacc.c:1646  */
    { }
#line 1821 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 1827 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1833 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "parse.y" /* yacc.c:1646  */
    { 
	     (yyval.ast) = new FuncNode((yyvsp[-3].c),(yyvsp[0].ast));
	     std::string s((yyvsp[-3].c));
	     tm.addTable(s,(yyval.ast));
	}
#line 1843 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1849 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 141 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1855 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 144 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-2].ast);}
#line 1861 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 147 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1867 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 148 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 1873 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "parse.y" /* yacc.c:1646  */
    {
	Ast* a;
	if((yyvsp[0].ast)->getNodetype() == 'V') {
			  if(tm.getCurrentScope() == 0){
				 a = new PlusExp( 
								 tm.getEntry((yyvsp[-2].ast)->getVariable()),
								 tm.getEntry((yyvsp[0].ast)->getVariable())
								 );
				 tm .addTable(	   (yyvsp[-2].ast)->getVariable(),
											a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
														   tm.getEntry((yyvsp[0].ast)->getVariable())
														
										));
																	
			  }
			  else {
			     (yyval.ast) = new PlusExp((yyvsp[-2].ast),(yyvsp[0].ast));
			  }
	}
	else {
			
			  if(tm.getCurrentScope() == 0){
				  std::cout << "inside plusequal" <<  tm.getEntry((yyvsp[-2].ast)->getVariable())->getNumber() << std::endl;
				  a = new PlusExp(
									  tm.getEntry((yyvsp[-2].ast)->getVariable()),
									  (yyvsp[0].ast)
									 );
							std::cout <<  a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),(yyvsp[0].ast) )->getNumber() << std::endl;  
				tm .addTable((yyvsp[-2].ast)->getVariable(),
												a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
															  (yyvsp[0].ast)
															)
							 );
			   }
			   else{
			     (yyval.ast) = new PlusExp((yyvsp[-2].ast),(yyvsp[0].ast));
			   }
	}
      	
	  
	}
#line 1919 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 199 "parse.y" /* yacc.c:1646  */
    { 
	  Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
			   if(tm.getCurrentScope() == 0){
			   a = new MinusExp(
								   tm.getEntry((yyvsp[-2].ast)->getVariable()),
								   tm.getEntry((yyvsp[0].ast)->getVariable())
								   );
			 tm .addTable(   (yyvsp[-2].ast)->getVariable(),
											a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
														   tm.getEntry((yyvsp[0].ast)->getVariable())
														)
										);
			}
			else{
			   (yyval.ast) = new MinusExp((yyvsp[-2].ast),(yyvsp[0].ast));
			}
	}
	else {
			 if(tm.getCurrentScope() == 0){
			  a = new MinusExp(
								  tm.getEntry((yyvsp[-2].ast)->getVariable()),
								  (yyvsp[0].ast)
								  );
			  tm .addTable(  (yyvsp[-2].ast)->getVariable(),
											a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
														   (yyvsp[0].ast)
														)
						);
				}	  
			  else{
			      (yyval.ast) = new MinusExp((yyvsp[-2].ast),(yyvsp[0].ast));
			  }
	}
    }
#line 1959 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 234 "parse.y" /* yacc.c:1646  */
    { 
	   Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   if(tm.getCurrentScope() == 0){
	    a = new MultExp(
                           tm.getEntry((yyvsp[-2].ast)->getVariable()),
                           tm.getEntry((yyvsp[0].ast)->getVariable())
                           );
	tm .addTable(	(yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   tm.getEntry((yyvsp[0].ast)->getVariable())
                                                )
                                );
	}
	else{
	}
	}
	else {
	   if(tm.getCurrentScope() == 0){
	  a = new MultExp(
                          tm.getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	tm .addTable( (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   (yyvsp[0].ast)
                                                )
                                );
        }
        else {
        
        }	  
	  }
	}
#line 1998 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 268 "parse.y" /* yacc.c:1646  */
    { 
	 Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new DivExp(
                           tm.getEntry((yyvsp[-2].ast)->getVariable()),
                           tm.getEntry((yyvsp[0].ast)->getVariable())
                           );
	tm .addTable(  (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   tm.getEntry((yyvsp[0].ast)->getVariable())
                                                )
                                );
	}
	else {
	  a = new DivExp(
                          tm.getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	 tm .addTable(  (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   (yyvsp[0].ast)
                                                )
                                );
        }	  
	 
	}
#line 2029 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 294 "parse.y" /* yacc.c:1646  */
    { 
	  Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new ModExp(
                           tm.getEntry((yyvsp[-2].ast)->getVariable()),
                           tm.getEntry((yyvsp[0].ast)->getVariable())
                           );
	tm .addTable(	  (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   tm.getEntry((yyvsp[0].ast)->getVariable())
                                                )
                                );
	}
	else {
	  a = new ModExp(
                          tm.getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	tm .addTable(	 (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   (yyvsp[0].ast)
                                                )
                                );
        }	  
	  
	}
#line 2060 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 326 "parse.y" /* yacc.c:1646  */
    { 
	 Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new ExpoExp(
                           tm.getEntry((yyvsp[-2].ast)->getVariable()),
                           tm.getEntry((yyvsp[0].ast)->getVariable())
                           );
	 tm .addTable(	 (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   tm.getEntry((yyvsp[0].ast)->getVariable())
                                                )
                                );
	}
	else {
	  a = new ExpoExp(
                          tm.getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast));
tm .addTable(	  (yyvsp[-2].ast)->getVariable(),
                                    a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                                   (yyvsp[0].ast)
                                                )
                                );
        }	  
	   
	}
#line 2090 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 351 "parse.y" /* yacc.c:1646  */
    { 
	Ast* a;
	  if((yyvsp[0].ast)->getNodetype() == 'V'){
	   a = new DoubleSlashExp(
                           tm.getEntry((yyvsp[-2].ast)->getVariable()),
                           tm.getEntry((yyvsp[0].ast)->getVariable())
                           );
	 tm .addTable( (yyvsp[-2].ast)->getVariable(),
                   a->getOutput(  tm.getEntry((yyvsp[-2].ast)->getVariable()),
                                              tm.getEntry((yyvsp[0].ast)->getVariable()
                                             )
                                )
                 );
	}
	else {
	  a = new DoubleSlashExp(
                          tm.getEntry((yyvsp[-2].ast)->getVariable()),
                          (yyvsp[0].ast)
                          );
	tm .addTable(  (yyvsp[-2].ast)->getVariable(),
                   a->getOutput( tm.getEntry((yyvsp[-2].ast)->getVariable()), (yyvsp[0].ast) )
                                                  
                );
        }	  
	  
	}
#line 2121 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 377 "parse.y" /* yacc.c:1646  */
    {  
	   
	   if(tm.getCurrentScope() > 0){
	        Ast* a = new AssignNode((yyvsp[-1].ast),(yyvsp[0].ast));
	        (yyval.ast) = a;
	   }
	   else {
	  // std::cout << "inside else equal" << tm.getCurrentScope() << std::endl;
	   tm.addTable((yyvsp[-1].ast)->getVariable(),(yyvsp[0].ast));
	   //tm.display();
	   } 
	}
#line 2138 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 391 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2144 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 392 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2150 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 395 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)= (yyvsp[-1].ast); }
#line 2156 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 396 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2162 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 400 "parse.y" /* yacc.c:1646  */
    {
         if(tm.getCurrentScope() == 0)	{
			 (yyval.ast) = new PrintNode((yyvsp[0].ast));
			 if((yyvsp[0].ast)->getNodetype() == 'V'){
				  if(tm.checkName((yyvsp[0].ast)->getVariable(),tm.getCurrentScope()) ){
					  if((tm.getEntry((yyvsp[0].ast)->getVariable()))->getNodetype() == 'F'){
							std::cout << std::fixed << std::setprecision(3) << "= " 
																<< (tm.getEntry((yyvsp[0].ast)->getVariable()))->getNumber();
																
					   }
					  else {
							std::cout << "pyt> " 
										  << (TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable()))->getNumber()  << std::endl;
					   }
					
				  }
				  else  { 
						  std::cout << "symbol not initialized" << std::endl;
				  }
			 }
			 else {
				   if(eval((yyvsp[0].ast))->getNodetype() == 'F')
						  std::cout << std::fixed << std::setprecision(3) << "= " << (eval((yyvsp[0].ast))->getNumber()) << std::endl; 
				   else
						  std::cout << "= " << (eval((yyvsp[0].ast))->getNumber()) << std::endl; 
			}
		}
		else 
		   (yyval.ast) = new PrintNode((yyvsp[0].ast));
		
	    //treeFree($2);
	    //SymbolTable::getInstance().display(); 
	}
#line 2200 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 433 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2206 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 436 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2212 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 437 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2218 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 440 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2224 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 441 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2230 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 444 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2236 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 447 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2242 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 457 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2248 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 460 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) =0; }
#line 2254 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 463 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ReturnNode((yyvsp[0].ast)); }
#line 2260 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 464 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) =0; }
#line 2266 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 470 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2272 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 471 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2278 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 482 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2284 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 483 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2290 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 526 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2296 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 529 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-3].ast);}
#line 2302 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 530 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2308 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 533 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-2].ast);}
#line 2314 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 534 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2320 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 547 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2326 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 548 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2332 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 555 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2338 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 556 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2344 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 559 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-3].ast);}
#line 2350 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 560 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) =(yyvsp[0].ast);}
#line 2356 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 563 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[-3].ast);}
#line 2362 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 564 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-3].ast);}
#line 2368 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 579 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2374 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 603 "parse.y" /* yacc.c:1646  */
    { (yyval.ast)= (yyvsp[0].ast); }
#line 2380 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 604 "parse.y" /* yacc.c:1646  */
    {tm.pushScope();}
#line 2386 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 604 "parse.y" /* yacc.c:1646  */
    { 
	     
	      (yyval.ast) = new SuiteNode(tm.getCurrentScope(), (yyvsp[-1].vec)->rbegin(), (yyvsp[-1].vec)->rend()); 
	      tm.popScope();
		    
	}
#line 2397 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 612 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.vec)= (yyvsp[0].vec); 
		(yyval.vec)->push_back((yyvsp[-1].ast));
	}
#line 2406 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 617 "parse.y" /* yacc.c:1646  */
    { 
	    (yyval.vec) = new std::vector<Ast*>();
		(yyval.vec)->reserve(4);
		(yyval.vec)->push_back((yyvsp[0].ast));
	}
#line 2416 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 642 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[-1].ast); }
#line 2422 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 643 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2428 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 650 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2434 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 654 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2440 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 658 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2446 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 662 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2452 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 680 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2458 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 684 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2464 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 688 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2470 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 692 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2476 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 700 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = (yyvsp[0].ast); }
#line 2482 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 701 "parse.y" /* yacc.c:1646  */
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
#line 2497 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 711 "parse.y" /* yacc.c:1646  */
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
#line 2514 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 725 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2520 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 726 "parse.y" /* yacc.c:1646  */
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
#line 2535 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 736 "parse.y" /* yacc.c:1646  */
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
#line 2557 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 753 "parse.y" /* yacc.c:1646  */
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
#line 2579 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 770 "parse.y" /* yacc.c:1646  */
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
#line 2600 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 788 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2606 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 789 "parse.y" /* yacc.c:1646  */
    {
	    if((yyvsp[0].ast)->getNodetype() == 'V'){
	      (yyvsp[0].ast) = TableManager::getInstance().getEntry((yyvsp[0].ast)->getVariable());
	    } 
	    Ast* uminus = new UMinusExp((yyvsp[0].ast));
	    (yyval.ast) = uminus->getOutput((yyvsp[0].ast),NULL);
	}
#line 2618 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 796 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2624 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 797 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2630 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 800 "parse.y" /* yacc.c:1646  */
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
#line 2645 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 810 "parse.y" /* yacc.c:1646  */
    {   
	    if((yyvsp[0].ast)) {
	   //     tm.display();
	        
		    (yyval.ast) = new CallNode();
		    (yyval.ast)->eval((yyvsp[-1].ast));
		    (yyval.ast)=(yyvsp[-1].ast);
		}
		else
            (yyval.ast) = (yyvsp[-1].ast);		
	}
#line 2661 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 823 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new VoidNode(1);}
#line 2667 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 824 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2673 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 827 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2679 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 828 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2685 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 829 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2691 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 830 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2697 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 831 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = new Variable('V',(yyvsp[0].c)); }
#line 2703 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 832 "parse.y" /* yacc.c:1646  */
    {  (yyval.ast) = new IntNumber('I',atoi((yyvsp[0].c))); }
#line 2709 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 833 "parse.y" /* yacc.c:1646  */
    {
	    double d = atof((yyvsp[0].c));
	    (yyval.ast) = new FloatNumber('F',d); 
	}
#line 2718 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 837 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2724 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 840 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2730 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 841 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2736 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 844 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2742 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 845 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2748 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 848 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2754 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 849 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2760 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 852 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2766 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 853 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = 0; }
#line 2772 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 860 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);}
#line 2778 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 861 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);}
#line 2784 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 864 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2790 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 865 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2796 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 868 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2802 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 869 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2808 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 901 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast); }
#line 2814 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 904 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-3].ast);}
#line 2820 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 905 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[-1].ast);}
#line 2826 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 908 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2832 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 909 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2838 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 912 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2844 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 913 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2850 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 916 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)= (yyvsp[0].ast);}
#line 2856 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 917 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2862 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 920 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2868 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 921 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2874 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 965 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2880 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 966 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 2886 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 973 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=(yyvsp[0].ast);}
#line 2892 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 974 "parse.y" /* yacc.c:1646  */
    {(yyval.ast)=0;}
#line 2898 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1013 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2904 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1014 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2910 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1015 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 2916 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 2920 "parse.tab.cpp" /* yacc.c:1646  */
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
#line 1039 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}
