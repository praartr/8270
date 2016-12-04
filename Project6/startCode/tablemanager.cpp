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

bool TableManager::checkName(std::string& name, int scope){
	if(tables[scope]->isPresent(name)){
		// std::cout << "inside returning true" << std::endl; 
		 return true;
    }
	else return false;
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
	//std::cout << "inside getEntry" << std::endl;
	int scope = currentScope;
	while(scope>=0){
		//std::cout << "scope : " << scope  << std::endl;
		if(checkName(name,scope)){
			//std::cout <<"inside if" << std::endl;
			return  tables[scope]->retrieveValue(name);
			
			}
		else
			scope--;
	}
	return NULL;
}
