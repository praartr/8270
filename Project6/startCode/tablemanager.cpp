#include "tablemanager.h"
//#include "symboltable.h"
//#include "ast.h"
/*TableManager::TableManager() : currentScope(0), tables(){
	tables.reserve(4);
}*/
void TableManager::addTable(SymbolTable& s){
	tables[currentScope] = s;
	
}
bool TableManager::checkName(std::string& name){
	SymbolTable s = tables[currentScope];
	s.isPresent(name);
	if(/*tables[currentScope].isPresent(name)*/s.isPresent(name)) return true;
	else return false;
}
void TableManager::pushScope() {
	currentScope++;
}
void TableManager::popScope() {
	currentScope--;
}
TableManager& TableManager::getInstance() {
    static TableManager instance;
	return instance;
}

Ast* TableManager::getEntry(std::string& name){
	int scope = currentScope;
	while(currentScope>=0){
		if(checkName(name)) return tables[currentScope].retrieveValue(name);
		else
			currentScope--;
	}
	
	currentScope = scope;
	return NULL;
}