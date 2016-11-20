

#include <algorithm>
#include "symboltable.h"

SymbolTable& SymbolTable::getInstance() {
    static SymbolTable instance;
	return instance;
}
void SymbolTable::insert(std::string& s, Ast* number){
	table[s]=number;
}
int SymbolTable::isPresent(std::string& s){
    std::map<std::string,Ast*>::iterator ptr 
       = table.find(s);
    if(ptr!=table.end())
      return 1;
    else 
      return 0;
}
void SymbolTable::display(){
    std::map<std::string,Ast*>::const_iterator iter = table.begin();
    while(iter != table.end()) {
      std::cout << iter->first << ",";
      if(iter->second->getNodetype() == 'M')
         std::cout << -(iter->second->getLeft()->getNumber()) << std::endl;
      else
         std::cout << iter->second->getNumber() << std::endl;
    ++iter;
   }
}
Ast* SymbolTable::retrieveValue(std::string& s){
	  return table[s];
}
