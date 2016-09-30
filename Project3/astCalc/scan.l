%option nodefault yylineno
%{

  extern void yyerror(const char *s);
  extern void yyerror(const char *s, const char ch);
#include <iostream>
#include "ast.h"
#include "parse.tab.hpp"
%}

%%
"+"	   { return PLUS;  } 
"-"        { return MINUS; }
"*"	   { return MULT;  }
"/"	   { return DIV;   }
"("	   { return LPAR;  }
")"        { return RPAR;  }
"**"       { return EXPO;  }
[0-9]	   { yylval.d = atoi(yytext); return NUMBER; }
[0-9]+"."[0-9]? |
"."?[0-9]+ { yylval.d = atof(yytext); return NUMBER; }

\n         { return EOL; }
"//".*  
[ \t]      { } // ignore white space
.	         { yyerror("Mystery character ", yytext[0]); }
%%
int yywrap() {
  yylex_destroy();
  return 1;
}
