/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 23 "parse.y" /* yacc.c:1909  */

  Ast* ast;
  char* c;
  int i;
  std::vector<Ast*>* vec;

#line 148 "parse.tab.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */
