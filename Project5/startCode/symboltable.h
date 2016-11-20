#include <string>
#include <map>
#include "ast.h"
class SymbolTable {

public:
   static SymbolTable& getInstance(); 
   void insert(std::string&, Ast*);
   int isPresent(std::string&);
   void display();
   Ast* retrieveValue(std::string&);
private:
   std::map<std::string,Ast*> table; 	
};
