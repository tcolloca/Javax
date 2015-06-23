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
     CLASS = 269,
     METHOD = 270,
     RETURN = 271,
     MAIN = 272,
     OP_PLUS = 273,
     OP_MINUS = 274,
     OP_MULTIPLICATION = 275,
     OP_DIVITION = 276,
     OP_EXP = 277,
     OP_MODULO = 278,
     OP_PLUS_PLUS = 279,
     OP_MINUS_MINUS = 280,
     OP_EQ = 281,
     OP_NE = 282,
     OP_GE = 283,
     OP_LE = 284,
     OP_GT = 285,
     OP_LT = 286,
     OP_AND = 287,
     OP_OR = 288,
     OP_NOT = 289,
     OP_IMPLIES = 290,
     OP_ASSIGN = 291,
     OP_PLUS_SH = 292,
     OP_MINUS_SH = 293,
     OP_MULT_SH = 294,
     OP_DIV_SH = 295,
     OP_MOD_SH = 296,
     OP_PROP = 297,
     LPAR = 298,
     RPAR = 299,
     LBRA = 300,
     RBRA = 301,
     LCUR = 302,
     RCUR = 303,
     SEMC = 304,
     COMA = 305,
     COND_QUES = 306,
     COND_COLN = 307
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
#define CLASS 269
#define METHOD 270
#define RETURN 271
#define MAIN 272
#define OP_PLUS 273
#define OP_MINUS 274
#define OP_MULTIPLICATION 275
#define OP_DIVITION 276
#define OP_EXP 277
#define OP_MODULO 278
#define OP_PLUS_PLUS 279
#define OP_MINUS_MINUS 280
#define OP_EQ 281
#define OP_NE 282
#define OP_GE 283
#define OP_LE 284
#define OP_GT 285
#define OP_LT 286
#define OP_AND 287
#define OP_OR 288
#define OP_NOT 289
#define OP_IMPLIES 290
#define OP_ASSIGN 291
#define OP_PLUS_SH 292
#define OP_MINUS_SH 293
#define OP_MULT_SH 294
#define OP_DIV_SH 295
#define OP_MOD_SH 296
#define OP_PROP 297
#define LPAR 298
#define RPAR 299
#define LBRA 300
#define RBRA 301
#define LCUR 302
#define RCUR 303
#define SEMC 304
#define COMA 305
#define COND_QUES 306
#define COND_COLN 307




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
#line 164 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


