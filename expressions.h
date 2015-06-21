#ifndef def_expressions
#define def_expressions

#define ASSIGNMENT 0

typedef struct symbolsTable tSymbolsTable;

typedef struct expr tExpr;

typedef struct exprBinary tExprBinary;

typedef tExprBinary tExprAssignment;

typedef struct exprIdentifier tExprIdentifier;

typedef struct value tValue;

typedef tValue tLValue;

typedef tValue tRValue;


void deleteExpr(tExpr * expr); // TODO

void solveExpr(tSymbolsTable * symbolsTable, tExpr * expr); // TODO

tRValue * solveExprAssignment(tSymbolsTable * symbolsTable, tExprAssignment * expr);

tRValue * solveRValue(tSymbolsTable * symbolsTable, tExpr * expr); // TODO

tLValue * solveLValue(tSymbolsTable * symbolsTable, tExpr * expr); // TODO

tRValue * getDefaultValue(char * type); // TODO

int isType(tRValue * rValue, char * type); // TODO

int isTrue(tRValue * rValue); // TODO

#endif