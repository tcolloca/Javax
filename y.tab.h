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
     STRING = 260,
     CHAR = 261,
     TYPE_INT = 262,
     TYPE_BOOLEAN = 263,
     TYPE_STRING = 264,
     TYPE_CHAR = 265,
     IF = 266,
     ELSE = 267,
     FOR = 268,
     WHILE = 269,
     CONST = 270,
     NEW = 271,
     OP_PLUS = 272,
     OP_MINUS = 273,
     OP_MULTIPLICATION = 274,
     OP_DIVITION = 275,
     OP_EXP = 276,
     OP_MODULO = 277,
     OP_EQ = 278,
     OP_NE = 279,
     OP_GE = 280,
     OP_LE = 281,
     OP_GT = 282,
     OP_LT = 283,
     OP_AND = 284,
     OP_OR = 285,
     OP_NOT = 286,
     OP_IMPLIES = 287,
     LPAR = 288,
     RPAR = 289,
     LBRA = 290,
     RBRA = 291,
     LCUR = 292,
     RCUR = 293,
     SEMC = 294,
     COMA = 295,
     PDOT = 296,
     COLN = 297,
     QUES = 298,
     QTHM = 299,
     DQTHM = 300
   };
#endif
/* Tokens.  */
#define INT 258
#define BOOLEAN 259
#define STRING 260
#define CHAR 261
#define TYPE_INT 262
#define TYPE_BOOLEAN 263
#define TYPE_STRING 264
#define TYPE_CHAR 265
#define IF 266
#define ELSE 267
#define FOR 268
#define WHILE 269
#define CONST 270
#define NEW 271
#define OP_PLUS 272
#define OP_MINUS 273
#define OP_MULTIPLICATION 274
#define OP_DIVITION 275
#define OP_EXP 276
#define OP_MODULO 277
#define OP_EQ 278
#define OP_NE 279
#define OP_GE 280
#define OP_LE 281
#define OP_GT 282
#define OP_LT 283
#define OP_AND 284
#define OP_OR 285
#define OP_NOT 286
#define OP_IMPLIES 287
#define LPAR 288
#define RPAR 289
#define LBRA 290
#define RBRA 291
#define LCUR 292
#define RCUR 293
#define SEMC 294
#define COMA 295
#define PDOT 296
#define COLN 297
#define QUES 298
#define QTHM 299
#define DQTHM 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 28 "grammar.y"

        int integer;
        int boolean;
        char * string;
        char character;



/* Line 2068 of yacc.c  */
#line 149 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


