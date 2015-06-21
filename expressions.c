#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "expressions.h"
#include "compiler_structs.h"
#include "y.tab.h"

typedef struct expr {
	int type;
	void * expression;
} tExpr;

typedef struct exprBinary {
	tExpr * expr1;
	tExpr * expr2;
} tExprBinary;

typedef tExprBinary tExprAssignment;

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

tRValue * solveExprAssignment(tSymbolsTable * symbolsTable, tExprAssignment * expr) {
	tRValue * rValue = solveRValue(symbolsTable, expr->expr2);
	tLValue * lValue = solveLValue(symbolsTable, expr->expr1);
	if (lValue == NULL) {
		// TODO: not lvalue.
		return NULL;
	}
	if (rValue == NULL) {
		// TODO: not rvalue.
		return NULL;
	}
	if (!isType(rValue, lValue->type)) {
		// TODO: non-matching types.
		return NULL;
	}
	free(lValue->value);
	lValue->value = memcpy(lValue->value, rValue->value, rValue->bytes);
	lValue->bytes = rValue->bytes;
	return rValue;
}

tSymbol * solveSymbol(tSymbolsTable * symbolsTable, tExprIdentifier * expr) {
	if(!hasSymbol(symbolsTable, expr->identifier)) {
		// TODO: Unknown variable.
		return NULL;
	}
	tSymbol * symbol = getSymbol(symbolsTable, expr->identifier);
	return symbol;
}

void solveExpr(tSymbolsTable * symbolsTable, tExpr * expr){} // TODO

void deleteExpr(tExpr * expr){} // TODO

tRValue * solveRValue(tSymbolsTable * symbolsTable, tExpr * expr){} // TODO

tLValue * solveLValue(tSymbolsTable * symbolsTable, tExpr * expr){} // TODO

tRValue * getDefaultValue(char * type){} // TODO

int isType(tRValue * rValue, char * type){} // TODO

int isTrue(tRValue * rValue){} // TODO

