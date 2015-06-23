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

char getChar(char * string) {
	char * ans = malloc(1);
	memcpy(ans, string + 1, 1);
	return ans[0];
}

char * getString(char * string) {
	int len = strlen(string);
	char * ans = malloc(len-2);
	memcpy(ans, string + 1, len - 2);
	return ans;
}

%}

%%
(0|[1-9][0-9]*|0[0-7]*|0(x|X)[0-9a-fA-F]+) SAVE_INT; return INT;
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
main return MAIN;
(return) return RETURN;

\+\+ return OP_PLUS_PLUS;
\-\- return OP_MINUS_MINUS;

\+ return OP_PLUS;
- return OP_MINUS;
\* return OP_MULTIPLICATION;
\/ return OP_DIVITION;
\^ return OP_EXP;
\% return OP_MODULO;

\=\= return OP_EQ;
!\= return OP_NE;
\>\= return OP_GE;
\=\> return OP_GE;
\<\= return OP_LE;
\=\< return OP_LE;
\> return OP_GT;
\< return OP_LT;

&& return OP_AND;
\|\| return OP_OR;
and return OP_AND;
or return OP_OR;
\! return OP_NOT;
implies return OP_IMPLIES;
-\> return OP_IMPLIES;

\= return OP_ASSIGN;
\+\= return OP_PLUS_SH;
-\= return OP_MINUS_SH;
\*\= return OP_MULT_SH;
\/\= return OP_DIV_SH;
\%\= return OP_MOD_SH;

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

(?:[a-zA-Z_][a-zA-Z_0-9]*) SAVE_STRING; return IDENTIFIER;

\n ;
[ \t\n]+ ; 

%%
