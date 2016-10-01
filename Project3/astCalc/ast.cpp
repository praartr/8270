// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#  include <iostream>
#  include <stdlib.h>
#  include "ast.h"
#  include <math.h>
double eval(Ast *a) {
  double v = 0;
  switch( a->getNodetype() ) {
  case 'K': v = a->getNumber(); break;
  case '+': v = eval(a->getLeft()) + eval(a->getRight()); break;
  case '-': v = eval(a->getLeft()) - eval(a->getRight()); break;
  case '*': v = eval(a->getLeft()) * eval(a->getRight()); break;
  case '/': v = eval(a->getLeft()) / eval(a->getRight()); break;
  case '^': v = pow(eval(a->getLeft()),eval(a->getRight())); break;
  case 'M': v = -eval(a->getLeft()); break;
  default: std::cout << "internal error: bad node " << a->getNodetype() << std::endl;;
  }
  return v;
}

void treeFree(Ast *a) {
  switch(a->getNodetype()) {
   // two subtrees
  case '+':
  case '-':
  case '*':
  case '/':
  case '^':
    treeFree(a->getRight());

   // one subtrees
  case 'M':
    treeFree(a->getLeft());

   //no subtree
  case 'K':
    delete a;
    break;

  default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;
  }
}
void makeGraph(const Ast* a, std::fstream& output) {
   int plus_flag   = 0;
   int minus_flag  = 0;
   int mult_flag   = 0;
   int div_flag    = 0;
   int exp_flag    = 0;
   int uminus_flag = 0;
   if ( a ) {
     if ( a->getLeft() ) {
        output << "   " ;
	switch( a->getNodetype() ) {
	   case '+': if(plus_flag == 0)  { 
                       output <<"sym_plus  [label=\" + \"]  \n" ; 
                       plus_flag = 1;
                     } 
                     output <<"   "<<"sym_plus"  << "->" ; 
                     break;
	   case '-': if(minus_flag == 0) { 
                        output <<"sym_minus [label=\" - \"]  \n" ; 
                        minus_flag = 1;                      
                     } 
                     output <<"   "<<"sym_minus" << "->" ; 
                     break;
	   case '*': if(mult_flag == 0)  { 
                        output <<"sym_mult  [label=\" * \"]  \n" ; 
                        mult_flag = 1; 
                     } 
                     output <<"   "<<"sym_mult"  << "->" ; 
                     break;
	   case '/': if(div_flag == 0)   { 
                        output <<"sym_div   [label=\" / \"]  \n" ; 
                        div_flag = 1;  
                     } 
		     output <<"   "<<"sym_div"   << "->" ; 
                     break;
	   case '^': if(exp_flag == 0)   { 
                       output <<"sym_exp   [label=\" ** \"] \n" ; 
                       exp_flag = 1;  
                     } 
                     output <<"   "<<"sym_exp"   << "->" ; 
                     break;
	   case 'M': if(uminus_flag == 0)   { 
                        output <<"sym_uminus[label=\" - \"] \n" ; 
                        uminus_flag = 1;
                      } 
                      output <<"   "<<"sym_uminus" << "->"; 
                      break;
		}
			
    if(a->getLeft()->getNodetype() == 'K') { 			
	output << a->getLeft()->getNumber()<< " [weight=10]" << std::endl;
    }
    else if(a->getLeft()->getNodetype() == '+') { 
	output << "sym_plus" <<" [weight=10]" << std::endl;  
	makeGraph( a->getLeft(), output ); 
    }
    else if(a->getLeft()->getNodetype() == '-') { 
	output << "sym_minus" << " [weight =10]" << std::endl;  
	makeGraph( a->getLeft(), output ); 
    }
    else if(a->getLeft()->getNodetype() == '*') { 
	output << "sym_mult" << " [weight=10]" << std::endl;  
	makeGraph( a->getLeft(), output ); 
    }
    else if(a->getLeft()->getNodetype() == '/') { 
	output << "sym_div" <<" [weight=10]" << std::endl;  
	makeGraph( a->getLeft(), output ); 
    }
    else if(a->getLeft()->getNodetype() == '^') { 
	output << "sym_exp" <<" [weight=10]" << std::endl;  
	makeGraph( a->getLeft(), output ); 
    }
    else if(a->getLeft()->getNodetype() == 'M') { 
	output << "sym_uminus" << " [weight=10]" << std::endl;  
	makeGraph( a->getLeft(), output ); 
    }
			
  }
  if ( a->getRight() ) {
       output << "   ";
       switch( a->getNodetype() ) {
	    case '+': 
              if( plus_flag  == 0  ) { 
                 output << "sym_plus  [label=\" + \"] \n"  ; 
                 plus_flag = 1; 
              } 
              output <<"   " << "sym_plus"  << "->" ; 
              break;
	    case '-': 
              if( minus_flag == 0  ) { 
                 output << "sym_minus [label=\" - \"] \n"  ; 
                 minus_flag = 1;
              } 
              output <<"   " << "sym_minus" << "->" ;
              break;
	    case '*': 
              if( mult_flag  == 0  ) { 
                 output << "sym_mult  [label=\" * \"] \n"  ; 
                 mult_flag = 1; 
              } 
              output <<"   " << "sym_mult"  << "->" ; 
              break;
	    case '/': 
              if( div_flag   == 0  ) { 
                 output << "sym_div   [label=\" / \"] \n"  ; 
                 div_flag = 1;  
              } 
              output <<"   " << "sym_div"   << "->" ; 
              break;
	    case '^': 
              if( exp_flag   == 0  ) { 
                 output << "sym_exp   [label=\" ** \"] \n" ; 
                 exp_flag = 1;  
              } 
              output <<"   " << "sym_exp"   << "->" ; 
              break;
	    case 'M': 
              if( uminus_flag == 0 ) { 
                 output << "sym_uminus[label=\" - \"] \n"  ; 
                 uminus_flag = 1;
              } 
              output <<"   "<<"sym_uminus" << "->"; 
              break;
	}
			
       if(a->getRight()->getNodetype() == 'K') { 			
	    output << a->getRight()->getNumber()<< " [weight=10]" << std::endl;
	}
       else if(a->getRight()->getNodetype() == '+') { 
            output << "sym_plus" << " [weight=10]" << std::endl;  
	    makeGraph( a->getRight(), output ); 
	}
	else if(a->getRight()->getNodetype() == '-') { 
	    output << "sym_minus" << " [weight=10]" << std::endl;  
	    makeGraph( a->getRight(), output ); 
	}
	else if(a->getRight()->getNodetype() == '*') { 
	    output << "sym_mult" << " [weight=10]" << std::endl;  
	    makeGraph( a->getRight(), output ); 
	}
	else if(a->getRight()->getNodetype() == '/') { 
	    output << "sym_div" << " [weight=10]" << std::endl;  
	    makeGraph( a->getRight(), output ); 
	}
	else if(a->getRight()->getNodetype() == '^') { 
	    output << "sym_exp" << " [weight=10]" << std::endl;  
	    makeGraph( a->getRight(), output ); 
	}
	else if(a->getRight()->getNodetype() == 'M') { 
	    output << "sym_uminus" <<" [weight=10]" << std::endl;  
	    makeGraph( a->getRight(), output ); 
	}
      }
   }
}

