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

/* Line 293 of yacc.c  */
#line 30 "grammar.y"

        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;



/* Line 293 of yacc.c  */
#line 254 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 266 "y.tab.c"

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
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    15,    16,    20,    24,    26,
      29,    30,    37,    45,    52,    55,    56,    60,    66,    69,
      71,    79,    82,    83,    93,    96,    97,    99,   102,   104,
     106,   108,   110,   112,   114,   116,   119,   124,   127,   136,
     141,   144,   145,   153,   159,   161,   163,   167,   171,   175,
     179,   183,   187,   189,   195,   197,   199,   203,   205,   209,
     211,   215,   217,   221,   225,   227,   231,   235,   239,   243,
     245,   249,   253,   255,   259,   263,   267,   269,   275,   279,
     283,   288,   290,   293,   296,   299,   302,   305,   307,   310,
     313,   316,   319,   322,   328,   330,   332,   336,   339,   341,
     343,   345,   347,   348,   350,   352,   356,   359,   360,   362,
     366,   368,   370,   373,   376
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    58,    61,    62,    -1,    17,    54,
       7,    -1,    58,    59,    -1,    -1,    14,    60,    51,    -1,
      60,    44,     7,    -1,     7,    -1,    61,    63,    -1,    -1,
      19,    45,    46,    49,    70,    50,    -1,    15,     7,    49,
      64,    66,    68,    50,    -1,    15,     7,    49,    64,    68,
      50,    -1,    64,    65,    -1,    -1,   104,     7,    51,    -1,
     104,     7,    38,    80,    51,    -1,    66,    67,    -1,    67,
      -1,     7,    45,    99,    46,    49,    70,    50,    -1,    68,
      69,    -1,    -1,    16,   104,     7,    45,    99,    46,    49,
      70,    50,    -1,    70,    71,    -1,    -1,    51,    -1,    72,
      51,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      80,    -1,    77,    -1,    79,    -1,   104,     7,    -1,   104,
       7,    38,    80,    -1,    18,    80,    -1,     8,    45,    83,
      46,    49,    70,    50,    78,    -1,     9,    49,    70,    50,
      -1,     9,    77,    -1,    -1,    11,    45,    83,    46,    49,
      70,    50,    -1,    11,    45,    83,    46,    71,    -1,    81,
      -1,    82,    -1,    82,    38,    81,    -1,    82,    39,    81,
      -1,    82,    40,    81,    -1,    82,    41,    81,    -1,    82,
      42,    81,    -1,    82,    43,    81,    -1,    83,    -1,    83,
      53,    82,    54,    82,    -1,    84,    -1,    85,    -1,    84,
      37,    85,    -1,    86,    -1,    85,    35,    86,    -1,    87,
      -1,    86,    34,    87,    -1,    88,    -1,    87,    28,    88,
      -1,    87,    29,    88,    -1,    89,    -1,    88,    30,    89,
      -1,    88,    31,    89,    -1,    88,    32,    89,    -1,    88,
      33,    89,    -1,    90,    -1,    89,    20,    90,    -1,    89,
      21,    90,    -1,    91,    -1,    90,    22,    91,    -1,    90,
      23,    91,    -1,    90,    25,    91,    -1,    93,    -1,    13,
       7,    45,   102,    46,    -1,    13,     7,    92,    -1,    47,
      80,    48,    -1,    92,    47,    80,    48,    -1,    94,    -1,
      26,    94,    -1,    27,    94,    -1,    20,    94,    -1,    21,
      94,    -1,    36,    94,    -1,    97,    -1,    97,    26,    -1,
      97,    27,    -1,    94,    96,    -1,    94,    95,    -1,    44,
       7,    -1,    44,     7,    45,   102,    46,    -1,    98,    -1,
       7,    -1,    45,    80,    46,    -1,     7,    92,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,    -1,   100,    -1,
     101,    -1,   100,    52,   101,    -1,   104,     7,    -1,    -1,
     103,    -1,   102,    52,   103,    -1,    80,    -1,     7,    -1,
       7,   105,    -1,    47,    48,    -1,   105,    47,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,   108,   114,   119,   126,   133,   140,   148,
     153,   161,   170,   175,   184,   189,   196,   204,   216,   221,
     229,   238,   243,   250,   262,   267,   274,   279,   283,   287,
     293,   297,   301,   309,   316,   323,   332,   344,   354,   361,
     366,   371,   379,   384,   398,   406,   410,   416,   422,   428,
     434,   440,   450,   454,   460,   466,   470,   478,   482,   490,
     494,   504,   508,   514,   522,   526,   532,   538,   544,   554,
     558,   564,   572,   576,   582,   588,   598,   602,   611,   622,
     626,   635,   639,   645,   651,   657,   663,   673,   677,   683,
     689,   695,   703,   711,   721,   727,   733,   739,   747,   752,
     757,   762,   772,   777,   783,   789,   796,   806,   811,   817,
     824,   831,   836,   844,   848
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "BOOLEAN", "CHAR", "STRING",
  "IDENTIFIER", "IF", "ELSE", "FOR", "WHILE", "CONST", "NEW", "IMPORT",
  "CLASS", "METHOD", "PROGRAM", "RETURN", "MAIN", "OP_PLUS", "OP_MINUS",
  "OP_MULTIPLICATION", "OP_DIVITION", "OP_EXP", "OP_MODULO",
  "OP_PLUS_PLUS", "OP_MINUS_MINUS", "OP_EQ", "OP_NE", "OP_GE", "OP_LE",
  "OP_GT", "OP_LT", "OP_AND", "OP_OR", "OP_NOT", "OP_IMPLIES", "OP_ASSIGN",
  "OP_PLUS_SH", "OP_MINUS_SH", "OP_MULT_SH", "OP_DIV_SH", "OP_MOD_SH",
  "OP_PROP", "LPAR", "RPAR", "LBRA", "RBRA", "LCUR", "RCUR", "SEMC",
  "COMA", "COND_QUES", "COND_COLN", "$accept", "program", "program_name",
  "imports", "import", "import_element", "classes", "main", "class",
  "class_instance_properties", "class_instance_property",
  "class_constructors", "class_constructor", "class_instance_methods",
  "class_instance_method", "instr_set", "instr", "instr_simple",
  "instr_conditional", "instr_loop", "instr_declaration", "instr_return",
  "block_if", "block_else", "block_while", "expr", "expr_assignment",
  "expr_conditional", "expr_boolean", "expr_implies", "expr_or",
  "expr_and", "expr_equality", "expr_order", "expr_additive",
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
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    58,    58,    59,    60,    60,    61,
      61,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    68,    68,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    73,    74,    75,    75,    76,    77,    78,
      78,    78,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    87,    88,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    95,    96,    97,    97,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   100,   101,   102,   102,   102,
     103,   104,   104,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     2,     0,     3,     3,     1,     2,
       0,     6,     7,     6,     2,     0,     3,     5,     2,     1,
       7,     2,     0,     9,     2,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     2,     8,     4,
       2,     0,     7,     5,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     5,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     5,     3,     3,
       4,     1,     2,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     5,     1,     1,     3,     2,     1,     1,
       1,     1,     0,     1,     1,     3,     2,     0,     1,     3,
       1,     1,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,    10,     3,     0,     4,
       0,     8,     0,     0,     0,     2,     9,     0,     6,     0,
       0,     7,    15,     0,    22,    25,   111,    14,    22,    19,
       0,     0,     0,   102,     0,   112,     0,    18,     0,     0,
      13,    21,     0,    98,    99,   100,   101,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    26,
      24,     0,    28,    29,    30,    31,    33,    34,    32,    44,
      45,    52,    54,    55,    57,    59,    61,    64,    69,    72,
      76,    81,    87,    94,     0,   111,     0,   103,   104,     0,
     113,     0,    12,     0,     0,    16,     0,    97,     0,     0,
       0,    95,    37,    84,    85,    82,    83,    86,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    90,    88,    89,    35,     0,     0,   106,
     114,     0,     0,     0,     0,     0,     0,   107,     0,    78,
      96,    46,    47,    48,    49,    50,    51,     0,    56,    58,
      60,    62,    63,    65,    66,    67,    68,    70,    71,    73,
      74,    75,    92,     0,    25,   105,   102,    17,    79,     0,
       0,     0,   110,     0,   108,     0,   107,    36,     0,     0,
      80,    25,    25,    43,    77,     0,    53,     0,    20,     0,
       0,     0,   109,    93,    25,    41,    42,     0,     0,    38,
      23,    25,    40,     0,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     9,    12,    10,    15,    16,    24,
      27,    28,    29,    30,    41,    32,    60,    61,    62,    63,
      64,    65,    66,   209,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    97,    80,    81,
     132,   133,    82,    83,    86,    87,    88,   183,   184,    84,
      35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -170
static const yytype_int16 yypact[] =
{
     -11,   -27,    30,  -170,    77,  -170,    96,  -170,   112,  -170,
      28,  -170,   -15,   118,    82,  -170,  -170,   123,  -170,    84,
      89,  -170,  -170,    85,   130,  -170,     6,  -170,   137,  -170,
     -13,   140,    13,   142,   102,   104,   109,  -170,     9,   142,
    -170,  -170,   -10,  -170,  -170,  -170,  -170,     1,   113,   114,
     150,   291,     7,     7,     7,     7,     7,   291,  -170,  -170,
    -170,   119,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
      27,   107,   126,   138,   141,    71,    59,    88,    32,  -170,
    -170,   132,    86,  -170,   170,   131,   143,   144,  -170,   176,
    -170,   136,  -170,   192,   291,  -170,   265,   154,   291,   291,
      40,   155,  -170,   132,   132,   132,   132,   132,   157,  -170,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   197,  -170,  -170,  -170,  -170,   171,   166,   142,  -170,
    -170,   165,   174,   179,   291,   182,   183,   291,   291,   154,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,   168,   138,   141,
      71,    59,    59,    88,    88,    88,    88,    32,    32,  -170,
    -170,  -170,   185,   291,  -170,  -170,   142,  -170,  -170,   188,
     186,    75,  -170,   -14,  -170,   291,   291,  -170,   135,   195,
    -170,  -170,  -170,  -170,  -170,   291,  -170,     4,  -170,   199,
     161,   187,  -170,  -170,  -170,   242,  -170,   213,    -4,  -170,
    -170,  -170,  -170,   239,  -170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,   225,   226,  -170,  -169,    74,  -170,  -170,  -170,
    -170,  -170,    48,  -170,  -170,   -50,   -38,  -114,    23,  -170,
     145,   149,   158,     8,    -7,     5,   -68,   173,  -170,    51,
    -170,  -170,  -170,  -170,    98,  -170,   162,    90,    66,   -24,
    -170
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -112
static const yytype_int16 yytable[] =
{
      31,   102,   157,    39,    48,   188,     1,   108,  -111,    89,
      43,    44,    45,    46,   101,    93,    43,    44,    45,    46,
      47,    48,   200,   201,    49,    39,    50,     4,    94,    17,
       5,    51,   194,    52,    53,   207,    18,    40,   195,    54,
      55,    95,   213,    13,   142,   211,   143,    14,    96,    56,
     203,    33,    57,    34,   128,   129,   195,   130,    57,    92,
     169,   170,   171,    58,    59,   110,   111,   112,   113,   114,
     115,   196,   151,   152,   153,   154,   155,   156,    43,    44,
      45,    46,    47,    48,     7,   147,    49,   148,    50,   122,
     123,   124,   125,    51,   179,    52,    53,   182,   143,   120,
     121,    54,    55,   103,   104,   105,   106,   107,   126,   127,
       8,    56,   134,   135,    89,   163,   164,   165,   166,    11,
      57,   145,   146,   187,   192,    19,    59,    20,   161,   162,
      21,   167,   168,    22,    25,    23,   182,    26,    43,    44,
      45,    46,    47,    48,    36,   182,    49,    42,    50,    85,
      90,    91,    89,    51,    33,    52,    53,   100,    98,    99,
     116,    54,    55,   117,    43,    44,    45,    46,    47,    48,
     109,    56,    49,   118,    50,   119,   131,   136,    34,    51,
      57,    52,    53,   139,   140,   198,    59,    54,    55,   137,
      43,    44,    45,    46,    47,    48,   138,    56,    49,   141,
      50,   144,   148,   150,   172,    51,    57,    52,    53,   173,
     176,   205,    59,    54,    55,   174,    43,    44,    45,    46,
      47,    48,   185,    56,    49,   177,    50,   178,   180,   181,
     186,    51,    57,    52,    53,   191,   190,   206,    59,    54,
      55,   199,    43,    44,    45,    46,    47,    48,   204,    56,
      49,   208,    50,    37,    38,   193,   212,    51,    57,    52,
      53,   202,   158,   210,    59,    54,    55,   159,    43,    44,
      45,    46,   101,   149,   189,    56,   197,   160,    50,     0,
       0,     0,     0,     0,    57,    52,    53,     0,     0,   214,
      59,    54,    55,     0,    43,    44,    45,    46,   101,     0,
     175,    56,     0,     0,    50,     0,     0,     0,     0,     0,
      57,    52,    53,    90,     0,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,    57
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-170))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      24,    51,   116,    16,     8,   174,    17,    57,     7,    33,
       3,     4,     5,     6,     7,    39,     3,     4,     5,     6,
       7,     8,   191,   192,    11,    16,    13,    54,    38,    44,
       0,    18,    46,    20,    21,   204,    51,    50,    52,    26,
      27,    51,   211,    15,    94,    49,    96,    19,    47,    36,
      46,    45,    45,    47,    22,    23,    52,    25,    45,    50,
     128,   129,   130,    50,    51,    38,    39,    40,    41,    42,
      43,   185,   110,   111,   112,   113,   114,   115,     3,     4,
       5,     6,     7,     8,     7,    45,    11,    47,    13,    30,
      31,    32,    33,    18,   144,    20,    21,   147,   148,    28,
      29,    26,    27,    52,    53,    54,    55,    56,    20,    21,
      14,    36,    26,    27,   138,   122,   123,   124,   125,     7,
      45,    98,    99,   173,    49,     7,    51,    45,   120,   121,
       7,   126,   127,    49,    49,    46,   186,     7,     3,     4,
       5,     6,     7,     8,     7,   195,    11,     7,    13,     7,
      48,    47,   176,    18,    45,    20,    21,     7,    45,    45,
      53,    26,    27,    37,     3,     4,     5,     6,     7,     8,
      51,    36,    11,    35,    13,    34,    44,     7,    47,    18,
      45,    20,    21,     7,    48,    50,    51,    26,    27,    46,
       3,     4,     5,     6,     7,     8,    52,    36,    11,     7,
      13,    47,    47,    46,     7,    18,    45,    20,    21,    38,
      45,    50,    51,    26,    27,    49,     3,     4,     5,     6,
       7,     8,    54,    36,    11,    51,    13,    48,    46,    46,
      45,    18,    45,    20,    21,    49,    48,    50,    51,    26,
      27,    46,     3,     4,     5,     6,     7,     8,    49,    36,
      11,     9,    13,    28,    28,   181,   208,    18,    45,    20,
      21,   195,   117,    50,    51,    26,    27,   118,     3,     4,
       5,     6,     7,   100,   176,    36,   186,   119,    13,    -1,
      -1,    -1,    -1,    -1,    45,    20,    21,    -1,    -1,    50,
      51,    26,    27,    -1,     3,     4,     5,     6,     7,    -1,
     138,    36,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      45,    20,    21,    48,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    56,    57,    54,     0,    58,     7,    14,    59,
      61,     7,    60,    15,    19,    62,    63,    44,    51,     7,
      45,     7,    49,    46,    64,    49,     7,    65,    66,    67,
      68,   104,    70,    45,    47,   105,     7,    67,    68,    16,
      50,    69,     7,     3,     4,     5,     6,     7,     8,    11,
      13,    18,    20,    21,    26,    27,    36,    45,    50,    51,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      93,    94,    97,    98,   104,     7,    99,   100,   101,   104,
      48,    47,    50,   104,    38,    51,    47,    92,    45,    45,
       7,     7,    80,    94,    94,    94,    94,    94,    80,    51,
      38,    39,    40,    41,    42,    43,    53,    37,    35,    34,
      28,    29,    30,    31,    32,    33,    20,    21,    22,    23,
      25,    44,    95,    96,    26,    27,     7,    46,    52,     7,
      48,     7,    80,    80,    47,    83,    83,    45,    47,    92,
      46,    81,    81,    81,    81,    81,    81,    82,    85,    86,
      87,    88,    88,    89,    89,    89,    89,    90,    90,    91,
      91,    91,     7,    38,    49,   101,    45,    51,    48,    80,
      46,    46,    80,   102,   103,    54,    45,    80,    70,    99,
      48,    49,    49,    71,    46,    52,    82,   102,    50,    46,
      70,    70,   103,    46,    49,    50,    50,    70,     9,    78,
      50,    49,    77,    70,    50
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
#line 92 "grammar.y"
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
#line 108 "grammar.y"
    {
		(yyval.string) = (yyvsp[(3) - (3)].string);
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 114 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 119 "grammar.y"
    {
		tList * imports = newImports();
		(yyval.void_pointer) = imports;
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 126 "grammar.y"
    {
		tImport * import = newImport((yyvsp[(2) - (3)].void_pointer));
		(yyval.void_pointer) = import;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 133 "grammar.y"
    {
		char ** aux = malloc(sizeof(char *));
		aux = memcpy(aux, &(yyvsp[(3) - (3)].string), sizeof(char *));
		_addElement((yyvsp[(1) - (3)].void_pointer), aux);
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 140 "grammar.y"
    {
		char ** aux = malloc(sizeof(char *));
		aux = memcpy(aux, &(yyvsp[(1) - (1)].string), sizeof(char *));
		tList * importElems = newImportElems(aux);
		(yyval.void_pointer) = importElems;
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 148 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 153 "grammar.y"
    {
		initPendingClasses();
		tList * classes = newClasses();
		(yyval.void_pointer) = classes;
	}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 161 "grammar.y"
    {
		tMain * main = newMain((yyvsp[(5) - (6)].void_pointer));
		(yyval.void_pointer) = main;
	}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 170 "grammar.y"
    {
		tClass * class = newClass((yyvsp[(2) - (7)].string), (yyvsp[(4) - (7)].void_pointer), (yyvsp[(5) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = class;
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 175 "grammar.y"
    {
		tClass * class = newClass((yyvsp[(2) - (6)].string), (yyvsp[(4) - (6)].void_pointer), newConstructors(NULL), (yyvsp[(5) - (6)].void_pointer));
		(yyval.void_pointer) = class;
	}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 184 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 189 "grammar.y"
    {
		tList * properties = newProperties();
		(yyval.void_pointer) = properties;
	}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 196 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (3)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (3)].void_pointer));
		}
		tProperty * property = newProperty((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), NULL);
		(yyval.void_pointer) = property;
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 204 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (5)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (5)].void_pointer));
		}
		tProperty * property = newProperty((yyvsp[(1) - (5)].void_pointer), (yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].void_pointer));
		(yyval.void_pointer) = property;
	}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 216 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 221 "grammar.y"
    {
		tList * constructors = newConstructors();
		_addElement(constructors, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = constructors;
	}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 229 "grammar.y"
    {
		tConstructor * constructor = newConstructor((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = constructor;
	}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 238 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 243 "grammar.y"
    {
		tList * methods = newMethods();
		(yyval.void_pointer) = methods;
	}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 250 "grammar.y"
    {
		if (!isType((yyvsp[(2) - (9)].void_pointer))) {
			addPendingClass((yyvsp[(2) - (9)].void_pointer));
		}
		tMethod * method = newMethod((yyvsp[(2) - (9)].void_pointer), (yyvsp[(3) - (9)].string), (yyvsp[(5) - (9)].void_pointer), (yyvsp[(8) - (9)].void_pointer));
		(yyval.void_pointer) = method;
	}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 262 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 267 "grammar.y"
    {
		tList * instrs = newInstrs();
		(yyval.void_pointer) = instrs;
	}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 274 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		(yyval.void_pointer) = instr;
	}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 279 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 283 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 287 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 293 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 297 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 301 "grammar.y"
    {
		tInstrSimple * instrSimple = newInstrSimple((yyvsp[(1) - (1)].void_pointer));
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		(yyval.void_pointer) = instr;
	}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 309 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_IF, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = instr;
	}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 316 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_WHILE, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = instr;
	}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 323 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (2)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (2)].void_pointer)); // TODO!
		}
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 332 "grammar.y"
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

  case 37:

/* Line 1806 of yacc.c  */
#line 344 "grammar.y"
    {
		tInstrReturn * instrReturn = newInstrReturn((yyvsp[(2) - (2)].void_pointer));
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		(yyval.void_pointer) = instr;
	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 354 "grammar.y"
    {
		tInstrIf * instrIf = newInstrIf((yyvsp[(3) - (8)].void_pointer), (yyvsp[(6) - (8)].void_pointer), (yyvsp[(8) - (8)].void_pointer));
		(yyval.void_pointer) = instrIf;
	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 361 "grammar.y"
    {
		tInstrElse * instrElse = newInstrElse(NULL, (yyvsp[(3) - (4)].void_pointer));
		(yyval.void_pointer) = instrElse;
	}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 366 "grammar.y"
    {
		tInstrElse * instrElse = newInstrElse((yyvsp[(2) - (2)].void_pointer), NULL);
		(yyval.void_pointer) = instrElse;
	}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 371 "grammar.y"
    {
		(yyval.void_pointer) = NULL;
	}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 379 "grammar.y"
    {
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[(3) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = instrWhile;
	}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 384 "grammar.y"
    {
		tList * instrs = newInstrs();
		_addElement(instrs, (yyvsp[(5) - (5)].void_pointer));
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[(3) - (5)].void_pointer), instrs);
		(yyval.void_pointer) = instrWhile;
	}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 398 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 406 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 410 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 416 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 422 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 428 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 434 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 440 "grammar.y"
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 450 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 460 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 466 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 470 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 478 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 482 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 490 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 494 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 504 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 508 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 514 "grammar.y"
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 522 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 526 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 532 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 538 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 544 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 554 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 558 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 564 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 572 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 576 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 582 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 588 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (3)].void_pointer), (yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 598 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 602 "grammar.y"
    {
		if (!isTypeName((yyvsp[(2) - (5)].string))) {
			addPendingClassName((yyvsp[(2) - (5)].string)); // TODO!
		}
		tObjectCreation * objCreation = newObjCreation((yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_CREATION, objCreation);
		(yyval.void_pointer) = expr;
	}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 611 "grammar.y"
    {
		if (!isTypeName((yyvsp[(2) - (3)].string))) {
			addPendingClassName((yyvsp[(2) - (3)].string)); // TODO!
		}
		tArrayCreationExpr * arrayCreationExpr = newArrayCreationExpr((yyvsp[(2) - (3)].string), (yyvsp[(3) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_ARRAY_CREATION, arrayCreationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 622 "grammar.y"
    {
		(yyval.void_pointer) = newSizes((yyvsp[(2) - (3)].void_pointer));
	}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 626 "grammar.y"
    {
		_addElement((yyvsp[(1) - (4)].void_pointer), (yyvsp[(3) - (4)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (4)].void_pointer);
	}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 635 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 639 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 645 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 651 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 657 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 663 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 673 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 677 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 683 "grammar.y"
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 689 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (2)].void_pointer), NULL, (yyvsp[(2) - (2)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 695 "grammar.y"
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[(1) - (2)].void_pointer), NULL, (yyvsp[(2) - (2)].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 703 "grammar.y"
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[(2) - (2)].string), NULL);
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 711 "grammar.y"
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[(2) - (5)].string), (yyvsp[(4) - (5)].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 721 "grammar.y"
    {
		tBuiltInExpr * builtIn = (yyvsp[(1) - (1)].void_pointer);
		tExpr * expr = newExpr(EXPR_BUILT_IN, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = expr;
	}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 727 "grammar.y"
    {
		tIdentifier * identifier = newIdentifier((yyvsp[(1) - (1)].string));
		tExpr * expr = newExpr(EXPR_IDENTIFIER, identifier);
		(yyval.void_pointer) = expr;
	}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 733 "grammar.y"
    {
		tParenthesisExpr * parenthesisExpr = newParenthesisExpr((yyvsp[(2) - (3)].void_pointer));
		tExpr * expr = newExpr(EXPR_PARENTHESIS, parenthesisExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 739 "grammar.y"
    {
		tArrayExpr * arrayExpr = newArrayExpr((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].void_pointer));
		tExpr * expr = newExpr(EXPR_ARRAY, arrayExpr);
		(yyval.void_pointer) = expr;
	}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 747 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_INT, &(yyvsp[(1) - (1)].integer), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 752 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_BOOLEAN, &(yyvsp[(1) - (1)].boolean), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 757 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_CHAR, &(yyvsp[(1) - (1)].character), sizeof(char));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 762 "grammar.y"
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_STRING, (yyvsp[(1) - (1)].string), strlen((yyvsp[(1) - (1)].string)) + 1);
		free((yyvsp[(1) - (1)].string));
		(yyval.void_pointer) = builtIn;
	}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 772 "grammar.y"
    {
		tList * defParams = newDefParams();
		(yyval.void_pointer) = defParams;
	}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 777 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 783 "grammar.y"
    {
		tList * defParams = newDefParams();
		_addElement(defParams, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = defParams;
	}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 789 "grammar.y"
    {
		_addElement((yyvsp[(1) - (3)].void_pointer), (yyvsp[(3) - (3)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 796 "grammar.y"
    {
		if (!isType((yyvsp[(1) - (2)].void_pointer))) {
			addPendingClass((yyvsp[(1) - (2)].void_pointer)); // TODO!
		}
		tDefParam * defParam = newDefParam((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].string));
		(yyval.void_pointer) = defParam;
	}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 806 "grammar.y"
    {
		tList * params = newParams();
		(yyval.void_pointer) = params;
	}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 811 "grammar.y"
    {
		tList * params = newParams();
		_addElement(params, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = params;
	}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 817 "grammar.y"
    {
		_addElement((yyvsp[(1) - (3)].void_pointer), (yyvsp[(3) - (3)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 824 "grammar.y"
    {
		tParam * param = newParam((yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = param;
	}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 831 "grammar.y"
    {
		(yyval.void_pointer) = newType((yyvsp[(1) - (1)].string));
	}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 836 "grammar.y"
    {
		tType * type = newType((yyvsp[(1) - (2)].string));
		addBrackets(type, (yyvsp[(2) - (2)].integer));
		(yyval.void_pointer) = type;
	}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 844 "grammar.y"
    {
		(yyval.integer) = 1;
	}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 848 "grammar.y"
    {
		(yyval.integer) = (yyvsp[(1) - (3)].integer) + 1;
	}
    break;



/* Line 1806 of yacc.c  */
#line 2906 "y.tab.c"
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
#line 853 "grammar.y"
	

