#include <stdio.h>
#include <stdlib.h>
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
	char * type;
	char * identifier; /* owner TODO */
	tExpr * expr;
} tInstrDeclaration;

typedef struct instrIf {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrElse * instrElse;
} tInstrIf;

typedef struct instrElse {
	tInstrSet * instrSet;
	tInstrIf * instrIf;
} tInstrElse;

typedef struct instrWhile {
	tExpr * expr;
	tInstrSet * instrSet;
} tInstrWhile;

typedef struct value {
	char * type;
	void * value;
	int bytes;
} tValue;

typedef tValue tLValue;

typedef tValue tRValue;

/*** Main ***/

/*
typedef struct _main {
	tInstrSet * instrSet; 
} tMain;
*/

tMain * _main = NULL;

void solveMain() {
	solveInstrSet(NULL, _main->instrSet);
}

void deleteMain() {
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
	if (hasSymbol(symbolsTable, name)) {
		return -1;
	}
	tSymbol * symbol = malloc(sizeof(tSymbol));

	int len = strlen(name);
	symbol->name = malloc(len + 1);
	strcpy(symbol->name, name);

	symbol->type = type;

	symbol->content = malloc(bytes);
	symbol->content = memcpy(symbol->content, content, bytes);

	symbol->bytes = bytes;

	HASH_ADD_KEYPTR(hh, symbolsTable->symbols, symbol->name, len, symbol);
	return 1;
}

void _addSymbol(tSymbol * symbols, tSymbol * symbol) {
	HASH_ADD_KEYPTR(hh, symbols, symbol->name, strlen(symbol->name), symbol);
}

int hasSymbol(tSymbolsTable * symbolsTable, char * name) {
	return getSymbol(symbolsTable, name) != NULL;
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

void addAll(tSymbolsTable * symbolsTableDest, tSymbolsTable * symbolsTableSrc) {
	tSymbol * symbol;

	for(symbol = symbolsTableSrc->symbols; symbol != NULL; symbol = symbol->hh.next) {
        _addSymbol(symbolsTableDest->symbols, symbol);
    }
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

	int len = strlen(name);
	class->name = malloc(len + 1);
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

	int nameLen = strlen(name);
	property->name = malloc(nameLen + 1);
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

	int nameLen = strlen(name);
	method->name = malloc(nameLen + 1);
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

typedef struct instrDeclaration {
	char * type;
	char * identifier; 
	tExpr * expr;
} tInstrDeclaration;

typedef struct instrIf {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrElse * instrElse;
} tInstrIf;

typedef struct instrElse {
	tInstrSet * instrSet;
	tInstrIf * instrIf;
} tInstrElse;

typedef struct instrWhile {
	tExpr * expr;
	tInstrSet * instrSet;
} tInstrWhile;
*/

void solveInstrSet(tSymbolsTable * symbolsTable, tInstrSet * instrSet) {
	if (instrSet == NULL) {
		return;
	}
	instrSet->symbolsTable = NULL;
	if (symbolsTable != NULL) {
		addAll(instrSet->symbolsTable, symbolsTable);
	}
	if(instrSet->instrFirst != NULL) {
		solveInstrNode(instrSet->symbolsTable, instrSet->instrFirst);
	}	
}

void deleteInstrSet(tInstrSet * instrSet) {	
	if (instrSet->symbolsTable != NULL) {
		deleteSymbolsTable(instrSet->symbolsTable);
	}
	if (instrSet->instrFirst != NULL) {
		deleteInstrNode(instrSet->instrFirst);
	}
	free(instrSet);
}

void solveInstrNode(tSymbolsTable * symbolsTable, tInstrNode * instrNode) {
	if(instrNode->instr != NULL) {
		solveInstr(symbolsTable, instrNode->type, instrNode->instr);
	}
	if (instrNode->nextInstr != NULL) {
		solveInstrNode(symbolsTable, instrNode->nextInstr);
	}	
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

void solveInstr(tSymbolsTable * symbolsTable, int type, void * instr) {
	switch (type) {
		case INSTR_SIMPLE:
			solveInstrSimple(symbolsTable, (tInstrSimple *) instr);
			break;
		case INSTR_DECLARATION:
			solveInstrDeclaration(symbolsTable, (tInstrDeclaration *) instr);
			break;
		case INSTR_IF:
			solveInstrIf(symbolsTable, (tInstrIf *) instr);
			break;
		case INSTR_WHILE:
			solveInstrWhile(symbolsTable, (tInstrWhile *) instr);
			break;
	}
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

void solveInstrSimple(tSymbolsTable * symbolsTable, tInstrSimple * instr) {
	solveExpr(symbolsTable, (tExpr *) instr);
}

void deleteInstrSimple(tInstrSimple * instr) {
	deleteExpr((tExpr *) instr);
}

void solveInstrDeclaration(tSymbolsTable * symbolsTable, tInstrDeclaration * instr) {
	if (hasSymbol(symbolsTable, instr->identifier)) {
		// TODO: var has already been declared.
		return;
	}
	tRValue * rValue;
	if (instr->expr != NULL) {
		rValue = solveRValue(symbolsTable, instr->expr);
		if (rValue == NULL) {
			//TODO: Right-side of assignment is not a rvalue.
		}
		if (!isType(rValue, instr->type)) {
			// TODO: non-matching types error.
			return;
		}
	} else {
		rValue = getDefaultValue(instr->type);
	}
	addSymbol(symbolsTable, instr->identifier, instr->type, rValue->value, rValue->bytes);
}

void deleteInstrDeclaration(tInstrDeclaration * instr) {
	free(instr->identifier);
	if (instr->expr != NULL) {
		deleteExpr(instr->expr);
	}
	free(instr);
}

void solveInstrIf(tSymbolsTable * symbolsTable, tInstrIf * instr) {
	if (instr->expr != NULL) {
		tRValue * rValue = solveRValue(symbolsTable, instr->expr);
		if (rValue == NULL) {
			//TODO: expression is not a rvalue. (?)
		}
		if (!isType(rValue, _boolean)) {
			// TODO: expression is not boolean.
			return;
		}
		if (isTrue(rValue)) {
			solveInstrSet(symbolsTable, instr->instrSet);
		} else {
			solveInstrElse(symbolsTable, instr->instrElse);
		}
	} else {
		//TODO: If expr is null
		return;
	}
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

void solveInstrElse(tSymbolsTable * symbolsTable, tInstrElse * instr) {
	if (instr->instrIf != NULL) {
		solveInstrIf(symbolsTable, instr->instrIf);
	} else {
		solveInstrSet(symbolsTable, instr->instrSet);	
	}
}

void deleteInstrElse(tInstrElse * instr) {
	if (instr->instrSet != NULL) {
		deleteInstrSet(instr->instrSet);
	}
	if (instr->instrIf != NULL) {
		deleteInstrIf(instr->instrIf);
	}
	free(instr);
}

void solveInstrWhile(tSymbolsTable * symbolsTable, tInstrWhile * instr) {
	if (instr->expr != NULL) {
		tRValue * rValue = solveRValue(symbolsTable, instr->expr);
		if (rValue == NULL) {
			//TODO: expression is not a rvalue. (?)
		}
		if (!isType(rValue, _boolean)) {
			// TODO: expression is not boolean.
			return;
		}
		while (isTrue(rValue)) {
			solveInstrSet(symbolsTable, instr->instrSet);
			rValue = solveRValue(symbolsTable, instr->expr);
		}
	} else {
		//TODO: If expr is null
		return;
	}
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

int main(void) {
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
	addProperty(&properties, "name", _string, name, strlen(name) + 1);
	addProperty(&properties, "sex", _char, &sex, sizeof(char));
	addMethod(&methods, _int, "getAge", defParamsList, NULL);
	addMethod(&methods, _string, "getName", NULL, NULL);
	addClass("Person", properties, NULL, methods);
	addClass("Person", NULL, NULL, NULL);
	tClass * gotClass = getClass("Person");
	printf("%p\n", gotClass);
	printf("llegue acá\n");
	tClass * tmp;
	for(tmp = classes; tmp != NULL; tmp = tmp->hh.next) {
        printf("class name %s\n", tmp->name);
    }
	if(gotClass != NULL) {
		printf("className: %s\n", gotClass->name);
		tProperty * gotProp = getProperty(gotClass->properties, "sex");
		if(gotProp != NULL) {
			printf("sex type: %s\n", gotProp->type);
			printf("name: %s\n", (char *)(getProperty(gotClass->properties, "name")->defaultValue));
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
