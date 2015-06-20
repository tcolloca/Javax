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
     IDENTIFIER = 261,
     TYPE_INT = 262,
     TYPE_BOOLEAN = 263,
     TYPE_CHAR = 264,
     IF = 265,
     ELSE = 266,
     FOR = 267,
     WHILE = 268,
     CONST = 269,
     NEW = 270,
     CLASS = 271,
     METHOD = 272,
     RETURN = 273,
     MAIN = 274,
     OP_PLUS = 275,
     OP_MINUS = 276,
     OP_MULTIPLICATION = 277,
     OP_DIVITION = 278,
     OP_EXP = 279,
     OP_MODULO = 280,
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
     OP_PROP = 292,
     LPAR = 293,
     RPAR = 294,
     LBRA = 295,
     RBRA = 296,
     LCUR = 297,
     RCUR = 298,
     SEMC = 299,
     COMA = 300,
     COLN = 301,
     QUES = 302,
     QTHM = 303,
     DQTHM = 304
   };
#endif
/* Tokens.  */
#define INT 258
#define BOOLEAN 259
#define CHAR 260
#define IDENTIFIER 261
#define TYPE_INT 262
#define TYPE_BOOLEAN 263
#define TYPE_CHAR 264
#define IF 265
#define ELSE 266
#define FOR 267
#define WHILE 268
#define CONST 269
#define NEW 270
#define CLASS 271
#define METHOD 272
#define RETURN 273
#define MAIN 274
#define OP_PLUS 275
#define OP_MINUS 276
#define OP_MULTIPLICATION 277
#define OP_DIVITION 278
#define OP_EXP 279
#define OP_MODULO 280
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
#define OP_PROP 292
#define LPAR 293
#define RPAR 294
#define LBRA 295
#define RBRA 296
#define LCUR 297
#define RCUR 298
#define SEMC 299
#define COMA 300
#define COLN 301
#define QUES 302
#define QTHM 303
#define DQTHM 304




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
#line 157 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


