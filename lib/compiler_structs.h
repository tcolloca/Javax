#ifndef def_compiler_structs
#define def_compiler_structs

#include "list.h"

#define INSTR_NULL				0
#define INSTR_DECLARATION		1
#define INSTR_RETURN			2
#define INSTR_SIMPLE			3
#define INSTR_IF				4
#define INSTR_WHILE				5

#define INPUT_INT 			0
#define INPUT_BOOLEAN 		1
#define INPUT_CHAR 			2
#define INPUT_STRING 		3
#define INPUT_DOUBLE 		4
#define INPUT_NULL			5

#define EXPR_BUILT_IN			0
#define EXPR_ASSIGNMENT			1
#define EXPR_PARENTHESIS		2
#define EXPR_IDENTIFIER			3
#define EXPR_EQUALITY			4
#define EXPR_OBJ_CREATION		5
#define EXPR_OPERATION			6
#define EXPR_MODIF				7
#define	EXPR_OBJ_ACCESS			8
#define	EXPR_ARRAY				9
#define	EXPR_ARRAY_CREATION		10

typedef struct program tProgram;

typedef struct import tImport;

typedef struct main tMain;

typedef struct class tClass;

typedef struct extends tExtends;

typedef struct property tProperty;

typedef struct constructor tConstructor;

typedef struct method tMethod;

typedef struct defParam tDefParam;

typedef struct instr tInstr;

typedef tProperty tInstrDeclaration;

typedef struct expr tExpr;

typedef tExpr tParam;

typedef tExpr tInstrReturn;

typedef tExpr tInstrSimple;

typedef struct instrIf tInstrIf;

typedef struct instrElse tInstrElse;

typedef struct instrWhile tInstrWhile;

typedef struct builtInExpr tBuiltInExpr;

typedef struct assignmentExpr tAssignmentExpr;

typedef struct equalityExpr tEqualityExpr;

typedef struct parenthesisExpr tParenthesisExpr;

typedef struct identifier tIdentifier;

typedef struct objectCreation tObjectCreation;

typedef struct arrayCreation tArrayCreationExpr;

typedef struct operationExpr tOperationExpr;

typedef struct modifExpr tModifExpr;

typedef struct objAccessExpr tObjAccessExpr;

typedef struct arrayExpr tArrayExpr;

typedef struct type tType;

typedef struct unknownType tUnknownType;

typedef struct symbol tSymbol;

/*** logging ***/

void initLog();

void endLog();

/*** System ***/

void initJavaClasses();

void addOutStream();

void addInStream();

void addSystem();

void addMath();

void deleteJavaClasses();

/*** PendingCLasses ***/

void initPendingClasses();

void addPendingClass(tType * type);

void addPendingClassName(char * type);

int checkPendingClasses();

void addUknownType(char * name);

void printUknownTypes();

void deletePendingClasses();

void deleteUnknownTypes();

/*** Program ***/

tProgram * newProgram(char * name);

void printProgram(tProgram * program);

void addImports(tProgram * program, tList * imports);

void addClasses(tProgram * program, tList * classes);

void addMain(tProgram * program, tMain * main);

void deleteProgram(tProgram * program);

void analyseProgram(tProgram * program);

/*** Imports ***/

tList * newImportElems(char ** name);

tImport * newImport(tList * importElems);

tList * newImports();

void printImports(tList * importElems);

void printImport(tList * import);

void deleteImports(tList * imports);

void deleteImport(tList * import);

/*** Main ***/

tMain * newMain(tList * instrs);

void printMain(tMain * main);

void deleteMain(tMain * main);

void analyseMain(tMain * main);

/*** Class ***/

tClass * newClass(char * name, tExtends * extends, tList * properties, tList * constructors, tList * methods);

void newImportedClass(char * name);

void printClasses(tList * classes);

void printClass(tClass * class);

void deleteClasses(tList * classes);

void analyseClasses(tList * classes);

void deleteClass(tClass * class);

void analyseClass(tClass * class);

tList * newClasses();

void addClassToClassMap(tClass * class);

int classExists(char * name);

tClass * getClass(char * name);

void deleteClassesMap();

void deleteImportedClasses();

int hasProperty(tClass * class, char * name);

tProperty * getProperty(tClass * class, char * name);

int hasMethod(tClass * class, char * name);

tMethod * getMethod(tClass * class, char * name);

int hasConstructor(tClass * class);

/*** Extends ***/

tExtends * newExtends(char * name);

void printExtends(tExtends * extends);

void deleteExtends(tExtends * extends);

/*** Property ***/

tProperty * newProperty(tType * type, char * name, tExpr * expr);

void printProperties(tList * properties);

void printProperty(tProperty * property);

void deleteProperties(tList * properties);

void analyseProperties(tList * properties);

void deleteProperty(tProperty * property);

void analyseProperty(tProperty * property);

tList * newProperties();

/*** Constructor ***/

tConstructor * newConstructor(char * name, tList * defParams, tList * instrs);

void printConstructors(tList * constructors);

void printConstructor(tConstructor * constructor);

void deleteConstructors(tList * constructors);

void analyseConstructors(tList * constructors);

void deleteConstructor(tConstructor * constructor);

void analyseConstructor(tConstructor * constructor);

tList * newConstructors();

/*** Method ***/

tMethod * newMethod(tType * returnType, char * name, tList * defParams, tList * instrs);

void printMethods(tList * methods);

void printMethod(tMethod * method);

void deleteMethods(tList * methods);

void analyseMethods(tList * methods);

void deleteMethod(tMethod * method);

void analyseMethod(tMethod * method);

tList * newMethods();


/*** DefParam ***/

tDefParam * newDefParam(tType * type, char * name);

void printDefParams(tList * defParams);

void printDefParam(tDefParam * defParam);

void deleteDefParams(tList * defParams);

void analyseDefParams(tList * defParams);

void deleteDefParam(tDefParam * defParam);

void analyseDefParam(tDefParam * defParam);

tList * newDefParams();

/*** Params ***/

tParam * newParam(tExpr * expr);

void printParams(tList * params);

void deleteParams(tList * params);

void analyseParams(tList * params);

void analyseParam(tParam * param);

tList * newParams();

int paramsHaveErrors(tList * params);

/*** Instr ***/

tInstr * newInstr(int type, void * instrTrue);

void printInstrs(tList * instrs);

void printInstr(tInstr * instr);

void deleteInstrs(tList * instrs);

void analyseInstrs(tList * instrs);

void deleteInstr(tInstr * instr);

void analyseInstr(tInstr * instr);

tList * newInstrs();

/*** InstrDeclaration ***/

tInstrDeclaration * newInstrDeclaration(tType * type, char * name, tExpr * expr);

void printInstrDeclaration(tInstrDeclaration * instrDeclaration);

void deleteInstrDeclaration(tInstrDeclaration * instrDeclaration);

void analyseInstrDeclaration(tInstrDeclaration * instrDeclaration);

/*** InstrReturn ***/

tInstrReturn * newInstrReturn(tExpr * expr);

void printInstrReturn(tInstrReturn * instrReturn);

void deleteInstrReturn(tInstrReturn * instrReturn);

void analyseInstrReturn(tInstrReturn * instrReturn);

/*** InstrSimple ***/

tInstrSimple * newInstrSimple(tExpr * expr);

void printInstrSimple(tInstrSimple * instrSimple);

void deleteInstrSimple(tInstrSimple * instrSimple);

void analyseInstrSimple(tInstrSimple * instrSimple);

/*** InstrIf ***/

tInstrIf * newInstrIf(tExpr * expr, tList * instrs, tInstrElse * instrElse);

void printInstrIf(tInstrIf * instrIf);

void deleteInstrIf(tInstrIf * instrIf);

void analyseInstrIf(tInstrIf * instrIf);

/*** InstrElse ***/

tInstrElse * newInstrElse(tInstrIf * instrIf, tList * instrs);

void printInstrElse(tInstrElse * instrElse);

void deleteInstrElse(tInstrElse * instrElse);

void analyseInstrElse(tInstrElse * instrElse);

/*** InstrWhile ***/

tInstrWhile * newInstrWhile(tExpr * expr, tList * instrs);

void printInstrWhile(tInstrWhile * instrWhile);

void deleteInstrWhile(tInstrWhile * instrWhile);

void analyseInstrWhile(tInstrWhile * instrWhile);

/*** Expr ***/

tExpr * newExpr(int type, void * expr);

void printExpr(tExpr * expr);

void deleteExpr(tExpr * expr);

void analyseExpr(tExpr * expr);

tType * getType(int type, void * expr);

void deleteExprType(int type, void * expr);

int isLeftValue(tExpr * expr);

/*** BuiltInExpr ***/

tBuiltInExpr * newBuiltIn(int type, void * variable, int bytes);

void printBuiltIn(tBuiltInExpr * builtIn);

void deleteBuiltIn(tBuiltInExpr * builtIn);

void analyseBuiltIn(tBuiltInExpr * builtIn);

tType * getBuiltInType(int type);

/*** AssignmentExpr ***/

tAssignmentExpr * newAssignmentExpr(tExpr * variable, char * op, tExpr * expr);

void printAssignmentExpr(tAssignmentExpr * assignmentExpr);

void deleteAssignmentExpr(tAssignmentExpr * assignmentExpr);

void analyseAssignmentExpr(tAssignmentExpr * assignmentExpr);

/*** EqualityExpr ***/

tEqualityExpr * newEqualityExpr(tExpr * first, char * op, tExpr * second);

void printEqualityExpr(tEqualityExpr * equalityExpr);

void deleteEqualityExpr(tEqualityExpr * equalityExpr);

void analyseEqualityExpr(tEqualityExpr * equalityExpr);

/*** Identifier ***/

tIdentifier * newIdentifier(char * name);

void printIdentifier(tIdentifier * identifier);

void deleteIdentifier(tIdentifier * identifier);

void analyseIdentifier(tIdentifier * identifier);

tType * getIdentifierType(char * name);

/*** ParenthesisExpr ***/

tParenthesisExpr * newParenthesisExpr(tExpr * expr);

void printParenthesisExpr(tParenthesisExpr * parenthesisExpr);

void deleteParenthesisExpr(tParenthesisExpr * parenthesisExpr);

void analyseParenthesisExpr(tParenthesisExpr * parenthesisExpr);

/*** Object Creation ***/

tObjectCreation * newObjCreation(char * name, tList * params);

void printObjCreation(tObjectCreation * objCreation);

void deleteObjCreation(tObjectCreation * objCreation);

void analyseObjCreation(tObjectCreation * objCreation);

/*** Operation Expr ***/

tOperationExpr * newOperationExpr(tExpr * first, char * op, tExpr * second);

void printOperationExpr(tOperationExpr * operationExpr);

void deleteOperationExpr(tOperationExpr * operationExpr);

void analyseOperationExpr(tOperationExpr * operationExpr);

tType * getOperationType(tExpr * first, tExpr * second, char * op);

/*** Modif Expr ***/

tModifExpr * newModifExpr(char * prevOp, tExpr * expr, char * postOp);

void printModifExpr(tModifExpr * modifExpr);

void deleteModifExpr(tModifExpr * modifExpr);

void analyseModifExpr(tModifExpr * modifExpr);

tType * getModifType(tExpr * expr, char * op);

/*** Object Access Expr ***/

tObjAccessExpr * newObjAccessExpr(tExpr * expr, char * name, tList * params);

void printObjAccessExpr(tObjAccessExpr * objAccessExpr);

void deleteObjAccessExpr(tObjAccessExpr * objAccessExpr);

void analyseObjAccessExpr(tObjAccessExpr * objAccessExpr);

int isObjAccessLeftValue(tObjAccessExpr * objAccessExpr);

/*** Array Creation Expr ***/

tArrayCreationExpr * newArrayCreationExpr(char * name, tList * sizes);

void printArrayCreationExpr(tArrayCreationExpr * arrayCreationExpr);

void deleteArrayCreationExpr(tArrayCreationExpr * arrayCreationExpr);

void analyseArrayCreationExpr(tArrayCreationExpr * arrayCreationExpr);

/*** Array Expr ***/

tArrayExpr * newArrayExpr(char * variable, tList * sizes);

void printArrayExpr(tArrayExpr * arrayExpr);

void deleteArrayExpr(tArrayExpr * arrayExpr);

void analyseArrayExpr(tArrayExpr * arrayExpr);

/*** Type ***/

tType * newType(char * name);

void addBrackets(tType * type, int brackets);

void printType(tType * type);

int isType(tType * type);

int isTypeName(char * typeName);

void deleteType(tType * type);

/*** Sizes ***/

tList * newSizes(tExpr * expr);

void printSizes(tList * sizes);

void deleteSizes(tList * sizes);

void analyseSizes(tList * sizes);

int sizesHaveErrors(tList * sizes);

/*** Scope ***/

void newBlock();

void endBlock();

/*** Symbols ***/

void addSymbol(char * name, tType * type);

int hasSymbol(char * name);

tSymbol * getSymbol(char * name);

tType * getSymbolType(char * name);

void deleteSymbols();

void deleteSymbol(tSymbol * symbol);

void deleteSymbolsInScope();

int isInScope(tSymbol * symbol);

/*** Type Validation ***/

tType * intType();

tType * charType();

tType * stringType();

tType * booleanType();

tType * doubleType();

tType * nullType();

tType * voidType();

tType * objectType(char * name);

tType * unknownType();

tType * arrayType(char * name, int brackets);

tType * getBasicType(tType * type);

tType * errorType();

tType * nestedErrorType();

int hasError(tExpr * expr);

tType * getBiggestType(tExpr * first, tExpr * second);

int typesMatch(tExpr * expr1, tExpr * expr2);

int typesTypesMatch(tType * type1, tType * type2);

int isBoolean(tExpr * expr);

int isObject(tExpr * expr);

int isIntType(tType * type);

int isCharType(tType * type);

int isStringType(tType * type);

int isBooleanType(tType * type);

int isDoubleType(tType * type);

int isNullType(tType * type);

int isVoidType(tType * type);

int isObjectType(tType * type);

int isUnknownType(tType * type);

int isArrayType(tType * type);

int isErrorType(tType * type);

int isNestedErrorType(tType * type);

int isAlphabeticType(tType * type);

int isNumericType(tType * type);

int isValidBinaryOperation(tType * type1, tType * type2, char * op);

int isValidUnaryOperation(tType * type, char * op);

int sameSize(tType * type, int size);

tType * copyType(tType * type);

#endif
