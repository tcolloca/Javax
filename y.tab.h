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
     IDENTIFIER = 262,
     IF = 263,
     ELSE = 264,
     FOR = 265,
     WHILE = 266,
     CONST = 267,
     NEW = 268,
     IMPORT = 269,
     CLASS = 270,
     METHOD = 271,
     PROGRAM = 272,
     RETURN = 273,
     MAIN = 274,
     OP_PLUS = 275,
     OP_MINUS = 276,
     OP_MULTIPLICATION = 277,
     OP_DIVITION = 278,
     OP_EXP = 279,
     OP_MODULO = 280,
     OP_PLUS_PLUS = 281,
     OP_MINUS_MINUS = 282,
     OP_EQ = 283,
     OP_NE = 284,
     OP_GE = 285,
     OP_LE = 286,
     OP_GT = 287,
     OP_LT = 288,
     OP_AND = 289,
     OP_OR = 290,
     OP_NOT = 291,
     OP_IMPLIES = 292,
     OP_ASSIGN = 293,
     OP_PLUS_SH = 294,
     OP_MINUS_SH = 295,
     OP_MULT_SH = 296,
     OP_DIV_SH = 297,
     OP_MOD_SH = 298,
     OP_PROP = 299,
     LPAR = 300,
     RPAR = 301,
     LBRA = 302,
     RBRA = 303,
     LCUR = 304,
     RCUR = 305,
     SEMC = 306,
     COMA = 307,
     COND_QUES = 308,
     COND_COLN = 309
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
#define CLASS 270
#define METHOD 271
#define PROGRAM 272
#define RETURN 273
#define MAIN 274
#define OP_PLUS 275
#define OP_MINUS 276
#define OP_MULTIPLICATION 277
#define OP_DIVITION 278
#define OP_EXP 279
#define OP_MODULO 280
#define OP_PLUS_PLUS 281
#define OP_MINUS_MINUS 282
#define OP_EQ 283
#define OP_NE 284
#define OP_GE 285
#define OP_LE 286
#define OP_GT 287
#define OP_LT 288
#define OP_AND 289
#define OP_OR 290
#define OP_NOT 291
#define OP_IMPLIES 292
#define OP_ASSIGN 293
#define OP_PLUS_SH 294
#define OP_MINUS_SH 295
#define OP_MULT_SH 296
#define OP_DIV_SH 297
#define OP_MOD_SH 298
#define OP_PROP 299
#define LPAR 300
#define RPAR 301
#define LBRA 302
#define RBRA 303
#define LCUR 304
#define RCUR 305
#define SEMC 306
#define COMA 307
#define COND_QUES 308
#define COND_COLN 309




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



/* Line 2068 of yacc.c  */
#line 168 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


