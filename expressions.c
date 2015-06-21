#include <stdio.h>
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

typedef struct variable {
	char * type;
	char * name;
	void * content;
} tVariable;

tExpr * solveExprAssignment(tSymbolsTable * symbolsTable, tExprAssignment * expr) {
	/*tExpr * expr2 = solveExpr(symbolsTable, expr->expr2);
	tExpr * expr1 = solveExpr(symbolsTable, expr->expr1);
	if (!isLValue(expr1)) {
		// TODO: Handle not lvalue error.
		return -1;
	}
	if (!areSameType(expr1, expr2)) {
		// TODO: non-matching types.
		return -1;
	}
*/
	return NULL;
}

tVariable * solveVariable(tSymbolsTable * symbolsTable, tExprIdentifier * expr) {
	/*if(!hasSymbol(symbolsTable, expr->identifier)) {
		// TODO: Unknown variable.
		return -1;
	}
	tVariable * variable = malloc(sizeof(tVariable));
	tSymbolType * symbolType = getSymbolType(symbolsTable, expr->identifier);
	tSymbol * symbol = getSymbol(symbolsTable, expr->identifier);
	variable->type = symbolType->type;*/
	return NULL;
}

void deleteExpr(tExpr * expr) {
	// TODO!
}

