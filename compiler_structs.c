#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "compiler_structs.h"
#include "lib/list.h"
#include "lib/uthash.h"

typedef struct program {
	char * name;
	tList * imports;
	tList * classes;
	tMain * main;
} tProgram;

typedef struct imports {
	tList * imports;
} tImports;

typedef struct main {
	tList * instrs;
} tMain;

typedef struct import {
	tList * importElems;
} tImport;

typedef struct class {
	char * name;
	tExtends * extends;
	tList * properties;
	tList * constructors;
	tList * methods;
	UT_hash_handle hh; /* hashable*/
} tClass;

typedef struct extends {
	char * name;
} tExtends;

typedef struct property {
	tType * type;
	char * name;
	tExpr * expr;
} tProperty;

typedef struct constructor {
	char * name;
	tList * defParams;
	tList * instrs;
} tConstructor;

typedef struct method {
	tType * returnType;
	char * name;
	tList * defParams;
	tList * instrs;
} tMethod;

typedef struct defParam {
	tType * type;
	char * name;
} tDefParam;

typedef tExpr tParam;

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
	tType * exprType;
	void * expr;
} tExpr;

typedef struct builtInExpr {
	int type;
	void * variable;
	tType * exprType;
} tBuiltInExpr;

typedef struct assignmentExpr { 
	//int type;
	tType * exprType;
	tExpr * variable;
	char * op;
	tExpr * expr;
} tAssignmentExpr;

typedef struct equalityExpr {
	tType * exprType;
	tExpr * first;
	char * op;
	tExpr * second;
} tEqualityExpr;

typedef struct parenthesisExpr {
	tExpr * expr;
	tType * exprType;
} tParenthesisExpr;

typedef struct identifier {
	tType * exprType;
	char * name;
} tIdentifier;

typedef struct objectCreation {
	tType * exprType;
	char * name;
	tList * params;
} tObjectCreation;

typedef struct arrayCreation {
	tType * exprType;
	char * name;
	tList * sizes;
} tArrayCreationExpr;

typedef struct operationExpr {
	tType * exprType;
	tExpr * first;
	char * op;
	tExpr * second;
} tOperationExpr;

typedef struct modifExpr {
	tType * exprType;
	char * prevOp;
	tExpr * expr;
	char * postOp;
} tModifExpr;

typedef struct objAccessExpr {
	tType * exprType;
	char * name;
	tList * params;
	tExpr * expr;
} tObjAccessExpr;

typedef struct arrayExpr {
	tType * exprType;
	char * variable;
	tList * sizes;
} tArrayExpr;

typedef struct type {
	char * type;
	int brackets;
} tType;

typedef struct unknownType {
	char * name;
	UT_hash_handle hh; /* hashable*/
} tUnknownType;

typedef struct symbol {
	char * name;
	tType * type;
	int scope;
	UT_hash_handle hh; /* hashable*/
} tSymbol;

tClass * outStreamClass = NULL;
tClass * systemClass = NULL;
tType * systemType = NULL;

tClass * classes = NULL;
tList * pendingClasses = NULL;
tList * importedClasses = NULL;
tUnknownType * unknownTypes = NULL;

tSymbol * symbols = NULL;
int scope = 0;

/*** System ***/

void initSystem() {
	addOutStream();

	tList * properties = newProperties();
	tProperty * property = newProperty(objectType(strdup("OutStream")), strdup("out"), NULL);
	_addElement(properties, property);
	tList * constructors = newConstructors();
	tList * methods = newMethods();
	systemClass = newClass(strdup("System"), properties, constructors, methods);
	addClassToClassMap(systemClass);

	addSymbol(systemClass->name, systemType = objectType(strdup("System")));
}

void addOutStream() {
	tList * properties = newProperties();
	tList * constructors = newConstructors();
	tList * methods = newMethods();
	tList * defParams = newDefParams();
	tDefParam * defParam = newDefParam(stringType(), strdup("string"));
	_addElement(defParams, defParam);
	tMethod * method = newMethod(intType(), strdup("println"), defParams, newInstrs());
	_addElement(methods, method);
	outStreamClass = newClass(strdup("OutStream"), properties, constructors, methods);
	addClassToClassMap(outStreamClass);
}

void deleteSystem() {
	deleteClass(systemClass);
	deleteClass(outStreamClass);
	deleteType(systemType);
}

/*** PendingClasses ***/

void initPendingClasses() {
	pendingClasses = _newList(sizeof(char *));
}

void addPendingClass(tType * type) {
	addPendingClassName(type->type);
}

void addPendingClassName(char * type) {
	char ** aux = malloc(sizeof(char *));
	char * aux2 = strdup(type);
	aux = memcpy(aux, &aux2, sizeof(char *));
	_addElement(pendingClasses, aux);
}

int checkPendingClasses() {
	_reset(pendingClasses);
	char ** name;
	int flag = 1;
	while ((name = _next(pendingClasses)) != NULL) {
		if (!classExists(*name)) {
			addUknownType(*name);
			flag = 0;
		}
	}
	_reset(pendingClasses);
	return flag;
}

void addUknownType(char * name) {
	if (hasUnknownType(name)) {
		return;
	}
	tUnknownType * unknownType = malloc(sizeof(tUnknownType));
	unknownType->name = name;
	HASH_ADD_KEYPTR(hh, unknownTypes, unknownType->name, strlen(unknownType->name), unknownType);
}

int hasUnknownType(char * name) {
	tUnknownType * unknownType;
	HASH_FIND_STR(unknownTypes, name, unknownType);
	return unknownType != NULL;
}

void printUknownTypes() {
	printf("Unknown types:\n");
	char ** name;
	tUnknownType * unknownType;

	for(unknownType = unknownTypes; unknownType != NULL; unknownType = unknownType->hh.next) {
        printf("%s\n", unknownType->name);
    }
	/*while ((name = _next(unknownTypes)) != NULL) {
		printf("%s\n", *name);
	}*/
}

void deletePendingClasses() {
	_reset(pendingClasses);
	char ** name;
	while ((name = _next(pendingClasses)) != NULL) {
		free(*name);
		free(name);
	}
	_reset(pendingClasses);
	deleteUnknownTypes();
	_deleteList(pendingClasses);
}

void deleteUnknownTypes() {
	tUnknownType * unknownType, * tmp;
	HASH_ITER(hh, unknownTypes, unknownType, tmp) {
    	HASH_DEL(unknownTypes, unknownType);
    	free(unknownType);
  	}
}

/*** Program ***/

tProgram * newProgram(char * name) {
	tProgram * program = malloc(sizeof(tProgram));
	program->name = strdup(name);
	free(name);
	program->imports = NULL;
	program->classes = NULL;
	program->main = NULL;
	return program;
}

void printProgram(tProgram * program) {
	if (program->imports != NULL) {
		printImports(program->imports);
	}
	printf("public class %s {\n", program->name);
	if (program->classes != NULL) {
		printClasses(program->classes);
		printf("\n");
	}
	if (program->main != NULL) {
		printMain(program->main);
	}
	printf("}\n");
}

void addImports(tProgram * program, tList * imports) {
	program->imports = imports;
}

void addClasses(tProgram * program, tList * classes) {
	program->classes = classes;
}

void addMain(tProgram * program, tMain * main) {
	program->main = main;
}

void deleteProgram(tProgram * program) {
	free(program->name);
	if (program->imports != NULL) {
		deleteImports(program->imports);
	}
	if (program->classes != NULL) {
		deleteClasses(program->classes);
	}
	if (program->main != NULL) {
		deleteMain(program->main);
	}
	free(program);
}

void analyseProgram(tProgram * program) {
	if (program->classes != NULL) {
		analyseClasses(program->classes);
	}
	if (program->main != NULL) {
		analyseMain(program->main);
	}
}

/*** Imports ***/

tList * newImportElems(char ** name) {
	tList * import = _newList(sizeof(char *));
	_addElement(import, name);
	return import;
}

tImport * newImport(tList * importElems) {
	tImport * import = malloc(sizeof(tImport));
	import->importElems = importElems;
	return import;
}

tList * newImports() {
	importedClasses = _newList(sizeof(tClass));
	return _newList(sizeof(tImport));
}


void printImports(tList * imports) {
	_reset(imports);
	tImport * import;
	while ((import = _next(imports)) != NULL) {
		printImport(import->importElems);
		printf("\n");
	}
	_reset(imports);
} 


void printImport(tList * import) {
	_reset(import);
	printf("import ");
	char ** elem = _next(import);
	printf("%s", *elem);	
	while ((elem = _next(import)) != NULL) {
		printf(".%s", *elem);
	}
	printf(";\n");
	_reset(import);
}

void deleteImports(tList * imports) {
	_reset(imports);
	tImport * import;
	while ((import = _next(imports)) != NULL) {
		deleteImport(import->importElems);
		free(import);
	}
	_reset(imports);
	deleteImportedClasses();
	_deleteList(imports);
}

void deleteImport(tList * import) {
	_reset(import);
	char ** elem;
	while ((elem = _next(import)) != NULL) {
		free(*elem);
		free(elem);
	}
	_reset(import);
	_deleteList(import);
}


/*** Main ***/

tMain * newMain(tList * instrs) {
	tMain * main = malloc(sizeof(tMain));
	main->instrs = instrs;
	return main;
}

void printMain(tMain * main) {
	printf("public static void main(String[] args) {\n");
	printInstrs(main->instrs);
	printf("}\n");
}

void deleteMain(tMain * main) {
	deleteInstrs(main->instrs);
	free(main);
}

void analyseMain(tMain * main) {
	if (main->instrs != NULL) {
		analyseInstrs(main->instrs);
	}
}

/*** Class ***/

tClass * newClass(char * name, tExtends * extends, tList * properties, tList * constructors, tList * methods) {
	tClass * class = malloc(sizeof(tClass));
	class->name = strdup(name);
	free(name);
	class->extends = extends;
	class->properties = properties;
	class->constructors = constructors;
	class->methods = methods;
	addClassToClassMap(class);
	return class;
}

void newImportedClass(char * name) {
	tClass * class = malloc(sizeof(tClass));
	class->name = name;
	addClassToClassMap(class);
	_addElement(importedClasses, class);
}

void printClasses(tList * classes) {
	_reset(classes);
	tClass * class;
	while ((class = _next(classes)) != NULL) {
		printf("\n");
		printClass(class);
	}
	_reset(classes);
} 


void printClass(tClass * class) {
	printf("static class %s ", class->name);
	printExtends(class->extends);
	printf("{\n\n");
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

void analyseClasses(tList * classes) {
	_reset(classes);
	tClass * class;
	while ((class = _next(classes)) != NULL) {
		analyseClass(class);
	}
	_reset(classes);
}

void deleteClass(tClass * class) {
	free(class->name);
	deleteExtends(class->extends);
	deleteProperties(class->properties);
	deleteConstructors(class->constructors);
	deleteMethods(class->methods);
	free(class);
}

void analyseClass(tClass * class) {
	newBlock();
	analyseProperties(class->properties);
	analyseConstructors(class->constructors);
	analyseMethods(class->methods);
	endBlock();
}

tList * newClasses() {
	return _newList(sizeof(tClass));
}

void addClassToClassMap(tClass * class) {
	tClass * newClass = malloc(sizeof(tClass));
	newClass = memcpy(newClass, class, sizeof(tClass)); 
	HASH_ADD_KEYPTR(hh, classes, newClass->name, strlen(newClass->name), newClass);
}

int classExists(char * name) {
	return getClass(name) != NULL;
}

tClass * getClass(char * name) {
	tClass * class;
	HASH_FIND_STR(classes, name, class);
	return class;
}

void deleteClassesMap() {
	tClass * class, * tmp;

  	HASH_ITER(hh, classes, class, tmp) {
    	HASH_DEL(classes, class);
    	free(class);
  	}
 }

 void deleteImportedClasses() {
	_reset(importedClasses);
	tClass * class;
	while ((class = _next(importedClasses)) != NULL) {
		free(class);
	}
	_reset(importedClasses);
	_deleteList(importedClasses);
}

int hasProperty(tClass * class, char * name) {
	return getProperty(class, name) != NULL;
}

tProperty * getProperty(tClass * class, char * name) {
	_reset(class->properties);
	tProperty * property;
	while ((property = _next(class->properties)) != NULL) {
		if (!strcmp(property->name, name)) {
			_reset(class->properties);
			return property;
		}
	}
	_reset(class->properties);
	return NULL;
}

int hasMethod(tClass * class, char * name) {
	return getMethod(class, name) != NULL;
}

tMethod * getMethod(tClass * class, char * name) {
	_reset(class->methods);
	tMethod * method;
	while ((method = _next(class->methods)) != NULL) {
		if (!strcmp(method->name, name)) {
			_reset(class->methods);
			return method;
		}
	}
	_reset(class->methods);
	return NULL;
}

int hasConstructor(tClass * class) {
	return !_isEmpty(class->constructors);
}
 
/*** Extends ***/

tExtends * newExtends(char * name) {
	tExtends * extends = malloc(sizeof(tExtends));
	if (name != NULL) {
		extends->name = strdup(name);
		free(name);
	} else extends->name = NULL;
	return extends;
}

void printExtends(tExtends * extends) {
	if (extends->name != NULL) printf("extends %s ", extends->name);
	
}

void deleteExtends(tExtends * extends) {
	if (extends->name != NULL) free(extends->name);
	free(extends);
}

/*** Property ***/

tProperty * newProperty(tType * type, char * name, tExpr * expr) {
	tProperty * property = malloc(sizeof(tProperty));
	property->type = type;
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
	printf("\t");
	printType(property->type);
	printf(" %s", property->name);
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

void analyseProperties(tList * properties) {
	_reset(properties);
	tProperty * property;
	while ((property = _next(properties)) != NULL) {
		analyseProperty(property);
	}
	_reset(properties);
}

void deleteProperty(tProperty * property) {
	deleteType(property->type);
	free(property->name);
	if(property->expr != NULL) {
		deleteExpr(property->expr);
	}
	free(property);
}

void analyseProperty(tProperty * property) {
	if (hasSymbol(property->name)) {
		printf("Property %s has already been declared.\n", property->name);
		// TODO: Existing symbol.
	} else {
		addSymbol(property->name, property->type);
	}
	if (property->expr != NULL) {
		analyseExpr(property->expr);
	}	
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
		printf("\n");
		printConstructor(constructor);
	}
	_reset(constructors);
}

void printConstructor(tConstructor * constructor) {
	printf("\t%s(", constructor->name);
	printDefParams(constructor->defParams);
	printf(") {\n");
	printInstrs(constructor->instrs);
	printf("\t}\n");
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

void analyseConstructors(tList * constructors) {
	_reset(constructors);
	tConstructor * constructor;
	while ((constructor = _next(constructors)) != NULL) {
		analyseConstructor(constructor);
	}
	_reset(constructors);
}

void deleteConstructor(tConstructor * constructor) {
	free(constructor->name);
	deleteDefParams(constructor->defParams);
	deleteInstrs(constructor->instrs);
	free(constructor);
}

void analyseConstructor(tConstructor * constructor) {
	newBlock();
	analyseDefParams(constructor->defParams);
	analyseInstrs(constructor->instrs);
	endBlock();
}

tList * newConstructors() {
	return _newList(sizeof(tConstructor));
}

/*** Method ***/

tMethod * newMethod(tType * returnType, char * name, tList * defParams, tList * instrs) {
	tMethod * method = malloc(sizeof(tMethod));
	method->returnType = returnType;
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
		printf("\n");
		printMethod(method);
	}
	_reset(methods);
}

void printMethod(tMethod * method) {
	printf("\t");
	printType(method->returnType);
	printf(" %s(", method->name);
	printDefParams(method->defParams);
	printf(") {\n");
	printInstrs(method->instrs);
	printf("\t}\n");
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

void analyseMethods(tList * methods) {
	_reset(methods);
	tMethod * method;
	while ((method = _next(methods)) != NULL) {
		analyseMethod(method);
	}
	_reset(methods);
}

void deleteMethod(tMethod * method) {
	deleteType(method->returnType);
	free(method->name);
	deleteDefParams(method->defParams);
	deleteInstrs(method->instrs);
	free(method);
}

void analyseMethod(tMethod * method) {
	newBlock();
	analyseDefParams(method->defParams);
	analyseInstrs(method->instrs);
	endBlock();
}

tList * newMethods() {
	return _newList(sizeof(tMethod));
}

/*** DefParam ***/

tDefParam * newDefParam(tType * type, char * name) {
	tDefParam * defParam = malloc(sizeof(tDefParam));
	defParam->type = type;
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
	printType(defParam->type);
	printf(" %s", defParam->name);
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

void analyseDefParams(tList * defParams) {
	_reset(defParams);
	tDefParam * defParam;
	while ((defParam = _next(defParams)) != NULL) {
		analyseDefParam(defParam);
	}
	_reset(defParams);
}

void deleteDefParam(tDefParam * defParam) {
	deleteType(defParam->type);
	free(defParam->name);
	free(defParam);
}

void analyseDefParam(tDefParam * defParam) {
	if (hasSymbol(defParam->name)) {
		printf("Parameter %s has already been declared.\n", defParam->name);
		// TODO: Existing symbol.
	} else {
		addSymbol(defParam->name, defParam->type);
	}
}

tList * newDefParams() {
	return _newList(sizeof(tDefParam));
}

/*** Params ***/

tParam * newParam(tExpr * expr) {
	return expr;
}

void printParams(tList * params) {
	if (_isEmpty(params)) {
		return;
	}
	_reset(params);
	tParam * param = _next(params);
	printExpr(param);
	while ((param = _next(params)) != NULL) {
		printf(", ");
		printExpr(param);
	}
	_reset(params);
}

void deleteParams(tList * params) {
	_reset(params);
	tParam * param;
	while ((param = _next(params)) != NULL) {
		deleteExpr(param);
	}
	_reset(params);
	_deleteList(params);
}

void analyseParams(tList * params) {
	_reset(params);
	tParam * param;
	while ((param = _next(params)) != NULL) {
		analyseParam(param);
	}
	_reset(params);
}

void analyseParam(tParam * param) {
	analyseExpr(param);
}

tList * newParams() {
	return _newList(sizeof(tParam));
}

int paramsHaveErrors(tList * params) {
	_reset(params);
	tParam * param;
	while ((param = _next(params)) != NULL) {
		if (hasError(param)) {
			_reset(params);
			return 1;
		}
	}
	_reset(params);
	return 0;
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

void analyseInstrs(tList * instrs) {
	newBlock();
	_reset(instrs);
	tInstr * instr;
	while ((instr = _next(instrs)) != NULL) {
		analyseInstr(instr);
	}
	_reset(instrs);
	endBlock();
}

void deleteInstr(tInstr * instr) {
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
	free(instr);
}

void analyseInstr(tInstr * instr) {
	switch (instr->type) {
		case INSTR_NULL:
			return;
		case INSTR_DECLARATION:
			analyseInstrDeclaration(instr->instr);
			break;
		case INSTR_RETURN:
			analyseInstrReturn(instr->instr);
			break;
		case INSTR_SIMPLE:
			analyseInstrSimple(instr->instr);
			break;
		case INSTR_IF:
			analyseInstrIf(instr->instr);
			break;
		case INSTR_WHILE:
			analyseInstrWhile(instr->instr);
			break;
	}
}

tList * newInstrs() {
	return _newList(sizeof(tInstr));
}

/*** InstrDeclaration ***/

tInstrDeclaration * newInstrDeclaration(tType * type, char * name, tExpr * expr) {
	return newProperty(type, name, expr);
}

void printInstrDeclaration(tInstrDeclaration * instrDeclaration) {
	printProperty(instrDeclaration);
}

void deleteInstrDeclaration(tInstrDeclaration * instrDeclaration) {
	deleteProperty(instrDeclaration);
}

void analyseInstrDeclaration(tInstrDeclaration * instrDeclaration) {
	if (hasSymbol(instrDeclaration->name)) {
		printf("Variable %s has already been declared.\n", instrDeclaration->name);
		// TODO: Existing symbol.
	} else {
		addSymbol(instrDeclaration->name, instrDeclaration->type);
	}
	if (instrDeclaration->expr != NULL) {
		analyseExpr(instrDeclaration->expr);
	}	
}

/*** InstrReturn ***/

tInstrReturn * newInstrReturn(tExpr * expr) {
	return expr;
}

void printInstrReturn(tInstrReturn * instrReturn) {
	printf("\t return ");
	printExpr(instrReturn);
	printf(";\n");
}

void deleteInstrReturn(tInstrReturn * instrReturn) {
	deleteExpr(instrReturn);
}

void analyseInstrReturn(tInstrReturn * instrReturn) {
	analyseExpr(instrReturn);
}

/*** InstrSimple ***/

tInstrSimple * newInstrSimple(tExpr * expr) {
	return expr;
}

void printInstrSimple(tInstrSimple * instrSimple) {
	printf("\t");
	printExpr(instrSimple);
	printf(";\n");
}

void deleteInstrSimple(tInstrSimple * instrSimple) {
	deleteExpr(instrSimple);
}

void analyseInstrSimple(tInstrSimple * instrSimple) {
	analyseExpr(instrSimple);
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
	printf("\tif (");
	printExpr(instrIf->expr);
	printf(") {\n");
	printInstrs(instrIf->instrs);
	printf("\t}");
	if (instrIf->instrElse != NULL) {
		printInstrElse(instrIf->instrElse);
	} else {
		printf("\n");
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

void analyseInstrIf(tInstrIf * instrIf) {
	analyseExpr(instrIf->expr);
	analyseInstrs(instrIf->instrs);
	if (instrIf->instrElse != NULL) {
		analyseInstrElse(instrIf->instrElse);
	}
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
		printf("\t}\n");
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

void analyseInstrElse(tInstrElse * instrElse) {
	if (instrElse->instrIf != NULL) {
		analyseInstrIf(instrElse->instrIf);
	} else {
		analyseInstrs(instrElse->instrs);
	}
}

/*** InstrWhile ***/

tInstrWhile * newInstrWhile(tExpr * expr, tList * instrs) {
	tInstrWhile * instrWhile = malloc(sizeof(tInstrWhile));
	instrWhile->expr = expr;
	instrWhile->instrs = instrs;
	return instrWhile;
}

void printInstrWhile(tInstrWhile * instrWhile) {
	printf("\twhile (");
	printExpr(instrWhile->expr); 
	printf(") {\n");
	printInstrs(instrWhile->instrs);
	printf("\t}\n");
}

void deleteInstrWhile(tInstrWhile * instrWhile) {
	deleteExpr(instrWhile->expr);
	deleteInstrs(instrWhile->instrs);
	free(instrWhile);
}

void analyseInstrWhile(tInstrWhile * instrWhile) {
	analyseExpr(instrWhile->expr);
	analyseInstrs(instrWhile->instrs);
}

/*** Expr ***/

tExpr * newExpr(int type, void * expr) {
	tExpr * newExpr = malloc(sizeof(tExpr));
	newExpr->type = type;
	newExpr->expr = expr;
	newExpr->exprType = copyType(getType(type, expr));
	return newExpr;
}

void printExpr(tExpr * expr) {
	switch (expr->type) {
		case EXPR_BUILT_IN:
			printBuiltIn(expr->expr);
			break;	
		case EXPR_ASSIGNMENT:
			printAssignmentExpr(expr->expr);
			break;
		case EXPR_PARENTHESIS:
			printParenthesisExpr(expr->expr);
			break;
		case EXPR_IDENTIFIER:
			printIdentifier(expr->expr);
			break;
		case EXPR_EQUALITY:
			printEqualityExpr(expr->expr);
			break;
		case EXPR_OBJ_CREATION:
			printObjCreation(expr->expr);
			break;
		case EXPR_OPERATION:
			printOperationExpr(expr->expr);
			break;
		case EXPR_MODIF:
			printModifExpr(expr->expr);
			break;
		case EXPR_OBJ_ACCESS:
			printObjAccessExpr(expr->expr);
			break;
		case EXPR_ARRAY:
			printArrayExpr(expr->expr);
			break;
		case EXPR_ARRAY_CREATION:
			printArrayCreationExpr(expr->expr);
			break;
	}
}

void deleteExpr(tExpr * expr) {
	deleteType(expr->exprType);
	//deleteExprType(expr->type, expr->expr);
	switch (expr->type) {
		case EXPR_BUILT_IN:
			deleteBuiltIn(expr->expr);
			break;	
		case EXPR_ASSIGNMENT:
			deleteAssignmentExpr(expr->expr);
			break;
		case EXPR_PARENTHESIS:
			deleteParenthesisExpr(expr->expr);
			break;
		case EXPR_IDENTIFIER:
			deleteIdentifier(expr->expr);
			break;
		case EXPR_EQUALITY:
			deleteEqualityExpr(expr->expr);
			break;
		case EXPR_OBJ_CREATION:
			deleteObjCreation(expr->expr);
			break;
		case EXPR_OPERATION:
			deleteOperationExpr(expr->expr);
			break;
		case EXPR_MODIF:
			deleteModifExpr(expr->expr);
			break;
		case EXPR_OBJ_ACCESS:
			deleteObjAccessExpr(expr->expr);
			break;
		case EXPR_ARRAY:
			deleteArrayExpr(expr->expr);
			break;
		case EXPR_ARRAY_CREATION:
			deleteArrayCreationExpr(expr->expr);
			break;
	}
	free(expr);
}

void analyseExpr(tExpr * expr) {
	if (hasError(expr)) {
		printf("There's an error in expr: ");
		printExpr(expr);
		printf(" \n");

		tEqualityExpr * eqExpr;
		tOperationExpr * opExpr;
		switch (expr->type) {
			case EXPR_EQUALITY:
				eqExpr = (tEqualityExpr *) expr->expr;
				printf("%s %s %s\n", eqExpr->first->exprType->type, eqExpr->op, eqExpr->second->exprType->type);
				//printf("types match? %d", isValidBinaryOperation(eqExpr->first->exprType, eqExpr->second->exprType, eqExpr->op));
			break;
			case EXPR_OPERATION:
				opExpr = (tOperationExpr *) expr->expr;
				printf("%s %s %s\n", opExpr->first->exprType->type, opExpr->op, opExpr->second->exprType->type);
				//isValidBinaryOperation(opExpr->first->exprType, opExpr->second->exprType, opExpr->op);
			break;
		}
	}
	switch (expr->type) {
		case EXPR_BUILT_IN:
			analyseBuiltIn(expr->expr);
			break;	
		case EXPR_ASSIGNMENT:
			analyseAssignmentExpr(expr->expr);
			break;
		case EXPR_PARENTHESIS:
			analyseParenthesisExpr(expr->expr);
			break;
		case EXPR_IDENTIFIER:
			analyseIdentifier(expr->expr);
			break;
		case EXPR_EQUALITY:
			analyseEqualityExpr(expr->expr);
			break;
		case EXPR_OBJ_CREATION:
			analyseObjCreation(expr->expr);
			break;
		case EXPR_OPERATION:
			analyseOperationExpr(expr->expr);
			break;
		case EXPR_MODIF:
			analyseModifExpr(expr->expr);
			break;
		case EXPR_OBJ_ACCESS:
			analyseObjAccessExpr(expr->expr);
			break;
		case EXPR_ARRAY:
			analyseArrayExpr(expr->expr);
			break;
		case EXPR_ARRAY_CREATION:
			analyseArrayCreationExpr(expr->expr);
			break;
	}
}

tType * getType(int type, void * expr) {
	switch (type) {
		case EXPR_BUILT_IN:
			return ((tBuiltInExpr *) expr)->exprType;
		case EXPR_ASSIGNMENT:
			return ((tAssignmentExpr *) expr)->exprType;
		case EXPR_PARENTHESIS:
			return ((tParenthesisExpr *) expr)->exprType;
		case EXPR_IDENTIFIER:
			return ((tIdentifier *) expr)->exprType;
		case EXPR_EQUALITY:
			return ((tEqualityExpr *) expr)->exprType;
		case EXPR_OBJ_CREATION:
			return ((tObjectCreation *) expr)->exprType;
		case EXPR_OPERATION:
			return ((tObjectCreation *) expr)->exprType;
		case EXPR_MODIF:
			return ((tModifExpr *) expr)->exprType;
		case EXPR_OBJ_ACCESS:
			return ((tObjAccessExpr *) expr)->exprType;
		case EXPR_ARRAY:
			return ((tArrayExpr *) expr)->exprType;
		case EXPR_ARRAY_CREATION:
			return ((tArrayCreationExpr *) expr)->exprType;
	}
}

void deleteExprType(int type, void * expr) {
	switch (type) {
		case EXPR_BUILT_IN:
			deleteType(((tBuiltInExpr *) expr)->exprType);
		case EXPR_ASSIGNMENT:
			deleteType(((tAssignmentExpr *) expr)->exprType);
		case EXPR_PARENTHESIS:
			deleteType(((tParenthesisExpr *) expr)->exprType);
		case EXPR_IDENTIFIER:
			deleteType(((tIdentifier *) expr)->exprType);
		case EXPR_EQUALITY:
			deleteType(((tEqualityExpr *) expr)->exprType);
		case EXPR_OBJ_CREATION:
			deleteType(((tObjectCreation *) expr)->exprType);
		case EXPR_OPERATION:
			deleteType(((tObjectCreation *) expr)->exprType);
		case EXPR_MODIF:
			deleteType(((tModifExpr *) expr)->exprType);
		case EXPR_OBJ_ACCESS:
			deleteType(((tObjAccessExpr *) expr)->exprType);
		case EXPR_ARRAY:
			deleteType(((tArrayExpr *) expr)->exprType);
		case EXPR_ARRAY_CREATION:
			deleteType(((tArrayCreationExpr *) expr)->exprType);
	}
}

int isLeftValue(tExpr * expr) {
	switch (expr->type) {
		case EXPR_BUILT_IN:
			return 0;
		case EXPR_ASSIGNMENT:
			return 0;
		case EXPR_PARENTHESIS:
			return isLeftValue(expr->expr);
		case EXPR_IDENTIFIER:
			return 1;
		case EXPR_EQUALITY:
			return 0;
		case EXPR_OBJ_CREATION:
			return 0;
		case EXPR_OPERATION:
			return 0;
		case EXPR_MODIF:
			return 0;
		case EXPR_OBJ_ACCESS:
			return isObjAccessLeftValue((tObjAccessExpr *) expr->expr);
		case EXPR_ARRAY:
			return 1;
		case EXPR_ARRAY_CREATION:
			return 0;
	}
}

/*** BuiltInExpr ***/

tBuiltInExpr * newBuiltIn(int type, void * variable, int bytes) {
	tBuiltInExpr * builtIn = malloc(sizeof(tBuiltInExpr));
	builtIn->exprType = getBuiltInType(type);
	builtIn->type = type;
	if (variable != NULL) {
		builtIn->variable = malloc(bytes);
		builtIn->variable = memcpy(builtIn->variable, variable, bytes);
	} else {
		builtIn->variable = NULL;
	}
	return builtIn;
}

void printBuiltIn(tBuiltInExpr * builtIn) {
	switch (builtIn->type) {
		case INPUT_INT:
			printf("%d", *(int *) builtIn->variable);
			break;	
		case INPUT_BOOLEAN:
			printf("%s",(*(int *) builtIn->variable) ? "true" : "false");
			break;
		case INPUT_CHAR:
			printf("\'%c\'",*(char *) builtIn->variable);
			break;
		case INPUT_STRING:
			printf("\"%s\"",(char *) builtIn->variable);
			break;
		case INPUT_NULL:
			printf("null");
			break;
	}
}

void deleteBuiltIn(tBuiltInExpr * builtIn) {
	if (builtIn->variable != NULL) {
		free(builtIn->variable);
	}
	deleteType(builtIn->exprType);
	free(builtIn);
}

void analyseBuiltIn(tBuiltInExpr * builtIn) {
}

tType * getBuiltInType(int type) {
	switch (type) {
		case INPUT_INT:
			return intType();	
		case INPUT_BOOLEAN:
			return booleanType();	
		case INPUT_CHAR:
			return charType();	
		case INPUT_STRING:
			return stringType();	
		case INPUT_NULL:
			return nullType();
		default:
			return errorType(); // TODO: Do sth?
	}
}

/*** AssignmentExpr ***/

tAssignmentExpr * newAssignmentExpr(tExpr * variable, char * op, tExpr * expr) {
	tAssignmentExpr * assignmentExpr = malloc(sizeof(tAssignmentExpr));
	assignmentExpr->variable = variable;
	assignmentExpr->op = strdup(op);
	free(op);
	assignmentExpr->expr = expr;
	
	if (hasError(variable) || hasError(expr)) {
		assignmentExpr->exprType = nestedErrorType();
	} else if (typesMatch(variable, expr) && isLeftValue(variable)) {
		assignmentExpr->exprType = copyType(variable->exprType);
	} else {
		assignmentExpr->exprType = errorType();
	}
	return assignmentExpr;
}

void printAssignmentExpr(tAssignmentExpr * assignmentExpr) {
	printExpr(assignmentExpr->variable);
	printf(" %s ", assignmentExpr->op);
	printExpr(assignmentExpr->expr);
}

void deleteAssignmentExpr(tAssignmentExpr * assignmentExpr) {
	deleteExpr(assignmentExpr->variable);
	free(assignmentExpr->op);
	deleteExpr(assignmentExpr->expr);
	deleteType(assignmentExpr->exprType);
	free(assignmentExpr);
}

void analyseAssignmentExpr(tAssignmentExpr * assignmentExpr) {
	analyseExpr(assignmentExpr->variable);
	analyseExpr(assignmentExpr->expr);
}

/*** Equality ***/

tEqualityExpr * newEqualityExpr(tExpr * first, char * op, tExpr * second) {
	tEqualityExpr * equalityExpr = malloc(sizeof(tEqualityExpr));
	equalityExpr->first = first;
	equalityExpr->op = strdup(op);
	free(op);
	equalityExpr->second = second;
	if (hasError(first) || hasError(second)) {
		equalityExpr->exprType = nestedErrorType();
	} else if (typesMatch(first, second) && isValidBinaryOperation(first->exprType, second->exprType, equalityExpr->op)) {
		equalityExpr->exprType = booleanType();
	} else {
		equalityExpr->exprType = errorType();
	}
	return equalityExpr;
}

void printEqualityExpr(tEqualityExpr * equalityExpr) {
	printExpr(equalityExpr->first);
	printf(" %s ", equalityExpr->op);
	printExpr(equalityExpr->second);
}

void deleteEqualityExpr(tEqualityExpr * equalityExpr) {
	deleteExpr(equalityExpr->first);
	free(equalityExpr->op);
	deleteExpr(equalityExpr->second);
	deleteType(equalityExpr->exprType);
	free(equalityExpr);
}

void analyseEqualityExpr(tEqualityExpr * equalityExpr) {
	analyseExpr(equalityExpr->first);
	analyseExpr(equalityExpr->second);
}

/*** Identifier ***/

tIdentifier * newIdentifier(char * name) {
	tIdentifier * identifier = malloc(sizeof(tIdentifier));
	identifier->name = strdup(name);
	free(name);
	identifier->exprType = getIdentifierType(identifier->name);
	return identifier;
}

void printIdentifier(tIdentifier * identifier) {
	printf("%s", identifier->name);
}

void deleteIdentifier(tIdentifier * identifier) {
	free(identifier->name);
	deleteType(identifier->exprType);
	free(identifier);
}

void analyseIdentifier(tIdentifier * identifier) {
	if (!hasSymbol(identifier->name)) {
		printf("Unknown symbol %s\n", identifier->name);
		// TODO: Unknown symbol.
	}
}

tType * getIdentifierType(char * name) {
	return unknownType();
}

/*** ParenthesisExpr ***/

tParenthesisExpr * newParenthesisExpr(tExpr * expr) {
	tParenthesisExpr * parenthesisExpr = malloc(sizeof(tParenthesisExpr));
	parenthesisExpr->expr = expr;
	if (hasError(expr)) {
		parenthesisExpr->exprType = nestedErrorType();
	} else {
		parenthesisExpr->exprType = copyType(expr->exprType);
	}
	return parenthesisExpr;
}

void printParenthesisExpr(tParenthesisExpr * parenthesisExpr) {
	printf("(");
	printExpr(parenthesisExpr->expr);
	printf(")");
}

void deleteParenthesisExpr(tParenthesisExpr * parenthesisExpr) {
	deleteExpr(parenthesisExpr->expr);
	deleteType(parenthesisExpr->exprType);
	free(parenthesisExpr);
}

void analyseParenthesisExpr(tParenthesisExpr * parenthesisExpr) {
	analyseExpr(parenthesisExpr->expr);
}

/*** Object Creation ***/

tObjectCreation * newObjCreation(char * name, tList * params) {
	tObjectCreation * objCreation = malloc(sizeof(tObjectCreation));
	objCreation->name = strdup(name);
	free(name);
	objCreation->params = params;
	if (paramsHaveErrors(params)) {
		objCreation->exprType = nestedErrorType();
	} else {
		objCreation->exprType = objectType(strdup(objCreation->name));
	}
	return objCreation;
}

void printObjCreation(tObjectCreation * objCreation) {
	printf("new %s(", objCreation->name);
	printParams(objCreation->params);
	printf(")");
}

void deleteObjCreation(tObjectCreation * objCreation) {
	deleteParams(objCreation->params);
	free(objCreation->name);
	deleteType(objCreation->exprType);
	free(objCreation);
}

void analyseObjCreation(tObjectCreation * objCreation) {
	analyseParams(objCreation->params);
}

/*** Operation Expr ***/

tOperationExpr * newOperationExpr(tExpr * first, char * op, tExpr * second) {
	tOperationExpr * operationExpr = malloc(sizeof(tOperationExpr));
	operationExpr->first = first;
	operationExpr->op = NULL;
	operationExpr->op = strdup(op);
	free(op);
	operationExpr->second = second;
	if (hasError(first) || hasError(second)) {
		operationExpr->exprType = nestedErrorType();
	} else if (typesMatch(first, second) && isValidBinaryOperation(first->exprType, second->exprType, operationExpr->op)) {
		operationExpr->exprType = getOperationType(first, second, operationExpr->op);
	} else {
		operationExpr->exprType = errorType();
	}
	return operationExpr;
}

void printOperationExpr(tOperationExpr * operationExpr) {
	printExpr(operationExpr->first);
	printf(" %s ", operationExpr->op);
	printExpr(operationExpr->second);
}

void deleteOperationExpr(tOperationExpr * operationExpr) {
	deleteExpr(operationExpr->first);
	free(operationExpr->op);
	deleteExpr(operationExpr->second);
	deleteType(operationExpr->exprType);
	free(operationExpr);
}

void analyseOperationExpr(tOperationExpr * operationExpr) {
	analyseExpr(operationExpr->first);
	analyseExpr(operationExpr->second);
}

tType * getOperationType(tExpr * first, tExpr * second, char * op) {
	if (!strcmp(op, "%")) {
		return intType();
	} else {
		return getBiggestType(first, second);
	}
}

/*** Modif Expr ***/

tModifExpr * newModifExpr(char * prevOp, tExpr * expr, char * postOp) {
	tModifExpr * modifExpr = malloc(sizeof(tModifExpr));
	modifExpr->expr = expr;
	modifExpr->prevOp = NULL;
	if (prevOp != NULL) {
		modifExpr->prevOp = strdup(prevOp);
		free(prevOp);
	}
	modifExpr->postOp = NULL;
	if (postOp != NULL) {
		modifExpr->postOp = strdup(postOp);
		free(postOp);
	}
	char * op = modifExpr->prevOp != NULL ? modifExpr->prevOp:modifExpr->postOp;
	if (hasError(expr)) {
		modifExpr->exprType = nestedErrorType();
	} else if (isValidUnaryOperation(expr->exprType, op)) {
		modifExpr->exprType = getModifType(expr, op);
	} else {
		modifExpr->exprType = errorType();
	}
	return modifExpr;
}

void printModifExpr(tModifExpr * modifExpr) {
	if (modifExpr->prevOp != NULL) {
		printf("%s", modifExpr->prevOp);
	}
	printExpr(modifExpr->expr);
	if (modifExpr->postOp != NULL) {
		printf("%s", modifExpr->postOp);
	}
}

void deleteModifExpr(tModifExpr * modifExpr) {
	if (modifExpr->prevOp != NULL) {
		free(modifExpr->prevOp);
	}
	deleteExpr(modifExpr->expr);
	if (modifExpr->postOp != NULL) {
		free(modifExpr->postOp);
	}
	deleteType(modifExpr->exprType);
	free(modifExpr);
}

void analyseModifExpr(tModifExpr * modifExpr) {
	analyseExpr(modifExpr->expr);
}

tType * getModifType(tExpr * expr, char * op) {
	if (!strcmp(op, "!")) {
		return booleanType();
	} else {
		return copyType(expr->exprType);
	}
}

/*** Object Access Expr ***/

tObjAccessExpr * newObjAccessExpr(tExpr * expr, char * name, tList * params) {
	tObjAccessExpr * objAccessExpr = malloc(sizeof(tObjAccessExpr));
	objAccessExpr->expr = expr;
	objAccessExpr->name = strdup(name);
	free(name);
	objAccessExpr->params = params;
	
	if (hasError(expr)) {
		objAccessExpr->exprType = nestedErrorType();
	} else if (isLeftValue(expr) && isObject(expr)) {
		tClass * class = getClass(expr->exprType->type);
		if (class == NULL) {
			objAccessExpr->exprType = unknownType();
		} else {
			if (params == NULL) {
				tProperty * property = getProperty(class, objAccessExpr->name);
				if (property == NULL) {
					objAccessExpr->exprType = errorType();
				} else {
					objAccessExpr->exprType = copyType(property->type);
				}		
			} else {
				tMethod * method = getMethod(class, objAccessExpr->name);
				if (method == NULL) {
					objAccessExpr->exprType = errorType();
				} else {
					objAccessExpr->exprType = copyType(method->returnType);
				}
			}
		}
	} else {
		objAccessExpr->exprType = errorType();
	}

	return objAccessExpr;
}

void printObjAccessExpr(tObjAccessExpr * objAccessExpr) {
	printExpr(objAccessExpr->expr);
	printf(".%s", objAccessExpr->name);
	if (objAccessExpr->params != NULL) {
		printf("(");
		printParams(objAccessExpr->params);
		printf(")");
	}
}

void deleteObjAccessExpr(tObjAccessExpr * objAccessExpr) {
	deleteExpr(objAccessExpr->expr);
	free(objAccessExpr->name);
	if (objAccessExpr->params != NULL) {
		deleteParams(objAccessExpr->params);
	}
	deleteType(objAccessExpr->exprType);
	free(objAccessExpr);
}

void analyseObjAccessExpr(tObjAccessExpr * objAccessExpr) {
	analyseExpr(objAccessExpr->expr);
	if (objAccessExpr->params != NULL) {
		analyseParams(objAccessExpr->params);
	}
}

isObjAccessLeftValue(tObjAccessExpr * objAccessExpr) {
	tExpr * expr = objAccessExpr->expr;
	tList * params = objAccessExpr->params;
	char * name = objAccessExpr->name;
	if (isLeftValue(expr) && isObject(expr)) {
		tClass * class = getClass(expr->exprType->type);
		return class == NULL || (params == NULL && getProperty(class, name) != NULL);	
	}
	return 0;
}

/*** Array Creation Expr ***/

tArrayCreationExpr * newArrayCreationExpr(char * name, tList * sizes)	{
	tArrayCreationExpr * arrayCreationExpr = malloc(sizeof(tArrayCreationExpr));
	arrayCreationExpr->name = strdup(name);
	free(name);
	arrayCreationExpr->sizes = sizes;
	if (sizesHaveErrors(sizes)) {
		arrayCreationExpr->exprType = nestedErrorType();
	} else {
		arrayCreationExpr->exprType = arrayType(strdup(arrayCreationExpr->name), _size(sizes));
	}
	return arrayCreationExpr;
}

void printArrayCreationExpr(tArrayCreationExpr * arrayCreationExpr) {
	printf("new %s", arrayCreationExpr->name);
	printSizes(arrayCreationExpr->sizes);
}

void deleteArrayCreationExpr(tArrayCreationExpr * arrayCreationExpr) {
	free(arrayCreationExpr->name);
	deleteSizes(arrayCreationExpr->sizes);
	deleteType(arrayCreationExpr->exprType);
	free(arrayCreationExpr);
}

void analyseArrayCreationExpr(tArrayCreationExpr * arrayCreationExpr) {
	analyseSizes(arrayCreationExpr->sizes);
}

/*** Array Expr ***/

tArrayExpr * newArrayExpr(char * variable, tList * sizes)	{
	tArrayExpr * arrayExpr = malloc(sizeof(tArrayExpr));
	arrayExpr->variable = strdup(variable);
	free(variable);
	arrayExpr->sizes = sizes;
	tType * arrayType = getIdentifierType(variable);
	if (!isUnknownType(arrayType) && (isErrorType(arrayType) || !sameSize(arrayType, _size(sizes)))) {
		arrayExpr->exprType = errorType();
	} else {
		arrayExpr->exprType = getBasicType(arrayType);
	}
	free(arrayType);
	return arrayExpr;
}

void printArrayExpr(tArrayExpr * arrayExpr) {
	printf("%s", arrayExpr->variable);
	printSizes(arrayExpr->sizes);
}

void deleteArrayExpr(tArrayExpr * arrayExpr) {
	free(arrayExpr->variable);
	deleteSizes(arrayExpr->sizes);
	deleteType(arrayExpr->exprType);
	free(arrayExpr);
}

void analyseArrayExpr(tArrayExpr * arrayExpr) {
	analyseSizes(arrayExpr->sizes);
}

/*** Type ***/

tType * newType(char * name) {
	tType * type = malloc(sizeof(tType));
	type->type = strdup(name);
	free(name);
	type->brackets = 0;
	return type;
}

void addBrackets(tType * type, int brackets) {
	type->brackets += brackets;
}

void printType(tType * type) {
	printf("%s", type->type);
	int i;
	for (i = 0; i < type->brackets; i++) {
		printf("[]");
	}
}

int isType(tType * type) {
	return isTypeName(type->type);
}

int isTypeName(char * typeName) {
	if (!strcmp(typeName, "int")) {
		return 1;
	}
	if (!strcmp(typeName, "char")) {
		return 1;
	}
	if (!strcmp(typeName, "String")) {
		return 1;
	}
	if (!strcmp(typeName, "boolean")) {
		return 1;
	}
	if (!strcmp(typeName, "Character")) {
		return 1;
	}
	if (!strcmp(typeName, "Integer")) {
		return 1;
	}
	if (!strcmp(typeName, "Boolean")) {
		return 1;
	}
	if (!strcmp(typeName, "void")) {
		return 1;
	}
	if (!strcmp(typeName, "double")) {
		return 1;
	}
	if (!strcmp(typeName, "Double")) {
		return 1;
	}
	if (classExists(typeName)) {
		return 1;
	}
	return 0;
}

void deleteType(tType * type) {
	free(type->type);
	free(type);
}

/*** Sizes ***/

tList * newSizes(tExpr * expr) {
	tList * sizes = _newList(sizeof(tExpr));
	_addElement(sizes, expr);
	return sizes;
}

void printSizes(tList * sizes) {
	_reset(sizes);
	tExpr * size;
	while ((size = _next(sizes)) != NULL) {
		printf("[");
		printExpr(size);
		printf("]");
	}
	_reset(sizes);
}

void deleteSizes(tList * sizes) {
	_reset(sizes);
	tExpr * size;
	while ((size = _next(sizes)) != NULL) {
		deleteExpr(size);
	}
	_reset(sizes);
	_deleteList(sizes);
}

void analyseSizes(tList * sizes) {
	_reset(sizes);
	tExpr * size;
	while ((size = _next(sizes)) != NULL) {
		analyseExpr(size);
	}
	_reset(sizes);
}

int sizesHaveErrors(tList * sizes) {
	_reset(sizes);
	tExpr * size;
	while ((size = _next(sizes)) != NULL) {
		if (hasError(size)) {
			_reset(sizes);
			return 1;
		}
	}
	_reset(sizes);
	return 0;
}

/*** Scope ***/

void newBlock() {
	scope++;
}

void endBlock() {
	deleteSymbolsInScope();
	scope--;
}

/*** Symbols ***/

void addSymbol(char * name, tType * type) {
	tSymbol * symbol = malloc(sizeof(tSymbol));

	symbol->name = name;
	symbol->type = type;
	symbol->scope = scope;

	HASH_ADD_KEYPTR(hh, symbols, symbol->name, strlen(symbol->name), symbol);
}

int hasSymbol(char * name) {
	return getSymbol(name) != NULL;
}

tSymbol * getSymbol(char * name) {
	tSymbol * symbol;
	HASH_FIND_STR(symbols, name, symbol);
	return symbol;
}

void deleteSymbols() {
	tSymbol * symbol, * tmp;

	HASH_ITER(hh, symbols, symbol, tmp) {
		HASH_DEL(symbols, symbol);
		deleteSymbol(symbol);
	}
}

void deleteSymbol(tSymbol * symbol) {
	free(symbol);
}

void deleteSymbolsInScope() {
	tSymbol * symbol, * tmp;

	HASH_ITER(hh, symbols, symbol, tmp) {
		if (isInScope(symbol)) {
			HASH_DEL(symbols, symbol);
			deleteSymbol(symbol);
		}
	}
}

int isInScope(tSymbol * symbol) {
	return symbol->scope == scope;
}

/*** Type Validation ***/

tType * intType() {
	return newType(strdup("int"));
}

tType * charType() {
	return newType(strdup("char"));
}

tType * stringType() {
	return newType(strdup("String"));
}

tType * booleanType() {
	return newType(strdup("boolean"));
}

tType * nullType() {
	return newType(strdup("null"));
}

tType * objectType(char * name) {
	tType * type = newType(strdup(name));
	free(name);
	return type;
}

tType * unknownType() {
	return newType(strdup("_unknown"));
}

tType * arrayType(char * name, int brackets) {
	tType * type = newType(strdup(name));
	free(name);
	addBrackets(type, brackets);
	return type;
}

tType * getBasicType(tType * type) {
	return newType(type->type);
}

tType * errorType() {
	return newType(strdup("_error"));
}

tType * nestedErrorType() {
	return newType(strdup("_nestedError"));
}

int hasError(tExpr * expr) {
	return isErrorType(expr->exprType) || isNestedErrorType(expr->exprType);
}

tType * getBiggestType(tExpr * first, tExpr * second) {
	if (isArrayType(first->exprType) || isArrayType(second->exprType)) {
		return isArrayType(first->exprType) ? copyType(first->exprType) : copyType(second->exprType);
	}
	if (isStringType(first->exprType) || isStringType(second->exprType)) {
		return stringType();
	}
	return !isUnknownType(first->exprType) ? copyType(first->exprType) : copyType(second->exprType);
}

int typesMatch(tExpr * expr1, tExpr * expr2) {
	tType * type1 = expr1->exprType;
	tType * type2 = expr2->exprType;

	if (isArrayType(type1)) {
		if (!sameSize(type1, type2->brackets)) {
			return 0;
		}
	}

	if (isObjectType(type1) || isNullType(type1)) {
		if (isObjectType(type2) || isNullType(type2) || isUnknownType(type2)) {
			return 1;
		} 
		return 0;
	}
	if (isNumericType(type1)) {
		if (isNumericType(type2) || isUnknownType(type2)) {
			return 1;
		} 
		return 0;
	}
	if (isAlphabeticType(type1)) {
		if (isAlphabeticType(type2) || isUnknownType(type2)) {
			return 1;
		} 
		return 0;
	}
	if (isBooleanType(type1)) {
		if (isBooleanType(type2) || isUnknownType(type2)) {
			return 1;
		} 
		return 0;
	}
	if (isUnknownType(type1)) {
		return 1;
	}

	return 0;
}

int isObject(tExpr * expr) {
	return isObjectType(expr->exprType) || isUnknownType(expr->exprType);
}

int isIntType(tType * type) {
	return !strcmp(type->type, "int");
}

int isCharType(tType * type) {
	return !strcmp(type->type, "char");
}

int isStringType(tType * type) {
	return !strcmp(type->type, "String");
}

int isBooleanType(tType * type) {
	return !strcmp(type->type, "boolean");
}

int isNullType(tType * type) {
	return !strcmp(type->type, "null");
}

int isObjectType(tType * type) {
	tClass * class = getClass(type->type);
	return class != NULL;
}

int isUnknownType(tType * type) {
	return !strcmp(type->type, "_unknown");
}

int isArrayType(tType * type) {
	return type->brackets > 0;
}

int isErrorType(tType * type) {
	return !strcmp(type->type, "_error");
}

int isNestedErrorType(tType * type) {
	return !strcmp(type->type, "_nestedError");
}

int isAlphabeticType(tType * type) {
	return isCharType(type) || isStringType(type);
}

int isNumericType(tType * type) {
	return isIntType(type);
}

int isValidBinaryOperation(tType * type1, tType * type2, char * op) {
	if (!strcmp(op, "%")) {
		return (isIntType(type1) || isUnknownType(type1)) &&
		(isIntType(type2) || isUnknownType(type2));
	}
	if (!strcmp(op, "+")) {
		return (isNumericType(type1) || isAlphabeticType(type1) || isUnknownType(type1)) &&
		(isNumericType(type2) || isAlphabeticType(type2) || isUnknownType(type2));
	}
	if (!strcmp(op, "-") || !strcmp(op, "*") || !strcmp(op, "/") || 
		!strcmp(op, "<=") || !strcmp(op, "=<") || !strcmp(op, ">=") ||
		!strcmp(op, "=>") || !strcmp(op, "<") || !strcmp(op, ">")) {
		return (isNumericType(type1) || isUnknownType(type1)) &&
		(isNumericType(type2) || isUnknownType(type2));
	}
	if (!strcmp(op, "==") || !strcmp(op, "!=")) {
		return 1;
	}
	/** boolean ops **/
	return (isBooleanType(type1) || isUnknownType(type1)) &&
		(isBooleanType(type2) || isUnknownType(type2));
}

int isValidUnaryOperation(tType * type, char * op) {
	if (!strcmp(op, "!")) {
		return isBooleanType(type) || isUnknownType(type);
	}
	/** ++, --, + and - ops **/
	return isNumericType(type) || isUnknownType(type);
}

int sameSize(tType * type, int size) {
	return type->brackets == size;
}

tType * copyType(tType * type) {
	tType * newType = malloc(sizeof(tType));
	newType = memcpy(newType, type, sizeof(tType));
	newType->type = strdup(type->type);
	return newType;
}
