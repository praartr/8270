//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy
#pragma once
#ifndef AST_H
#define AST_H
#include <string>
#include <fstream>
#include <math.h>
#include <iostream>
#include <vector>

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(const int n, Ast* l,Ast* r) : nodetype(n),left(l),right(r) {}
  virtual ~Ast() { delete left; delete right;}
  char getNodetype() const { return nodetype; }
  Ast* getLeft() const { return left; }
  Ast* getRight() const { return right; }
  virtual double getNumber() const { throw "No Number"; }
  virtual Ast* getOutput(const Ast* x, const Ast* y) const { throw "NO Output";}
  virtual std::string& getVariable(){ throw "no variable";}  
  virtual void eval(Ast*){ throw "no eval func"; }
  virtual void execute(){ throw "no exec"; }
private:
  char nodetype;
   Ast* left;
   Ast* right;
   
};


class AstNumber : public Ast{	
public:
  AstNumber(const char nodetype);
};

class Variable : public Ast{
public:
  Variable(const char nodetype, const char* variable_name);
  std::string& getVariable();
private: 
  std::string identifier;
};

class IntNumber : public AstNumber {
public:
  IntNumber(const char nodetype, const int number);
  double getNumber() const;
  int getNumber(int i=0) const; 
private: 
 int number;
};

class FloatNumber : public AstNumber {
public:
  FloatNumber(const char nodetype, const double n);
  double getNumber() const;
private: 
  double number;
};
class PlusExp : public Ast {
public: 
  PlusExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const;
};

class MinusExp : public Ast {
public: 
  MinusExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const;
};

class MultExp : public Ast {
public: 
  MultExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const;
};

class DivExp : public Ast {
public: 
  DivExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const;

};

class ExpoExp : public Ast {
public: 
  ExpoExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const;

};
class ModExp : public Ast {
public: 
  ModExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const;
};
class DoubleSlashExp : public Ast {
public: 
  DoubleSlashExp(Ast* left, Ast* right);
  virtual Ast* getOutput(const Ast* x, const Ast* y) const; 
};
class UMinusExp : public Ast {
public: 
  UMinusExp(Ast* left); 
  virtual ~UMinusExp() { delete l;}
  virtual Ast* getOutput(const Ast* x, const Ast* y=0) const; 
  double getNumber() const;
private:
  Ast* l;
};
class AssignNode : public Ast {
public:
   AssignNode(Ast* left, Ast* right);
};
class PrintNode : public Ast {
public:
  PrintNode(Ast*);
  virtual Ast* getOutput(const Ast*x=0, const Ast* y=0)const;
private:
  Ast* left;
};
class FuncNode : public Ast {
public:
   FuncNode(const std::string&,Ast*);
   void execute();
private:
    const std::string func_name;
	Ast* suite;
};

class CallNode : public Ast {
public: 
  CallNode();
  void eval(Ast*);
	
};
class ReturnNode : public Ast {
public:
   ReturnNode(Ast*);
   virtual Ast* getOutput(const Ast*x=0, const Ast* y=0)const;
private:
   Ast* left;
};
class SuiteNode : public Ast{
public:
  SuiteNode(int, std::vector<Ast*>::reverse_iterator first, std::vector<Ast*>::reverse_iterator end);
  void execute();
private:
  int FuncScope;
  std::vector<Ast*> stmts;
};
Ast* eval(Ast*);   // Evaluate an AST
void treeFree(Ast*); // delete and free an AST


class VoidNode : public Ast{
public:
  VoidNode(int n);

};
#endif
