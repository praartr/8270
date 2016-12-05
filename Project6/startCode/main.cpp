#include <iostream>

extern int yylineno;
int yylex(void);
extern int yyparse();

void printInfo(void)
{ 
    std::cout << std::endl;
    std::cout << "lines: " << yylineno << std::endl;
}

int main(int argc, char * argv[]) {

    int parseErrors = yyparse();
    if ( parseErrors ) {
        std::cerr << "Abnormal termination" << std::endl;
        return 1;
    }
    return 0;
}

int oldMain() {
    yylex();
    printInfo();
    return 0;
}

