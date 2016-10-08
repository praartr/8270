//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#include <string>
#include <fstream>
#include <math.h>
extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(int n) : nodetype(n) {}
  virtual ~Ast() {}
  char getNodetype() const { return nodetype; }
  virtual Ast* getLeft() const { return 0; }
  virtual Ast* getRight() const { throw "No Right"; }
  virtual double getNumber() const { throw "No Number"; }
  virtual double getOutput(const double x, const double y) const { throw "NO Output";}  
private:
  char nodetype;
};

class PlusExp : public Ast {
public: 
  PlusExp(Ast* l, Ast* r) : Ast('+'), left(l) , right(r) {}
  virtual ~PlusExp() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getOutput(const double x, const double y) const {  return x+y ; }
private:
  Ast* left;
  Ast* right;
};

class MinusExp : public Ast {
public: 
  MinusExp(Ast* l, Ast* r) : Ast('-'), left(l) , right(r) {}
  virtual ~MinusExp() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getOutput(const double x, const double y) const {  return x-y ; }
private:
  Ast* left;
  Ast* right;
};

class MultExp : public Ast {
public: 
  MultExp(Ast* l, Ast* r) : Ast('*'), left(l) , right(r) {}
  virtual ~MultExp() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getOutput(const double x, const double y) const {  return x*y ; }
private:
  Ast* left;
  Ast* right;
};

class DivExp : public Ast {
public: 
  DivExp(Ast* l, Ast* r) : Ast('/'), left(l) , right(r) {}
  virtual ~DivExp() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getOutput(const double x, const double y) const {  return x/y ; }
private:
  Ast* left;
  Ast* right;
};

class ExpoExp : public Ast {
public: 
  ExpoExp(Ast* l, Ast* r) : Ast('^'), left(l) , right(r) {}
  virtual ~ExpoExp() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getOutput(const double x, const double y) const {  return pow(x,y) ; }
private:
  Ast* left;
  Ast* right;
};

class UMinusExp : public Ast {
public: 
  UMinusExp(Ast* l) : Ast('M'), left(l), right(NULL) {}
  virtual ~UMinusExp() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getOutput(const double x, const double y=0) const {  return -x ; }
private:
  Ast* left;
  Ast* right;
};
class AstNumber : public Ast {
public:
  AstNumber(double n) : Ast('K'), number(n) {} 
  virtual ~AstNumber() {}
  virtual double getOutput(const double x=0,const double y=0) const { return number; }
private:
  double number;
};
double eval(Ast*);   // Evaluate an AST
void treeFree(Ast*); // delete and free an AST 
void makeGraph(const Ast*, std::fstream&,unsigned int ob); // creates dot graph


