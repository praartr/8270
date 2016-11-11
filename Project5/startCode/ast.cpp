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
  case 'I':
  case 'F':
    delete a;
    break;

  default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;
  }
}
void makeGraph(const Ast* a, std::fstream& output, unsigned int ob) {
  static int order_label = 2;
  if ( a ) {
    switch (a->getNodetype()){
      case '+':
      case '-':
      case '*':
      case '/':
      case '^':
	  case '%':
      case '|':
      case 'M': if(a->getLeft()){
                  if(a->getLeft()->getNodetype()=='K'){
                    output << order_label++ << " [label=\"" << a->getLeft()->getOutput(0,0) << "\"]" << std::endl;
					
                  }
				  else if(a->getLeft()->getNodetype() == 'M') {
					output << order_label++ << " [label=\"-\"] " << std::endl;
				  }
				  else if(a->getLeft()->getNodetype() == '^') {
					output << order_label++ << " [label=\"**\"]" << std::endl;
				  }
                  else{
                    output << order_label++ << " [label=\"" << a->getLeft()->getNodetype() << "\"]" << std::endl;
                  }
                  output << "   " << ob<<"->" << order_label-1 << std::endl;
                  makeGraph(a->getLeft(),output,order_label-1);
                }
                if(a->getRight()){
                  if(a->getRight()->getNodetype()=='K'){
                    output << order_label++ << " [label=\"" << a->getRight()->getOutput(0,0) << "\"]" << std::endl;
                  }
				   else if(a->getRight()->getNodetype() == 'M') {
					output << order_label++ << " [label=\"-\"]" << std::endl;
				  }
				  else if(a->getRight()->getNodetype() == '^') {
					output << order_label++ << " [label=\"**\"]" << std::endl;
				  }
                  else{   
					 output << order_label++ << " [label=\"" << a->getRight()->getNodetype() << "\"]" << std::endl;
                  }
                  output << "   " << ob << "->" << order_label-1 << std::endl;
                  makeGraph(a->getRight(),output,order_label-1);
                }
                break;
      case 'I': 
	  case 'F': 
	           break;
      default : std::cout << "internal error: bad node "
                    << a->getNodetype() << std::endl;;
    }
  }
}
