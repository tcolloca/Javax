#ifndef def_expressions
#define def_expressions

#define E_ASSIGNMENT 			0
#define E_ASSIGNMENT_PLUS 		1
#define E_ASSIGNMENT_MINUS 		2
#define E_ASSIGNMENT_MULT 		3
#define E_ASSIGNMENT_DIV	 	4
#define E_ASSIGNMENT_MOD	 	5
#define E_CONDITIONAL 			6
#define E_IMPLIES 				7
#define E_OR	 				8
#define E_AND 					9
#define E_EQ	 				10
#define E_NE 					11
#define E_LE	 				12
#define E_GE 					13
#define E_LT	 				14
#define E_GT 					15
#define E_OP_PLUS 				16
#define E_OP_MINUS 				17
#define E_OP_MULT 				18
#define E_OP_DIV	 			19
#define E_OP_MOD	 			20

typedef struct symbolsTable tSymbolsTable;

typedef struct expr tExpr;

typedef struct exprBinary tExprBinary;

typedef struct exprTernary tExprTernary;

typedef tExprBinary tExprAssignment;

typedef tExprTernary tExprConditional;

typedef tExprBinary tExprBoolean;

typedef tExprBinary tExprEquality;

typedef tExprBinary tExprOrder;

typedef tExprBinary tExprArithmetic;

typedef struct exprIdentifier tExprIdentifier;

typedef struct value tValue;

typedef tValue tLValue;

typedef tValue tRValue;

tRValue * solveExprAssignment(tSymbolsTable * symbolsTable, tExprAssignment * expr, int type);

tRValue * solveConditional(tSymbolsTable * symbolsTable, tExprConditional * expr);

tRValue * solveBooleanExpr(tSymbolsTable * symbolsTable, tExprBoolean * expr, int type);

tRValue * solveEquality(tSymbolsTable * symbolsTable, tExprEquality * expr, int type);

tRValue * solveOrder(tSymbolsTable * symbolsTable, tExprOrder * expr, int type);

tRValue * solveArithmetic(tSymbolsTable * symbolsTable, tExprArithmetic * expr, int type);

tRValue * solveRValue(tSymbolsTable * symbolsTable, tExpr * expr);

tLValue * solveLValue(tSymbolsTable * symbolsTable, tExpr * expr); // TODO

tRValue * getDefaultValue(char * type); // TODO

tRValue * solveBoolean(tSymbolsTable * symbolsTable, tExpr * expr);

tRValue * solveNumber(tSymbolsTable * symbolsTable, tExpr * expr);

tRValue * saveBoolean(int aux);

void deleteExpr(tExpr * expr); // TODO

void deleteRValue(tRValue * rValue); // TODO

void emptyLValue(tLValue * lValue); // TODO

int isBoolean(tRValue * rValue);

int isInt(tRValue * rValue);

int isNumber(tRValue * rValue);

int isChar(tRValue * rValue);

int isString(tRValue * rValue);

int isObject(tRValue * rValue);

int isBuiltIn(tRValue * rValue);

int isType(tRValue * rValue, char * type);

int isTrue(tRValue * rValue);
#endif