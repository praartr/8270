//  Source code for "flex & bison", by John Levine
//  Declarations for an AST calculator fb3-1
//  Adapted by Brian Malloy
%{
#include <iostream>
#include <fstream>
#include "ast.h"
  extern int yylex();
  void yyerror(const char *s) { std::cout << s << std::endl; }
  void yyerror(const char *s, const char ch) {
    std::cout << s << ch << std::endl;
  }
%}

%union {
  Ast* ast;
  double d;
}

%token <d> NUMBER
%token EOL
%left PLUS MINUS
%left MULT DIV
%right EXPO
%left LPAR RPAR
%type <ast> exp

%%

calclist 
       : calclist exp EOL {
			std::cout << "= " << eval($2) << std::endl;
			unsigned int order_label = 1;
			std::fstream output;
			output.open("graph.gv", std::ios::out);
			output << "digraph G {" << std::endl;
			output<< order_label << "[label=\""<<$2->getNodetype()<<"\"]" <<std::endl;
			makeGraph($2, output, order_label);
			output << "}" << std::endl;
			output.close();
	        treeFree($2);
            std::cout << "> ";
         }
       | calclist EOL // blank line or a comment
       | // empty
       ;

exp    : exp PLUS exp          { $$ = new PlusExp($1,$3);    }
       | exp MINUS exp         { $$ = new MinusExp($1,$3);    }
       | exp MULT exp          { $$ = new MultExp($1,$3);    }
       | exp DIV exp           { $$ = new DivExp($1,$3);    }
       | LPAR exp RPAR         { $$ = $2;                         }
       | exp EXPO exp          { $$ = new ExpoExp($1,$3);    }
       | MINUS exp %prec MINUS { $$ = new UMinusExp($2); }
       | NUMBER                { $$ = new AstNumber($1);     }
       ;
%%
