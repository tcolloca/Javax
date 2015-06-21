#include <stdio.h>
#include "compiler_structs.h"
#include "expressions.h"
#include "lib/uthash.h"

char * _int = "int";
char * _char = "char"; 
char * _boolean = "boolean"; 
char * _string = "string"; 

// TODO: View how types/names are freed

typedef struct _main {
	tInstrSet * instrSet; 
} tMain;

/*
typedef struct symbolType {
	char * name; 
	char * type;
	UT_hash_handle hh; 
} tSymbolType; */

typedef struct symbol {
	char * name; /* key */ /* owner */
	char * type;
	void * content; /* owner */
	int bytes;
	UT_hash_handle hh; /* hashable */
} tSymbol;

/*
typedef struct symbolsList {
	char * type; 
	tSymbol * symbols; 
	UT_hash_handle hh; 
} tSymbolsList;*/

typedef struct symbolsTable {
	/*tSymbolType * symbolTypes; /* uthash table */
	/*tSymbolsList * symbolsLists; /* uthash table */
	tSymbol * symbols;
} tSymbolsTable;

typedef struct class {
	char * name; /* key */ /* owner */
	tProperty * properties;
	tConstructor * constructor;
	tMethod * methods;
	UT_hash_handle hh; /* hashable */
} tClass;

typedef struct property {
	char * name; /* key */ /* owner */
	char * type;
	void * defaultValue; 
	int bytes;
	UT_hash_handle hh; /* hashable */
} tProperty;

typedef struct constructor {
	tDefParameterList * defParameterList;
	tInstrSet * instrSet;
} tConstructor;

typedef struct method {
	char * returnType;
	char * name; /* key */ /* owner */
	tDefParameterList * defParameterList;
	tInstrSet * instrSet;
	UT_hash_handle hh; /* hashable */
} tMethod;

typedef struct defParameterList {
	tDefParameterNode * first;
	tDefParameterNode * last;
} tDefParameterList;

typedef struct defParameterNode {
	char * type;
	char * name; /* owner // TODO */
	tDefParameterNode * nextDefParameter;
} tDefParameterNode;

typedef struct instrSet {
	tSymbolsTable * symbolsTable; /* uthash table */
	tInstrNode * instrFirst; 
} tInstrSet;

typedef struct instrNode {
	int type;
	void * instr;
	tInstrNode * nextInstr;
} tInstrNode;

typedef tExpr tInstrSimple;

typedef struct instrDeclaration {
	char * identifier; // TODO
	tExpr * expr;
} tInstrDeclaration;

typedef struct instrIf {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrElse * instrElse;
} tInstrIf;

typedef struct instrElse {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrIf * instrIf;
} tInstrElse;

typedef struct instrWhile {
	tExpr * expr;
	tInstrSet * instrSet;
} tInstrWhile;

/*** Main ***/

/*
typedef struct _main {
	tInstrSet * instrSet; 
} tMain;
*/

tMain * _main = NULL;

void deleteMain(tMain * _main) {
	deleteInstrSet(_main->instrSet);
	free(_main);
}

/*** Symbols ***/

/*
typedef struct symbolType {
	char * name; 
	char * type;
	UT_hash_handle hh; 
} tSymbolType; 

typedef struct symbol {
	char * name;
	void * content;
	UT_hash_handle hh;
} tSymbol;

typedef struct symbolsList {
	char * type;
	tSymbol * symbols; 
	UT_hash_handle hh;
} tSymbolsList;

typedef struct symbolsTable {
	tSymbolType * symbolTypes;
	tSymbolsList * symbolsLists;
} tSymbolsTable;
*/

int addSymbol(tSymbolsTable * symbolsTable, char * name, char * type, void * content, int bytes) {
	tSymbol * symbol = getSymbol(symbolsTable, name);
	if (symbol != NULL) {
		return -1;
	}
	symbol = malloc(sizeof(tSymbol));

	int len = strlen(name) + 1;
	symbol->name = malloc(len);
	strcpy(symbol->name, name);

	symbol->type = type;

	symbol->content = malloc(bytes);
	symbol->content = memcpy(symbol->content, content, bytes);

	symbol->bytes = bytes;

	HASH_ADD_KEYPTR(hh, symbolsTable->symbols, symbol->name, len, symbol);
	return 0;
}

tSymbol * getSymbol(tSymbolsTable * symbolsTable, char * name) {
	tSymbol * symbol;
	HASH_FIND_STR(symbolsTable->symbols, name, symbol);
	return symbol;
}

void deleteSymbolsTable(tSymbolsTable * symbolsTable) {
	deleteSymbols(symbolsTable->symbols);
	free(symbolsTable);
}

void deleteSymbols(tSymbol * symbols) {
	tSymbol * symbol, * tmp;

	HASH_ITER(hh, symbols, symbol, tmp) {
		HASH_DEL(symbols, symbol);
		deleteSymbol(symbol);
	}
}

void deleteSymbol(tSymbol * symbol) {
	free(symbol->name);
	free(symbol->content);
}

/*** Classes ***/

/*
typedef struct class {
	char * name;
	tProperty * properties;
	tConstructor * constructor;
	tMethod * methods;
	UT_hash_handle hh;
} tClass;
*/

tClass * classes = NULL; 

int addClass(char * name, tProperty * properties, tConstructor * constructor, tMethod * methods) {
	if (getClass(name) != NULL) {
		return 0;
	}
	tClass * class = malloc(sizeof(tClass));
	class->properties = properties;
	class->constructor = constructor;
	class->methods = methods;

	int len = strlen(name) + 1;
	class->name = malloc(len);
	strcpy(class->name, name);
	
	HASH_ADD_KEYPTR(hh, classes, class->name, len, class);
	return 1;
}

tClass * getClass(char * name) {
	tClass * class;
	HASH_FIND_STR(classes, name, class);
	return class;
}

void deleteClasses() {
	tClass * class, * tmp;

  	HASH_ITER(hh, classes, class, tmp) {
    	HASH_DEL(classes, class);
    	deleteClass(class);
  	}
}

void deleteClass(tClass * class) {
	free(class->name);
	if (class->properties != NULL) {	
		deleteProperties(class->properties);
	}
	if (class->constructor != NULL) {	
		deleteConstructor(class->constructor);
	}
	if (class->methods != NULL) {	
		deleteMethods(class->methods);
	}
    free(class);
}

/*** Properties ***/

/*
typedef tSymbolType tProperty;
*/

int addProperty(tProperty ** properties, char * name, char * type, void * defaultValue, int bytes) {
	if (getProperty(*properties, name) != NULL) {
		return 0;
	}
	tProperty * property = malloc(sizeof(tProperty));

	int nameLen = strlen(name) + 1;
	property->name = malloc(nameLen);
	strcpy(property->name, name);

	property->type = type;

	property->defaultValue = malloc(bytes);
	property->defaultValue = memcpy(property->defaultValue, defaultValue, bytes);

	property->bytes = bytes;
	
	HASH_ADD_KEYPTR(hh, *properties, property->name, nameLen, property);
	return 1;
}

tProperty * getProperty(tProperty * properties, char * name) {
	tProperty * property;
	HASH_FIND_STR(properties, name, property);
	return property;
}

void deleteProperties(tProperty * properties) {
	tProperty * property, * tmp;

  	HASH_ITER(hh, properties, property, tmp) {
    	HASH_DEL(properties, property);
    	deleteProperty(property);
  	}
}

void deleteProperty(tProperty * property) {
	free(property->name);
	free(property->defaultValue);
	free(property);
}

/*** Constructors ***/

/*
typedef struct constructor {
	tDefParameterList * defParameterList;
	tInstrSet * instrSet;
} tConstructor;
*/

void deleteConstructor(tConstructor * constructor) {
	if(constructor->defParameterList != NULL) {
		deleteDefParameterList(constructor->defParameterList);
	}
	if(constructor->instrSet != NULL) {
		deleteInstrSet(constructor->instrSet);
	}
	free(constructor);
}

/*** Methods ***/

/*
typedef struct method {
	char * returnType;
	char * name;
	tDefParameterList * defParameterList;
	tInstrSet * instrSet;
	UT_hash_handle hh;
} tMethod;
*/

int addMethod(tMethod ** methods, char * returnType, char * name, 
	tDefParameterList * defParameterList, tInstrSet * instrSet) {
	if (getMethod(*methods, name) != NULL) {
		return 0;
	}
	tMethod * method = malloc(sizeof(tMethod));

	method->returnType = returnType;

	int nameLen = strlen(name) + 1;
	method->name = malloc(nameLen);
	strcpy(method->name, name);

	method->defParameterList = defParameterList;
	method->instrSet = instrSet;
	
	HASH_ADD_KEYPTR(hh, *methods, method->name, nameLen, method);
	return 1;
}

tMethod * getMethod(tMethod * methods, char * name) {
	tMethod * method;
	HASH_FIND_STR(methods, name, method);
	return method;
}

void deleteMethods(tMethod * methods) {
	tMethod * method, * tmp;

	HASH_ITER(hh, methods, method, tmp) {
		HASH_DEL(methods, method);
		deleteMethod(method);
	}
}

void deleteMethod(tMethod * method) {
	free(method->name);
	if (method->defParameterList != NULL) {
		deleteDefParameterList(method->defParameterList);
	}
	if (method->instrSet != NULL) {
		deleteInstrSet(method->instrSet);
	}
	free(method);
}

/*** DefParameters ***/

/*
typedef struct defParameterList {
	tDefParameterNode * first;
	tDefParameterNode * last;
} tDefParameterList;

typedef struct defParameterNode {
	char * type;
	char * name;
	tDefParameterNode * nextDefParameter;
} tDefParameterNode;
*/

tDefParameterList * newDefParamsList() {
	tDefParameterList * list = malloc(sizeof(tDefParameterList));
	list->first = NULL;
	list->last = NULL;
	return list;
}

void addDefParameter(tDefParameterList * defParameterList, char * type, char * name) {
	tDefParameterNode * defParameterNode = malloc(sizeof(tDefParameterNode));
	defParameterNode->type = type;
	defParameterNode->name = strdup(name);
	defParameterNode->nextDefParameter = NULL;

	if (isEmpty(defParameterList)) {
		defParameterList->first = defParameterNode;
	} else {
		defParameterList->last->nextDefParameter = defParameterNode;
	}
	defParameterList->last = defParameterNode;
}

int isEmpty(tDefParameterList * defParameterList) {
	return defParameterList->first == NULL;
}

void deleteDefParameterList(tDefParameterList * defParameterList) {
	if (defParameterList->first != NULL) {
		deleteDefParameterNode(defParameterList->first);
	}
	free(defParameterList);
}

void deleteDefParameterNode(tDefParameterNode * defParameterNode) {
	if (defParameterNode->nextDefParameter != NULL) {
		deleteDefParameterNode(defParameterNode->nextDefParameter);
	}
	free(defParameterNode->name);
	free(defParameterNode);
}

/*** Instructions ***/

/*
typedef struct instrSet {
	tSymbolsTable * symbolsTable; 
	tInstrNode * instrFirst; 
} tInstrSet;

typedef struct instrNode {
	int type;
	void * instr;
	tInstrNode * nextInstr;
} tInstrNode;

typedef tExpr tInstrSimple;

typedef struct instrIf {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrElse * instrElse;
} tInstrIf;

typedef struct instrElse {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrIf * instrIf;
} tInstrElse;

typedef struct instrWhile {
	tExpr * expr;
	tInstrSet * instrSet;
} tInstrWhile;
*/

void deleteInstrSet(tInstrSet * instrSet) {	
	if (instrSet->symbolsTable != NULL) {
		deleteSymbolsTable(instrSet->symbolsTable);
	}
	if (instrSet->instrFirst != NULL) {
		deleteInstrNode(instrSet->instrFirst);
	}
	free(instrSet);
}

void deleteInstrNode(tInstrNode * instrNode) {
	if (instrNode->instr != NULL) {
		deleteInstr(instrNode->type, instrNode->instr);
	}
	if (instrNode->nextInstr != NULL) {
		deleteInstrNode(instrNode->nextInstr);
	}
	free(instrNode);
}

void deleteInstr(int type, void * instr) {
	switch (type) {
		case INSTR_SIMPLE:
			deleteInstrSimple((tInstrSimple *) instr);
			break;
		case INSTR_DECLARATION:
			deleteInstrDeclaration((tInstrDeclaration *) instr);
			break;
		case INSTR_IF:
			deleteInstrIf((tInstrIf *) instr);
			break;
		case INSTR_WHILE:
			deleteInstrWhile((tInstrWhile *) instr);
			break;
	}
}

void deleteInstrSimple(tInstrSimple * instr) {
	deleteExpr((tExpr *) instr);
}

void deleteInstrDeclaration(tInstrDeclaration * instr) {
	free(instr->identifier);
	if (instr->expr != NULL) {
		deleteExpr(instr->expr);
	}
	free(instr);
}

void deleteInstrIf(tInstrIf * instr) {
	if (instr->expr != NULL) {
		deleteExpr(instr->expr);
	}
	if (instr->instrSet != NULL) {
		deleteInstrSet(instr->instrSet);
	}
	if (instr->instrElse != NULL) {
		deleteInstrElse(instr->instrElse);
	}
	free(instr);
}

void deleteInstrElse(tInstrElse * instr) {
	if (instr->expr != NULL) {
		deleteExpr(instr->expr);
	}
	if (instr->instrSet != NULL) {
		deleteInstrSet(instr->instrSet);
	}
	if (instr->instrIf != NULL) {
		deleteInstrIf(instr->instrIf);
	}
	free(instr);
}

void deleteInstrWhile(tInstrWhile * instr) {
	if (instr->expr != NULL) {
		deleteExpr(instr->expr);
	}
	if (instr->instrSet != NULL) {
		deleteInstrSet(instr->instrSet);
	}
	free(instr);
}

/**********************/

main() {
	tProperty * properties = NULL;
	tMethod * methods = NULL;
	tDefParameterList * defParamsList = newDefParamsList();
	addDefParameter(defParamsList, _int, "var1");
	addDefParameter(defParamsList, _int, "var2");
	addDefParameter(defParamsList, _string, "var3");
	int age = 4;
	char sex = 'm';
	char * name = "pedro";
	addProperty(&properties, "age", _int, &age, sizeof(int));
	addProperty(&properties, "name", _string, name, strlen(name));
	addProperty(&properties, "sex", _char, &sex, sizeof(char));
	addMethod(&methods, _int, "getAge", defParamsList, NULL);
	addMethod(&methods, _string, "getName", NULL, NULL);
	addClass("Person", properties, NULL, methods);
	addClass("Person", NULL, NULL, NULL);
	tClass * gotClass = getClass("Person");
	if(gotClass != NULL) {
		printf("className: %s\n", gotClass->name);
		tProperty * gotProp = getProperty(gotClass->properties, "sex");
		if(gotProp != NULL) {
			printf("sex type: %s\n", gotProp->type);
			printf("name: %s\n", (char *)getProperty(gotClass->properties, "name")->defaultValue);
			printf("sex: %c\n", *((char *)gotProp->defaultValue));
			printf("age: %d\n", *((int *)getProperty(gotClass->properties, "age")->defaultValue));
		}
		tMethod * gotMethod = getMethod(gotClass->methods, "getAge");
		if(gotMethod != NULL) {
			printf("getAge returnType: %s\n", gotMethod->returnType);
			tDefParameterNode * defParam = gotMethod->defParameterList->first;
			while(defParam != NULL) {
				printf("%s:%s\n", defParam->type, defParam->name);
				defParam = defParam->nextDefParameter;
			}
		}	
	}
	/*tSymbolsTable * symbolsTable = malloc(sizeof(tSymbolsTable));
	addSymbolType(symbolsTable, "var1", "Person");*/
	/*
	addSymbolType(symbolsTable, "var1", "char");
	char * c = malloc(1);
	*c = 'a';
	addSymbol(symbolsTable, "var1", c);*/
	/*
	addSymbolType(symbolsTable, "var1", "string");
	char * s = strdup("hola");
	addSymbol(symbolsTable, "var1", s);*/
	/*
	addSymbolType(symbolsTable, "var1", "int");
	int * d = malloc(sizeof(int));
	*d = 15;
	addSymbol(symbolsTable, "var1", d);*/
	/*void * obj = malloc(sizeof(tProperty *));
	addSymbol(symbolsTable, "var1", obj);*/

	/*void * content = getSymbol(symbolsTable, "var1")->content;
	char * type = getSymbolType(symbolsTable, "var1")->type;
	if(!strcmp(type, "char")) {
		printf("char: %c\n", *((char *)content));
	} else if (!strcmp(type, "int")) {
		printf("integer: %d\n", *((int *)content));
	} else if (!strcmp(type, "string")) {
		printf("content: %s\n", (char *)content);
	} else {		
		tProperty * properties = (tProperty *) content;
		printf("anduvo :)\n");
	}
	deleteSymbolsTable(symbolsTable);*/
	deleteClasses();
	return 0;
}
