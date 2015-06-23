#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "expressions.h"
#include "compiler_structs.h"
#include "y.tab.h"
#include "lib/uthash.h"

char * _int = "int";
char * _char = "char"; 
char * _boolean = "boolean"; 
char * _string = "string"; 

int _true = 1;
int _false = 0;

typedef struct class {
	char * name; /* key */ /* owner */
	tProperty * properties;
	tConstructor * constructor;
	tMethod * methods;
	UT_hash_handle hh; /* hashable */
} tClass;

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
	tParametersList * parameters;
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
	tRValue * rValue = malloc(sizeof(tRValue));
	tObject * object = malloc(sizeof(tObject));
	object->properties = NULL;
	rValue->type = class->name;
	rValue->value =  NULL;
	tConstructor * constructor = class->constructor;
	callFunction(constructor->functionDef, expr->parametersList);
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

void deleteParameterNode(tDefParameterNode * parameterNode) {
	if (parameterNode->next != NULL) {
		deleteParameterNode(parameterNode->next);
	}
	free(parameterNode->name);
	free(parameterNode);
}

void addObjProperty(tObjProperty ** properties, char * name, char * type, void * value, int bytes) {
	tObjProperty * property = malloc(sizeof(tObjProperty));
	
	property->name = name;
	property->type = type;

	property->value = malloc(bytes);
	property->value = memcpy(property->value, value, bytes);

	property->bytes = bytes;
	
	HASH_ADD_KEYPTR(hh, *properties, property->name, nameLen, property);
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

