/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "grammar.y"

#include <stdio.h>
#include <string.h>
#include "compiler_structs.h"
#include "lib/uthash.h"
#include "lib/list.h"

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}
 
int yywrap()
{
        return 1;
} 
  
main()
{
        yyparse();
} 

sumInts(int a, int b) {
	printf("suma: %d\n", (a + b));
}



/* Line 268 of yacc.c  */
#line 100 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 293 of yacc.c  */
#line 30 "grammar.y"

        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;
        double doubleNum;



/* Line 293 of yacc.c  */
#line 259 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 271 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    15,    16,    20,    24,    26,
      29,    30,    37,    46,    54,    57,    58,    61,    62,    66,
      72,    75,    77,    85,    88,    89,    99,   102,   103,   105,
     108,   110,   112,   114,   116,   118,   120,   122,   125,   130,
     133,   142,   147,   150,   151,   159,   165,   167,   169,   173,
     177,   181,   185,   189,   193,   195,   201,   203,   205,   209,
     211,   215,   217,   221,   223,   227,   231,   233,   237,   241,
     245,   249,   251,   255,   259,   261,   265,   269,   273,   275,
     281,   285,   289,   294,   296,   299,   302,   305,   308,   311,
     313,   316,   319,   322,   325,   328,   334,   336,   338,   342,
     345,   347,   349,   351,   353,   355,   356,   358,   360,   364,
     367,   368,   370,   374,   376,   378,   381,   384
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    60,    63,    64,    -1,    19,    56,
       8,    -1,    60,    61,    -1,    -1,    15,    62,    53,    -1,
      62,    46,     8,    -1,     8,    -1,    63,    65,    -1,    -1,
      21,    47,    48,    51,    73,    52,    -1,    17,     8,    66,
      51,    67,    69,    71,    52,    -1,    17,     8,    66,    51,
      67,    71,    52,    -1,    16,     8,    -1,    -1,    67,    68,
      -1,    -1,   107,     8,    53,    -1,   107,     8,    40,    83,
      53,    -1,    69,    70,    -1,    70,    -1,     8,    47,   102,
      48,    51,    73,    52,    -1,    71,    72,    -1,    -1,    18,
     107,     8,    47,   102,    48,    51,    73,    52,    -1,    73,
      74,    -1,    -1,    53,    -1,    75,    53,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    83,    -1,    80,    -1,
      82,    -1,   107,     8,    -1,   107,     8,    40,    83,    -1,
      20,    83,    -1,     9,    47,    86,    48,    51,    73,    52,
      81,    -1,    10,    51,    73,    52,    -1,    10,    80,    -1,
      -1,    12,    47,    86,    48,    51,    73,    52,    -1,    12,
      47,    86,    48,    74,    -1,    84,    -1,    85,    -1,    85,
      40,    84,    -1,    85,    41,    84,    -1,    85,    42,    84,
      -1,    85,    43,    84,    -1,    85,    44,    84,    -1,    85,
      45,    84,    -1,    86,    -1,    86,    55,    85,    56,    85,
      -1,    87,    -1,    88,    -1,    87,    39,    88,    -1,    89,
      -1,    88,    37,    89,    -1,    90,    -1,    89,    36,    90,
      -1,    91,    -1,    90,    30,    91,    -1,    90,    31,    91,
      -1,    92,    -1,    91,    32,    92,    -1,    91,    33,    92,
      -1,    91,    34,    92,    -1,    91,    35,    92,    -1,    93,
      -1,    92,    22,    93,    -1,    92,    23,    93,    -1,    94,
      -1,    93,    24,    94,    -1,    93,    25,    94,    -1,    93,
      27,    94,    -1,    96,    -1,    14,     8,    47,   105,    48,
      -1,    14,     8,    95,    -1,    49,    83,    50,    -1,    95,
      49,    83,    50,    -1,    97,    -1,    28,    97,    -1,    29,
      97,    -1,    22,    97,    -1,    23,    97,    -1,    38,    97,
      -1,   100,    -1,   100,    28,    -1,   100,    29,    -1,    97,
      99,    -1,    97,    98,    -1,    46,     8,    -1,    46,     8,
      47,   105,    48,    -1,   101,    -1,     8,    -1,    47,    83,
      48,    -1,     8,    95,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,    -1,   103,    -1,   104,    -1,
     103,    54,   104,    -1,   107,     8,    -1,    -1,   106,    -1,
     105,    54,   106,    -1,    83,    -1,     8,    -1,     8,   108,
      -1,    49,    50,    -1,   108,    49,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,   110,   116,   121,   128,   135,   142,   150,
     155,   163,   172,   177,   184,   189,   197,   202,   209,   217,
     229,   234,   242,   251,   256,   263,   275,   280,   287,   292,
     296,   300,   306,   310,   314,   322,   329,   336,   345,   357,
     367,   374,   379,   384,   392,   397,   411,   419,   423,   429,
     435,   441,   447,   453,   463,   467,   473,   479,   483,   491,
     495,   503,   507,   517,   521,   527,   535,   539,   545,   551,
     557,   567,   571,   577,   585,   589,   595,   601,   611,   615,
     624,   635,   639,   648,   652,   658,   664,   670,   676,   686,
     690,   696,   702,   708,   716,   724,   734,   740,   746,   752,
     760,   765,   770,   775,   781,   790,   795,   801,   807,   814,
     824,   829,   835,   842,   849,   854,   862,   866
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "BOOLEAN", "CHAR", "STRING",
  "DOUBLE", "IDENTIFIER", "IF", "ELSE", "FOR", "WHILE", "CONST", "NEW",
  "IMPORT", "EXTENDS", "CLASS", "METHOD", "PROGRAM", "RETURN", "MAIN",
  "OP_PLUS", "OP_MINUS", "OP_MULTIPLICATION", "OP_DIVITION", "OP_EXP",
  "OP_MODULO", "OP_PLUS_PLUS", "OP_MINUS_MINUS", "OP_EQ", "OP_NE", "OP_GE",
  "OP_LE", "OP_GT", "OP_LT", "OP_AND", "OP_OR", "OP_NOT", "OP_IMPLIES",
  "OP_ASSIGN", "OP_PLUS_SH", "OP_MINUS_SH", "OP_MULT_SH", "OP_DIV_SH",
  "OP_MOD_SH", "OP_PROP", "LPAR", "RPAR", "LBRA", "RBRA", "LCUR", "RCUR",
  "SEMC", "COMA", "COND_QUES", "COND_COLN", "$accept", "program",
  "program_name", "imports", "import", "import_element", "classes", "main",
  "class", "extends", "class_instance_properties",
  "class_instance_property", "class_constructors", "class_constructor",
  "class_instance_methods", "class_instance_method", "instr_set", "instr",
  "instr_simple", "instr_conditional", "instr_loop", "instr_declaration",
  "instr_return", "block_if", "block_else", "block_while", "expr",
  "expr_assignment", "expr_conditional", "expr_boolean", "expr_implies",
  "expr_or", "expr_and", "expr_equality", "expr_order", "expr_additive",
  "expr_multiplicative", "expr_object_creation", "array_size",
  "expr_pre_additive_sign_and_not", "expr_post_additive_or_access",
  "property_access", "method_call", "expr_basic", "built_in",
  "parameters_def", "parameters_def_2", "parameter_def", "parameters",
  "parameter", "type", "brackets", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    61,    62,    62,    63,
      63,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    71,    71,    72,    73,    73,    74,    74,
      74,    74,    75,    75,    75,    76,    77,    78,    78,    79,
      80,    81,    81,    81,    82,    82,    83,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    98,    99,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   104,
     105,   105,   105,   106,   107,   107,   108,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     2,     0,     3,     3,     1,     2,
       0,     6,     8,     7,     2,     0,     2,     0,     3,     5,
       2,     1,     7,     2,     0,     9,     2,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     2,
       8,     4,     2,     0,     7,     5,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     5,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     5,
       3,     3,     4,     1,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     5,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     2,
       0,     1,     3,     1,     1,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,    10,     3,     0,     4,
       0,     8,     0,     0,     0,     2,     9,     0,     6,    15,
       0,     7,     0,     0,     0,    14,    17,    27,    24,     0,
     114,    16,    24,    21,     0,     0,   100,   101,   102,   103,
     104,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    28,    26,     0,    30,    31,    32,    33,
      35,    36,    34,    46,    47,    54,    56,    57,    59,    61,
      63,    66,    71,    74,    78,    83,    89,    96,     0,   105,
       0,   115,     0,    20,     0,     0,    13,    23,     0,     0,
      99,     0,     0,     0,    97,    39,    86,    87,    84,    85,
      88,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    92,    90,    91,    37,
     114,     0,   106,   107,     0,   116,     0,    12,     0,     0,
      18,     0,     0,     0,     0,   110,     0,    80,    98,    48,
      49,    50,    51,    52,    53,     0,    58,    60,    62,    64,
      65,    67,    68,    69,    70,    72,    73,    75,    76,    77,
      94,     0,     0,     0,   109,   117,     0,     0,    81,     0,
       0,     0,   113,     0,   111,     0,   110,    38,    27,   108,
     105,    19,    82,    27,    27,    45,    79,     0,    55,     0,
       0,     0,     0,     0,   112,    95,    22,     0,    43,    44,
      27,     0,    40,     0,    27,    42,    25,     0,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     9,    12,    10,    15,    16,    23,
      28,    31,    32,    33,    34,    87,    29,    54,    55,    56,
      57,    58,    59,    60,   212,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    90,    74,
      75,   125,   126,    76,    77,   131,   132,   133,   183,   184,
      78,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
     -14,   -34,    43,  -119,    40,  -119,    54,  -119,    64,  -119,
       2,  -119,   -29,    66,    58,  -119,  -119,    69,  -119,    93,
      63,  -119,   105,    70,    73,  -119,  -119,  -119,   114,     6,
     -17,  -119,   118,  -119,   -10,   122,  -119,  -119,  -119,  -119,
    -119,    -2,    85,    94,   135,   302,    33,    33,    33,    33,
      33,   302,  -119,  -119,  -119,    91,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,   292,    92,   107,   113,   112,    30,
      51,    71,    25,  -119,  -119,   106,    75,  -119,   143,   146,
     109,   108,   125,  -119,     3,   146,  -119,  -119,   -37,   273,
     124,   302,   302,     7,   126,  -119,   106,   106,   106,   106,
     106,   138,  -119,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   147,  -119,  -119,  -119,  -119,   116,
     134,   139,   149,  -119,   152,  -119,   142,  -119,   153,   302,
    -119,   151,   302,   140,   141,   302,   302,   124,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,   150,   113,   112,    30,    51,
      51,    71,    71,    71,    71,    25,    25,  -119,  -119,  -119,
     158,   302,   156,   146,  -119,  -119,   161,   163,  -119,   167,
     160,    59,  -119,   -23,  -119,   302,   302,  -119,  -119,  -119,
     146,  -119,  -119,  -119,  -119,  -119,  -119,   302,  -119,   -21,
     111,   172,   162,   190,  -119,  -119,  -119,   178,   221,  -119,
    -119,    -5,  -119,   218,  -119,  -119,  -119,   246,  -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,   201,   202,  -119,  -118,    55,  -119,  -119,
    -119,  -119,  -119,    24,  -119,  -119,   -44,   238,  -107,     8,
    -119,   129,   133,   136,    -6,    20,     9,   -32,   164,  -119,
     131,  -119,  -119,  -119,  -119,    72,  -119,    86,    77,    48,
     -28,  -119
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -115
static const yytype_int16 yytable[] =
{
      35,    95,   155,   139,    42,     1,  -114,   101,    85,    36,
      37,    38,    39,    40,    41,    42,   140,    17,    43,    13,
      44,    85,     4,    14,    18,   196,    45,   205,    46,    47,
      79,   197,    80,   197,    48,    49,    36,    37,    38,    39,
      40,    94,    86,     5,    50,   141,   214,    89,     7,   121,
     122,   134,   123,    51,   145,   137,   146,   138,    52,    53,
     113,   114,    36,    37,    38,    39,    40,    41,    42,     8,
     200,    43,    11,    44,    19,   202,   203,    21,   198,    45,
      51,    46,    47,   115,   116,   117,   118,    48,    49,   167,
     168,   169,   213,   119,   120,   177,   217,    50,   179,   143,
     144,   182,   141,   127,   128,    20,    51,   159,   160,    22,
     194,    24,    53,    25,    36,    37,    38,    39,    40,    41,
      42,    26,    30,    43,    27,    44,    82,   187,   165,   166,
      88,    45,    91,    46,    47,   161,   162,   163,   164,    48,
      49,    92,   182,    93,   102,   134,   110,   109,   112,    50,
     111,   129,   124,   182,   130,   170,   171,   136,    51,   135,
     174,   176,   134,   206,    53,    36,    37,    38,    39,    40,
      41,    42,    79,   142,    43,   146,    44,    96,    97,    98,
      99,   100,    45,    80,    46,    47,   148,   172,   180,   181,
      48,    49,   175,    36,    37,    38,    39,    40,    41,    42,
      50,   178,    43,   173,    44,   186,   185,   188,   190,    51,
      45,   193,    46,    47,   208,    53,   191,   192,    48,    49,
     207,    36,    37,    38,    39,    40,    41,    42,    50,   210,
      43,   211,    44,    83,    84,   215,   195,    51,    45,   156,
      46,    47,   209,    53,   157,   204,    48,    49,   158,    36,
      37,    38,    39,    40,    41,    42,    50,   147,    43,   189,
      44,     0,   201,   199,     0,    51,    45,     0,    46,    47,
     216,    53,     0,     0,    48,    49,    36,    37,    38,    39,
      40,    94,     0,     0,    50,     0,     0,    44,     0,     0,
       0,     0,     0,    51,     0,    46,    47,     0,   218,    53,
       0,    48,    49,     0,     0,    36,    37,    38,    39,    40,
      94,    50,     0,     0,     0,     0,    44,     0,     0,     0,
      51,     0,     0,   135,    46,    47,     0,     0,     0,     0,
      48,    49,   103,   104,   105,   106,   107,   108,     0,     0,
      50,   149,   150,   151,   152,   153,   154,     0,     0,    51
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-119))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      28,    45,   109,    40,     9,    19,     8,    51,    18,     3,
       4,     5,     6,     7,     8,     9,    53,    46,    12,    17,
      14,    18,    56,    21,    53,    48,    20,    48,    22,    23,
      47,    54,    49,    54,    28,    29,     3,     4,     5,     6,
       7,     8,    52,     0,    38,    89,    51,    49,     8,    24,
      25,    79,    27,    47,    47,    52,    49,    85,    52,    53,
      30,    31,     3,     4,     5,     6,     7,     8,     9,    15,
     188,    12,     8,    14,     8,   193,   194,     8,   185,    20,
      47,    22,    23,    32,    33,    34,    35,    28,    29,   121,
     122,   123,   210,    22,    23,   139,   214,    38,   142,    91,
      92,   145,   146,    28,    29,    47,    47,   113,   114,    16,
      51,    48,    53,     8,     3,     4,     5,     6,     7,     8,
       9,    51,     8,    12,    51,    14,     8,   171,   119,   120,
       8,    20,    47,    22,    23,   115,   116,   117,   118,    28,
      29,    47,   186,     8,    53,   173,    39,    55,    36,    38,
      37,     8,    46,   197,     8,     8,    40,    49,    47,    50,
       8,     8,   190,    52,    53,     3,     4,     5,     6,     7,
       8,     9,    47,    49,    12,    49,    14,    46,    47,    48,
      49,    50,    20,    49,    22,    23,    48,    48,    48,    48,
      28,    29,    50,     3,     4,     5,     6,     7,     8,     9,
      38,    50,    12,    54,    14,    47,    56,    51,    47,    47,
      20,    51,    22,    23,    52,    53,    53,    50,    28,    29,
      48,     3,     4,     5,     6,     7,     8,     9,    38,    51,
      12,    10,    14,    32,    32,   211,   181,    47,    20,   110,
      22,    23,    52,    53,   111,   197,    28,    29,   112,     3,
       4,     5,     6,     7,     8,     9,    38,    93,    12,   173,
      14,    -1,   190,   186,    -1,    47,    20,    -1,    22,    23,
      52,    53,    -1,    -1,    28,    29,     3,     4,     5,     6,
       7,     8,    -1,    -1,    38,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    22,    23,    -1,    52,    53,
      -1,    28,    29,    -1,    -1,     3,     4,     5,     6,     7,
       8,    38,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      47,    -1,    -1,    50,    22,    23,    -1,    -1,    -1,    -1,
      28,    29,    40,    41,    42,    43,    44,    45,    -1,    -1,
      38,   103,   104,   105,   106,   107,   108,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    58,    59,    56,     0,    60,     8,    15,    61,
      63,     8,    62,    17,    21,    64,    65,    46,    53,     8,
      47,     8,    16,    66,    48,     8,    51,    51,    67,    73,
       8,    68,    69,    70,    71,   107,     3,     4,     5,     6,
       7,     8,     9,    12,    14,    20,    22,    23,    28,    29,
      38,    47,    52,    53,    74,    75,    76,    77,    78,    79,
      80,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    96,    97,   100,   101,   107,    47,
      49,   108,     8,    70,    71,    18,    52,    72,     8,    49,
      95,    47,    47,     8,     8,    83,    97,    97,    97,    97,
      97,    83,    53,    40,    41,    42,    43,    44,    45,    55,
      39,    37,    36,    30,    31,    32,    33,    34,    35,    22,
      23,    24,    25,    27,    46,    98,    99,    28,    29,     8,
       8,   102,   103,   104,   107,    50,    49,    52,   107,    40,
      53,    83,    49,    86,    86,    47,    49,    95,    48,    84,
      84,    84,    84,    84,    84,    85,    88,    89,    90,    91,
      91,    92,    92,    92,    92,    93,    93,    94,    94,    94,
       8,    40,    48,    54,     8,    50,     8,    83,    50,    83,
      48,    48,    83,   105,   106,    56,    47,    83,    51,   104,
      47,    53,    50,    51,    51,    74,    48,    54,    85,   105,
      73,   102,    73,    73,   106,    48,    52,    48,    52,    52,
      51,    10,    81,    73,    51,    80,    52,    73,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 94 "grammar.y"
    {
		tProgram * program = newProgram((yyvsp[(1) - (4)].string));
		addImports(program, (yyvsp[(2) - (4)].void_pointer));
		addClasses(program, (yyvsp[(3) - (4)].void_pointer));
		addMain(program, (yyvsp[(4) - (4)].void_pointer));
		if (!checkPendingClasses()) {
			printUknownTypes();
		}
		printProgram(program);
		deleteProgram(program);
		deletePendingClasses();
		deleteClassesMap();
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 110 "grammar.y"
    {
		(yyval.string) = (yyvsp[(3) - (3)].string);
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 116 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 121 "grammar.y"
    {
		tList * imports = newImports();
		(yyval.void_pointer) = imports;
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 128 "grammar.y"
    {
		tImport * import = newImport((yyvsp[(2) - (3)].void_pointer));
		(yyval.void_pointer) = import;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 135 "grammar.y"
    {
		char ** aux = malloc(sizeof(char *));
		aux = memcpy(aux, &(yyvsp[(3) - (3)].string), sizeof(char *));
		_addElement((yyvsp[(1) - (3)].void_pointer), aux);
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 142 "grammar.y"
    {
		char ** aux = malloc(sizeof(char *));
		aux = memcpy(aux, &(yyvsp[(1) - (1)].string), sizeof(char *));
		tList * importElems = newImportElems(aux);
		(yyval.void_pointer) = importElems;
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 150 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 155 "grammar.y"
    {
		initPendingClasses();
		tList * classes = newClasses();
		(yyval.void_pointer) = classes;
	}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 163 "grammar.y"
    {
		tMain * main = newMain((yyvsp[(5) - (6)].void_pointer));
		(yyval.void_pointer) = main;
	}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 172 "grammar.y"
    {
		tClass * class = newClass((yyvsp[(2) - (8)].string), (yyvsp[(3) - (8)].void_pointer), (yyvsp[(5) - (8)].void_pointer), (yyvsp[(6) - (8)].void_pointer), (yyvsp[(7) - (8)].void_pointer));
		(yyval.void_pointer) = class;
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 177 "grammar.y"
    {
		tClass * class = newClass((yyvsp[(2) - (7)].string), (yyvsp[(3) - (7)].void_pointer), (yyvsp[(5) - (7)].void_pointer), newConstructors(NULL), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = class;
	}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 184 "grammar.y"
    {
		tExtends * extends = newExtends((yyvsp[(2) - (2)].string));
		(yyval.void_pointer) = extends;
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 189 "grammar.y"
    {
		tExtends * extends = newExtends(NULL);
		(yyval.void_pointer) = extends;
	}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 197 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 202 "grammar.y"
    {
		tList * properties = newProperties();
		(yyval.void_pointer) = properties;
	}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 209 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (3)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (3)].void_pointer));
		}
		tProperty * property = newProperty((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), NULL);
		(yyval.void_pointer) = property;
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 217 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (5)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (5)].void_pointer));
		}
		tProperty * property = newProperty((yyvsp[(1) - (5)].void_pointer), (yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].void_pointer));
		(yyval.void_pointer) = property;
	}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 229 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 234 "grammar.y"
    {
		tList * constructors = newConstructors();
		_addElement(constructors, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = constructors;
	}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 242 "grammar.y"
    {
		tConstructor * constructor = newConstructor((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = constructor;
	}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 251 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 256 "grammar.y"
    {
		tList * methods = newMethods();
		(yyval.void_pointer) = methods;
	}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 263 "grammar.y"
    {
		if (!isType((yyvsp[(2) - (9)].void_pointer))) {
			addPendingClass((yyvsp[(2) - (9)].void_pointer));
		}
		tMethod * method = newMethod((yyvsp[(2) - (9)].void_pointer), (yyvsp[(3) - (9)].string), (yyvsp[(5) - (9)].void_pointer), (yyvsp[(8) - (9)].void_pointer));
		(yyval.void_pointer) = method;
	}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 275 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 280 "grammar.y"
    {
		tList * instrs = newInstrs();
		(yyval.void_pointer) = instrs;
	}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 287 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		(yyval.void_pointer) = instr;
	}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 292 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 296 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 300 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 306 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 310 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 314 "grammar.y"
    {
		tInstrSimple * instrSimple = newInstrSimple((yyvsp[(1) - (1)].void_pointer));
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		(yyval.void_pointer) = instr;
	}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 322 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_IF, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = instr;
	}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 329 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_WHILE, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = instr;
	}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 336 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (2)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (2)].void_pointer)); // TODO!
		}
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 345 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (4)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (4)].void_pointer)); // TODO!
		}
		free((yyvsp[(3) - (4)].string));
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[(1) - (4)].void_pointer), (yyvsp[(2) - (4)].string), (yyvsp[(4) - (4)].void_pointer));
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 357 "grammar.y"
    {
		tInstrReturn * instrReturn = newInstrReturn((yyvsp[(2) - (2)].void_pointer));
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		(yyval.void_pointer) = instr;
	}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 367 "grammar.y"
    {
		tInstrIf * instrIf = newInstrIf((yyvsp[(3) - (8)].void_pointer), (yyvsp[(6) - (8)].void_pointer), (yyvsp[(8) - (8)].void_pointer));
		(yyval.void_pointer) = instrIf;
	}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 374 "grammar.y"
    {
		tInstrElse * instrElse = newInstrElse(NULL, (yyvsp[(3) - (4)].void_pointer));
		(yyval.void_pointer) = instrElse;
	}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 379 "grammar.y"
    {
		tInstrElse * instrElse = newInstrElse((yyvsp[(2) - (2)].void_pointer), NULL);
		(yyval.void_pointer) = instrElse;
	}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 384 "grammar.y"
    {
		(yyval.void_pointer) = NULL;
	}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 392 "grammar.y"
    {
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[(3) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = instrWhile;
	}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 397 "grammar.y"
    {
		tList * instrs = newInstrs();
		_addElement(instrs, (yyvsp[(5) - (5)].void_pointer));
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[(3) - (5)].void_pointer), instrs);
		(yyval.void_pointer) = instrWhile;
	}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 411 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 419 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 423 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 429 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 435 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 441 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 447 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 453 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 463 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 473 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 479 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 483 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 491 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 495 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 503 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 507 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 517 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 521 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 527 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 535 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 539 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 545 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 551 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 557 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 567 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 571 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 577 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 585 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 589 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 595 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 601 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 611 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 615 "grammar.y"
    {
		if (!isTypeName((yyvsp[(2) - (5)].string))) {
			addPendingClassName((yyvsp[(2) - (5)].string)); // TODO!
		}
		tObjectCreation * objCreation = newObjCreation((yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_CREATION, objCreation);
		(yyval.void_pointer) = expr;
	}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 624 "grammar.y"
    {
		if (!isTypeName((yyvsp[(2) - (3)].string))) {
			addPendingClassName((yyvsp[(2) - (3)].string)); // TODO!
		}
		tArrayCreationExpr * arrayCreationExpr = newArrayCreationExpr((yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ARRAY_CREATION, arrayCreationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 635 "grammar.y"
    {
		(yyval.void_pointer) = newSizes((yyvsp[(2) - (3)].void_pointer));
	}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 639 "grammar.y"
    {
		_addElement((yyvsp[(1) - (4)].void_pointer), (yyvsp[(3) - (4)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (4)].void_pointer);
	}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 648 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 652 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 658 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 664 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 670 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 676 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 686 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 690 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 696 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 702 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (2)].void_pointer), NULL, (yyvsp[(2) - (2)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 708 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (2)].void_pointer), NULL, (yyvsp[(2) - (2)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 716 "grammar.y"
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[(2) - (2)].string), NULL);
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 724 "grammar.y"
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 734 "grammar.y"
    {
		tBuiltInExpr * builtIn = (yyvsp[(1) - (1)].void_pointer);
		tExpr * expr = newExpr(EXPR_BUILT_IN, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = expr;
	}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 740 "grammar.y"
    {
		tIdentifier * identifier = newIdentifier((yyvsp[(1) - (1)].string));
		tExpr * expr = newExpr(EXPR_IDENTIFIER, identifier);
		(yyval.void_pointer) = expr;
	}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 746 "grammar.y"
    {
		tParenthesisExpr * parenthesisExpr = newParenthesisExpr((yyvsp[(2) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_PARENTHESIS, parenthesisExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 752 "grammar.y"
    {
		tArrayExpr * arrayExpr = newArrayExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer));
		tExpr * expr = newExpr(EXPR_ARRAY, arrayExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 760 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_INT, &(yyvsp[(1) - (1)].integer), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 765 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_BOOLEAN, &(yyvsp[(1) - (1)].boolean), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 770 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_CHAR, &(yyvsp[(1) - (1)].character), sizeof(char));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 775 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_STRING, (yyvsp[(1) - (1)].string), strlen((yyvsp[(1) - (1)].string)) + 1);
		free((yyvsp[(1) - (1)].string));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 781 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_DOUBLE, &(yyvsp[(1) - (1)].doubleNum), sizeof(double));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 790 "grammar.y"
    {
		tList * defParams = newDefParams();
		(yyval.void_pointer) = defParams;
	}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 795 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 801 "grammar.y"
    {
		tList * defParams = newDefParams();
		_addElement(defParams, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = defParams;
	}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 807 "grammar.y"
    {
		_addElement((yyvsp[(1) - (3)].void_pointer), (yyvsp[(3) - (3)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 814 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (2)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (2)].void_pointer)); // TODO!
		}
		tDefParam * defParam = newDefParam((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string));
		(yyval.void_pointer) = defParam;
	}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 824 "grammar.y"
    {
		tList * params = newParams();
		(yyval.void_pointer) = params;
	}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 829 "grammar.y"
    {
		tList * params = newParams();
		_addElement(params, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = params;
	}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 835 "grammar.y"
    {
		_addElement((yyvsp[(1) - (3)].void_pointer), (yyvsp[(3) - (3)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 842 "grammar.y"
    {
		tParam * param = newParam((yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = param;
	}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 849 "grammar.y"
    {
		(yyval.void_pointer) = newType((yyvsp[(1) - (1)].string));
	}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 854 "grammar.y"
    {
		tType * type = newType((yyvsp[(1) - (2)].string));
		addBrackets(type, (yyvsp[(2) - (2)].integer));
		(yyval.void_pointer) = type;
	}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 862 "grammar.y"
    {
		(yyval.integer) = 1;
	}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 866 "grammar.y"
    {
		(yyval.integer) = (yyvsp[(1) - (3)].integer) + 1;
	}
    break;



/* Line 1806 of yacc.c  */
#line 2945 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 871 "grammar.y"
	

