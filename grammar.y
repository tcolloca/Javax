%{
#include <stdio.h>
#include <string.h>
#include "compiler_structs.h"
#include "lib/uthash.h"
#include "lib/list.h"

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
%token IF ELSE FOR WHILE CONST NEW CLASS METHOD RETURN MAIN
%token <string> OP_PLUS OP_MINUS OP_MULTIPLICATION OP_DIVITION OP_EXP OP_MODULO
%token <string> OP_PLUS_PLUS OP_MINUS_MINUS
%token <string> OP_EQ OP_NE OP_GE OP_LE OP_GT OP_LT
%token <string> OP_AND OP_OR OP_NOT OP_IMPLIES
%token <string> OP_ASSIGN OP_PLUS_SH OP_MINUS_SH OP_MULT_SH OP_DIV_SH OP_MOD_SH
%token OP_PROP
%token LPAR RPAR LBRA RBRA LCUR RCUR
%token SEMC COMA 
%token COND_QUES COND_COLN

%start program

%type <void_pointer> classes
%type <void_pointer> main 
%type <void_pointer> class 
%type <void_pointer> class_instance_properties 
%type <void_pointer> class_instance_property 
%type <void_pointer> class_constructors 
%type <void_pointer> class_constructor 
%type <void_pointer> class_instance_methods 
%type <void_pointer> class_instance_method 
%type <void_pointer> parameters_def
%type <void_pointer> parameters_def_2
%type <void_pointer> parameter_def
%type <void_pointer> instr_set
%type <void_pointer> instr 
%type <void_pointer> instr_simple 
%type <void_pointer> instr_conditional 
%type <void_pointer> instr_loop
%type <void_pointer> instr_declaration
%type <void_pointer> instr_return
%type <void_pointer> block_if
%type <void_pointer> block_else
%type <void_pointer> block_while
%type <void_pointer> built_in expr_basic expr_post_additive_or_access expr_pre_additive_sign_and_not expr_equality
%type <void_pointer> expr_object_creation expr_multiplicative expr_additive expr_order expr_and expr_or
%type <void_pointer> expr expr_implies expr_boolean expr_conditional expr_assignment parameters parameter
%type <void_pointer> method_call property_access

%%

 /*** Program definition ***/

program:
	classes main {
		tProgram * program = newProgram();
		addClasses(program, $1);
		addMain(program, $2);
		printProgram(program);
		deleteProgram(program);
	}
	;

classes:
	classes class {
		_addElement($1, $2);
		$$ = $1;
	}
	|
	/* empty */ {
		tList * classes = newClasses();
		$$ = classes;
	}
	; 

main:
	MAIN LPAR RPAR LCUR instr_set RCUR {
		tMain * main = newMain($5);
		$$ = main;
	}
	;

 /*** Class definition ***/

class:
	CLASS IDENTIFIER LCUR class_instance_properties class_constructors class_instance_methods RCUR {
		tClass * class = newClass($2, $4, $5, $6);
		$$ = class;
	}
	|
	CLASS IDENTIFIER LCUR class_instance_properties class_instance_methods RCUR {
		tClass * class = newClass($2, $4, newConstructors(NULL), $5);
		$$ = class;
	}
	;

	/*** properties ***/

class_instance_properties:
	class_instance_properties class_instance_property {
		_addElement($1, $2);
		$$ = $1;
	}
	|
	/* empty */ {
		tList * properties = newProperties();
		$$ = properties;
	}
	; 

class_instance_property:
	IDENTIFIER IDENTIFIER SEMC {
		tProperty * property = newProperty($1, $2, NULL);
		$$ = property;
	}
	|
	IDENTIFIER IDENTIFIER OP_ASSIGN expr SEMC {
		tProperty * property = newProperty($1, $2, $4);
		$$ = property;
	}
	;

	/*** constructors ***/

class_constructors:
	class_constructors class_constructor {
		_addElement($1, $2);
		$$ = $1;
	}
	|
	class_constructor {
		tList * constructors = newConstructors();
		_addElement(constructors, $1);
		$$ = constructors;
	}
	; 

class_constructor:
	IDENTIFIER LPAR parameters_def RPAR LCUR instr_set RCUR {
		tConstructor * constructor = newConstructor($1, $3, $6);
		$$ = constructor;
	}
	;

	/*** methods ***/

class_instance_methods:
	class_instance_methods class_instance_method {
		_addElement($1, $2);
		$$ = $1;
	}
	|
	/* empty */ {
		tList * methods = newMethods();
		$$ = methods;
	}
	; 

class_instance_method:
	METHOD IDENTIFIER IDENTIFIER LPAR parameters_def RPAR LCUR instr_set RCUR {
		tMethod * method = newMethod($2, $3, $5, $8);
		$$ = method;
	}
	;

/*** Instruction IDENTIFIERs definition ***/

instr_set:
	instr_set instr {
		_addElement($1, $2);
		$$ = $1;
	}
	|
	/* empty */ {
		tList * instrs = newInstrs();
		$$ = instrs;
	}
	;

instr:
	SEMC {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		$$ = instr;
	}
	|
	instr_simple SEMC {
		$$ = $1;
	}
	|
	instr_conditional {
		$$ = $1;
	}
	|
	instr_loop {
		$$ = $1;
	}
	;

instr_simple:
	instr_declaration {
		$$ = $1;
	}
	|
	instr_return {
		$$ = $1;
	}
	|
	expr {
		tInstrSimple * instrSimple = newInstrSimple($1);
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		$$ = instr;
	}
	;

instr_conditional:
	block_if {
		tInstr * instr = newInstr(INSTR_IF, $1);
		$$ = instr;
	}
	;

instr_loop:
	block_while {
		tInstr * instr = newInstr(INSTR_WHILE, $1);
		$$ = instr;
	}
	;

instr_declaration:
	IDENTIFIER IDENTIFIER {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration($1, $2, NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		$$ = instr;
	}
	|
	IDENTIFIER IDENTIFIER OP_ASSIGN expr {
		free($3);
		tInstrDeclaration * instrDeclaration = newInstrDeclaration($1, $2, $4);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		$$ = instr;
	}
	;

instr_return:
	RETURN expr {
		tInstrReturn * instrReturn = newInstrReturn($2);
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		$$ = instr;
	}
	;

/*** Conditional instructions definition ***/

block_if: //TODO: One-line if
	IF LPAR expr_boolean RPAR LCUR instr_set RCUR block_else {
		tInstrIf * instrIf = newInstrIf($3, $6, $8);
		$$ = instrIf;
	}
	;

block_else: //TODO: One-line else
	ELSE LCUR instr_set RCUR {
		tInstrElse * instrElse = newInstrElse(NULL, $3);
		$$ = instrElse;
	}
	|
	ELSE block_if {
		tInstrElse * instrElse = newInstrElse($2, NULL);
		$$ = instrElse;
	}
	|
	/* empty */ {
		$$ = NULL;
	}
	;

/*** Loop instructions definition ***/

block_while:
	WHILE LPAR expr_boolean RPAR LCUR instr_set RCUR {
		tInstrWhile * instrWhile = newInstrWhile($3, $6);
		$$ = instrWhile;
	}
	|
	WHILE LPAR expr_boolean RPAR instr {
		tList * instrs = newInstrs();
		_addElement(instrs, $5);
		tInstrWhile * instrWhile = newInstrWhile($3, instrs);
		$$ = instrWhile;
	}
	;

/*** Expressions definitions ***/

	/*** General expression ***/

expr: 
	//TODO BASE: Identifier, raw IDENTIFIER
	expr_assignment {
		$$ = $1;
	}
	;

	/*** Assignment expressions (=, +=, -=, *=, /=, %=) ***/

expr_assignment:
	expr_conditional {
		$$ = $1;
	}
	|//TODO: puse IDENTIFIER a la izq Tom, esta bien?
	IDENTIFIER OP_ASSIGN expr_assignment { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		$$ = expr;
	}
	|
	IDENTIFIER OP_PLUS_SH expr_assignment { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		$$ = expr;
	}
	|
	IDENTIFIER OP_MINUS_SH expr_assignment { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		$$ = expr;
	}
	|
	IDENTIFIER OP_MULT_SH expr_assignment { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		$$ = expr;
	}
	|
	IDENTIFIER OP_DIV_SH expr_assignment { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		$$ = expr;
	}
	|
	IDENTIFIER OP_MOD_SH expr_assignment { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		$$ = expr;
	}
	;

	/*** Conditional expression (?:) ***/

expr_conditional:
	expr_boolean {
		$$ = $1;
	}
	|
	expr_boolean COND_QUES expr_conditional COND_COLN expr_conditional
	;

	/*** Boolean expressions (implies, or, and) ***/

expr_boolean:
	expr_implies {
		$$ = $1;
	}
	;

expr_implies:
	expr_or {
		$$ = $1;
	}
	|
	expr_implies OP_IMPLIES expr_or {
		tEqualityExpr * equalityExpr = newEqualityExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		$$ = expr;
	}
	;

expr_or:
	expr_and {
		$$ = $1;
	}
	|
	expr_or OP_OR expr_and  {
		tEqualityExpr * equalityExpr = newEqualityExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		$$ = expr;
	}
	;

expr_and:
	expr_equality {
		$$ = $1;
	}
	|
	expr_and OP_AND expr_equality {
		tEqualityExpr * equalityExpr = newEqualityExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		$$ = expr;
	}
	;

	/*** Relation expressions (==, !=, <=, >=, <, >) ***/

expr_equality:
	expr_order {
		$$ = $1;
	}
	|
	expr_equality OP_EQ expr_order {
		tEqualityExpr * equalityExpr = newEqualityExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		$$ = expr;
	}
	|
	expr_equality OP_NE expr_order {
		tEqualityExpr * equalityExpr = newEqualityExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		$$ = expr;
	}
	;

expr_order:
	expr_additive {
		$$ = $1;
	}
	|
	expr_order OP_GE expr_additive {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_order OP_LE expr_additive {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_order OP_GT expr_additive {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_order OP_LT expr_additive {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	;

	/*** Arithmetic expressions (+,-,*,/,%) ***/

expr_additive:
	expr_multiplicative {
		$$ = $1;
	}
	|
	expr_additive OP_PLUS expr_multiplicative {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_additive OP_MINUS expr_multiplicative {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	;

expr_multiplicative:
	expr_object_creation {
		$$ = $1;
	}
	|
	expr_multiplicative OP_MULTIPLICATION expr_object_creation {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_multiplicative OP_DIVITION expr_object_creation {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_multiplicative OP_MODULO expr_object_creation {
		tOperationExpr * operationExpr = newOperationExpr($1, $2, $3);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	;

	/*** Object creation expression (new) ***/

expr_object_creation:
	expr_pre_additive_sign_and_not {
		$$ = $1;
	}
	|
	NEW IDENTIFIER LPAR parameters RPAR {
		tObjectCreation * objCreation = newObjCreation($2, $4);
		tExpr * expr = newExpr(EXPR_OBJ_CREATION, objCreation);
		$$ = expr;
	}
	;

	/*** Pre additives, sign and not expressions ***/

expr_pre_additive_sign_and_not:
	expr_post_additive_or_access {
		$$ = $1;
	}
	|
	OP_PLUS_PLUS expr_post_additive_or_access  {
		tModifExpr * modifExpr = newModifExpr($1, $2, NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	|
	OP_MINUS_MINUS expr_post_additive_or_access  {
		tModifExpr * modifExpr = newModifExpr($1, $2, NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	|
	OP_PLUS expr_post_additive_or_access  {
		tModifExpr * modifExpr = newModifExpr($1, $2, NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	|
	OP_MINUS expr_post_additive_or_access  {
		tModifExpr * modifExpr = newModifExpr($1, $2, NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	|
	OP_NOT expr_post_additive_or_access  {
		tModifExpr * modifExpr = newModifExpr($1, $2, NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	;

	/*** Post additives and access expressions ***/

expr_post_additive_or_access:
	expr_basic {
		$$ = $1;
	}
	|
	expr_basic OP_PLUS_PLUS  {
		tModifExpr * modifExpr = newModifExpr(NULL, $1, $2);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	|
	expr_basic OP_MINUS_MINUS  {
		tModifExpr * modifExpr = newModifExpr(NULL, $1, $2);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		$$ = expr;
	}
	| //TODO: Esto permite hacer coas que no se pueden hacer, habria uqe moverlo me parece
	expr_post_additive_or_access method_call {
		tOperationExpr * operationExpr = newOperationExpr($1, NULL, $2);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	|
	expr_post_additive_or_access property_access {
		tOperationExpr * operationExpr = newOperationExpr($1, NULL, $2);
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		$$ = expr;
	}
	;

property_access:
	OP_PROP IDENTIFIER {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr($2, NULL);
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		$$ = expr;
	}
	;

method_call:
	OP_PROP IDENTIFIER LPAR parameters RPAR {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr($2, $4);
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		$$ = expr;
	}
	;

	/*** Basic expressions ***/

expr_basic: 
	built_in {
		tBuiltInExpr * builtIn = $1;
		tExpr * expr = newExpr(EXPR_BUILT_IN, $1);
		$$ = expr;
	}
	|
	IDENTIFIER {
		tIdentifier * identifier = newIdentifier($1);
		tExpr * expr = newExpr(EXPR_IDENTIFIER, identifier);
		$$ = expr;
	}
	|
	LPAR expr RPAR {
		tParenthesisExpr * parenthesisExpr = newParenthesisExpr($2);
		tExpr * expr = newExpr(EXPR_PARENTHESIS, parenthesisExpr);
		$$ = expr;
	}
	;

built_in:
	INT {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_INT, &$1, sizeof(int));
		$$ = builtIn;
	}
	|
	BOOLEAN {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_BOOLEAN, &$1, sizeof(int));
		$$ = builtIn;
	}
	|
	CHAR {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_CHAR, &$1, sizeof(char));
		$$ = builtIn;
	}
	|
	STRING {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_STRING, $1, strlen($1) + 1);
		free($1);
		$$ = builtIn;
	}
	;

/*** Parameters ***/

parameters_def:
	/* empty */ {
		tList * defParams = newDefParams();
		$$ = defParams;
	}
	|
	parameters_def_2 {
		$$ = $1;
	}
	;

parameters_def_2:
	parameter_def {
		tList * defParams = newDefParams();
		_addElement(defParams, $1);
		$$ = defParams;
	}
	|
	parameters_def_2 COMA parameter_def {
		_addElement($1, $3);
		$$ = $1;
	}
	;

parameter_def:
	IDENTIFIER IDENTIFIER {
		tDefParam * defParam = newDefParam($1, $2);
		$$ = defParam;
	}
	;

parameters:
	/* empty */ {
		tList * params = newParams();
		$$ = params;
	}
	|
	parameter {
		tList * params = newParams();
		_addElement(params, $1);
		$$ = params;
	}
	|
	parameters COMA parameter {
		_addElement($1, $3);
		$$ = $1;
	}
	;

parameter:
	expr {
		tParam * param = newParam($1);
		$$ = param;
	}
	;


%%	
