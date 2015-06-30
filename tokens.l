%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

extern YYSTYPE yylval;

#define TRUE 1
#define FALSE !TRUE 

#define SAVE_STRING yylval.string = strdup(yytext)
#define SAVE_INT yylval.integer = strtol(yytext, NULL, 0)
#define SAVE_BOOLEAN(x) yylval.boolean = x 
#define SAVE_CHAR yylval.character = getChar(yytext)
#define SAVE_STRING_VAL yylval.string = getString(yytext)
#define SAVE_STRING_2 yylval.string = strdup(yytext)
#define SAVE_DOUBLE yylval.doubleNum = strtod(yytext, NULL)

char getChar(char * string) {
	return string[1];
}

char * getString(char * string) {
	int len = strlen(string);
	char * ans = malloc(len - 1);
	memcpy(ans, string + 1, len - 1);
	ans[len-2] = '\0';
	return ans;
}

%}

%%
(0|[1-9][0-9]*|0[0-7]*|0(x|X)[0-9a-fA-F]+) SAVE_INT; return INT;
(0|[1-9][0-9]*)\.(0-9)+ SAVE_DOUBLE; return DOUBLE;
true SAVE_BOOLEAN(TRUE); return BOOLEAN;
false SAVE_BOOLEAN(FALSE); return BOOLEAN;
'[[:print:]]{-}[\']' SAVE_CHAR; return CHAR; 
\"([[:print:]]{-}[\"])*\" SAVE_STRING_VAL; return STRING; //"

if return IF;
else return ELSE;
for return FOR;
while return WHILE;
const return CONST;
new return NEW;
class return CLASS;
method return METHOD;
program return PROGRAM;
import return IMPORT;
extends return EXTENDS;
main return MAIN;
(return) return RETURN;
null return TOKEN_NULL;

\+\+ SAVE_STRING; return OP_PLUS_PLUS;
\-\- SAVE_STRING; return OP_MINUS_MINUS;

\+ SAVE_STRING; return OP_PLUS;
- SAVE_STRING; return OP_MINUS;
\* SAVE_STRING; return OP_MULTIPLICATION;
\/ SAVE_STRING; return OP_DIVITION;
\^ SAVE_STRING; return OP_EXP;
\% SAVE_STRING; return OP_MODULO;

\=\= SAVE_STRING; return OP_EQ;
!\= SAVE_STRING; return OP_NE;
\>\= SAVE_STRING; return OP_GE;
\=\> SAVE_STRING; return OP_GE;
\<\= SAVE_STRING; return OP_LE;
\=\< SAVE_STRING; return OP_LE;
\> SAVE_STRING; return OP_GT;
\< SAVE_STRING; return OP_LT;

&& SAVE_STRING; return OP_AND;
\|\| SAVE_STRING; return OP_OR;
and SAVE_STRING; return OP_AND;
or SAVE_STRING; return OP_OR;
\! SAVE_STRING; return OP_NOT;
implies SAVE_STRING; return OP_IMPLIES;
-\> SAVE_STRING; return OP_IMPLIES;

\= SAVE_STRING; return OP_ASSIGN;
\+\= SAVE_STRING; return OP_PLUS_SH;
-\= SAVE_STRING; return OP_MINUS_SH;
\*\= SAVE_STRING; return OP_MULT_SH;
\/\= SAVE_STRING; return OP_DIV_SH;
\%\= SAVE_STRING; return OP_MOD_SH;

\? return COND_QUES;
\: return COND_COLN;

\. return OP_PROP;

\( return LPAR;
\) return RPAR;
\[ return LBRA;
\] return RBRA;
\{ return LCUR;
\} return RCUR;

\; return SEMC;
\, return COMA;

(?:[a-zA-Z_][a-zA-Z_0-9]*) SAVE_STRING_2; return IDENTIFIER;

\n ;
[ \t\n]+ ; 

%%
