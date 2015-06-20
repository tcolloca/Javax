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
     TYPE_INT = 263,
     TYPE_BOOLEAN = 264,
     TYPE_CHAR = 265,
     TYPE_STRING = 266,
     IF = 267,
     ELSE = 268,
     FOR = 269,
     WHILE = 270,
     CONST = 271,
     NEW = 272,
     CLASS = 273,
     METHOD = 274,
     RETURN = 275,
     MAIN = 276,
     OP_PLUS = 277,
     OP_MINUS = 278,
     OP_MULTIPLICATION = 279,
     OP_DIVITION = 280,
     OP_EXP = 281,
     OP_MODULO = 282,
     OP_PLUS_PLUS = 283,
     OP_MINUS_MINUS = 284,
     OP_EQ = 285,
     OP_NE = 286,
     OP_GE = 287,
     OP_LE = 288,
     OP_GT = 289,
     OP_LT = 290,
     OP_AND = 291,
     OP_OR = 292,
     OP_NOT = 293,
     OP_IMPLIES = 294,
     OP_ASSIGN = 295,
     OP_PLUS_SH = 296,
     OP_MINUS_SH = 297,
     OP_MULT_SH = 298,
     OP_DIV_SH = 299,
     OP_MOD_SH = 300,
     OP_PROP = 301,
     LPAR = 302,
     RPAR = 303,
     LBRA = 304,
     RBRA = 305,
     LCUR = 306,
     RCUR = 307,
     SEMC = 308,
     COMA = 309,
     COND_QUES = 310,
     COND_COLN = 311
   };
#endif
/* Tokens.  */
#define INT 258
#define BOOLEAN 259
#define CHAR 260
#define STRING 261
#define IDENTIFIER 262
#define TYPE_INT 263
#define TYPE_BOOLEAN 264
#define TYPE_CHAR 265
#define TYPE_STRING 266
#define IF 267
#define ELSE 268
#define FOR 269
#define WHILE 270
#define CONST 271
#define NEW 272
#define CLASS 273
#define METHOD 274
#define RETURN 275
#define MAIN 276
#define OP_PLUS 277
#define OP_MINUS 278
#define OP_MULTIPLICATION 279
#define OP_DIVITION 280
#define OP_EXP 281
#define OP_MODULO 282
#define OP_PLUS_PLUS 283
#define OP_MINUS_MINUS 284
#define OP_EQ 285
#define OP_NE 286
#define OP_GE 287
#define OP_LE 288
#define OP_GT 289
#define OP_LT 290
#define OP_AND 291
#define OP_OR 292
#define OP_NOT 293
#define OP_IMPLIES 294
#define OP_ASSIGN 295
#define OP_PLUS_SH 296
#define OP_MINUS_SH 297
#define OP_MULT_SH 298
#define OP_DIV_SH 299
#define OP_MOD_SH 300
#define OP_PROP 301
#define LPAR 302
#define RPAR 303
#define LBRA 304
#define RBRA 305
#define LCUR 306
#define RCUR 307
#define SEMC 308
#define COMA 309
#define COND_QUES 310
#define COND_COLN 311




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
#line 171 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


