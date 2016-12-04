
#ifndef TABLEMANAGER_H
#define TABLEMANAGER_H
#include <string>
#include <vector>
#include "symboltable.h"
class TableManager {
	
public:

  static TableManager& getInstance();
  Ast* getEntry(std::string& name);
   
  bool checkName(std::string&, int);
  void addTable(std::string& s, Ast* number);
  void pushScope();
  void popScope();
  int getCurrentScope() { return currentScope;}
  void addFuncName(std::string& s);
  int getVecSize() { return tables.size(); }
  void display();
private:
  TableManager();
  int currentScope;
  std::vector<SymbolTable*> tables;	
};
#endif	
