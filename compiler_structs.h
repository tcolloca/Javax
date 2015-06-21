#ifndef def_compiler_structs
#define def_compiler_structs

#include "expressions.h"

#define INSTR_SIMPLE		0
#define INSTR_DECLARATION	1
#define INSTR_IF			2
#define INSTR_WHILE			3

/*** Typedefs ***/

typedef struct _main tMain;

typedef struct class tClass;

/*typedef struct symbolType tSymbolType;*/

typedef struct symbol tSymbol;

/*typedef struct symbolsList tSymbolsList;*/

typedef struct symbolsTable tSymbolsTable;

typedef struct property tProperty;

typedef struct constructor tConstructor;

typedef struct method tMethod;

typedef struct defParameterList tDefParameterList;

typedef struct defParameterNode tDefParameterNode;

typedef struct instrSet tInstrSet;

typedef struct instrNode tInstrNode;

typedef tExpr tInstrSimple;

typedef struct instrDeclaration tInstrDeclaration;

typedef struct instrIf tInstrIf;

typedef struct instrElse tInstrElse;

typedef struct instrWhile tInstrWhile;

/*** Main ***/

void deleteMain(tMain * main);

/*** Symbols ***/

int addSymbol(tSymbolsTable * symbolsTable, char * name, char * type, void * content, int bytes);

tSymbol * getSymbol(tSymbolsTable * symbolsTable, char * name);

void deleteSymbolsTable(tSymbolsTable * symbolsTable);

void deleteSymbols(tSymbol * symbols);

void deleteSymbol(tSymbol * symbol);

/*** Classes ***/

int addClass(char * name, tProperty * properties, tConstructor * constructor, tMethod * methods);

tClass * getClass(char * name);

void deleteClass(tClass * class);

/*** Properties ***/

int addProperty(tProperty ** properties, char * name, char * type, void * content, int bytes);

tProperty * getProperty(tProperty * properties, char * name);

void deleteProperties(tProperty * properties);

void deleteProperty(tProperty * property);

/*** Constructors ***/

void deleteConstructor(tConstructor * constructor);

/*** Methods ***/

int addMethod(tMethod ** methods, char * returnType, char * name, 
	tDefParameterList * defParameterList, tInstrSet * instrSet);

tMethod * getMethod(tMethod * methods, char * name);

void deleteMethods(tMethod * methods);

void deleteMethod(tMethod * method);

/*** DefParameters ***/

tDefParameterList * newDefParamsList();

void addDefParameter(tDefParameterList * defParameterList, char * type, char * name);

int isEmpty(tDefParameterList * defParameterList);

void deleteDefParameterList(tDefParameterList * defParameterList);

void deleteDefParameterNode(tDefParameterNode * defParameterNode);

/*** Instructions ***/

void deleteInstrSet(tInstrSet * instrSet);

void deleteInstrNode(tInstrNode * instrNode);

void deleteInstr(int type, void * instr);

void deleteInstrDeclaration(tInstrDeclaration * instr);

void deleteInstrSimple(tInstrSimple * instr);

void deleteInstrIf(tInstrIf * instr);

void deleteInstrElse(tInstrElse * instr);

void deleteInstrWhile(tInstrWhile * instr);

#endif