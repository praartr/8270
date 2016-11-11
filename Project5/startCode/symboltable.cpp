
#include <map>
#include <algorithm>
#include <string>
#include <cstring>
#include "ast.h"
class Ast;
class SymbolTable {
public: 
  
  static SymbolTable& getInstance() {
	  static SymbolTable instance;
	  return instance;
  }
  void insert(std::string& s, Ast* number){
	  table[s]=number;
  }
  bool isPresent(std::string& s){
	std::map<std::string,Ast*>::iterator ptr 
         = table.find(s);
    if(ptr!=table.end())
		return true;
	else 
		return false;
  }
  void display(){
   std::map<std::string,Ast*>::const_iterator iter = table.begin();

 while(iter != table.end()) {
 std::cout << iter->first << ",";
 std::cout << iter->second->getNumber() << std::endl;
 ++iter;
 
 }
  }
  Ast* retrieveValue(std::string& s){
	  return table[s];
  }
private:
  std::map<std::string,Ast*> table; 
  char nodetype;
};