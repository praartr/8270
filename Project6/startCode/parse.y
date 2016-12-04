// Generated by transforming |cwd:///parser/2.7.2.y| on 2016-10-15 at 17:11:42 +0000

%{
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
%}

%union {
  Ast* ast;
  char* c;
  int i;
  std::vector<Ast*>* vec;
}

// 83 tokens, in alphabetical order:
%token AMPERSAND AND AS ASSERT AT BACKQUOTE BAR BREAK
%token CIRCUMFLEX CLASS COLON COMMA CONTINUE DEDENT
%token DEF DEL DOT DOUBLESLASH 
%token DOUBLESTAR ELIF ELSE ENDMARKER EQEQUAL
%token EQUAL EXCEPT EXEC FINALLY FOR FROM GLOBAL GREATER GREATEREQUAL GRLT
%token IF IMPORT IN INDENT IS LAMBDA LBRACE LESSEQUAL LEFTSHIFT LESS
%token LPAR LSQB MINUS NEWLINE NOT NOTEQUAL 
%token OR PASS PERCENT PLUS PRINT RAISE 
%token RBRACE RETURN RIGHTSHIFT RPAR RSQB 
%token SEMI SLASH STAR 
%token STRING TILDE TRY WHILE WITH YIELD PLUSEQUAL MINEQUAL PERCENTEQUAL SLASHEQUAL STAREQUAL AMPEREQUAL CIRCUMFLEXEQUAL DOUBLESTAREQUAL LEFTSHIFTEQUAL RIGHTSHIFTEQUAL VBAREQUAL DOUBLESLASHEQUAL
 
%token <c> FLOATNUMBER INTNUMBER NAME 
%type <ast> arith_expr term atom power factor shift_expr and_expr xor_expr 
            expr opt_test opt_test_2 plus_COMMA_test comparison test or_test and_test not_test
            opt_dictorsetmaker listmaker opt_listmaker
			testlist1 star_EQUAL pick_yield_expr_testlist dictorsetmaker 
			testlist opt_yield_test testlist_comp lambdef pick_yield_expr_testlist_comp star_trailer yield_expr pick_comp_for pick_for_test opt_testlist
            stmt funcdef simple_stmt suite 
			small_stmt expr_stmt print_stmt import_stmt global_stmt exec_stmt assert_stmt
			del_stmt pass_stmt flow_stmt compound_stmt break_stmt continue_stmt return_stmt raise_stmt yield_stmt
			if_stmt while_stmt for_stmt try_stmt with_stmt classdef decorated
	        exprlist pick_NEWLINE_stmt
%type <vec> plus_stmt	
%start start


%%

start
	: file_input  
	| encoding_decl
	| single_input  
	;
//single_input // Used in: start
//	: NEWLINE 
//	| simple_stmt
//	| compound_stmt NEWLINE
//	;

single_input // Used in: start
	: NEWLINE
	| stmt 
	;
file_input // Used in: start
	: star_NEWLINE_stmt ENDMARKER 
	;
pick_NEWLINE_stmt // Used in: star_NEWLINE_stmt
	: NEWLINE { $$ = 0;  }
	| stmt    { }
	;
star_NEWLINE_stmt // Used in: file_input, star_NEWLINE_stmt
	: pick_NEWLINE_stmt star_NEWLINE_stmt
	| %empty
	;
decorator // Used in: decorators
	: AT dotted_name LPAR opt_arglist RPAR NEWLINE 
	| AT dotted_name NEWLINE
	;
opt_arglist // Used in: decorator, trailer
	: arglist
	| %empty
	;
decorators // Used in: decorators, decorated
	: decorator decorators 
	| decorator 
	;
decorated // Used in: compound_stmt
	: decorators classdef { $$ = $2;}
	| decorators funcdef {$$ = $2;}
	;
funcdef // Used in: decorated, compound_stmt
	: DEF NAME parameters COLON suite { 
	    
	    $$ = new FuncNode($2,$5);
	    std::string s($2);
	    tm.addTable(s,$$);
	}
	;
parameters // Used in: funcdef
	: LPAR varargslist RPAR
	| LPAR RPAR
	;
varargslist // Used in: parameters, old_lambdef, lambdef
	: star_fpdef_COMMA pick_STAR_DOUBLESTAR
	| fpdef opt_EQUAL_test star_COMMA_fpdef
	;
opt_EQUAL_test // Used in: varargslist, star_fpdef_COMMA, star_COMMA_fpdef
	: EQUAL test
	| %empty
	;
star_fpdef_COMMA // Used in: varargslist, star_fpdef_COMMA
	: fpdef opt_EQUAL_test COMMA star_fpdef_COMMA
	| %empty
	;
opt_DOUBLESTAR_NAME // Used in: pick_STAR_DOUBLESTAR
	: COMMA DOUBLESTAR NAME
	| %empty
	;
pick_STAR_DOUBLESTAR // Used in: varargslist
	: STAR NAME opt_DOUBLESTAR_NAME
	| DOUBLESTAR NAME
	;
fpdef // Used in: varargslist, star_fpdef_COMMA, fplist, star_fpdef_notest, star_COMMA_fpdef
	: NAME
	| LPAR fplist RPAR
	;
fplist // Used in: fpdef
	: fpdef star_fpdef_notest
	;
stmt // Used in: pick_NEWLINE_stmt, plus_stmt
	: simple_stmt   { $$ = $1; }
	| compound_stmt { $$ = $1; }
	;
simple_stmt // Used in: single_input, stmt, suite
	: small_stmt small_stmt_STAR_OR_SEMI NEWLINE {$$=$1;}
	;
small_stmt // Used in: simple_stmt, small_stmt_STAR_OR_SEMI
	: expr_stmt  { $$ = $1; }
	| print_stmt { $$ = $1; }
	| del_stmt
	| pass_stmt
	| flow_stmt
	| import_stmt
	| global_stmt
	| exec_stmt
	| assert_stmt
	;
expr_stmt // Used in: small_stmt
	:testlist PLUSEQUAL pick_yield_expr_testlist {
	    Ast* a;
	    if($3->getNodetype() == 'V') {
	        if(tm.getCurrentScope() == 0){
		        a = new PlusExp(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) );
		        tm .addTable( $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) ) );
																	
	        }
	        else 
                $$ = new PlusExp($1,$3);
	    }
	    else {
	        if(tm.getCurrentScope() == 0){
		        a = new PlusExp( tm.getEntry($1->getVariable()), $3);
		        tm .addTable( $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), $3) );
	        }
	        else
	            $$ = new PlusExp($1,$3);	
	    }	  
    }
	| testlist MINEQUAL pick_yield_expr_testlist { 
	    Ast* a;
	    if($3->getNodetype() == 'V'){
	        if(tm.getCurrentScope() == 0){    
		        a = new MinusExp( tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) );
			    tm .addTable( $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) ) );
			}
			else
			   $$ = new MinusExp($1,$3);
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new MinusExp( tm.getEntry($1->getVariable()), $3 );
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), $3 ));
			}	  
			 else
			    $$ = new MinusExp($1,$3);
	    }
    }
	|testlist STAREQUAL pick_yield_expr_testlist { 
	    Ast* a;
	    if($3->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){
			    a = new MultExp( tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) );
			    tm .addTable(   $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) ) );
			}
			else
			   $$ = new MultExp($1,$3);
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new MultExp( tm.getEntry($1->getVariable()), $3 );
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), $3 ));
		    }	  
			else
			    $$ = new MultExp($1,$3);
	    }
    }
	|testlist SLASHEQUAL pick_yield_expr_testlist { 
	    Ast* a;
	    if($3->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){   
			    a = new DivExp(tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) );
			    tm.addTable( $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) ));
			}
			else
			   $$ = new DivExp($1,$3);
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new DivExp( tm.getEntry($1->getVariable()), $3 );
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), $3 ) );
			}	  
			else
			    $$ = new DivExp($1,$3);
	    }
    }
	|testlist PERCENTEQUAL pick_yield_expr_testlist { 
	    Ast* a;
	    if($3->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){
			    a = new ModExp(tm.getEntry($1->getVariable()),tm.getEntry($3->getVariable()));
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()),tm.getEntry($3->getVariable()) ) );
			}
			else
			   $$ = new ModExp($1,$3);
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new ModExp( tm.getEntry($1->getVariable()), $3 );
			    tm .addTable(  $1->getVariable(),a->getOutput(  tm.getEntry($1->getVariable()), $3 ) );
			}	  
			else
			    $$ = new ModExp($1,$3);
			  
	    }
    }
	|testlist AMPEREQUAL pick_yield_expr_testlist 
	|testlist VBAREQUAL pick_yield_expr_testlist  
	|testlist CIRCUMFLEXEQUAL pick_yield_expr_testlist  
	|testlist LEFTSHIFTEQUAL pick_yield_expr_testlist  
	|testlist RIGHTSHIFTEQUAL pick_yield_expr_testlist  
	|testlist DOUBLESTAREQUAL pick_yield_expr_testlist { 
	    Ast* a;
	    if($3->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){  
			    a = new ExpoExp(tm.getEntry($1->getVariable()),tm.getEntry($3->getVariable()) );
			    tm .addTable(   $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) ) );
			}
			else
			   $$ = new ExpoExp($1,$3);
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new ExpoExp( tm.getEntry($1->getVariable()), $3 );
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()),$3));
			}	  
			else
			    $$ = new ExpoExp($1,$3);
	    }
    }
	|testlist DOUBLESLASHEQUAL pick_yield_expr_testlist { 
	    Ast* a;
	    if($3->getNodetype() == 'V'){
			if(tm.getCurrentScope() == 0){
			    a = new DoubleSlashExp( tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) );
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), tm.getEntry($3->getVariable()) ) );
			}
			else
			    $$ = new DoubleSlashExp($1,$3);
	    }
	    else {
			if(tm.getCurrentScope() == 0){
			    a = new DoubleSlashExp( tm.getEntry($1->getVariable()), $3 );
			    tm .addTable(  $1->getVariable(), a->getOutput(  tm.getEntry($1->getVariable()), $3 ) );
		    }	  
			else
			    $$ = new DoubleSlashExp($1,$3);
	        }
    }
	| testlist star_EQUAL {     
	    if(tm.getCurrentScope() > 0){
	        Ast* a = new AssignNode($1,$2);
	        $$ = a;
	    }
	    else
	        tm.addTable($1->getVariable(),$2);
	}
	;
pick_yield_expr_testlist // Used in: expr_stmt, star_EQUAL
	: yield_expr { $$ = $1; }
	| testlist   { $$ = $1; }
	;
star_EQUAL // Used in: expr_stmt, star_EQUAL
	: EQUAL pick_yield_expr_testlist star_EQUAL { $$= $2; }
	| %empty                                    { $$ = 0; }
	;

print_stmt // Used in: small_stmt
	: PRINT opt_test {
        if(tm.getCurrentScope() == 0)	{
			$$ = new PrintNode($2);
			if($2->getNodetype() == 'V'){
				if(tm.checkName($2->getVariable(),tm.getCurrentScope()) ){
					if((tm.getEntry($2->getVariable()))->getNodetype() == 'F')
					    std::cout << std::fixed << std::setprecision(3) << "pyt> " 
												<< (tm.getEntry($2->getVariable()))->getNumber() << std::endl;
					else 
						std::cout << "pyt> " 
								  << (tm.getEntry($2->getVariable()))->getNumber()  << std::endl;
				}
				else
					std::cout << "symbol not initialized" << std::endl;
			}
			else {
				if(eval($2)->getNodetype() == 'F')
				    std::cout << std::fixed << std::setprecision(3) << "pyt> " << (eval($2)->getNumber()) << std::endl; 
				else
				    std::cout << "pyt> " << (eval($2)->getNumber()) << std::endl; 
			}
		}
		else 
		    $$ = new PrintNode($2);
	    //treeFree($2);
	}
	| PRINT RIGHTSHIFT test opt_test_2 { $$ = $3; } 
	;
opt_test // Used in: print_stmt
	: test star_COMMA_test  { $$ = $1; }
	| %empty     { $$ = 0; }     
	;
opt_test_2 // Used in: print_stmt
	: plus_COMMA_test { $$ = 0; }
	| %empty { $$ = 0; }
	;
del_stmt // Used in: small_stmt
	: DEL exprlist { $$ = $2; }
	;
pass_stmt // Used in: small_stmt
	: PASS { $$ = 0; }
	;
flow_stmt // Used in: small_stmt
	: break_stmt
	| continue_stmt
	| return_stmt
	| raise_stmt
	| yield_stmt
	;
break_stmt // Used in: flow_stmt
	: BREAK { $$ = 0; }
	;
continue_stmt // Used in: flow_stmt
	: CONTINUE { $$ = 0; }
	;
return_stmt // Used in: flow_stmt
	: RETURN testlist { $$ = new ReturnNode($2); }
	| RETURN          { $$ = 0; }
	;
yield_stmt // Used in: flow_stmt
	: yield_expr
	;
raise_stmt // Used in: flow_stmt
	: RAISE test opt_test_3 { $$ = $2; }
	| RAISE { $$ = 0; }
	;
opt_COMMA_test // Used in: opt_test_3, exec_stmt
	: COMMA test
	| %empty
	;
opt_test_3 // Used in: raise_stmt
	: COMMA test opt_COMMA_test
	| %empty
	;
import_stmt // Used in: small_stmt
	: import_name { $$ = 0; }
	| import_from { $$ = 0; } 
	;
import_name // Used in: import_stmt
	: IMPORT dotted_as_names
	;
import_from // Used in: import_stmt
	: FROM star_DOT dotted_name IMPORT pick_STAR_import
	| FROM plus_DOT IMPORT pick_STAR_import
	;
star_DOT // Used in: import_from, star_DOT
	: DOT star_DOT
	| %empty
	;
plus_DOT // Used in: import_from, plus_DOT
	: DOT plus_DOT
	| DOT
	;
pick_STAR_import // Used in: import_from
	: STAR
	| LPAR import_as_names RPAR
	| import_as_names
	;
import_as_name // Used in: import_as_names, star_COMMA_import_as_name
	: NAME AS NAME
	| NAME
	;
dotted_as_name // Used in: dotted_as_names
	: dotted_name AS NAME
	| dotted_name
	;
import_as_names // Used in: pick_STAR_import
	: import_as_name star_COMMA_import_as_name
	;
dotted_as_names // Used in: import_name, dotted_as_names
	: dotted_as_name
	| dotted_as_names COMMA dotted_as_name
	;
dotted_name // Used in: decorator, import_from, dotted_as_name, dotted_name
	: NAME
	| dotted_name DOT NAME
	;
global_stmt // Used in: small_stmt, global_stmt
	: global_stmt COMMA NAME
	| GLOBAL NAME { $$ = 0; }
	;
exec_stmt // Used in: small_stmt
	: EXEC expr IN test opt_COMMA_test { $$ = $2; }
	| EXEC expr { $$ = $2; }
	;
assert_stmt // Used in: small_stmt
	: ASSERT test COMMA test { $$ = $2; }
	| ASSERT test { $$ = $2; }
	;
compound_stmt // Used in: single_input, stmt
	: if_stmt
	| while_stmt
	| for_stmt
	| try_stmt
	| with_stmt
	| funcdef
	| classdef
	| decorated
	;
if_stmt // Used in: compound_stmt
	: IF test COLON suite star_ELIF ELSE COLON suite { $$ = $8; }
	| IF test COLON suite star_ELIF { $$ = $4; }
	;
star_ELIF // Used in: if_stmt, star_ELIF
	: ELIF test COLON suite star_ELIF
	| %empty
	;
while_stmt // Used in: compound_stmt
	: WHILE test COLON suite ELSE COLON suite { $$ = $7; }
	| WHILE test COLON suite { $$ = $4; }
	;
for_stmt // Used in: compound_stmt
	: FOR exprlist IN testlist COLON suite ELSE COLON suite { $$ = $6; }
	| FOR exprlist IN testlist COLON suite { $$ = $6; }
	;
try_stmt // Used in: compound_stmt
	: TRY COLON suite plus_except opt_ELSE opt_FINALLY { $$ = $3; }
	| TRY COLON suite FINALLY COLON suite { $$ = $3; }
	;
plus_except // Used in: try_stmt, plus_except
	: except_clause COLON suite plus_except
	| except_clause COLON suite
	;
opt_ELSE // Used in: try_stmt
	: ELSE COLON suite
	| %empty
	;
opt_FINALLY // Used in: try_stmt
	: FINALLY COLON suite
	| %empty
	;
with_stmt // Used in: compound_stmt
	: WITH with_item star_COMMA_with_item COLON suite { $$ = $5; }
	;
star_COMMA_with_item // Used in: with_stmt, star_COMMA_with_item
	: COMMA with_item star_COMMA_with_item
	| %empty
	;
with_item // Used in: with_stmt, star_COMMA_with_item
	: test AS expr
	| test
	;
except_clause // Used in: plus_except
	: EXCEPT test opt_AS_COMMA
	| EXCEPT
	;
pick_AS_COMMA // Used in: opt_AS_COMMA
	: AS
	| COMMA
	;
opt_AS_COMMA // Used in: except_clause
	: pick_AS_COMMA test
	| %empty
	;
suite // Used in: funcdef, if_stmt, star_ELIF, while_stmt, for_stmt, 
      // try_stmt, plus_except, opt_ELSE, opt_FINALLY, with_stmt, classdef
	: simple_stmt { $$= $1; }
	| NEWLINE INDENT  { tm.pushScope(); } plus_stmt DEDENT{ 
	    $$ = new SuiteNode( tm.getCurrentScope(), $4->rbegin(), $4->rend()); 
	    tm.popScope();    
	}
	;
plus_stmt // Used in: suite, plus_stmt
	: stmt plus_stmt{ 
	    $$= $2; 
		$$->push_back($1);
	}
	| stmt{ 
	    $$ = new std::vector<Ast*>();
		$$->reserve(4);
		$$->push_back($1);
	}
	;
testlist_safe // Used in: list_for
	: old_test plus_COMMA_old_test
	| old_test
	;
old_test // Used in: testlist_safe, old_lambdef, list_if, comp_if, plus_COMMA_old_test
	: or_test
	| old_lambdef
	;
old_lambdef // Used in: old_test
	: LAMBDA varargslist COLON old_test
	| LAMBDA COLON old_test
	;
test // Used in: opt_EQUAL_test, print_stmt, opt_test, raise_stmt, 
     // opt_COMMA_test, opt_test_3, exec_stmt, assert_stmt, if_stmt, 
     // star_ELIF, while_stmt, with_item, except_clause, opt_AS_COMMA, 
     // opt_IF_ELSE, listmaker, testlist_comp, lambdef, subscript, 
     // opt_test_only, sliceop, testlist, dictorsetmaker, argument, 
     // testlist1, star_COMMA_test, star_test_COLON_test,
     // plus_COMMA_test, dictarg, listarg
	: or_test opt_IF_ELSE {  $$ = $1; }
	| lambdef  { $$ = 0; }
	;
opt_IF_ELSE // Used in: test
	: IF or_test ELSE test
	| %empty 
	;
or_test // Used in: old_test, test, opt_IF_ELSE, or_test, comp_for
	: and_test { $$ = $1; }
	| or_test OR and_test 
	;
and_test // Used in: or_test, and_test
	: not_test { $$ = $1;}
	| and_test AND not_test 
	;
not_test // Used in: and_test, not_test
	: NOT not_test { $$ = $2; }
	| comparison  
	; 
comparison // Used in: not_test, comparison
	: expr  { $$ = $1; }
	| comparison comp_op expr 
	;
comp_op // Used in: comparison
	: LESS
	| GREATER
	| EQEQUAL
	| GREATEREQUAL
	| LESSEQUAL
	| GRLT
	| NOTEQUAL
	| IN
	| NOT IN
	| IS
	| IS NOT
	;
expr // Used in: exec_stmt, with_item, comparison, expr, 
     // exprlist, star_COMMA_expr
	: xor_expr { $$ = $1; }
	| expr BAR xor_expr 
	;
xor_expr // Used in: expr, xor_expr
	: and_expr { $$ = $1; }
	| xor_expr CIRCUMFLEX and_expr 
	;
and_expr // Used in: xor_expr, and_expr
	: shift_expr { $$ = $1; }
	| and_expr AMPERSAND shift_expr 
	;
shift_expr // Used in: and_expr, shift_expr
	: arith_expr { $$ = $1; }
	| shift_expr pick_LEFTSHIFT_RIGHTSHIFT arith_expr 
	;
pick_LEFTSHIFT_RIGHTSHIFT // Used in: shift_expr
	: LEFTSHIFT
	| RIGHTSHIFT
	;
arith_expr // Used in: shift_expr, arith_expr
	: term  {  $$ = $1; }
    | arith_expr PLUS term  { 
	    if($1->getNodetype() == 'V'){
		    $1 = TableManager::getInstance().getEntry($1->getVariable());
	    }  
	    if($3->getNodetype() == 'V'){
		    $3 = TableManager::getInstance().getEntry($3->getVariable());
	    } 
	    Ast* plus = new PlusExp($1,$3);
	    $$ = plus->getOutput($1,$3);
	}
    | arith_expr MINUS term { 
		
	    if($1->getNodetype() == 'V'){
		   $1 = TableManager::getInstance().getEntry($1->getVariable());
	    } 
	    if($3->getNodetype() == 'V'){
		   $3 = TableManager::getInstance().getEntry($3->getVariable());
	    } 
	    Ast* minus = new MinusExp($1,$3);
	    $$ = minus->getOutput($1,$3);
	}
	;
term // Used in: arith_expr, term
	: factor { $$ = $1; }
	| term STAR factor  {  
	    if($1->getNodetype() == 'V'){
	      $1 = TableManager::getInstance().getEntry($1->getVariable());
	    } 
	    if($3->getNodetype() == 'V'){
	      $3 = TableManager::getInstance().getEntry($3->getVariable());
        }
	    Ast* mult = new MultExp($1,$3);
	    $$ = mult->getOutput($1,$3);
	}
    | term SLASH factor {
	    if($1->getNodetype() == 'V'){
		   $1 = TableManager::getInstance().getEntry($1->getVariable());
	    }  
	    if($3->getNodetype() == 'V'){
		    $3 = TableManager::getInstance().getEntry($3->getVariable());
	    }
	    if($3->getNumber() == 0){
		    std::cout << "DivisionByZeroError" << std::endl;
		    $$ = new IntNumber('I',0);
	    }
        else{		
		    Ast* div = new DivExp($1,$3);
		    $$ = div->getOutput($1,$3); 
        }		
	} 
    | term PERCENT factor {
	    if($1->getNodetype() == 'V'){
		    $1 = TableManager::getInstance().getEntry($1->getVariable());
	    } 
	    if($3->getNodetype() == 'V'){
		    $3 = TableManager::getInstance().getEntry($3->getVariable());
	    }
	    if($3->getNumber() == 0){
		    std::cout << "DivisionByZeroError" << std::endl;
		    $$ = new IntNumber('I',0);
        }
	    else {
		    Ast* percent = new ModExp($1,$3);
		    $$ = percent->getOutput($1,$3);
	    }
	}
    | term DOUBLESLASH factor{     
	    if($1->getNodetype() == 'V'){
		    $1 = TableManager::getInstance().getEntry($1->getVariable());
	    } 
	    if($3->getNodetype() == 'V'){
		    $3 = TableManager::getInstance().getEntry($3->getVariable());
        }
	    if($3->getNumber() == 0){
		    std::cout << "DivisionByZeroError" << std::endl;
		    $$ = new IntNumber('I',0);
	    }	
	    else {
		    Ast* dslash = new DoubleSlashExp($1,$3);
		    $$ = dslash->getOutput($1,$3);
        }	
	}
	;	
factor // Used in: term, factor, power
	: PLUS  factor { $$ = $2; }
    | MINUS factor {
	    if($2->getNodetype() == 'V'){
	      $2 = TableManager::getInstance().getEntry($2->getVariable());
	    } 
	    Ast* uminus = new UMinusExp($2);
	    $$ = uminus->getOutput($2,NULL);
	}
    | TILDE factor { $$ = $2; }
	| power { $$ = $1; }
	;
power // Used in: factor
	: atom star_trailer DOUBLESTAR factor    { 
	    if($1->getNodetype() == 'V'){
	        $1 = TableManager::getInstance().getEntry($1->getVariable());
	    } 
	    if($4->getNodetype() == 'V'){
	        $4 = TableManager::getInstance().getEntry($4->getVariable());
	    }
	    Ast* expo = new ExpoExp($1,$4);
	    $$ = expo->getOutput($1,$4);     
	}
	| atom star_trailer {   
	    if($2) {
		    $$ = new CallNode();
		    $$->eval($1);
		    $$=$1;
		}
		else
            $$ = $1;
	} 
	;
star_trailer // Used in: power, star_trailer
	: trailer star_trailer { $$ = new VoidNode(1); }
	| %empty { $$ = 0;}
	;
atom // Used in: power
	: LPAR opt_yield_test RPAR { $$ = $2; }            
	| LSQB opt_listmaker RSQB  { $$ = $2; }
	| LBRACE opt_dictorsetmaker RBRACE  { $$ = $2; }
	| BACKQUOTE testlist1 BACKQUOTE     { $$ = $2; }
	| NAME         {  $$ = new Variable('V',$1); }
	| INTNUMBER    {  $$ = new IntNumber('I',atoi($1)); }
	| FLOATNUMBER  {
	    double d = atof($1);
	    $$ = new FloatNumber('F',d); 
	}
	| plus_STRING  { $$ = 0; }
	;
pick_yield_expr_testlist_comp // Used in: opt_yield_test
	: yield_expr    { $$ = $1;}
	| testlist_comp { $$ = $1;}
	;
opt_yield_test // Used in: atom
	: pick_yield_expr_testlist_comp { $$ = $1; }
	| %empty { $$ = 0; }
	;
opt_listmaker // Used in: atom
	: listmaker { $$ = $1;}
	| %empty { $$ = 0; }
	;
opt_dictorsetmaker // Used in: atom
	: dictorsetmaker {$$ = $1;}
	| %empty { $$ = 0;}
	;
plus_STRING // Used in: atom, plus_STRING
	: STRING plus_STRING
	| STRING
	;
listmaker // Used in: opt_listmaker
	: test list_for { $$ = $1; }
	| test star_COMMA_test { $$ = $1; }
	;
testlist_comp // Used in: pick_yield_expr_testlist_comp
	: test comp_for { $$ = $1; }
	| test star_COMMA_test { $$ = $1; }
	;
lambdef // Used in: test
	: LAMBDA varargslist COLON test { $$ = 0; }
	| LAMBDA COLON test            { $$ = 0; }
	;
trailer // Used in: star_trailer
	: LPAR opt_arglist RPAR 
	| LSQB subscriptlist RSQB
	| DOT NAME
	;
subscriptlist // Used in: trailer
	: subscript star_COMMA_subscript
	;
subscript // Used in: subscriptlist, star_COMMA_subscript
	: DOT DOT DOT
	| test
	| opt_test_only COLON opt_test_only opt_sliceop
	;
opt_test_only // Used in: subscript
	: test
	| %empty
	;
opt_sliceop // Used in: subscript
	: sliceop
	| %empty
	;
sliceop // Used in: opt_sliceop
	: COLON test
	| COLON
	;
exprlist // Used in: del_stmt, for_stmt, list_for, comp_for
	: expr star_COMMA_expr
	;
testlist // Used in: expr_stmt, pick_yield_expr_testlist, 
         // return_stmt, for_stmt, opt_testlist, yield_expr
	: test star_COMMA_test { $$ = $1; }
	;
dictorsetmaker // Used in: opt_dictorsetmaker
	: test COLON test pick_comp_for {$$ = $1;}
	| test pick_for_test { $$ = $1; }
	;
pick_comp_for // Used in: dictorsetmaker
	: comp_for {$$=0;}
	| star_test_COLON_test { $$ = 0; }
	;
pick_for_test // Used in: dictorsetmaker
	: comp_for { $$ = 0; }
	| star_COMMA_test{ $$ = 0; } 
	;
classdef // Used in: decorated, compound_stmt
	: CLASS NAME LPAR opt_testlist RPAR COLON suite { $$ = $7; }
	| CLASS NAME COLON suite { $$ = $4; }
	;
opt_testlist // Used in: classdef
	: testlist {$$=$1;}
	| %empty { $$ = 0; }
	;
arglist // Used in: opt_arglist, arglist
	: argument COMMA arglist
	| argument COMMA
	| argument
	| listarg COMMA arglist_postlist
	| listarg
	| dictarg
	;
argument // Used in: arglist, arglist_postlist
	: test opt_comp_for
	| test EQUAL test
	;
opt_comp_for // Used in: argument
	: comp_for
	| %empty
	;
list_iter // Used in: list_for, list_if
	: list_for
	| list_if
	;
list_for // Used in: listmaker, list_iter
	: FOR exprlist IN testlist_safe list_iter
	| FOR exprlist IN testlist_safe
	;
list_if // Used in: list_iter
	: IF old_test list_iter
	| IF old_test
	;
comp_iter // Used in: comp_for, comp_if
	: comp_for
	| comp_if
	;
comp_for // Used in: testlist_comp, pick_comp_for, pick_for_test, 
         // opt_comp_for, comp_iter
	: FOR exprlist IN or_test comp_iter
	| FOR exprlist IN or_test
	;
comp_if // Used in: comp_iter
	: IF old_test comp_iter
	| IF old_test
	;
testlist1 // Used in: atom, testlist1
	: test { $$ = $1; }
	| testlist1 COMMA test { $$ = $1; }
	;
encoding_decl // Used in: start
	: NAME
	;
yield_expr // Used in: pick_yield_expr_testlist, yield_stmt, 
           // pick_yield_expr_testlist_comp
	: YIELD testlist { $$ = $2; }
	| YIELD { $$ = 0; }
	;
star_fpdef_notest // Used in: fplist, star_fpdef_notest
	: COMMA fpdef star_fpdef_notest
	| COMMA
	| %empty
	;
star_COMMA_expr // Used in: exprlist, star_COMMA_expr
	: COMMA expr star_COMMA_expr
	| COMMA
	| %empty
	;
star_COMMA_fpdef // Used in: varargslist, star_COMMA_fpdef
	: COMMA fpdef opt_EQUAL_test star_COMMA_fpdef
	| COMMA
	| %empty
	;
star_COMMA_test // Used in: opt_test, listmaker, testlist_comp, testlist, pick_for_test, star_COMMA_test
	: COMMA test star_COMMA_test 
	| COMMA 
	| %empty 
	;
star_test_COLON_test // Used in: pick_comp_for, star_test_COLON_test
	: COMMA test COLON test star_test_COLON_test
	| COMMA
	| %empty
	;
star_COMMA_subscript // Used in: subscriptlist, star_COMMA_subscript
	: COMMA subscript star_COMMA_subscript
	| COMMA
	| %empty
	;
star_COMMA_import_as_name // Used in: import_as_names, 
                          // star_COMMA_import_as_name
	: COMMA import_as_name star_COMMA_import_as_name
	| COMMA
	| %empty
	;
plus_COMMA_test // Used in: opt_test_2, plus_COMMA_test
	: COMMA test plus_COMMA_test { $$ = $2; }
	| COMMA test COMMA { $$ = $2; }
	| COMMA test { $$ = $2; }
	;
plus_COMMA_old_test // Used in: testlist_safe, plus_COMMA_old_test
	: COMMA old_test plus_COMMA_old_test
	| COMMA old_test COMMA
	| COMMA old_test
	;
dictarg // Used in: arglist, arglist_postlist
	: DOUBLESTAR test
	;
listarg // Used in: arglist
	: STAR test
	;
arglist_postlist // Used in: arglist, arglist_postlist
	: argument COMMA arglist_postlist
	| dictarg
	| argument
	;
small_stmt_STAR_OR_SEMI // Used in: simple_stmt, small_stmt_STAR_OR_SEMI
	: SEMI small_stmt small_stmt_STAR_OR_SEMI
	| SEMI
	| %empty
	;

%%

#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}
