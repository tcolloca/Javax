%{
#include <stdio.h>
#include <string.h>
 

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
}

%token <integer> INT
%token <boolean> BOOLEAN
%token <character> CHAR
%token <string> IDENTIFIER
%token TYPE_INT TYPE_BOOLEAN TYPE_CHAR
%token IF ELSE FOR WHILE CONST NEW CLASS METHOD RETURN MAIN
%token OP_PLUS OP_MINUS OP_MULTIPLICATION OP_DIVITION OP_EXP OP_MODULO
%token OP_EQ OP_NE OP_GE OP_LE OP_GT OP_LT
%token OP_AND OP_OR OP_NOT OP_IMPLIES
%token OP_ASSIGN
%token OP_PROP
%token LPAR RPAR LBRA RBRA LCUR RCUR
%token SEMC COMA COLN
%token QUES
%token QTHM DQTHM

%type <integer> expr_arithmetic
%type <integer> expr_mul_or_div_or_mod
%type <integer> number
%type <integer> neg_number
%type <integer> pos_number

%type <boolean> expr_boolean
%type <boolean> expr_logic
%type <boolean> expr_or
%type <boolean> expr_and
%type <boolean> expr_relation
%type <boolean> expr_relation_equivalence
%type <boolean> expr_relation_order

%type <integer> base_number
%type <boolean> base_boolean


%start program

%%
 
 /*** Program definition ***/

program:
	main
	|
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
	CLASS IDENTIFIER LCUR class_content RCUR
	;

class_content:
	class_instance_properties class_constructors class_instance_methods
	;

	/*** properties ***/

class_instance_properties:
	class_instance_properties class_instance_property
	|
	/* empty */
	; 

class_instance_property:
	var_declaration SEMC
	;

	/*** constructors ***/

class_constructors:
	class_constructors class_constructor
	|
	/* empty */
	; 

class_constructor:
	IDENTIFIER LPAR parameters_def RPAR LCUR instr_set RCUR
	;

	/*** methods ***/

class_instance_methods:
	class_instance_methods class_instance_method
	|
	/* empty */
	; 

class_instance_method:
	METHOD IDENTIFIER LPAR parameters_def RPAR LCUR instr_set RCUR
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
	var_declaration
	|
	var_assignment
	|
	method_call
	|
	method_return
	;

instr_conditional:
	block_if
	;

instr_loop:
	block_while
	;

/*** Simple instructions definition ***/

var_declaration:
	type IDENTIFIER
	|
	type var_assignment
	;

var_assignment:
	IDENTIFIER OP_ASSIGN expr_general
	;

method_call:
	method
	|
	expr_object OP_PROP method

method:
	 IDENTIFIER LPAR parameters RPAR
	 ;

method_return:
	RETURN expr_general
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

/*** Expressions definition ***/

	/*** General expression ***/

expr_general:
	expr_arithmetic
	|
	expr_boolean
	|
	expr_object
	|
	property_access
	;

	/*** Arithmetic expression ***/	

expr_arithmetic:
	expr_mul_or_div_or_mod {
		$$=$1;
	}
	|
	expr_arithmetic OP_PLUS expr_mul_or_div_or_mod {
		$$=$1 + $3;
	}
	|
	expr_arithmetic OP_MINUS expr_mul_or_div_or_mod {
		$$=$1 - $3;
	} 
	;

expr_mul_or_div_or_mod:
	number {
		$$=$1;
	}
	|
	expr_mul_or_div_or_mod OP_MULTIPLICATION number {
		$$=$1 * $3;
	}
	|
	expr_mul_or_div_or_mod OP_DIVITION number {
		$$=$1 / $3;
	} 
	|
	expr_mul_or_div_or_mod OP_MODULO number {
		$$=$1 % $3;
	} 
	;

number:
	base_number
	|
	neg_number
	|
	pos_number
	;

neg_number:
	OP_MINUS base_number {
		$$=-$2;
	}
	;

pos_number:
	OP_PLUS base_number {
		$$=$2;
	}
	;

	/*** Boolean expression ***/

expr_boolean:
	expr_logic
	;

	/*** (Boolean) Logic expression ***/

expr_logic:
	expr_or {
		$$=$1;
	}
	|
	expr_logic OP_IMPLIES expr_or {
		$$=(!($1)) || $3;
	}
	;

expr_or:
	expr_and {
		$$=$1;
	}
	|
	expr_or OP_OR expr_and {
		$$=$1 || $3;
	}
	;

expr_and:
	base_boolean {
		$$=$1;
	}
	|
	expr_and OP_AND base_boolean {
		$$=$1 && $3;
	}
	;

	/*** (Boolean) Relation expression ***/

expr_relation:
	expr_relation_equivalence
	|
	expr_relation_order
	;

expr_relation_equivalence:
	expr_general OP_EQ expr_general
	|
	expr_general OP_NE expr_general
	;

expr_relation_order:
	expr_arithmetic OP_GE expr_arithmetic {
		$$=$1 >= $3;
	}
	|
	expr_arithmetic OP_LE expr_arithmetic {
		$$=$1 <= $3;
	}
	|
	expr_arithmetic OP_GT expr_arithmetic {
		$$=$1 > $3;
	}
	|
	expr_arithmetic OP_LT expr_arithmetic {
		$$=$1 < $3;
	}
	;

	/*** Object expression ***/

expr_object:
	NEW IDENTIFIER LPAR parameters RPAR
	|
	var_assignment
	|
	method_call
	;

/*** Property access ***/

property_access:
	expr_object OP_PROP IDENTIFIER
	;

/*** Base types definition ***/

base_number:
	INT {
		$$=$1;
	}
	|
	LPAR expr_arithmetic RPAR {
		$$=$2;
	}
	|
	var_assignment
	|
	method_call
	;

base_boolean:
	expr_relation {
		$$=$1;
	}
	|
	BOOLEAN {
		$$=$1;
	}
	|
	OP_NOT BOOLEAN {
		$$=!$2;
	}
	|
	LPAR expr_boolean RPAR {
		$$=$2;
	}
	|
	OP_NOT LPAR expr_boolean RPAR {
		$$=!$3;
	}
	|
	var_assignment
	|
	method_call
	|
	OP_NOT method_call
	;

/*** Types ***/

type:
	TYPE_CHAR
	|
	TYPE_BOOLEAN
	|
	TYPE_INT
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
	expr_general
	;

%%	
