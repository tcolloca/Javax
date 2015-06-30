/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    BOOLEAN = 259,
    CHAR = 260,
    STRING = 261,
    IDENTIFIER = 262,
    IF = 263,
    ELSE = 264,
    FOR = 265,
    WHILE = 266,
    CONST = 267,
    NEW = 268,
    IMPORT = 269,
    EXTENDS = 270,
    CLASS = 271,
    METHOD = 272,
    PROGRAM = 273,
    RETURN = 274,
    MAIN = 275,
    OP_PLUS = 276,
    OP_MINUS = 277,
    OP_MULTIPLICATION = 278,
    OP_DIVITION = 279,
    OP_EXP = 280,
    OP_MODULO = 281,
    OP_PLUS_PLUS = 282,
    OP_MINUS_MINUS = 283,
    OP_EQ = 284,
    OP_NE = 285,
    OP_GE = 286,
    OP_LE = 287,
    OP_GT = 288,
    OP_LT = 289,
    OP_AND = 290,
    OP_OR = 291,
    OP_NOT = 292,
    OP_IMPLIES = 293,
    OP_ASSIGN = 294,
    OP_PLUS_SH = 295,
    OP_MINUS_SH = 296,
    OP_MULT_SH = 297,
    OP_DIV_SH = 298,
    OP_MOD_SH = 299,
    OP_PROP = 300,
    LPAR = 301,
    RPAR = 302,
    LBRA = 303,
    RBRA = 304,
    LCUR = 305,
    RCUR = 306,
    SEMC = 307,
    COMA = 308,
    COND_QUES = 309,
    COND_COLN = 310
  };
#endif
/* Tokens.  */
#define INT 258
#define BOOLEAN 259
#define CHAR 260
#define STRING 261
#define IDENTIFIER 262
#define IF 263
#define ELSE 264
#define FOR 265
#define WHILE 266
#define CONST 267
#define NEW 268
#define IMPORT 269
#define EXTENDS 270
#define CLASS 271
#define METHOD 272
#define PROGRAM 273
#define RETURN 274
#define MAIN 275
#define OP_PLUS 276
#define OP_MINUS 277
#define OP_MULTIPLICATION 278
#define OP_DIVITION 279
#define OP_EXP 280
#define OP_MODULO 281
#define OP_PLUS_PLUS 282
#define OP_MINUS_MINUS 283
#define OP_EQ 284
#define OP_NE 285
#define OP_GE 286
#define OP_LE 287
#define OP_GT 288
#define OP_LT 289
#define OP_AND 290
#define OP_OR 291
#define OP_NOT 292
#define OP_IMPLIES 293
#define OP_ASSIGN 294
#define OP_PLUS_SH 295
#define OP_MINUS_SH 296
#define OP_MULT_SH 297
#define OP_DIV_SH 298
#define OP_MOD_SH 299
#define OP_PROP 300
#define LPAR 301
#define RPAR 302
#define LBRA 303
#define RBRA 304
#define LCUR 305
#define RCUR 306
#define SEMC 307
#define COMA 308
#define COND_QUES 309
#define COND_COLN 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "grammar.y" /* yacc.c:1909  */

        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;

#line 172 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
