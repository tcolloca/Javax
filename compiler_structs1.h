#ifndef def_compiler_structs
#define def_compiler_structs

#define INSTR_SIMPLE		0
#define INSTR_DECLARATION	1
#define INSTR_IF			2
#define INSTR_WHILE			3
#define INSTR_RETURN		4

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
#define E_OBJ_CREATION	 		21

/*** Typedefs ***/

typedef struct _main tMain;

typedef struct class tClass;

/*typedef struct symbolType tSymbolType;*/

typedef struct symbol tSymbol;

/*typedef struct symbolsList tSymbolsList;*/

typedef struct symbolsTable tSymbolsTable;

typedef struct expr tExpr;

typedef tSymbol tProperty;

typedef struct constructor tConstructor;

typedef struct method tMethod;

typedef struct functionDef tFunctionDef;

typedef struct defParameterList tDefParameterList;

typedef struct defParameterNode tDefParameterNode;

typedef struct instrSet tInstrSet;

typedef struct instrNode tInstrNode;

typedef tExpr tInstrSimple;

typedef struct instrDeclaration tInstrDeclaration;

typedef struct instrIf tInstrIf;

typedef struct instrElse tInstrElse;

typedef struct instrWhile tInstrWhile;

typedef struct instrReturn tInstrReturn;

/*** Expression typedefs ***/

typedef struct exprBinary tExprBinary;

typedef struct exprTernary tExprTernary;

typedef tExprBinary tExprAssignment;

typedef tExprTernary tExprConditional;

typedef tExprBinary tExprBoolean;

typedef tExprBinary tExprEquality;

typedef tExprBinary tExprOrder;

typedef tExprBinary tExprArithmetic;

typedef struct exprObjCreation tExprObjCreation;

typedef struct exprIdentifier tExprIdentifier;

typedef struct value tValue;

typedef tValue tLValue;

typedef tValue tRValue;

typedef struct object tObject;

typedef tProperty tObjProperty;

typedef struct parametersList tParametersList;

typedef struct parameterNode tParameterNode;

/*** Main ***/

void solveMain();

void deleteMain();

/*** Symbols ***/

int addSymbol(tSymbolsTable * symbolsTable, char * name, char * type, void * value, int bytes);

int hasSymbol(tSymbolsTable * symbolsTable, char * name);

tSymbol * getSymbol(tSymbolsTable * symbolsTable, char * name);

void deleteSymbolsTable(tSymbolsTable * symbolsTable);

void deleteSymbols(tSymbol * symbols);

void deleteSymbol(tSymbol * symbol);

void addAll(tSymbolsTable * symbolsTableDest, tSymbolsTable * symbolsTableSrc);

/*** Classes ***/

int addClass(char * name, tProperty * properties, tConstructor * constructor, tMethod * methods);

tClass * getClass(char * name);

void deleteClass(tClass * class);

tSymbolsTable * getSymbolsFromObject(tObject * object);

tSymbolsTable * newSymbolsTable();

/*** Properties ***/

int newProperty(char * name, char * type, void * value, int bytes);

int addProperty(tProperty ** properties, tProperty * property);

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

/*** functionDef ***/

void deleteFunctionDef(tFunctionDef * functionDef);

/*** DefParameters ***/

tDefParameterList * newDefParamsList();

void addDefParameter(tDefParameterList * defParameterList, char * type, char * name);

int isEmpty(tDefParameterList * defParameterList);

void deleteDefParameterList(tDefParameterList * defParameterList);

void deleteDefParameterNode(tDefParameterNode * defParameterNode);

/*** Instructions ***/

tRValue * solveInstrSet(tSymbolsTable * symbolsTable, tInstrSet * instrSet);

void deleteInstrSet(tInstrSet * instrSet);

tRValue * solveInstrNode(tSymbolsTable * symbolsTable, tInstrNode * instrNode);

void deleteInstrNode(tInstrNode * instrNode);

tRValue * solveInstr(tSymbolsTable * symbolsTable, int type, void * instr);

void deleteInstr(int type, void * instr);

void solveInstrDeclaration(tSymbolsTable * symbolsTable, tInstrDeclaration * instr);

void deleteInstrDeclaration(tInstrDeclaration * instr);

void solveInstrSimple(tSymbolsTable * symbolsTable, tInstrSimple * instr);

void deleteInstrSimple(tInstrSimple * instr);

void solveInstrIf(tSymbolsTable * symbolsTable, tInstrIf * instr);

void deleteInstrIf(tInstrIf * instr);

void solveInstrElse(tSymbolsTable * symbolsTable, tInstrElse * instr);

void deleteInstrElse(tInstrElse * instr);

void solveInstrWhile(tSymbolsTable * symbolsTable, tInstrWhile * instr);

void deleteInstrWhile(tInstrWhile * instr);

tRValue * solveInstrReturn(tSymbolsTable * symbolsTable, tInstrReturn * instr);

void deleteInstrReturn(tInstrReturn * instr);

/*** Expressions ***/

tRValue * solveExprAssignment(tSymbolsTable * symbolsTable, tExprAssignment * expr, int type);

tRValue * solveConditional(tSymbolsTable * symbolsTable, tExprConditional * expr);

tRValue * solveBooleanExpr(tSymbolsTable * symbolsTable, tExprBoolean * expr, int type);

tRValue * solveEquality(tSymbolsTable * symbolsTable, tExprEquality * expr, int type);

tRValue * solveOrder(tSymbolsTable * symbolsTable, tExprOrder * expr, int type);

tRValue * solveArithmetic(tSymbolsTable * symbolsTable, tExprArithmetic * expr, int type);

tRValue * solveObjCreation(tSymbolsTable * symbolsTable, tExprObjCreation * expr);

tRValue * callFunction(tSymbolsTable * contextSymbolsTable, tSymbolsTable * symbolsTable,
	tFunctionDef * functionDef, tParametersList * parametersList);

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

tParametersList * newParametersList();

void addParameter(tParametersList * parametersList, tExpr * expr);

int isParametersListEmpty(tParametersList * parametersList);

void deleteParametersList(tParametersList * parametersList);

void deleteParameterNode(tParameterNode * parameterNode);

void addObjProperty(tObjProperty ** properties, char * name, char * type, void * value, int bytes);

void deleteObjProperties(tObjProperty * properties);

void deleteObjProperty(tObjProperty * property);

void setProperties(tObject * object, tClass * class);

tRValue * emptyValue();
#endif