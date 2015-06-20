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
#define SAVE_CHAR yylval.character = strdup(yytext[0])

%}

%%
(0|[1-9][0-9]*|0[0-7]*|0(x|X)[0-9a-fA-F]+) SAVE_INT; return INT;
true SAVE_BOOLEAN(TRUE); return BOOLEAN;
false SAVE_BOOLEAN(FALSE); return BOOLEAN;

(?!true|false|int|boolean|char|if|else|for|while|const|new|class|method|main|and|or|implies)(?:[a-zA-Z_][a-zA-Z_0-9]*) SAVE_STRING; return IDENTIFIER;


int return TYPE_INT;
boolean return TYPE_BOOLEAN;
char return TYPE_CHAR;


if return IF;
else return ELSE;
for return FOR;
while return WHILE;
const return CONST;
new return NEW;
class return CLASS;
method return METHOD;
main return MAIN;

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

\( return LPAR;
\) return RPAR;
\[ return LBRA;
\] return RBRA;
\{ return LCUR;
\} return RCUR;

\; return SEMC;
\, return COMA;
\. return PDOT;
\: return COLN;

\? return QUES;

' return QTHM;
\" return DQTHM;

\n ;
[ \t\n]+ ; 

%%
