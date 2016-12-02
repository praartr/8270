#pragma once
//#ifndef SYMBOLTABLE_H
//#define SYMBOLTABLE_H
#include <string>
#include <map>
#include "ast.h"
class SymbolTable {

public:
   SymbolTable();
   void insert(std::string&, Ast*);
   int isPresent(std::string&);
   void display();
   Ast* retrieveValue(std::string&);
private:
   std::map<std::string,Ast*> table; 	
};
//#endif