#ifndef def_compiler_structs
#define def_compiler_structs

#include "lib/list.h"

typedef struct program tProgram;

typedef struct main tMain;

typedef struct class tClass;

typedef struct property tProperty;

typedef struct constructor tConstructor;

typedef struct method tMethod;

typedef struct expr tExpr;

/*** Program ***/

tProgram * newProgram();

void printProgram(tProgram * program);

void addClasses(tProgram * program, tList * classes);

void addMain(tProgram * program, tMain * main);

void deleteProgram(tProgram * program);

/*** Main ***/

tMain * newMain(char * name);

void printMain(tMain * main);

void deleteMain(tMain * main);

/*** Class ***/

tClass * newClass(char * name, tList * properties, tList * constructors, tList * methods);

void printClasses(tList * classes);

void printClass(tClass * class);

void deleteClasses(tList * classes);

void deleteClass(tClass * class);

tList * newClasses();

/*** Property ***/

tProperty * newProperty(char * type, char * name, tExpr * expr);

void printProperties(tList * properties);

void printProperty(tProperty * property);

void deleteProperties(tList * properties);

void deleteProperty(tProperty * property);

tList * newProperties();

/*** Constructor ***/

tConstructor * newConstructor(char * name);

void printConstructors(tList * constructors);

void printConstructor(tConstructor * constructor);

void deleteConstructors(tList * constructors);

void deleteConstructor(tConstructor * constructor);

tList * newConstructors();

/*** Method ***/

tMethod * newMethod(char * returnType, char * name);

void printMethods(tList * methods);

void printMethod(tMethod * method);

void deleteMethods(tList * methods);

void deleteMethod(tMethod * method);

tList * newMethods();

/*** Expr ***/

void printExpr();

void deleteExpr();

#endif