#include <string>
#include <map>
#include "ast.h"
class Ast;
class SymbolTable {

public:
   SymbolTable();
   SymbolTable(std::string&, Ast*);
   void insert(std::string&, Ast*);
   int isPresent(std::string&);
   void display();
   Ast* retrieveValue(std::string&);
   //void erase(std::string& s);
   
private:
   std::map<std::string,Ast*> table; 	
};
