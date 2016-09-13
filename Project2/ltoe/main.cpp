#include <iostream>
int yylex();

extern int words;
extern int lines;
extern int chars;

int main() {
  yylex();
  std::cout << "characters: " << chars << std::endl;
  std::cout << "words: " << words << std::endl;
  std::cout << "lines: " << lines << std::endl;
  return 0;
}
