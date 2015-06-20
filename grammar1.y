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
	expr_object_par OP_PROP method
	|
	method_call OP_PROP method
	|
	IDENTIFIER OP_PROP method
	;

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
	expr_general_without_bool
	|
	expr_boolean
	;

expr_general_without_bool:
	expr_object
	|
	expr_general_without_bool_and_obj
	;

expr_general_without_bool_and_obj:
	expr_arithmetic
	|
	property_access
	;

	/*** Arithmetic expression ***/	

expr_arithmetic:
	literal_number
	|
	expr_mul_or_div_or_mod
	|
	expr_arithmetic OP_PLUS expr_mul_or_div_or_mod_or_num
	|
	expr_arithmetic OP_MINUS expr_mul_or_div_or_mod_or_num
	|
	variable_number OP_PLUS expr_mul_or_div_or_mod_or_num
	|
	variable_number OP_MINUS expr_mul_or_div_or_mod_or_num
	;

expr_mul_or_div_or_mod:
	expr_mul_or_div_or_mod_or_num OP_MULTIPLICATION number
	|
	expr_mul_or_div_or_mod_or_num OP_DIVITION number
	|
	expr_mul_or_div_or_mod_or_num OP_MODULO number
	;

expr_mul_or_div_or_mod_or_num:
	number
	|
	expr_mul_or_div_or_mod
	;

number:
	literal_number
	|
	variable_number
	|
	neg_number
	|
	pos_number
	;

neg_number:
	OP_MINUS literal_number
	|
	OP_MINUS variable_number
	;

pos_number:
	OP_PLUS literal_number
	|
	OP_PLUS variable_number
	;

literal_number:
	INT
	|
	LPAR expr_arithmetic RPAR
	;


variable_number:
	LPAR var_assignment RPAR
	|
	IDENTIFIER
	|
	method_call
	;	

	/*** Boolean expression ***/

expr_boolean:
	literal_boolean
	|
	expr_logic
	;

	/*** (Boolean) Logic expression ***/

expr_logic:
	expr_or
	|
	expr_logic OP_IMPLIES expr_or_bool
	;

expr_or_bool:
	boolean
	|
	expr_or
	;

expr_or:
	expr_and
	|
	expr_or_bool OP_OR expr_and_bool
	;

expr_and_bool:
	boolean
	|
	expr_and
	;

expr_and:
	expr_and_bool OP_AND boolean
	;

boolean:
	simple_boolean
	|
	expr_relation
	;

simple_boolean:
	literal_boolean
	|
	variable_boolean
	;

literal_boolean:
	BOOLEAN
	|
	OP_NOT BOOLEAN
	|
	LPAR expr_boolean RPAR
	|
	OP_NOT LPAR expr_boolean RPAR
	;
	
variable_boolean:
	LPAR var_assignment RPAR
	|
	OP_NOT LPAR var_assignment RPAR
	|
	method_call
	|
	OP_NOT method_call
	|
	IDENTIFIER
	|
	OP_NOT IDENTIFIER
	;	

	/*** (Boolean) Relation expression ***/

expr_relation:
	expr_relation_equivalence
	|
	expr_relation_order
	;

expr_relation_equivalence:
	expr_general_without_bool_and_obj OP_EQ expr_general_without_bool_and_obj
	|
	expr_general_without_bool_and_obj OP_NE expr_general_without_bool_and_obj
	|
	boolean OP_EQ simple_boolean
	|
	boolean OP_NE simple_boolean
	|
	boolean OP_EQ LPAR expr_relation RPAR
	|
	boolean OP_NE LPAR expr_relation RPAR
	;

expr_relation_order:
	expr_arithmetic OP_GE expr_arithmetic
	|
	expr_arithmetic OP_LE expr_arithmetic
	|
	expr_arithmetic OP_GT expr_arithmetic
	|
	expr_arithmetic OP_LT expr_arithmetic
	;

	/*** Object expression ***/

expr_object:
	NEW IDENTIFIER LPAR parameters RPAR
	|
	LPAR var_assignment RPAR
	|
	method_call
	|
	IDENTIFIER
	;

expr_object_par:
	LPAR var_assignment RPAR
	|
	LPAR NEW IDENTIFIER LPAR parameters RPAR RPAR
	;

/*** Property access ***/

property_access:
	expr_object_par OP_PROP IDENTIFIER
	;

/*** TODO ***/


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
