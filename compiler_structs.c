#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "compiler_structs.h"
#include "lib/list.h"

typedef struct program {
	tList * classes;
	tMain * main;
} tProgram;

typedef struct main {
	char * name;
} tMain;

typedef struct class {
	char * name;
	tList * properties;
	tList * constructors;
	tList * methods;
} tClass;

typedef struct property {
	char * type;
	char * name;
	tExpr * expr;
} tProperty;

typedef struct constructor {
	char * name;
	tList * defParams;
	tList * instrs;
} tConstructor;

typedef struct method {
	char * returnType;
	char * name;
	tList * defParams;
	tList * instrs;
} tMethod;

typedef struct defParam {
	char * type;
	char * name;
} tDefParam;

typedef struct instr {
	int type;
	void * instr;
} tInstr;

typedef tProperty tInstrDeclaration;

typedef tExpr tInstrReturn;

typedef tExpr tInstrSimple;

typedef struct instrIf {
	tExpr * expr;
	tList * instrs;
	tInstrElse * instrElse;
} tInstrIf;

typedef struct instrElse {
	tInstrIf * instrIf;
	tList * instrs;
} tInstrElse;

typedef struct instrWhile {
	tExpr * expr;
	tList * instrs;
} tInstrWhile;

typedef struct expr {
	int type;
} tExpr;

/*** Program ***/

tProgram * newProgram() {
	tProgram * program = malloc(sizeof(tProgram));
	program->classes = NULL;
	program->main = NULL;
	return program;
}

void printProgram(tProgram * program) {
	if (program->classes != NULL) {
		printClasses(program->classes);
	}
	if (program->main != NULL) {
		printMain(program->main);
	}
}

void addClasses(tProgram * program, tList * classes) {
	program->classes = classes;
}

void addMain(tProgram * program, tMain * main) {
	program->main = main;
}

void deleteProgram(tProgram * program) {
	if (program->classes != NULL) {
		deleteClasses(program->classes);
	}
	if (program->main != NULL) {
		deleteMain(program->main);
	}
	free(program);
}

/*** Main ***/

tMain * newMain(char * name) {
	tMain * main = malloc(sizeof(tMain));
	main->name = strdup(name);
	free(name);
	return main;
}

void printMain(tMain * main) {
	printf("main: %s \n", main->name);
}

void deleteMain(tMain * main) {
	free(main->name);
	free(main);
}

/*** Class ***/

tClass * newClass(char * name, tList * properties, tList * constructors, tList * methods) {
	tClass * class = malloc(sizeof(tClass));
	class->name = strdup(name);
	free(name);
	class->properties = properties;
	class->constructors = constructors;
	class->methods = methods;
	return class;
}

void printClasses(tList * classes) {
	_reset(classes);
	tClass * class;
	while ((class = _next(classes)) != NULL) {
		printClass(class);
	}
	_reset(classes);
} 


void printClass(tClass * class) {
	printf("class %s {\n", class->name);
	printProperties(class->properties);
	printConstructors(class->constructors);
	printMethods(class->methods);
	printf("}\n");
}

void deleteClasses(tList * classes) {
	_reset(classes);
	tClass * class;
	while ((class = _next(classes)) != NULL) {
		deleteClass(class);
	}
	_reset(classes);
	_deleteList(classes);
}

void deleteClass(tClass * class) {
	free(class->name);
	deleteProperties(class->properties);
	deleteConstructors(class->constructors);
	deleteMethods(class->methods);
	free(class);
}

tList * newClasses() {
	return _newList(sizeof(tClass));
}

/*** Property ***/

tProperty * newProperty(char * type, char * name, tExpr * expr) {
	tProperty * property = malloc(sizeof(tProperty));
	property->type = strdup(type);
	free(type);
	property->name = strdup(name);
	free(name);
	property->expr = expr;
	return property;
}

void printProperties(tList * properties) {
	_reset(properties);
	tProperty * property;
	while ((property = _next(properties)) != NULL) {
		printProperty(property);
	}
	_reset(properties);
}

void printProperty(tProperty * property) {
	printf("%s %s", property->type, property->name);
	if (property->expr != NULL) {
		printf(" = ");
		printExpr(property->expr);
	}
	printf(";\n");
}

void deleteProperties(tList * properties) {
	_reset(properties);
	tProperty * property;
	while ((property = _next(properties)) != NULL) {
		deleteProperty(property);
	}
	_reset(properties);
	_deleteList(properties);
}

void deleteProperty(tProperty * property) {
	free(property->type);
	free(property->name);
	deleteExpr(property->expr);
	free(property);
}

tList * newProperties() {
	return _newList(sizeof(tProperty));
}

/*** Constructor ***/

tConstructor * newConstructor(char * name, tList * defParams, tList * instrs) {
	tConstructor * constructor = malloc(sizeof(tConstructor));
	constructor->name = strdup(name);
	free(name);
	constructor->defParams = defParams;
	constructor->instrs = instrs;
	return constructor;
}

void printConstructors(tList * constructors) {
	_reset(constructors);
	tConstructor * constructor;
	while ((constructor = _next(constructors)) != NULL) {
		printConstructor(constructor);
	}
	_reset(constructors);
}

void printConstructor(tConstructor * constructor) {
	printf("%s(", constructor->name);
	printDefParams(constructor->defParams);
	printf(") {\n");
	printInstrs(constructor->instrs);
	printf("}\n");
}

void deleteConstructors(tList * constructors) {
	_reset(constructors);
	tConstructor * constructor;
	while ((constructor = _next(constructors)) != NULL) {
		deleteConstructor(constructor);
	}
	_reset(constructors);
	_deleteList(constructors);
}


void deleteConstructor(tConstructor * constructor) {
	free(constructor->name);
	deleteDefParams(constructor->defParams);
	deleteInstrs(constructor->instrs);
	free(constructor);
}

tList * newConstructors() {
	return _newList(sizeof(tConstructor));
}

/*** Method ***/

tMethod * newMethod(char * returnType, char * name, tList * defParams, tList * instrs) {
	tMethod * method = malloc(sizeof(tMethod));
	method->returnType = strdup(returnType);
	free(returnType);
	method->name = strdup(name);
	free(name);
	method->defParams = defParams;
	method->instrs = instrs;
	return method;
}

void printMethods(tList * methods) {
	_reset(methods);
	tMethod * method;
	while ((method = _next(methods)) != NULL) {
		printMethod(method);
	}
	_reset(methods);
}

void printMethod(tMethod * method) {
	printf("%s %s(", method->returnType, method->name);
	printDefParams(method->defParams);
	printf(") {\n");
	printInstrs(method->instrs);
	printf("}\n");
}

void deleteMethods(tList * methods) {
	_reset(methods);
	tMethod * method;
	while ((method = _next(methods)) != NULL) {
		deleteMethod(method);
	}
	_reset(methods);
	_deleteList(methods);
}

void deleteMethod(tMethod * method) {
	free(method->returnType);
	free(method->name);
	deleteDefParams(method->defParams);
	deleteInstrs(method->instrs);
	free(method);
}

tList * newMethods() {
	return _newList(sizeof(tMethod));
}

/*** DefParam ***/

tDefParam * newDefParam(char * type, char * name) {
	tDefParam * defParam = malloc(sizeof(tDefParam));
	defParam->type = strdup(type);
	free(type);
	defParam->name = strdup(name);
	free(name);
	return defParam;
}

void printDefParams(tList * defParams) {
	if (_isEmpty(defParams)) {
		return;
	}
	_reset(defParams);
	tDefParam * defParam = _next(defParams);
	printDefParam(defParam);
	while ((defParam = _next(defParams)) != NULL) {
		printf(", ");
		printDefParam(defParam);
	}
	_reset(defParams);
}

void printDefParam(tDefParam * defParam) {
	printf("%s %s", defParam->type, defParam->name);
}

void deleteDefParams(tList * defParams) {
	_reset(defParams);
	tDefParam * defParam;
	while ((defParam = _next(defParams)) != NULL) {
		deleteDefParam(defParam);
	}
	_reset(defParams);
	_deleteList(defParams);
}

void deleteDefParam(tDefParam * defParam) {
	free(defParam->type);
	free(defParam->name);
	free(defParam);
}

tList * newDefParams() {
	return _newList(sizeof(tDefParam));
}

/*** Instr ***/

tInstr * newInstr(int type, void * instrTrue) {
	tInstr * instr = malloc(sizeof(tInstr));
	instr->type = type;
	instr->instr = instrTrue;
	return instr;
}

void printInstrs(tList * instrs) {
	_reset(instrs);
	tInstr * instr;
	while ((instr = _next(instrs)) != NULL) {
		printInstr(instr);
	}
	_reset(instrs);
}

void printInstr(tInstr * instr) {
	switch (instr->type) {
		case INSTR_NULL:
			return;
		case INSTR_DECLARATION:
			printInstrDeclaration(instr->instr);
			break;
		case INSTR_RETURN:
			printInstrReturn(instr->instr);
			break;
		case INSTR_SIMPLE:
			printInstrSimple(instr->instr);
			break;
		case INSTR_IF:
			printInstrIf(instr->instr);
			break;
		case INSTR_WHILE:
			printInstrWhile(instr->instr);
			break;
	}
}

void deleteInstrs(tList * instrs) {
	_reset(instrs);
	tInstr * instr;
	while ((instr = _next(instrs)) != NULL) {
		deleteInstr(instr);
	}
	_reset(instrs);
	_deleteList(instrs);
}

void deleteInstr(tInstr * instr){
	switch (instr->type) {
		case INSTR_NULL:
			return;
		case INSTR_DECLARATION:
			deleteInstrDeclaration(instr->instr);
			break;
		case INSTR_RETURN:
			deleteInstrReturn(instr->instr);
			break;
		case INSTR_SIMPLE:
			deleteInstrSimple(instr->instr);
			break;
		case INSTR_IF:
			deleteInstrIf(instr->instr);
			break;
		case INSTR_WHILE:
			deleteInstrWhile(instr->instr);
			break;
	}
}

tList * newInstrs() {
	return _newList(sizeof(tInstr));
}

/*** InstrDeclaration ***/

tInstrDeclaration * newInstrDeclaration(char * type, char * name, tExpr * expr) {
	return newProperty(type, name, expr);
}

void printInstrDeclaration(tInstrDeclaration * instrDeclaration) {
	printProperty(instrDeclaration);
}

void deleteInstrDeclaration(tInstrDeclaration * instrDeclaration) {
	deleteProperty(instrDeclaration);
}

/*** InstrReturn ***/

tInstrReturn * newInstrReturn(tExpr * expr) {
	return expr;
}

void printInstrReturn(tInstrReturn * instrReturn) {
	printf("return ");
	printExpr(instrReturn);
}

void deleteInstrReturn(tInstrReturn * instrReturn) {
	deleteExpr(instrReturn);
}

/*** InstrSimple ***/

tInstrSimple * newInstrSimple(tExpr * expr) {
	return expr;
}

void printInstrSimple(tInstrSimple * instrSimple) {
	printf("return ");
	printExpr(instrSimple);
}

void deleteInstrSimple(tInstrSimple * instrSimple) {
	deleteExpr(instrSimple);
}

/*** InstrIf ***/

tInstrIf * newInstrIf(tExpr * expr, tList * instrs, tInstrElse * instrElse) {
	tInstrIf * instrIf = malloc(sizeof(tInstrIf));
	instrIf->expr = expr;
	instrIf->instrs = instrs;
	instrIf->instrElse = instrElse;
	return instrIf;
}

void printInstrIf(tInstrIf * instrIf) {
	printf("if (");
	printExpr(instrIf->expr);
	printf(") {\n");
	printInstrs(instrIf->instrs);
	printf("}\n");
	if (instrIf->instrElse != NULL) {
		printInstrElse(instrIf->instrElse);
	}
}

void deleteInstrIf(tInstrIf * instrIf) {
	deleteExpr(instrIf->expr);
	if (instrIf->instrElse != NULL) {
		deleteInstrElse(instrIf->instrElse);
	}
	deleteInstrs(instrIf->instrs);
	free(instrIf);
}

/*** InstrElse ***/

tInstrElse * newInstrElse(tInstrIf * instrIf, tList * instrs) {
	tInstrElse * instrElse = malloc(sizeof(tInstrElse));
	instrElse->instrIf = instrIf;
	instrElse->instrs = instrs;
	return instrElse;
}

void printInstrElse(tInstrElse * instrElse) {
	printf(" else ");
	if (instrElse->instrIf != NULL) {
		printInstrIf(instrElse->instrIf);
	} else {
		printf("{\n");
		printInstrs(instrElse->instrs);
		printf("}\n");
	}
}

void deleteInstrElse(tInstrElse * instrElse) {
	if (instrElse->instrIf != NULL) {
		deleteInstrIf(instrElse->instrIf);
	} else {
		deleteInstrs(instrElse->instrs);
	}
	free(instrElse);
}

/*** InstrWhile ***/

tInstrWhile * newInstrWhile(tExpr * expr, tList * instrs) {
	tInstrWhile * instrWhile = malloc(sizeof(tInstrWhile));
	instrWhile->expr = expr;
	instrWhile->instrs = instrs;
	return instrWhile;
}

void printInstrWhile(tInstrWhile * instrWhile) {
	printf("while (");
	printExpr(instrWhile->expr);
	printf(") {\n");
	printInstrs(instrWhile->instrs);
	printf("}\n");
}

void deleteInstrWhile(tInstrWhile * instrWhile) {
	deleteExpr(instrWhile->expr);
	deleteInstrs(instrWhile->instrs);
	free(instrWhile);
}

/*** Expr ***/

void printExpr(tExpr * expr){}

void deleteExpr(tExpr * expr){}