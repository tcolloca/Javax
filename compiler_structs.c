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
} tConstructor;

typedef struct method {
	char * returnType;
	char * name;
} tMethod;

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
	property->name = strdup(name);
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

tConstructor * newConstructor(char * name) {
	tConstructor * constructor = malloc(sizeof(tConstructor));
	constructor->name = strdup(name);
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
	printf("%s(){}\n", constructor->name);
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
	free(constructor);
}

tList * newConstructors() {
	return _newList(sizeof(tConstructor));
}

/*** Method ***/

tMethod * newMethod(char * returnType, char * name) {
	tMethod * method = malloc(sizeof(tMethod));
	method->returnType = strdup(returnType);
	method->name = strdup(name);
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
	printf("%s %s(){}\n", method->returnType, method->name);
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
	free(method);
}

tList * newMethods() {
	return _newList(sizeof(tMethod));
}

/*** Expr ***/

void printExpr(){}

void deleteExpr(){}