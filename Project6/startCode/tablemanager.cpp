#include "tablemanager.h"
#include "ast.h"
TableManager::TableManager() : currentScope(0), tables(){
	tables.reserve(10);
	tables.push_back(new SymbolTable());
}
void TableManager::addTable(std::string& s, Ast* number){
	if(tables[currentScope])
	    tables[currentScope]->insert(s,number);
	else
        tables.insert(tables.begin()+currentScope, new SymbolTable(s, number));
}

bool TableManager::checkName(std::string& name, unsigned int scope){
	if(!tables.empty() && scope < tables.size()){
		if(tables[scope]->isPresent(name))
			return true;
		else 
			return false;
	}
	else 
		return false;
}
void TableManager::setScope(int scope) {
	currentScope = scope;
}
void TableManager::pushScope() {
	++currentScope;
}
void TableManager::popScope() {
	--currentScope;
}
TableManager& TableManager::getInstance() {
    static TableManager instance;
	return instance;
}
void TableManager::display(){
	std::cout << tables.size() << std::endl;
	for(unsigned int i=0;i<tables.size();i++)
	    tables[i]->display();
}
Ast* TableManager::getEntry(std::string& name){
	unsigned int scope = currentScope;
	while(scope>=0){
		if(checkName(name,scope))
			return  tables[scope]->retrieveValue(name);
		else
			scope--;
	}
	return NULL;
}
void TableManager::erase(std::string& s){
	tables[currentScope]->erase(s);
}
