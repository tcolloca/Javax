#ifndef def_compiler_structs
#define def_compiler_structs

#include "lib/list.h"

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

#define EXPR_BUILT_IN			0
#define EXPR_ASSIGNMENT			1
#define EXPR_PARENTHESIS		2
#define EXPR_IDENTIFIER			3
#define EXPR_EQUALITY			4
#define EXPR_OBJ_CREATION		5
#define EXPR_OPERATION			6
#define EXPR_MODIF				7
#define	EXPR_OBJ_ACCESS			8

typedef struct program tProgram;

typedef struct main tMain;

typedef struct class tClass;

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

typedef tExpr tParenthesisExpr;

typedef struct identifier tIdentifier;

typedef struct objectCreation tObjectCreation;

typedef struct operationExpr tOperationExpr;

typedef struct modifExpr tModifExpr;

typedef struct objAccess tObjAccessExpr;

/*** Program ***/

tProgram * newProgram();

void printProgram(tProgram * program);

void addClasses(tProgram * program, tList * classes);

void addMain(tProgram * program, tMain * main);

void deleteProgram(tProgram * program);

/*** Main ***/

tMain * newMain(tList * instrs);

void printMain(tMain * main);

void deleteMain(tMain * main);

/*** Class ***/

tClass * newClass(char * name, tList * properties, tList * constructors, tList * methods);

void printClasses(tList * classes);

void printClass(tClass * class);

void deleteClasses(tList * classes);

void deleteClass(tClass * class);

tList * newClasses();

/*** Property ***/

tProperty * newProperty(char * type, char * name, tExpr * expr);

void printProperties(tList * properties);

void printProperty(tProperty * property);

void deleteProperties(tList * properties);

void deleteProperty(tProperty * property);

tList * newProperties();

/*** Constructor ***/

tConstructor * newConstructor(char * name, tList * defParams, tList * instrs);

void printConstructors(tList * constructors);

void printConstructor(tConstructor * constructor);

void deleteConstructors(tList * constructors);

void deleteConstructor(tConstructor * constructor);

tList * newConstructors();

/*** Method ***/

tMethod * newMethod(char * returnType, char * name, tList * defParams, tList * instrs);

void printMethods(tList * methods);

void printMethod(tMethod * method);

void deleteMethods(tList * methods);

void deleteMethod(tMethod * method);

tList * newMethods();


/*** DefParam ***/

tDefParam * newDefParam(char * type, char * name);

void printDefParams(tList * defparams);

void printDefParam(tDefParam * defparam);

void deleteDefParams(tList * defparams);

void deleteDefParam(tDefParam * defparam);

tList * newDefParams();

/*** Params ***/

tParam * newParam(tExpr * expr);

void printParams(tList * params);

void deleteParams(tList * params);

tList * newParams();

/*** Instr ***/

tInstr * newInstr(int type, void * instrTrue);

void printInstrs(tList * instrs);

void printInstr(tInstr * instr);

void deleteInstrs(tList * instrs);

void deleteInstr(tInstr * instr);

tList * newInstrs();

/*** InstrDeclaration ***/

tInstrDeclaration * newInstrDeclaration(char * type, char * name, tExpr * expr);

void printInstrDeclaration(tInstrDeclaration * instrDeclaration);

void deleteInstrDeclaration(tInstrDeclaration * instrDeclaration);

/*** InstrReturn ***/

tInstrReturn * newInstrReturn(tExpr * expr);

void printInstrReturn(tInstrReturn * instrReturn);

void deleteInstrReturn(tInstrReturn * instrReturn);

/*** InstrSimple ***/

tInstrSimple * newInstrSimple(tExpr * expr);

void printInstrSimple(tInstrSimple * instrSimple);

void deleteInstrSimple(tInstrSimple * instrSimple);

/*** InstrIf ***/

tInstrIf * newInstrIf(tExpr * expr, tList * instrs, tInstrElse * instrElse);

void printInstrIf(tInstrIf * instrIf);

void deleteInstrIf(tInstrIf * instrIf);

/*** InstrElse ***/

tInstrElse * newInstrElse(tInstrIf * instrIf, tList * instrs);

void printInstrElse(tInstrElse * instrElse);

void deleteInstrElse(tInstrElse * instrElse);

/*** InstrWhile ***/

tInstrWhile * newInstrWhile(tExpr * expr, tList * instrs);

void printInstrWhile(tInstrWhile * instrWhile);

void deleteInstrWhile(tInstrWhile * instrWhile);

/*** Expr ***/

tExpr * newExpr(int type, void * expr);

void printExpr(tExpr * expr);

void deleteExpr(tExpr * expr);

/*** BuiltInExpr ***/

tBuiltInExpr * newBuiltIn(int type, void * variable, int bytes);

void printBuiltIn(tBuiltInExpr * builtIn);

void deleteBuiltIn(tBuiltInExpr * builtIn) ;

/*** AssignmentExpr ***/

tAssignmentExpr * newAssignmentExpr(char * variable, char * op, tExpr * expr);

void printAssignmentExpr(tAssignmentExpr * assignmentExpr);

void deleteAssignmentExpr(tAssignmentExpr * assignmentExpr);

/*** EqualityExpr ***/

tEqualityExpr * newEqualityExpr(tExpr * first, char * op, tExpr * second);

void printEqualityExpr(tEqualityExpr * equalityExpr);

void deleteEqualityExpr(tEqualityExpr * equalityExpr) ;

/*** Identifier ***/

tIdentifier * newIdentifier(char * name);

void printIdentifier(tIdentifier * identifier);

void deleteIdentifier(tIdentifier * identifier);

/*** ParenthesisExpr ***/

tParenthesisExpr * newParenthesisExpr(tExpr * expr);

void printParenthesisExpr(tParenthesisExpr * parenthesisExpr);

void deleteParenthesisExpr(tParenthesisExpr * parenthesisExpr);

/*** Object Creation ***/

tObjectCreation * newObjCreation(char * name, tList * params);

void printObjCreation(tObjectCreation * objCreation);

void deleteObjCreation(tObjectCreation * objCreation);

/*** Operation Expr ***/

tOperationExpr * newOperationExpr(tExpr * first, char * op, tExpr * second);

void printOperationExpr(tOperationExpr * operationExpr);

void deleteOperationExpr(tOperationExpr * operationExpr);

/*** Modif Expr ***/

tModifExpr * newModifExpr(char * prevOp, tExpr * expr, char * postOp);

void printModifExpr(tModifExpr * modifExpr);

void deleteModifExpr(tModifExpr * modifExpr);

/*** Object Access Expr ***/

tObjAccessExpr * newObjAccessExpr(char * name, tList * params);

void printObjAccessExpr(tObjAccessExpr * objAccessExpr);

void deleteObjAccessExpr(tObjAccessExpr * objAccessExpr);

#endif
