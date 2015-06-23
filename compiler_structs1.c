#include <stdio.h>
#include <stdlib.h>
#include "compiler_structs.h"
#include "lib/uthash.h"

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
	void * value; /* owner */
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
	tSymbol * symbols; /* uthash table */
} tSymbolsTable;

typedef struct class {
	char * name; /* key */ /* owner */
	tProperty * properties;
	tConstructor * constructor;
	tMethod * methods;
	UT_hash_handle hh; /* hashable */
} tClass;

typedef tSymbol tProperty;

typedef struct constructor {
	tFunctionDef * functionDef;
} tConstructor;

typedef struct method {
	char * returnType;
	char * name; /* key */ /* owner */
	tFunctionDef * functionDef;
	UT_hash_handle hh; /* hashable */
} tMethod;

typedef struct functionDef {
	tDefParameterList * defParameterList;
	tInstrSet * instrSet;
} tFunctionDef;

typedef struct defParameterList {
	tDefParameterNode * first;
	tDefParameterNode * last;
} tDefParameterList;

typedef struct defParameterNode {
	char * type;
	char * name; /* owner // TODO */
	tDefParameterNode * next;
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

typedef struct instrReturn {
	tExpr * expr;
} tInstrReturn;

/*** Expression typedefs ***/

char * _int = "int";
char * _char = "char"; 
char * _boolean = "boolean"; 
char * _string = "string"; 

int _true = 1;
int _false = 0;

typedef struct expr {
	int type;
	void * expression;
} tExpr;

typedef struct exprBinary {
	tExpr * expr1;
	tExpr * expr2;
} tExprBinary;

typedef struct exprTernary {
	tExpr * expr1;
	tExpr * expr2;
	tExpr * expr3;
} tExprTernary;

typedef tExprBinary tExprAssignment;

typedef tExprTernary tExprConditional;

typedef tExprBinary tExprBoolean;

typedef tExprBinary tExprEquality;

typedef tExprBinary tExprOrder;

typedef tExprBinary tExprArithmetic;

typedef struct exprObjCreation {
	char * identifier;
	tParametersList * parametersList;
} tExprObjCreation;

typedef struct exprIdentifier {
	char * identifier;
} tExprIdentifier;

typedef struct value {
	char * type;
	void * value;
	int bytes;
} tValue;

typedef tValue tLValue;

typedef tValue tRValue;

typedef struct object {
	tObjProperty * properties; /* uthash able */
} tObject;

typedef tProperty tObjProperty;

typedef struct parametersList {
	tParameterNode * first;
	tParameterNode * last;
} tParametersList;

typedef struct parameterNode {
	tExpr * expr;
	tParameterNode * next;
} tParameterNode;

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
	void * value;
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

int addSymbol(tSymbolsTable * symbolsTable, char * name, char * type, void * value, int bytes) {
	if (hasSymbol(symbolsTable, name)) {
		return -1;
	}
	tSymbol * symbol = malloc(sizeof(tSymbol));

	int len = strlen(name);
	symbol->name = malloc(len + 1);
	strcpy(symbol->name, name);

	symbol->type = type;

	symbol->value = malloc(bytes);
	symbol->value = memcpy(symbol->value, value, bytes);

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
	free(symbol->value);
}

void addAll(tSymbolsTable * symbolsTableDest, tSymbolsTable * symbolsTableSrc) {
	tSymbol * symbol;

	for(symbol = symbolsTableSrc->symbols; symbol != NULL; symbol = symbol->hh.next) {
        _addSymbol(symbolsTableDest->symbols, symbol);
    }
}

tSymbolsTable * getSymbolsFromObject(tObject * object) {
	tSymbolsTable * symbolsTable = newSymbolsTable();
	symbolsTable->symbols = ((tSymbol *)object->properties);
}

tSymbolsTable * newSymbolsTable() {
	tSymbolsTable * symbolsTable =  malloc(sizeof(tSymbolsTable));
	symbolsTable->symbols = NULL;
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

tProperty * newProperty(char * name, char * type, void * value, int bytes) {
	tProperty * property = malloc(sizeof(tProperty));

	int nameLen = strlen(name);
	property->name = malloc(nameLen + 1);
	strcpy(property->name, name);

	property->type = type;
	if (value != NULL) {
		property->value = malloc(bytes);
		property->value = memcpy(property->value, value, bytes);

		property->bytes = bytes;
	} else {

	}
	return property;
}

int addProperty(tProperty ** properties, tProperty * property) {
	if (getProperty(*properties, property->name) != NULL) {
		return 0;
	}
	HASH_ADD_KEYPTR(hh, *properties, property->name, strlen(property->name), property);
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
	free(property->value);
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
	if (constructor->functionDef != NULL) {
		deleteFunctionDef(constructor->functionDef);
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

	method->functionDef = malloc(sizeof(tFunctionDef));
	method->functionDef->defParameterList = defParameterList;
	method->functionDef->instrSet = instrSet;
	
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
	if (method->functionDef != NULL) {
		deleteFunctionDef(method->functionDef);
	}
	free(method);
}

/*** functionDef ***/

void deleteFunctionDef(tFunctionDef * functionDef) {
	if(functionDef->defParameterList != NULL) {
		deleteDefParameterList(functionDef->defParameterList);
	}
	if(functionDef->instrSet != NULL) {
		deleteInstrSet(functionDef->instrSet);
	}
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
	tDefParameterNode * next;
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
	defParameterNode->next = NULL;

	if (isEmpty(defParameterList)) {
		defParameterList->first = defParameterNode;
	} else {
		defParameterList->last->next = defParameterNode;
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
	if (defParameterNode->next != NULL) {
		deleteDefParameterNode(defParameterNode->next);
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

typedef struct instrReturn {
	tExpr * expr;
} tInstrReturn;
*/

tRValue * solveInstrSet(tSymbolsTable * symbolsTable, tInstrSet * instrSet) {
	if (instrSet == NULL) {
		return emptyValue();
	}
	instrSet->symbolsTable = newSymbolsTable();
	if (symbolsTable != NULL) {
		addAll(instrSet->symbolsTable, symbolsTable);
	}
	if(instrSet->instrFirst != NULL) {
		return solveInstrNode(instrSet->symbolsTable, instrSet->instrFirst);
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

tRValue * solveInstrNode(tSymbolsTable * symbolsTable, tInstrNode * instrNode) {
	if(instrNode->instr != NULL) {
		tRValue * returnValue = solveInstr(symbolsTable, instrNode->type, instrNode->instr);
		if (instrNode->type == INSTR_RETURN) {
			return returnValue;
		}
	}
	if (instrNode->nextInstr != NULL) {
		return solveInstrNode(symbolsTable, instrNode->nextInstr);
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

tRValue * solveInstr(tSymbolsTable * symbolsTable, int type, void * instr) {
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
		case INSTR_RETURN:
			return solveInstrReturn(symbolsTable, (tInstrReturn *) instr);
	}
	return emptyValue();
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
		case INSTR_RETURN:
			deleteInstrReturn((tInstrReturn *) instr);
			break;
	}
}

void solveInstrSimple(tSymbolsTable * symbolsTable, tInstrSimple * instr) {
	solveRValue(symbolsTable, (tExpr *) instr);
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
			// There is a nested error
			return;
		}
		if (!isType(rValue, instr->type)) {
			// TODO: non-matching types error.
			deleteRValue(rValue);
			return;
		}
	} else {
		rValue = getDefaultValue(instr->type);
	}
	addSymbol(symbolsTable, instr->identifier, instr->type, rValue->value, rValue->bytes);
	deleteRValue(rValue);
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
		tRValue * rValue = solveBoolean(symbolsTable, instr->expr);
		if (rValue == NULL) {
			//TODO: expression is not boolean.
			return;
		}
		if (isTrue(rValue)) {
			solveInstrSet(symbolsTable, instr->instrSet);
		} else {
			solveInstrElse(symbolsTable, instr->instrElse);
		}
		deleteRValue(rValue);
	} else {
		//TODO: If expr is NULL
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
		tRValue * rValue = solveBoolean(symbolsTable, instr->expr);
		if (rValue == NULL) {
			//TODO: expression is not boolean.
			return;
		}
		while (isTrue(rValue)) {
			solveInstrSet(symbolsTable, instr->instrSet);
			deleteRValue(rValue);
			rValue = solveRValue(symbolsTable, instr->expr);
		}
		deleteRValue(rValue);
	} else {
		//TODO: If expr is NULL
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

tRValue * solveInstrReturn(tSymbolsTable * symbolsTable, tInstrReturn * instr) {
	if (instr->expr != NULL) {
		tRValue * rValue = solveRValue(symbolsTable, instr->expr);
		if (rValue == NULL) {
			//TODO: expression is not rValue. Nested error.
			return NULL;
		}
		return rValue;
	} else {
		//TODO: If expr is NULL
		return NULL;
	}
}

void deleteInstrReturn(tInstrReturn * instr) {
	if (instr->expr != NULL) {
		deleteExpr(instr->expr);
	}
	free(instr);
}

/*** Expressions ***/

// TODO: Use solveExprArithmetic
tRValue * solveExprAssignment(tSymbolsTable * symbolsTable, tExprAssignment * expr, int type) {
	tLValue * lValue = solveLValue(symbolsTable, expr->expr1);
	if (lValue == NULL) {
		// TODO: not lvalue.
		return NULL;
	}
	tRValue * rValue = solveRValue(symbolsTable, expr->expr2);
	if (rValue == NULL) {
		// TODO: not rValue.
		deleteRValue(rValue);
		return NULL;
	}
	if (!isType(rValue, lValue->type)) {
		// TODO: non-matching types.
		deleteRValue(rValue);
		return NULL;
	}
	if (type == E_ASSIGNMENT) {	
		emptyLValue(lValue);
		lValue->value = rValue->value;
		lValue->bytes = rValue->bytes;
		deleteRValue(rValue);
		return rValue;
	}
	if (!isNumber(rValue)) {
		// TODO: Expected number-type lValue.
		deleteRValue(rValue);
		return NULL;
	}
	
	if (isInt(rValue)) {
		int aux = *((int *)lValue->value);
		switch (type) {
			case E_ASSIGNMENT_PLUS:
				aux += *((int *)rValue->value);
				break;
			case E_ASSIGNMENT_MINUS:
				aux -= *((int *)rValue->value);
				break;
			case E_ASSIGNMENT_MULT:
				aux *= *((int *)rValue->value);
				break;
			case E_ASSIGNMENT_DIV:
				aux /= *((int *)rValue->value);
				break;
			case E_ASSIGNMENT_MOD:
				aux %= *((int *)rValue->value);
				break;
		}
		emptyLValue(lValue);
		lValue->value = memcpy(lValue->value, &aux, lValue->bytes);
	}
	rValue->value = memcpy(rValue->value, lValue->value, rValue->bytes);
	return rValue;
}

tRValue * solveConditional(tSymbolsTable * symbolsTable, tExprConditional * expr) {
	tRValue * rValue2 = solveRValue(symbolsTable, expr->expr3);
	if (rValue2 == NULL) {
		// TODO: not rValue. Nested error.
		return NULL;
	}
	tRValue * rValue1 = solveRValue(symbolsTable, expr->expr2);
	if (rValue1 == NULL) {
		// TODO: not rValue. Nested error.
		deleteRValue(rValue2);
		return NULL;
	}
	tRValue * booleanValue = solveBoolean(symbolsTable, expr->expr1);
	if (booleanValue == NULL) {
		// TODO: not boolean Value.
		deleteRValue(rValue1);
		deleteRValue(rValue2);
		return NULL;
	}
	if (isTrue(booleanValue)) {
		deleteRValue(rValue2);
		return rValue1;
	} else {
		deleteRValue(rValue1);
		return rValue2;
	}
}

tRValue * solveBooleanExpr(tSymbolsTable * symbolsTable, tExprBoolean * expr, int type) {
	tRValue * rValue1 = solveBoolean(symbolsTable, expr->expr1);
	if (rValue1 == NULL) {
		// TODO: not boolean.
		return NULL;
	}
	tRValue * rValue2 = solveBoolean(symbolsTable, expr->expr2);
	if (rValue2 == NULL) {
		// TODO: not boolean.
		deleteRValue(rValue1);
		return NULL;
	}
	int aux;
	switch (type) {
		case E_IMPLIES:
			aux = !(*((int *)rValue1->value)) || *((int *)rValue2->value);
			break;
		case E_OR:
			aux = *((int *)rValue1->value) || *((int *)rValue2->value);
			break;
		case E_AND:
			aux = *((int *)rValue1->value) && *((int *)rValue2->value);
			break;
	}
	if(aux) {
		rValue1->value = &_true;
	} else {
		rValue1->value = &_false;
	}
	deleteRValue(rValue2);
	return rValue1;
}

tRValue * solveEquality(tSymbolsTable * symbolsTable, tExprEquality * expr, int type) {
	tRValue * rValue1 = solveRValue(symbolsTable, expr->expr1);
	if (rValue1 == NULL) {
		// TODO: not rValue. Nested error.
		return NULL;
	}
	tRValue * rValue2 = solveRValue(symbolsTable, expr->expr2);
	if (rValue2 == NULL) {
		// TODO: not rValue. Nested error.
		deleteRValue(rValue1);
		return NULL;
	}
	if (!isType(rValue1, rValue2->type)) {
		// TODO: non-matching types.
		deleteRValue(rValue1);
		deleteRValue(rValue2);
		return NULL;
	}
	int aux;
	if(isInt(rValue1)) {
		aux = *((int *)rValue1->value) == *((int *)rValue2->value);
	} else if(isChar(rValue1)) {
		aux = *((char *)rValue1->value) == *((char *)rValue2->value);
	} else if(isString(rValue1)) {
		aux = !strcmp(*((char **)rValue1->value), *((char **)rValue2->value));
	} else {
		aux = rValue1->value == rValue2->value;
	}
	if(type == E_NE) {
		aux = !aux;
	}

	deleteRValue(rValue1);
	deleteRValue(rValue2);
	return saveBoolean(aux);
}

tRValue * solveOrder(tSymbolsTable * symbolsTable, tExprOrder * expr, int type) {
	tRValue * rValue1 = solveNumber(symbolsTable, expr->expr1);
	if (rValue1 == NULL) {
		// TODO: not a number.
		return NULL;
	}
	tRValue * rValue2 = solveNumber(symbolsTable, expr->expr2);
	if (rValue2 == NULL) {
		// TODO: not a number.
		deleteRValue(rValue1);
		return NULL;
	}
	if (!isType(rValue1, rValue2->type)) {
		// TODO: non-matching types.
		deleteRValue(rValue1);
		deleteRValue(rValue2);
		return NULL;
	}
	int aux;
	if(isInt(rValue1) || isBoolean(rValue1)) {
		switch (type) {
		case E_LE:
			aux = *((int *)rValue1->value) <= *((int *)rValue2->value);
			break;
		case E_GE:
			aux = *((int *)rValue1->value) >= *((int *)rValue2->value);
			break;
		case E_LT:
			aux = *((int *)rValue1->value) < *((int *)rValue2->value);
			break;
		case E_GT:
			aux = *((int *)rValue1->value) > *((int *)rValue2->value);
			break;
		}
	}

	deleteRValue(rValue1);
	deleteRValue(rValue2);
	return saveBoolean(aux);
}

tRValue * solveArithmetic(tSymbolsTable * symbolsTable, tExprArithmetic * expr, int type) {
	tRValue * rValue1 = solveNumber(symbolsTable, expr->expr1);
	if (rValue1 == NULL) {
		// TODO: not a number.
		return NULL;
	}
	tRValue * rValue2 = solveNumber(symbolsTable, expr->expr2);
	if (rValue2 == NULL) {
		// TODO: not a number.
		deleteRValue(rValue1);
		return NULL;
	}
	if (!isType(rValue1, rValue2->type)) {
		// TODO: non-matching types.
		deleteRValue(rValue1);
		deleteRValue(rValue2);
		return NULL;
	}
	int aux;
	if (isInt(rValue1)) {
		int aux = *((int *)rValue1->value);
		switch (type) {
			case E_OP_PLUS:
				aux += *((int *)rValue2->value);
				break;
			case E_OP_MINUS:
				aux -= *((int *)rValue2->value);
				break;
			case E_OP_MULT:
				aux *= *((int *)rValue2->value);
				break;
			case E_OP_DIV:
				aux /= *((int *)rValue2->value);
				break;
			case E_OP_MOD:
				aux %= *((int *)rValue2->value);
				break;
		}
	}
	deleteRValue(rValue2);
	rValue1->value = memcpy(rValue1->value, &aux, rValue1->bytes);
	return rValue1;
}

tRValue * solveObjCreation(tSymbolsTable * symbolsTable, tExprObjCreation * expr) {
	tClass * class = getClass(expr->identifier);
	if (class == NULL) {
		// TODO: Unknown class.
		return NULL;
	}
	
	tObject * object = malloc(sizeof(tObject));
	setProperties(object, class);
	tSymbolsTable * objSymbolsTable = getSymbolsFromObject(object);
	tConstructor * constructor = class->constructor;
	tRValue * rValue = callFunction(symbolsTable, objSymbolsTable, 
		constructor->functionDef, expr->parametersList);
	if (rValue == NULL) {
		// TODO: Error in object creation.
		// TODO: Delete object?
		return NULL;
	}

	rValue = malloc(sizeof(tRValue));
	rValue->type = class->name;
	rValue->value =  &object;
	rValue->bytes = sizeof(tObject*);
	return rValue;
}

tRValue * callFunction(tSymbolsTable * contextSymbolsTable, tSymbolsTable * objSymbolsTable,
 tFunctionDef * functionDef, tParametersList * parametersList) {
	tDefParameterList * defParameterList = functionDef->defParameterList;
	tInstrSet * instrSet = functionDef->instrSet;
	if ((defParameterList == NULL && parametersList != NULL && !isParametersListEmpty(parametersList)) ||
		(defParameterList != NULL && !isEmpty(defParameterList) && parametersList == NULL)) {
		return NULL;
	}
	if ((defParameterList == NULL || isEmpty(defParameterList)) &&
	  (parametersList == NULL|| isParametersListEmpty(parametersList))) {
		return solveInstrSet(objSymbolsTable, instrSet);  	
	} else {
		tSymbolsTable * symbolsTable = newSymbolsTable();
		tDefParameterNode * defParameterNode = defParameterList->first;
		tParameterNode * parameterNode = parametersList->first;

		while (defParameterNode != NULL && parameterNode != NULL) {
			tRValue * paramValue = solveRValue(contextSymbolsTable, parameterNode->expr);
			if (!isType(paramValue, defParameterNode->type)) {
				// TODO: Non-matching types of parameters.
				deleteSymbolsTable(symbolsTable);
				return NULL;
			}
			addSymbol(symbolsTable, defParameterNode->name, defParameterNode->type,
				paramValue->value, paramValue->bytes);
			defParameterNode = defParameterNode->next;
			parameterNode = parameterNode->next;
		}
		if (defParameterNode == NULL && parameterNode == NULL) {
			if(objSymbolsTable != NULL) {
				addAll(symbolsTable, objSymbolsTable);
			}
			return solveInstrSet(objSymbolsTable, instrSet);
		} else {
			// TODO: Non-matching amount of parameters.
			deleteSymbolsTable(symbolsTable);
			return NULL;
		}
	}
}

tSymbol * solveSymbol(tSymbolsTable * symbolsTable, char * identifier) {
	if(!hasSymbol(symbolsTable, identifier)) {
		// TODO: Unknown variable.
		return NULL;
	}
	tSymbol * symbol = getSymbol(symbolsTable, identifier);
	return symbol;
}

tRValue * solveRValue(tSymbolsTable * symbolsTable, tExpr * expr){
	switch (expr->type) {
		case E_ASSIGNMENT:
			return solveExprAssignment(symbolsTable, (tExprAssignment *) expr, E_ASSIGNMENT);
			break;
		case E_ASSIGNMENT_PLUS:
			return solveExprAssignment(symbolsTable, (tExprAssignment *) expr, E_ASSIGNMENT_PLUS);
			break;
		case E_ASSIGNMENT_MINUS:
			return solveExprAssignment(symbolsTable, (tExprAssignment *) expr, E_ASSIGNMENT_MINUS);
			break;
		case E_ASSIGNMENT_MULT:
			return solveExprAssignment(symbolsTable, (tExprAssignment *) expr, E_ASSIGNMENT_MULT);
			break;
		case E_ASSIGNMENT_DIV:
			return solveExprAssignment(symbolsTable, (tExprAssignment *) expr, E_ASSIGNMENT_DIV);
			break;
		case E_ASSIGNMENT_MOD:
			return solveExprAssignment(symbolsTable, (tExprAssignment *) expr, E_ASSIGNMENT_MOD);
			break;
		case E_CONDITIONAL:
			return solveConditional(symbolsTable, (tExprConditional *) expr);
			break;
		case E_IMPLIES:
			return solveBooleanExpr(symbolsTable, (tExprBoolean *) expr, E_IMPLIES);
			break;
		case E_OR:
			return solveBooleanExpr(symbolsTable, (tExprBoolean *) expr, E_OR);
			break;
		case E_AND:
			return solveBooleanExpr(symbolsTable, (tExprBoolean *) expr, E_AND);
			break;
		case E_EQ:
			return solveEquality(symbolsTable, (tExprEquality *) expr, E_EQ);
			break;
		case E_NE:
			return solveEquality(symbolsTable, (tExprEquality *) expr, E_NE);
			break;
		case E_LE:
			return solveOrder(symbolsTable, (tExprOrder *) expr, E_LE);
			break;
		case E_GE:
			return solveOrder(symbolsTable, (tExprOrder *) expr, E_GE);
			break;
		case E_LT:
			return solveOrder(symbolsTable, (tExprOrder *) expr, E_LT);
			break;
		case E_GT:
			return solveOrder(symbolsTable, (tExprOrder *) expr, E_GT);
			break;
		case E_OP_PLUS:
			return solveArithmetic(symbolsTable, (tExprArithmetic *) expr, E_OP_PLUS);
			break;
		case E_OP_MINUS:
			return solveArithmetic(symbolsTable, (tExprArithmetic *) expr, E_OP_MINUS);
			break;
		case E_OP_MULT:
			return solveArithmetic(symbolsTable, (tExprArithmetic *) expr, E_OP_MULT);
			break;
		case E_OP_DIV:
			return solveArithmetic(symbolsTable, (tExprArithmetic *) expr, E_OP_DIV);
			break;
		case E_OP_MOD:
			return solveArithmetic(symbolsTable, (tExprArithmetic *) expr, E_OP_MOD);
			break;
		case E_OBJ_CREATION:
			return solveObjCreation(symbolsTable, (tExprObjCreation *) expr);	
			break;

	}
}

tLValue * solveLValue(tSymbolsTable * symbolsTable, tExpr * expr){} // TODO

tRValue * getDefaultValue(char * type){} // TODO

tRValue * solveBoolean(tSymbolsTable * symbolsTable, tExpr * expr) {
	tRValue * rValue = solveRValue(symbolsTable, expr);
	if (rValue == NULL) {
		// TODO: Not rValue. Nested error.
		return NULL;
	}
	if (!isBoolean(rValue)) {
		deleteRValue(rValue);
		return NULL;
	}
	return rValue;
}

tRValue * solveNumber(tSymbolsTable * symbolsTable, tExpr * expr) {
	tRValue * rValue = solveRValue(symbolsTable, expr);
	if (rValue == NULL) {
		// TODO: Not rValue. Nested error.
		return NULL;
	}
	if (!isNumber(rValue)) {
		deleteRValue(rValue);
		return NULL;
	}
	return rValue;
}

tRValue * saveBoolean(int aux) {
	tRValue * rValueAns = malloc(sizeof(tRValue));
	rValueAns->type = _boolean;
	if(aux) {
		rValueAns->value = &_true;
	} else {
		rValueAns->value = &_false;
	}
	rValueAns->bytes = sizeof(int);
	return rValueAns;
}

void deleteExpr(tExpr * expr){} // TODO

void deleteRValue(tRValue * rValue){} // TODO

void emptyLValue(tLValue * lValue){} // TODO

int isBoolean(tRValue * rValue) {
	return isType(rValue, _boolean);
}

int isInt(tRValue * rValue) {
	return isType(rValue, _int);
}

int isNumber(tRValue * rValue) {
	return isInt(rValue);
}

int isChar(tRValue * rValue) {
	return isType(rValue, _char);
}

int isString(tRValue * rValue) {
	return isType(rValue, _string);
}

int isObject(tRValue * rValue) {
	return !isBuiltIn(rValue);
}

int isBuiltIn(tRValue * rValue) {
	return isNumber(rValue) || isBoolean(rValue) || 
	isChar(rValue) || isString(rValue);
}

int isType(tRValue * rValue, char * type){
	if (!strcmp(rValue->type, type)) {
		return 1;
	}
	return 0;
}

int isTrue(tRValue * rValue){
	return *((int *)rValue->value);
} 

/*** Parameters ***/

/*
typedef struct parametersList {
	tParameterNode * first;
	tParameterNode * last;
} tParametersList;

typedef struct parameterNode {
	tExpr * expr;
	tParameterNode * next;
} tParameterNode;
*/

tParametersList * newParametersList() {
	tParametersList * list = malloc(sizeof(tParametersList));
	list->first = NULL;
	list->last = NULL;
	return list;
}

void addParameter(tParametersList * parametersList, tExpr * expr) {
	tParameterNode * parameterNode = malloc(sizeof(tParameterNode));
	parameterNode->expr = expr;
	parameterNode->next = NULL;

	if (isParametersListEmpty(parametersList)) {
		parametersList->first = parameterNode;
	} else {
		parametersList->last->next = parameterNode;
	}
	parametersList->last = parameterNode;
}

int isParametersListEmpty(tParametersList * parametersList) {
	return parametersList->first == NULL;
}

void deleteParametersList(tParametersList * parametersList) {
	if (parametersList->first != NULL) {
		deleteParameterNode(parametersList->first);
	}
	free(parametersList);
}

void deleteParameterNode(tParameterNode * parameterNode) {
	if (parameterNode->next != NULL) {
		deleteParameterNode(parameterNode->next);
	}
	if(parameterNode->expr != NULL) {
		free(parameterNode->expr);
	}
	free(parameterNode);
}

void addObjProperty(tObjProperty ** properties, char * name, char * type, void * value, int bytes) {
	tObjProperty * property = malloc(sizeof(tObjProperty));
	
	property->name = name;
	property->type = type;

	property->value = malloc(bytes);
	property->value = memcpy(property->value, value, bytes);

	property->bytes = bytes;
	
	HASH_ADD_KEYPTR(hh, *properties, property->name, strlen(name), property);
}

void deleteObjProperties(tObjProperty * properties) {
	tObjProperty * property, * tmp;

  	HASH_ITER(hh, properties, property, tmp) {
    	HASH_DEL(properties, property);
    	deleteObjProperty(property);
  	}
}

void deleteObjProperty(tObjProperty * property) {
	free(property->value);
	free(property);
}

void setProperties(tObject * object, tClass * class) {
	tProperty * property;
	object->properties = NULL;
    for(property=class->properties; property != NULL; property=property->hh.next) {
        addObjProperty(&object->properties, property->name, property->type, property->value, property->bytes);
    }
}

tRValue * emptyValue() {
	tRValue * rValue = malloc(sizeof(tRValue));
	rValue->type = NULL;
	rValue->value = NULL;
	rValue->bytes = 0;
	return rValue;
}

/**********************/

/*
int main(void) {
	tProperty * properties = NULL;
	tMethod * methods = NULL;
	tDefParameterList * defParamsList = newDefParamsList();
	addDefParameter(defParamsList, "int", "var1");
	addDefParameter(defParamsList, "int", "var2");
	addDefParameter(defParamsList, "string", "var3");
	int age = 4;
	char sex = 'm';
	char * name = "pedro";
	addProperty(&properties, "age", "int", &age, sizeof(int));
	addProperty(&properties, "name", "string", name, strlen(name) + 1);
	addProperty(&properties, "sex", "char", &sex, sizeof(char));
	addMethod(&methods, "int", "getAge", defParamsList, NULL);
	addMethod(&methods, "string", "getName", NULL, NULL);
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
			printf("name: %s\n", (char *)(getProperty(gotClass->properties, "name")->value));
			printf("sex: %c\n", *((char *)gotProp->value));
			printf("age: %d\n", *((int *)getProperty(gotClass->properties, "age")->value));
		}
		tMethod * gotMethod = getMethod(gotClass->methods, "getAge");
		if(gotMethod != NULL) {
			printf("getAge returnType: %s\n", gotMethod->returnType);
			tDefParameterNode * defParam = gotMethod->functionDef->defParameterList->first;
			while(defParam != NULL) {
				printf("%s:%s\n", defParam->type, defParam->name);
				defParam = defParam->next;
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

	/*void * value = getSymbol(symbolsTable, "var1")->value;
	char * type = getSymbolType(symbolsTable, "var1")->type;
	if(!strcmp(type, "char")) {
		printf("char: %c\n", *((char *)value));
	} else if (!strcmp(type, "int")) {
		printf("integer: %d\n", *((int *)value));
	} else if (!strcmp(type, "string")) {
		printf("value: %s\n", (char *)value);
	} else {		
		tProperty * properties = (tProperty *) value;
		printf("anduvo :)\n");
	}
	deleteSymbolsTable(symbolsTable);*/
/*	deleteClasses();
	return 0;
}*/
