// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#  include <iostream>
#  include <stdlib.h>
#  include "ast.h"
#  include "tablemanager.h"
#  include <math.h>
#  include <cstring>
#  include <string>
Ast* eval(Ast *a) {
  Ast* left = NULL;  
  Ast* right = NULL; 
 
  if(a->getNodetype() == 'I' || a->getNodetype() == 'F'){	 
	return a;
  }
  if(a->getNodetype() != 'I' && a->getNodetype() != 'F' ){
	if(a->getLeft()){
          left  = eval(a->getLeft());
	}
        if(a->getRight()){		
          right = eval(a->getRight());
        }
  }
  return a->getOutput(left,right);
}
AstNumber::AstNumber(const char nodetype)
    : Ast(nodetype,NULL,NULL) {}
	  
Variable::Variable(const char nodetype, const char* variable_name) 
    : Ast(nodetype,NULL,NULL), identifier(variable_name) {}

std::string& Variable::getVariable(){
	return identifier;
}
IntNumber::IntNumber(const char nodetype, const int n) 
    : AstNumber(nodetype), number(n) {}

double IntNumber::getNumber() const {return number;}

int IntNumber::getNumber(int i) const { return number; }

FloatNumber::FloatNumber(const char nodetype, const double n) 
    : AstNumber(nodetype), number(n){}
	
double FloatNumber::getNumber() const { return number; }


AssignNode::AssignNode(Ast* left,Ast* right) 
    : Ast('=',left,right) {}
PlusExp::PlusExp(Ast* left,Ast* right) 
    : Ast('+',left,right) {}
	
Ast* PlusExp::getOutput(const Ast* x, const Ast* y) const { 
    if( ( ceil(x->getNumber()+y->getNumber()) == x->getNumber()+y->getNumber()) )
		 return ( new IntNumber('I',x->getNumber()+y->getNumber()));
    else 
		 return ( new FloatNumber('F',x->getNumber()+y->getNumber()));
} 

MinusExp::MinusExp(Ast* left,Ast* right) 
    : Ast('-',left,right) {}
	
Ast* MinusExp::getOutput(const Ast* x, const Ast* y) const { 
    if( ( ceil(x->getNumber()-y->getNumber()) == x->getNumber()-y->getNumber()) )
		 return ( new IntNumber('I',x->getNumber()-y->getNumber()));
    else 
		 return ( new FloatNumber('F',x->getNumber()-y->getNumber()));
} 

MultExp::MultExp(Ast* left,Ast* right) 
    : Ast('*',left,right) {}
	
Ast* MultExp::getOutput(const Ast* x, const Ast* y) const { 
    if( ( ceil(x->getNumber()*y->getNumber()) == x->getNumber()*y->getNumber()) )
		 return ( new IntNumber('I',x->getNumber()*y->getNumber()));
    else 
		 return ( new FloatNumber('F',x->getNumber()*y->getNumber()));
} 
DivExp::DivExp(Ast* left,Ast* right) 
    : Ast('/',left,right) {}
	
Ast* DivExp::getOutput(const Ast* x, const Ast* y) const { 	
	if( x->getNodetype() == 'I' && y->getNodetype() == 'I' ) { 
            if(!(x->getNumber() < 0 && y->getNumber() <0))
                 return ( new IntNumber('I',floor(x->getNumber()/y->getNumber())));
	    else
		 return ( new IntNumber('I',((int)x->getNumber()/(int)y->getNumber())));
	}
	else if ( x->getNodetype() == 'F' || y->getNodetype() == 'F' ) {
		 return ( new FloatNumber('F',x->getNumber()/y->getNumber()));
	}
        else 
                 return NULL;
} 
int int_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}


ExpoExp::ExpoExp(Ast* left,Ast* right) 
    : Ast('^',left,right) {}
	
Ast* ExpoExp::getOutput(const Ast* x, const Ast* y) const { 

    if((x->getNumber() == 0 || x->getNumber() == 0.0) && (y->getNumber() < 0)) {
		std::cout << "Raising 0.0 to a negative power results in a ZeroDivisionError" << std::endl;
          return (new IntNumber('I',0));
	}

    if( x->getNodetype() == 'I' && y->getNodetype() == 'I' ) {		
		if( x->getNumber() > 0 && y->getNumber() < 0) {
		  return (new FloatNumber('F',powf(x->getNumber(),y->getNumber())));
		}
		else if( x->getNumber() < 0 && y->getNumber() < 0) {
		  return (new IntNumber('F',-int_pow(x->getNumber(),y->getNumber())));
		}
		else if(x->getNumber() < 0 && y->getNumber() > 0) {
			 return (new IntNumber('I',-pow(x->getNumber(),y->getNumber()))); 
		}
		else {
			return (new IntNumber('I',int_pow(x->getNumber(),y->getNumber()))); 
		}
     }
     else { 
	   return (new FloatNumber('F',powf(x->getNumber(),y->getNumber())));
     }
}
   
ModExp::ModExp(Ast* left,Ast* right) 
    : Ast('%',left,right) {}
	
Ast* ModExp::getOutput(const Ast* x, const Ast* y) const { 	

	if ( ceil(fmod(x->getNumber(),y->getNumber())) == fmod(x->getNumber(),y->getNumber())) 
	   return (new IntNumber('I',fmod(x->getNumber(),y->getNumber()))) ; 
	else 
	   return (new FloatNumber('F',fmod(x->getNumber(),y->getNumber())));   
}

DoubleSlashExp::DoubleSlashExp(Ast* left,Ast* right) 
    : Ast('|',left,right) {}
Ast* DoubleSlashExp::getOutput(const Ast* x, const Ast* y) const { 	

    if(x->getNodetype() == 'I' && y->getNodetype() == 'I')
	  return (new IntNumber('I',floor(x->getNumber()/y->getNumber()))) ; 
    else 
	  return (new FloatNumber('F',floor(x->getNumber()/y->getNumber())));
}

UMinusExp::UMinusExp(Ast* left)
    : Ast('M',left,NULL), l(left){}
Ast* UMinusExp::getOutput(const Ast* x, const Ast* y) const { 
      if( ceil(-x->getNumber()) == (-x->getNumber())) 
	  return (new IntNumber('I',-x->getNumber())) ;
     else 
          return (new FloatNumber('F',-x->getNumber())) ;  
}
double UMinusExp::getNumber() const { return -(l->getNumber()); }

void treeFree(Ast *a) {
	
  switch(a->getNodetype()) {
   // two subtrees
  case '+':
  case '-':
  case '*':
  case '/':
  case '^':
  case '%':
  case '|': 
  
    treeFree(a->getRight());

   // one subtrees
  case 'M':
  case 'P':
    treeFree(a->getLeft());

   //no subtree
  case 'V':
  case 'S':
  case 'I':
  case 'F':
  case 'R':
  case 'C':
  case 'G':
    delete a;
    break;

 /* default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;*/
  }
}

PrintNode::PrintNode(Ast* node): Ast('P',node,NULL), left(node){
	
}
Ast* PrintNode::getOutput(const Ast* x, const Ast* y) const { 	
	return left;
}
ReturnNode::ReturnNode(Ast* node): Ast('R',NULL,NULL),left(node){
	
}
Ast* ReturnNode::getOutput(const Ast* x, const Ast* y) const { 	
	return left;	
}
CallNode::CallNode() : Ast('C',NULL,NULL){
}
void CallNode::eval(Ast* node){
	TableManager& tm = TableManager::getInstance();
	Ast* funcnode = tm.getEntry(node->getVariable());
	funcnode->execute();
}
GlobalNode::GlobalNode(const char* variable_name) 
    : Ast('G',NULL,NULL), identifier(variable_name) {}

std::string& GlobalNode::getVariable(){
	return identifier;
}

FuncNode::FuncNode(const std::string& name,Ast* stmt):  Ast('F',NULL,NULL),func_name(name), suite(stmt){
	
}

void FuncNode::execute() { 
	suite->execute();	
}
SuiteNode::SuiteNode(int currentScope, std::vector<Ast*>::reverse_iterator first, std::vector<Ast*>::reverse_iterator end) : Ast('S',NULL,NULL), FuncScope(currentScope), stmts() {
	stmts.reserve(4);
	std::vector<Ast*>::reverse_iterator ptr = first;
	while(ptr != end){
	   stmts.push_back(*ptr);
       ++ptr;	   
	}
	
}
void SuiteNode::execute() { 
	TableManager& tm = TableManager::getInstance();
	tm.pushScope();
	std::string flag("NULL");
	int stmt_count = 0;
	std::vector<Ast*>::iterator ptr = stmts.begin();
	while(ptr != stmts.end()){
		
     if( (*ptr)->getNodetype() == '='){
		stmt_count++;
	    tm.addTable((*ptr)->getLeft()->getVariable(), (*ptr)->getRight());
	 }
	 if( (*ptr)->getNodetype() == 'P' || (*ptr)->getNodetype() == 'R' ){
		stmt_count++;
	    if((*ptr)->getOutput(NULL,NULL)->getNodetype() == 'V'){
			
		    std::cout << "pyt> " << tm.getEntry((*ptr)->getOutput(NULL,NULL)->getVariable())->getNumber() << std::endl;
		}
		if((*ptr)->getOutput(NULL,NULL)->getNodetype() == 'I' || (*ptr)->getOutput(NULL,NULL)->getNodetype() == 'F'){
		    std::cout << "pyt> " << (*ptr)->getOutput(NULL,NULL)->getNumber() << std::endl;
		}
	}
	if( (*ptr)->getNodetype() == '+' || (*ptr)->getNodetype() == '-' || (*ptr)->getNodetype() == '*' || (*ptr)->getNodetype() == '/'
	                                   || (*ptr)->getNodetype() == '|'|| (*ptr)->getNodetype() == '%'|| (*ptr)->getNodetype() == '^' ){
		stmt_count++;
		if( flag == (*ptr)->getLeft()->getVariable() ){
			
		    tm.popScope();
		    tm.addTable((*ptr)->getLeft()->getVariable(),(*ptr)->getOutput(tm.getEntry((*ptr)->getLeft()->getVariable()), (*ptr)->getRight()));
		    tm.pushScope();
	    }
	    else
	        tm.addTable((*ptr)->getLeft()->getVariable(),(*ptr)->getOutput(tm.getEntry((*ptr)->getLeft()->getVariable()), (*ptr)->getRight()));
    }    
   if( (*ptr)->getNodetype() == 'G'){
	    stmt_count++;
		flag = (*ptr)->getVariable();
	    if(stmt_count > 1){
			Ast* value = tm.getEntry((*ptr)->getVariable());
            tm.popScope();
            tm.addTable((*ptr)->getVariable(), value);
            tm.pushScope();
            tm.erase((*ptr)->getVariable());
		}
			 
	}
	    ++ptr;
	}

tm.popScope();	
}
VoidNode::VoidNode(int i) : Ast('V',NULL,NULL){}
