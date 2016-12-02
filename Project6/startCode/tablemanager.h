#pragma once
//#ifndef TABLEMANAGER_H
//#define TABLEMANAGER_H
#include <string>
#include <vector>
#include "ast.h"
#include "symboltable.h"
class TableManager {
	
public:
  //TableManager();
  static TableManager& getInstance();
  Ast* getEntry(std::string& name);
   
  bool checkName(std::string& name);
  void addTable(SymbolTable&);
  void pushScope();
  void popScope();
  int getCurrentScope() { return currentScope;}
  
private:
  int currentScope;
  std::vector<SymbolTable> tables;	
};
//#endif	