%{
#include <stdio.h>
#include <string.h>
#include "compiler_structs.h"
#include "lib/uthash.h"

// TODO: View how types/names are freed

typedef struct _main {
	tInstrSet * instrSet; 
} tMain;

/*
typedef struct symbolType {
	char * name; 
	char * type;
	UT_hash_handle hh; 
} tSymbolType; */

typedef struct symbol {
	char * name; /* key */ /* owner */
	char * type;
	void * value; /* owner */
	int bytes;
	UT_hash_handle hh; /* hashable */
} tSymbol;

/*
typedef struct symbolsList {
	char * type; 
	tSymbol * symbols; 
	UT_hash_handle hh; 
} tSymbolsList;*/

typedef struct symbolsTable {
	/*tSymbolType * symbolTypes; /* uthash table */
	/*tSymbolsList * symbolsLists; /* uthash table */
	tSymbol * symbols;
} tSymbolsTable;

typedef struct class {
	char * name; /* key */ /* owner */
	tProperty * properties;
	tConstructor * constructor;
	tMethod * methods;
	UT_hash_handle hh; /* hashable */
} tClass;

typedef tSymbol tProperty;

typedef struct constructor {
	tFunctionDef * functionDef;
} tConstructor;

typedef struct method {
	char * returnType;
	char * name; /* key */ /* owner */
	tFunctionDef * functionDef;
	UT_hash_handle hh; /* hashable */
} tMethod;

typedef struct functionDef {
	tDefParameterList * defParameterList;
	tInstrSet * instrSet;
} tFunctionDef;

typedef struct defParameterList {
	tDefParameterNode * first;
	tDefParameterNode * last;
} tDefParameterList;

typedef struct defParameterNode {
	char * type;
	char * name; /* owner // TODO */
	tDefParameterNode * next;
} tDefParameterNode;

typedef struct instrSet {
	tSymbolsTable * symbolsTable; /* uthash table */
	tInstrNode * instrFirst; 
} tInstrSet;

typedef struct instrNode {
	int type;
	void * instr;
	tInstrNode * nextInstr;
} tInstrNode;

typedef tExpr tInstrSimple;

typedef struct instrDeclaration {
	char * type;
	char * identifier; /* owner TODO */
	tExpr * expr;
} tInstrDeclaration;

typedef struct instrIf {
	tExpr * expr;
	tInstrSet * instrSet;
	tInstrElse * instrElse;
} tInstrIf;

typedef struct instrElse {
	tInstrSet * instrSet;
	tInstrIf * instrIf;
} tInstrElse;

typedef struct instrWhile {
	tExpr * expr;
	tInstrSet * instrSet;
} tInstrWhile;

typedef struct instrReturn {
	tExpr * expr;
} tInstrReturn;

/*** Expression typedefs ***/

typedef struct expr {
	int type;
	void * expression;
} tExpr;

typedef struct exprBinary {
	tExpr * expr1;
	tExpr * expr2;
} tExprBinary;

typedef struct exprTernary {
	tExpr * expr1;
	tExpr * expr2;
	tExpr * expr3;
} tExprTernary;

typedef tExprBinary tExprAssignment;

typedef tExprTernary tExprConditional;

typedef tExprBinary tExprBoolean;

typedef tExprBinary tExprEquality;

typedef tExprBinary tExprOrder;

typedef tExprBinary tExprArithmetic;

typedef struct exprObjCreation {
	char * identifier;
	tParametersList * parametersList;
} tExprObjCreation;

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

typedef struct object {
	tObjProperty * properties; /* uthash able */
} tObject;

typedef tProperty tObjProperty;

typedef struct parametersList {
	tParameterNode * first;
	tParameterNode * last;
} tParametersList;

typedef struct parameterNode {
	tExpr * expr;
	tParameterNode * next;
} tParameterNode;

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}
 
int yywrap()
{
        return 1;
} 
  
main()
{
        yyparse();
} 

sumInts(int a, int b) {
	printf("suma: %d\n", (a + b));
}

%}

%union
{
        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;
}

%token <integer> INT
%token <boolean> BOOLEAN
%token <character> CHAR
%token <string> STRING
%token <string> IDENTIFIER
%token TYPE_INT TYPE_BOOLEAN TYPE_CHAR TYPE_STRING
%token IF ELSE FOR WHILE CONST NEW CLASS METHOD RETURN MAIN
%token OP_PLUS OP_MINUS OP_MULTIPLICATION OP_DIVITION OP_EXP OP_MODULO
%token OP_PLUS_PLUS OP_MINUS_MINUS
%token OP_EQ OP_NE OP_GE OP_LE OP_GT OP_LT
%token OP_AND OP_OR OP_NOT OP_IMPLIES
%token OP_ASSIGN OP_PLUS_SH OP_MINUS_SH OP_MULT_SH OP_DIV_SH OP_MOD_SH
%token OP_PROP
%token LPAR RPAR LBRA RBRA LCUR RCUR
%token SEMC COMA 
%token COND_QUES COND_COLN

%type <void_pointer> class_instance_properties
%type <void_pointer> class_instance_property
%type <void_pointer> class_constructors
%type <void_pointer> class_instance_methods

%start program

%%
 
 /*** Program definition ***/

program:
	classes main
	;

classes:
	classes class
	|
	/* empty */
	; 

main:
	MAIN LPAR RPAR LCUR instr_set RCUR
	;

 /*** Class definition ***/

class:
	CLASS IDENTIFIER LCUR class_instance_properties class_constructors class_instance_methods RCUR {
		addClass($2, $4, NULL, NULL);
		printf("added class\n");
		printf("class: %s\n", getClass($2)->name);
	}
	;

	/*** properties ***/

class_instance_properties:
	class_instance_properties class_instance_property {
		tProperty * properties = $1;
		addProperty(&properties, $2);
		$$ = properties;
	}
	|
	/* empty */ {
		tProperty * properties = NULL;
		$$ = properties;
	}
	; 

class_instance_property:
	type IDENTIFIER SEMC {
		newProperty($2, $1, NULL, 0);
	}
	| 
	type IDENTIFIER OP_ASSIGN expr {
		newProperty($2, $1, NULL, 0);
	}
	;

var_declaration:
	type IDENTIFIER
	|
	type var_assignment
	;

var_assignment:
	IDENTIFIER OP_ASSIGN expr
	;

	/*** constructors ***/

class_constructors:
	class_constructors class_constructor {
		return NULL;
	}
	|
	/* empty */  {
		return NULL;
	}
	; 

class_constructor:
	IDENTIFIER LPAR parameters_def RPAR LCUR instr_set RCUR
	;

	/*** methods ***/

class_instance_methods:
	class_instance_methods class_instance_method {
		return NULL;
	}
	|
	/* empty */ {
		return NULL;
	}
	; 

class_instance_method:
	METHOD type IDENTIFIER LPAR parameters_def RPAR LCUR instr_set RCUR
	;

/*** Instruction types definition ***/

instr_set:
	instr_set instr
	|
	/* empty */
	;

instr:
	SEMC
	|
	instr_simple SEMC
	|
	instr_conditional
	|
	instr_loop
	;

instr_simple:
	instr_declaration
	|
	expr
	;

instr_conditional:
	block_if
	;

instr_loop:
	block_while
	;

instr_declaration:
	type IDENTIFIER
	|
	type IDENTIFIER OP_ASSIGN expr
	;

/*** Conditional instructions definition ***/

block_if: //TODO: One-line if
	IF LPAR expr_boolean RPAR LCUR instr_set RCUR block_else
	;

block_else: //TODO: One-line else
	ELSE LCUR instr_set RCUR
	|
	ELSE block_if
	|
	/* empty */
	;

/*** Loop instructions definition ***/

block_while:
	WHILE LPAR expr_boolean RPAR LCUR instr_set RCUR
	|
	WHILE LPAR expr_boolean RPAR instr
	;

/*** Expressions definitions ***/

	/*** General expression ***/

expr: 
	//TODO BASE: Identifier, raw type
	expr_assignment
	;

	/*** Assignment expressions (=, +=, -=, *=, /=, %=) ***/

expr_assignment:
	expr_conditional
	|
	expr_conditional OP_ASSIGN expr_assignment
	|
	expr_conditional OP_PLUS_SH expr_assignment
	|
	expr_conditional OP_MINUS_SH expr_assignment
	|
	expr_conditional OP_MULT_SH expr_assignment
	|
	expr_conditional OP_DIV_SH expr_assignment
	|
	expr_conditional OP_MOD_SH expr_assignment
	;

	/*** Conditional expression (?:) ***/

expr_conditional:
	expr_boolean
	|
	expr_boolean COND_QUES expr_conditional COND_COLN expr_conditional
	;

	/*** Boolean expressions (implies, or, and) ***/

expr_boolean:
	expr_implies
	;

expr_implies:
	expr_or
	|
	expr_implies OP_IMPLIES expr_or
	;

expr_or:
	expr_and
	|
	expr_or OP_OR expr_and
	;

expr_and:
	expr_equality
	|
	expr_and OP_AND expr_equality
	;

	/*** Relation expressions (==, !=, <=, >=, <, >) ***/

expr_equality:
	expr_order
	|
	expr_equality OP_EQ expr_order
	|
	expr_equality OP_NE expr_order
	;

expr_order:
	expr_additive
	|
	expr_order OP_GE expr_additive
	|
	expr_order OP_LE expr_additive
	|
	expr_order OP_GT expr_additive
	|
	expr_order OP_LT expr_additive
	;

	/*** Arithmetic expressions (+,-,*,/,%) ***/

expr_additive:
	expr_multiplicative
	|
	expr_additive OP_PLUS expr_multiplicative
	|
	expr_additive OP_MINUS expr_multiplicative
	;

expr_multiplicative:
	expr_object_creation
	|
	expr_multiplicative OP_MULTIPLICATION expr_object_creation
	|
	expr_multiplicative OP_DIVITION expr_object_creation
	|
	expr_multiplicative OP_MODULO expr_object_creation
	;

	/*** Object creation expression (new) ***/

expr_object_creation:
	expr_pre_additive_sign_and_not
	|
	NEW IDENTIFIER LPAR parameters RPAR
	;

	/*** Pre additives, sign and not expressions ***/

expr_pre_additive_sign_and_not:
	expr_post_additive_or_access
	|
	OP_PLUS_PLUS expr_post_additive_or_access
	|
	OP_MINUS_MINUS expr_post_additive_or_access
	|
	OP_PLUS expr_post_additive_or_access
	|
	OP_MINUS expr_post_additive_or_access
	|
	OP_NOT expr_post_additive_or_access
	;

	/*** Post additives and access expressions ***/

expr_post_additive_or_access:
	expr_basic
	|
	expr_basic OP_PLUS_PLUS
	|
	expr_basic OP_MINUS_MINUS
	|
	expr_post_additive_or_access method_call
	|
	expr_post_additive_or_access property_access
	;

property_access:
	OP_PROP expr_basic
	;

method_call:
	LPAR parameters RPAR
	;

	/*** Basic expressions ***/

expr_basic:
	built_in
	|
	IDENTIFIER
	|
	LPAR expr RPAR
	;

built_in:
	INT
	|
	BOOLEAN
	|
	CHAR {
		printf("char: %c \n", $1);
	}
	|
	STRING {
		printf("string: %s \n", $1);
	}
	;

/*** Types ***/

type:
	TYPE_INT
	|
	TYPE_BOOLEAN
	|
	TYPE_CHAR
	|
	TYPE_STRING
	;

/*** Parameters ***/

parameters_def:
	/* empty */
	|
	parameter_def
	|
	parameters_def COMA parameter_def
	;

parameter_def:
	type IDENTIFIER
	;

parameters:
	/* empty */
	|
	parameter
	|
	parameters COMA parameter
	;

parameter:
	expr
	;


%%	
