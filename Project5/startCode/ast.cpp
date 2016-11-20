// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#  include <iostream>
#  include <stdlib.h>
#  include "ast.h"
#  include <math.h>
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
    treeFree(a->getLeft());

   //no subtree
  case 'V':
  case 'I':
  case 'F':
    delete a;
    break;

 /* default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;*/
  }
}
