//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#include <string>
#include <fstream>
#include <math.h>
#include <iostream>

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(int n, Ast* l, Ast* r) : nodetype(n),left(l),right(r) {}
  virtual ~Ast() {}
  char getNodetype() const { return nodetype; }
  Ast* getLeft() const { return left; }
  Ast* getRight() const { return right; }
  virtual double getNumber() const { throw "No Number"; }
  virtual Ast* getOutput(const Ast* x, const Ast* y) const { throw "NO Output";} 
virtual std::string& getVariable(){ throw "no variable";}  
private:
  char nodetype;
   Ast* left;
   Ast* right;
};


class AstNumber : public Ast{
	
public:
AstNumber(char nodetype) : Ast(nodetype,NULL,NULL){}
};
//class SymbolTable;
class Variable : public Ast{
	
public:
Variable(char nodetype, const char* var) : Ast(nodetype,NULL,NULL), s(var){}//, symb(SymbolTable::getInstance()){}
virtual std::string& getVariable(){return s;}
//void get(){symb.retrieveValue(s);} 
private: 
std::string s;
//SymbolTable& symb;
};

class IntNumber : public AstNumber	{
	
public:
IntNumber(char nodetype, int n) : AstNumber(nodetype), numb(n){}
 virtual double getNumber() const { return numb; }
 int getNumber(int i=0) const { return numb; }
private: 
int numb;
};
class FloatNumber : public AstNumber	{
	
public:
FloatNumber(char nodetype, double n) : AstNumber(nodetype), numb(n){ }
virtual double getNumber() const { return numb; }
private: 
double numb;
};
class PlusExp : public Ast {
public: 
  PlusExp(Ast* l, Ast* r) : Ast('+',l,r) {}
  virtual ~PlusExp() {}
  virtual Ast* getOutput(const Ast* x, const Ast* y) const {  if((ceil(x->getNumber()+y->getNumber()) == x->getNumber()+y->getNumber()) )return (new IntNumber('I',x->getNumber()+y->getNumber())) ; else return (new FloatNumber('F',x->getNumber()+y->getNumber()));}

};

class MinusExp : public Ast {
public: 
  MinusExp(Ast* l, Ast* r) : Ast('-',l,r) {}
  virtual ~MinusExp() {}
  virtual Ast* getOutput(const Ast* x, const Ast* y) const {   if((ceil(x->getNumber()-y->getNumber()) == x->getNumber()-y->getNumber()) )return (new IntNumber('I',x->getNumber()-y->getNumber())) ; else return (new FloatNumber('F',x->getNumber()-y->getNumber()));} 
};

class MultExp : public Ast {
public: 
  MultExp(Ast* l, Ast* r) : Ast('*',l,r) {}
  virtual ~MultExp() {}
 
  virtual Ast* getOutput(const Ast* x, const Ast* y) const {  if((ceil(x->getNumber()*y->getNumber()) == x->getNumber()*y->getNumber()) )return (new IntNumber('I',x->getNumber()*y->getNumber())) ; else return (new FloatNumber('F',x->getNumber()*y->getNumber()));}
};

class DivExp : public Ast {
public: 
  DivExp(Ast* l, Ast* r) : Ast('/',l,r) {}
  virtual ~DivExp() {}
  virtual Ast* getOutput(const Ast* x, const Ast* y) const {   if((ceil(x->getNumber()/y->getNumber()) == x->getNumber()/y->getNumber()) )return (new IntNumber('I',x->getNumber()/y->getNumber())) ; else return (new FloatNumber('F',x->getNumber()/y->getNumber()));}

};

class ExpoExp : public Ast {
public: 
  ExpoExp(Ast* l, Ast* r) : Ast('^',l,r) {}
  virtual ~ExpoExp() {}
  virtual Ast* getOutput(const Ast* x, const Ast* y) const { if(ceil(powf(x->getNumber(),y->getNumber())) == powf(x->getNumber(),y->getNumber()) )return (new IntNumber('I',powf(x->getNumber(),y->getNumber()))) ; else return (new FloatNumber('F',powf(x->getNumber(),y->getNumber())));}

};
class ModExp : public Ast {
public: 
  ModExp(Ast* l, Ast* r) : Ast('%',l,r) {}
  virtual ~ModExp() {}

  virtual Ast* getOutput(const Ast* x, const Ast* y) const { if(ceil(fmod(x->getNumber(),y->getNumber())) == fmod(x->getNumber(),y->getNumber())) return (new IntNumber('I',fmod(x->getNumber(),y->getNumber()))) ; else return (new FloatNumber('F',fmod(x->getNumber(),y->getNumber())));}
};
class DoubleSlashExp : public Ast {
public: 
  DoubleSlashExp(Ast* l, Ast* r) : Ast('|',l,r) {}
  virtual ~DoubleSlashExp() {}

  virtual Ast* getOutput(const Ast* x, const Ast* y) const { if(ceil(floor(x->getNumber()/y->getNumber())) == floor(x->getNumber()/y->getNumber()))return (new IntNumber('I',floor(x->getNumber()/y->getNumber()))) ; else return (new FloatNumber('F',floor(x->getNumber()/y->getNumber())));}
};
class UMinusExp : public Ast {
public: 
  UMinusExp(Ast* l) : Ast('M',l,NULL){}
  virtual ~UMinusExp() {}
  virtual Ast* getOutput(const Ast* x, const Ast* y=0) const { if(ceil(-x->getNumber()) == (-x->getNumber())) return (new IntNumber('I',-x->getNumber())) ; else return (new FloatNumber('F',-x->getNumber())) ;  }

};


Ast* eval(Ast*);   // Evaluate an AST
void treeFree(Ast*); // delete and free an AST 
void makeGraph(const Ast*, std::fstream&,unsigned int ob); // creates dot graph


