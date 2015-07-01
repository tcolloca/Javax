/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     BOOLEAN = 259,
     CHAR = 260,
     STRING = 261,
     DOUBLE = 262,
     IDENTIFIER = 263,
     IF = 264,
     ELSE = 265,
     FOR = 266,
     WHILE = 267,
     CONST = 268,
     NEW = 269,
     IMPORT = 270,
     EXTENDS = 271,
     CLASS = 272,
     METHOD = 273,
     PROGRAM = 274,
     RETURN = 275,
     MAIN = 276,
     TOKEN_NULL = 277,
     OP_PLUS = 278,
     OP_MINUS = 279,
     OP_MULTIPLICATION = 280,
     OP_DIVITION = 281,
     OP_EXP = 282,
     OP_MODULO = 283,
     OP_PLUS_PLUS = 284,
     OP_MINUS_MINUS = 285,
     OP_EQ = 286,
     OP_NE = 287,
     OP_GE = 288,
     OP_LE = 289,
     OP_GT = 290,
     OP_LT = 291,
     OP_AND = 292,
     OP_OR = 293,
     OP_NOT = 294,
     OP_IMPLIES = 295,
     OP_ASSIGN = 296,
     OP_PLUS_SH = 297,
     OP_MINUS_SH = 298,
     OP_MULT_SH = 299,
     OP_DIV_SH = 300,
     OP_MOD_SH = 301,
     OP_PROP = 302,
     LPAR = 303,
     RPAR = 304,
     LBRA = 305,
     RBRA = 306,
     LCUR = 307,
     RCUR = 308,
     SEMC = 309,
     COMA = 310,
     COND_QUES = 311,
     COND_COLN = 312
   };
#endif
/* Tokens.  */
#define INT 258
#define BOOLEAN 259
#define CHAR 260
#define STRING 261
#define DOUBLE 262
#define IDENTIFIER 263
#define IF 264
#define ELSE 265
#define FOR 266
#define WHILE 267
#define CONST 268
#define NEW 269
#define IMPORT 270
#define EXTENDS 271
#define CLASS 272
#define METHOD 273
#define PROGRAM 274
#define RETURN 275
#define MAIN 276
#define TOKEN_NULL 277
#define OP_PLUS 278
#define OP_MINUS 279
#define OP_MULTIPLICATION 280
#define OP_DIVITION 281
#define OP_EXP 282
#define OP_MODULO 283
#define OP_PLUS_PLUS 284
#define OP_MINUS_MINUS 285
#define OP_EQ 286
#define OP_NE 287
#define OP_GE 288
#define OP_LE 289
#define OP_GT 290
#define OP_LT 291
#define OP_AND 292
#define OP_OR 293
#define OP_NOT 294
#define OP_IMPLIES 295
#define OP_ASSIGN 296
#define OP_PLUS_SH 297
#define OP_MINUS_SH 298
#define OP_MULT_SH 299
#define OP_DIV_SH 300
#define OP_MOD_SH 301
#define OP_PROP 302
#define LPAR 303
#define RPAR 304
#define LBRA 305
#define RBRA 306
#define LCUR 307
#define RCUR 308
#define SEMC 309
#define COMA 310
#define COND_QUES 311
#define COND_COLN 312




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 30 "grammar.y"

        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;
        double doubleNum;



/* Line 2068 of yacc.c  */
#line 175 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


