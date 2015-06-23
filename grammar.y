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
%token OP_PLUS OP_MINUS OP_MULTIPLICATION OP_DIVITION OP_EXP OP_MODULO
%token OP_PLUS_PLUS OP_MINUS_MINUS
%token OP_EQ OP_NE OP_GE OP_LE OP_GT OP_LT
%token OP_AND OP_OR OP_NOT OP_IMPLIES
%token OP_ASSIGN OP_PLUS_SH OP_MINUS_SH OP_MULT_SH OP_DIV_SH OP_MOD_SH
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
		tMain * main = newMain("nombreMain");
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
		tProperty * property = newProperty($1, $2, NULL);
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
		tConstructor * constructor = newConstructor($1);
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
		tMethod * method = newMethod($2, $3);
		$$ = method;
	}
	;

/*** Instruction IDENTIFIERs definition ***/

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
	IDENTIFIER IDENTIFIER
	|
	IDENTIFIER IDENTIFIER OP_ASSIGN expr
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
	//TODO BASE: Identifier, raw IDENTIFIER
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
	CHAR
	|
	STRING
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
	IDENTIFIER IDENTIFIER
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
