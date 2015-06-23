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

/* Line 293 of yacc.c  */
#line 30 "grammar.y"

        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;



/* Line 293 of yacc.c  */
#line 250 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 262 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    17,    25,    32,    35,
      36,    40,    46,    49,    51,    59,    62,    63,    73,    76,
      77,    79,    82,    84,    86,    88,    90,    92,    94,    96,
      99,   104,   107,   116,   121,   124,   125,   133,   139,   141,
     143,   147,   151,   155,   159,   163,   167,   169,   175,   177,
     179,   183,   185,   189,   191,   195,   197,   201,   205,   207,
     211,   215,   219,   223,   225,   229,   233,   235,   239,   243,
     247,   249,   255,   257,   260,   263,   266,   269,   272,   274,
     277,   280,   283,   286,   289,   293,   295,   297,   301,   303,
     305,   307,   309,   310,   312,   314,   318,   321,   322,   324,
     328
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    56,    -1,    55,    57,    -1,    -1,
      17,    43,    44,    47,    64,    48,    -1,    14,     7,    47,
      58,    60,    62,    48,    -1,    14,     7,    47,    58,    62,
      48,    -1,    58,    59,    -1,    -1,     7,     7,    49,    -1,
       7,     7,    36,    74,    49,    -1,    60,    61,    -1,    61,
      -1,     7,    43,    92,    44,    47,    64,    48,    -1,    62,
      63,    -1,    -1,    15,     7,     7,    43,    92,    44,    47,
      64,    48,    -1,    64,    65,    -1,    -1,    49,    -1,    66,
      49,    -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,
      74,    -1,    71,    -1,    73,    -1,     7,     7,    -1,     7,
       7,    36,    74,    -1,    16,    74,    -1,     8,    43,    77,
      44,    47,    64,    48,    72,    -1,     9,    47,    64,    48,
      -1,     9,    71,    -1,    -1,    11,    43,    77,    44,    47,
      64,    48,    -1,    11,    43,    77,    44,    65,    -1,    75,
      -1,    76,    -1,    76,    36,    75,    -1,    76,    37,    75,
      -1,    76,    38,    75,    -1,    76,    39,    75,    -1,    76,
      40,    75,    -1,    76,    41,    75,    -1,    77,    -1,    77,
      51,    76,    52,    76,    -1,    78,    -1,    79,    -1,    78,
      35,    79,    -1,    80,    -1,    79,    33,    80,    -1,    81,
      -1,    80,    32,    81,    -1,    82,    -1,    81,    26,    82,
      -1,    81,    27,    82,    -1,    83,    -1,    82,    28,    83,
      -1,    82,    29,    83,    -1,    82,    30,    83,    -1,    82,
      31,    83,    -1,    84,    -1,    83,    18,    84,    -1,    83,
      19,    84,    -1,    85,    -1,    84,    20,    85,    -1,    84,
      21,    85,    -1,    84,    23,    85,    -1,    86,    -1,    13,
       7,    43,    95,    44,    -1,    87,    -1,    24,    87,    -1,
      25,    87,    -1,    18,    87,    -1,    19,    87,    -1,    34,
      87,    -1,    90,    -1,    90,    24,    -1,    90,    25,    -1,
      87,    89,    -1,    87,    88,    -1,    42,    90,    -1,    43,
      95,    44,    -1,    91,    -1,     7,    -1,    43,    74,    44,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,    -1,
      93,    -1,    94,    -1,    93,    50,    94,    -1,     7,     7,
      -1,    -1,    96,    -1,    95,    50,    96,    -1,    74,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    94,    99,   106,   115,   120,   129,   134,
     141,   146,   155,   160,   168,   177,   182,   189,   198,   203,
     210,   215,   219,   223,   229,   233,   237,   245,   251,   257,
     263,   271,   281,   289,   294,   299,   307,   313,   328,   334,
     336,   338,   340,   342,   344,   346,   352,   354,   360,   364,
     366,   370,   372,   376,   378,   384,   386,   388,   392,   394,
     396,   398,   400,   406,   408,   410,   414,   416,   418,   420,
     426,   428,   434,   436,   438,   440,   442,   444,   450,   452,
     454,   456,   458,   462,   466,   472,   474,   476,   480,   482,
     484,   486,   492,   497,   503,   509,   516,   522,   525,   527,
     531
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "BOOLEAN", "CHAR", "STRING",
  "IDENTIFIER", "IF", "ELSE", "FOR", "WHILE", "CONST", "NEW", "CLASS",
  "METHOD", "RETURN", "MAIN", "OP_PLUS", "OP_MINUS", "OP_MULTIPLICATION",
  "OP_DIVITION", "OP_EXP", "OP_MODULO", "OP_PLUS_PLUS", "OP_MINUS_MINUS",
  "OP_EQ", "OP_NE", "OP_GE", "OP_LE", "OP_GT", "OP_LT", "OP_AND", "OP_OR",
  "OP_NOT", "OP_IMPLIES", "OP_ASSIGN", "OP_PLUS_SH", "OP_MINUS_SH",
  "OP_MULT_SH", "OP_DIV_SH", "OP_MOD_SH", "OP_PROP", "LPAR", "RPAR",
  "LBRA", "RBRA", "LCUR", "RCUR", "SEMC", "COMA", "COND_QUES", "COND_COLN",
  "$accept", "program", "classes", "main", "class",
  "class_instance_properties", "class_instance_property",
  "class_constructors", "class_constructor", "class_instance_methods",
  "class_instance_method", "instr_set", "instr", "instr_simple",
  "instr_conditional", "instr_loop", "instr_declaration", "instr_return",
  "block_if", "block_else", "block_while", "expr", "expr_assignment",
  "expr_conditional", "expr_boolean", "expr_implies", "expr_or",
  "expr_and", "expr_equality", "expr_order", "expr_additive",
  "expr_multiplicative", "expr_object_creation",
  "expr_pre_additive_sign_and_not", "expr_post_additive_or_access",
  "property_access", "method_call", "expr_basic", "built_in",
  "parameters_def", "parameters_def_2", "parameter_def", "parameters",
  "parameter", 0
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    62,    62,    63,    64,    64,
      65,    65,    65,    65,    66,    66,    66,    67,    68,    69,
      69,    70,    71,    72,    72,    72,    73,    73,    74,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    83,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    88,    89,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    95,    95,    95,
      96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     6,     7,     6,     2,     0,
       3,     5,     2,     1,     7,     2,     0,     9,     2,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     2,     8,     4,     2,     0,     7,     5,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     5,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     5,     1,     2,     2,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     3,     1,     1,     3,     1,     1,
       1,     1,     0,     1,     1,     3,     2,     0,     1,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       9,     0,    16,    19,     0,     8,    16,    13,     0,     0,
       0,    92,     0,    12,     0,     0,     7,    15,    88,    89,
      90,    91,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,    20,    18,     0,    22,    23,    24,
      25,    27,    28,    26,    38,    39,    46,    48,    49,    51,
      53,    55,    58,    63,    66,    70,    72,    78,    85,     0,
      10,     0,     0,    93,    94,     6,     0,    29,     0,     0,
       0,    86,    31,    75,    76,    73,    74,    77,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    82,    81,    79,    80,     0,    96,     0,
       0,     0,     0,     0,     0,    97,    87,    40,    41,    42,
      43,    44,    45,     0,    50,    52,    54,    56,    57,    59,
      60,    61,    62,    64,    65,    67,    68,    69,    83,   100,
       0,    98,    11,    19,    95,    92,    30,     0,     0,     0,
       0,    84,     0,     0,     0,    19,    19,    37,    71,    47,
      99,    14,     0,     0,     0,    19,    35,    36,     0,     0,
      32,    17,    19,    34,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    12,    15,    16,    17,    18,
      27,    19,    45,    46,    47,    48,    49,    50,    51,   180,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   113,   114,    67,    68,    72,
      73,    74,   150,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
     -96,    24,    60,   -96,    19,    -7,   -96,   -96,   -17,     6,
     -96,     1,    33,   -96,    -4,   -96,    57,   -96,   -13,     4,
     -31,    66,    23,   -96,   -11,    68,   -96,   -96,   -96,   -96,
     -96,   -96,    77,    45,    54,    92,   262,    64,    64,    64,
      64,    64,   262,   -96,   -96,   -96,    55,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   124,    73,    75,    96,   114,
      56,    30,    -5,    11,   -96,   -96,    59,    95,   -96,   262,
     -96,   141,   105,   101,   -96,   -96,   147,   119,   262,   262,
     113,   -96,   -96,    59,    59,    59,    59,    59,   122,   -96,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,    64,   262,   -96,   -96,   -96,   -96,   108,   -96,   120,
      66,   126,   262,   136,   144,   262,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   118,    96,   114,    56,    30,    30,    -5,
      -5,    -5,    -5,    11,    11,   -96,   -96,   -96,   -96,   -96,
     -25,   -96,   -96,   -96,   -96,    66,   -96,   131,    38,   -23,
     262,   -96,   262,    87,   145,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   138,   134,   168,   -96,   181,   -96,   202,     8,
     -96,   -96,   -96,   -96,   236,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   175,   184,
     -96,   -57,    43,   -96,   -96,   -96,   -96,   -96,    25,   -96,
     -96,   -36,   104,   -95,    44,   -96,   106,   116,   123,    27,
      29,    37,   -30,   -96,    76,   -96,   -96,   112,   -96,    69,
     -96,    99,   100,    50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      82,   133,    25,    20,    25,    69,    88,    28,    29,    30,
      31,    32,    33,   106,   107,    34,    33,    35,    70,   161,
      36,   168,    37,    38,     3,   162,     8,   162,    39,    40,
      10,   108,   109,   117,   110,    26,     9,    75,    41,    21,
      14,    28,    29,    30,    31,    32,    33,    42,    13,    34,
      11,    35,    43,    44,    36,   182,    37,    38,   102,   103,
     104,   105,    39,    40,    22,   169,    21,    28,    29,    30,
      31,    81,    41,    71,     4,    76,   149,     5,   145,   146,
     147,    42,   100,   101,    77,   166,   156,    44,    78,   149,
      28,    29,    30,    31,    32,    33,   163,    79,    34,    80,
      35,   111,   112,    36,    89,    37,    38,    42,   173,   174,
      97,    39,    40,    83,    84,    85,    86,    87,   178,   115,
     116,    41,   123,   124,    96,   184,   149,   137,   138,    98,
      42,   139,   140,   141,   142,   171,    44,    28,    29,    30,
      31,    32,    33,   143,   144,    34,    99,    35,   118,   119,
      36,   120,    37,    38,   121,   122,   125,   152,    39,    40,
      90,    91,    92,    93,    94,    95,   126,   153,    41,   155,
     160,    28,    29,    30,    31,    32,    33,    42,   165,    34,
     157,    35,   176,    44,    36,   175,    37,    38,   158,   172,
     179,    23,    39,    40,   127,   128,   129,   130,   131,   132,
      24,   167,    41,   134,   183,    28,    29,    30,    31,    32,
      33,    42,   170,    34,   135,    35,   177,    44,    36,   154,
      37,    38,   136,   148,   164,   159,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,     0,    28,
      29,    30,    31,    32,    33,    42,     0,    34,     0,    35,
     181,    44,    36,     0,    37,    38,     0,     0,     0,     0,
      39,    40,     0,     0,     0,    28,    29,    30,    31,    81,
      41,     0,     0,     0,     0,    35,     0,     0,     0,    42,
      37,    38,     0,     0,   185,    44,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-96))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      36,    96,    15,     7,    15,    36,    42,     3,     4,     5,
       6,     7,     8,    18,    19,    11,     8,    13,    49,    44,
      16,    44,    18,    19,     0,    50,     7,    50,    24,    25,
      47,    20,    21,    69,    23,    48,    43,    48,    34,    43,
       7,     3,     4,     5,     6,     7,     8,    43,    47,    11,
      44,    13,    48,    49,    16,    47,    18,    19,    28,    29,
      30,    31,    24,    25,     7,   160,    43,     3,     4,     5,
       6,     7,    34,     7,    14,     7,   112,    17,   108,   109,
     110,    43,    26,    27,     7,    47,   122,    49,    43,   125,
       3,     4,     5,     6,     7,     8,   153,    43,    11,     7,
      13,    42,    43,    16,    49,    18,    19,    43,   165,   166,
      35,    24,    25,    37,    38,    39,    40,    41,   175,    24,
      25,    34,    78,    79,    51,   182,   162,   100,   101,    33,
      43,   102,   103,   104,   105,    48,    49,     3,     4,     5,
       6,     7,     8,   106,   107,    11,    32,    13,     7,    44,
      16,    50,    18,    19,     7,    36,    43,    49,    24,    25,
      36,    37,    38,    39,    40,    41,    44,    47,    34,    43,
      52,     3,     4,     5,     6,     7,     8,    43,    47,    11,
      44,    13,    48,    49,    16,    47,    18,    19,    44,    44,
       9,    16,    24,    25,    90,    91,    92,    93,    94,    95,
      16,   158,    34,    97,   179,     3,     4,     5,     6,     7,
       8,    43,   162,    11,    98,    13,    48,    49,    16,   120,
      18,    19,    99,   111,   155,   125,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,     3,
       4,     5,     6,     7,     8,    43,    -1,    11,    -1,    13,
      48,    49,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      34,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    43,
      18,    19,    -1,    -1,    48,    49,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    14,    17,    56,    57,     7,    43,
      47,    44,    58,    47,     7,    59,    60,    61,    62,    64,
       7,    43,     7,    61,    62,    15,    48,    63,     3,     4,
       5,     6,     7,     8,    11,    13,    16,    18,    19,    24,
      25,    34,    43,    48,    49,    65,    66,    67,    68,    69,
      70,    71,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    90,    91,    36,
      49,     7,    92,    93,    94,    48,     7,     7,    43,    43,
       7,     7,    74,    87,    87,    87,    87,    87,    74,    49,
      36,    37,    38,    39,    40,    41,    51,    35,    33,    32,
      26,    27,    28,    29,    30,    31,    18,    19,    20,    21,
      23,    42,    43,    88,    89,    24,    25,    74,     7,    44,
      50,     7,    36,    77,    77,    43,    44,    75,    75,    75,
      75,    75,    75,    76,    79,    80,    81,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    85,    90,    74,
      95,    96,    49,    47,    94,    43,    74,    44,    44,    95,
      52,    44,    50,    64,    92,    47,    47,    65,    44,    76,
      96,    48,    44,    64,    64,    47,    48,    48,    64,     9,
      72,    48,    47,    71,    64,    48
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
#line 84 "grammar.y"
    {
		tProgram * program = newProgram();
		addClasses(program, (yyvsp[(1) - (2)].void_pointer));
		addMain(program, (yyvsp[(2) - (2)].void_pointer));
		printProgram(program);
		//deleteProgram(program);
	}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 94 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 99 "grammar.y"
    {
		tList * classes = newClasses();
		(yyval.void_pointer) = classes;
	}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 106 "grammar.y"
    {
		tMain * main = newMain("nombreMain");
		(yyval.void_pointer) = main;
	}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 115 "grammar.y"
    {
		tClass * class = newClass((yyvsp[(2) - (7)].string), (yyvsp[(4) - (7)].void_pointer), (yyvsp[(5) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = class;
	}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 120 "grammar.y"
    {
		tClass * class = newClass((yyvsp[(2) - (6)].string), (yyvsp[(4) - (6)].void_pointer), newConstructors(NULL), (yyvsp[(5) - (6)].void_pointer));
		(yyval.void_pointer) = class;
	}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 129 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 134 "grammar.y"
    {
		tList * properties = newProperties();
		(yyval.void_pointer) = properties;
	}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 141 "grammar.y"
    {
		tProperty * property = newProperty((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string), NULL);
		(yyval.void_pointer) = property;
	}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 146 "grammar.y"
    {
		tProperty * property = newProperty((yyvsp[(1) - (5)].string), (yyvsp[(2) - (5)].string), NULL);
		(yyval.void_pointer) = property;
	}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 155 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 160 "grammar.y"
    {
		tList * constructors = newConstructors();
		_addElement(constructors, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = constructors;
	}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 168 "grammar.y"
    {
		tConstructor * constructor = newConstructor((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].void_pointer), (yyvsp[(6) - (7)].void_pointer));
		(yyval.void_pointer) = constructor;
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 177 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 182 "grammar.y"
    {
		tList * methods = newMethods();
		(yyval.void_pointer) = methods;
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 189 "grammar.y"
    {
		tMethod * method = newMethod((yyvsp[(2) - (9)].string), (yyvsp[(3) - (9)].string), (yyvsp[(5) - (9)].void_pointer), (yyvsp[(8) - (9)].void_pointer));
		(yyval.void_pointer) = method;
	}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 198 "grammar.y"
    {
		_addElement((yyvsp[(1) - (2)].void_pointer), (yyvsp[(2) - (2)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 203 "grammar.y"
    {
		tList * instrs = newInstrs();
		(yyval.void_pointer) = instrs;
	}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 210 "grammar.y"
    {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		(yyval.void_pointer) = instr;
	}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 215 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (2)].void_pointer);
	}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 219 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 223 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 229 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 233 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 237 "grammar.y"
    {
		tInstrSimple * instrSimple = newInstrSimple(NULL);
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		(yyval.void_pointer) = instr;
	}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 245 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 251 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 257 "grammar.y"
    {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 263 "grammar.y"
    {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[(1) - (4)].string), (yyvsp[(2) - (4)].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 271 "grammar.y"
    {
		tInstrReturn * instrReturn = newInstrReturn(NULL);
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		(yyval.void_pointer) = instr;
	}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 281 "grammar.y"
    {
		tInstrIf * instrIf = newInstrIf(NULL, (yyvsp[(6) - (8)].void_pointer), (yyvsp[(8) - (8)].void_pointer));
		tInstr * instr = newInstr(INSTR_IF, instrIf);
		(yyval.void_pointer) = instr;
	}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 289 "grammar.y"
    {
		tInstrElse * instrElse = newInstrElse(NULL, (yyvsp[(3) - (4)].void_pointer));
		(yyval.void_pointer) = instrElse;
	}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 294 "grammar.y"
    {
		tInstrElse * instrElse = newInstrElse((yyvsp[(2) - (2)].void_pointer), NULL);
		(yyval.void_pointer) = instrElse;
	}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 299 "grammar.y"
    {
		(yyval.void_pointer) = NULL;
	}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 307 "grammar.y"
    {
		tInstrWhile * instrWhile = newInstrWhile(NULL, (yyvsp[(6) - (7)].void_pointer));
		tInstr * instr = newInstr(INSTR_WHILE, instrWhile);
		(yyval.void_pointer) = instr;
	}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 313 "grammar.y"
    {
		tList * instrs = newInstrs();
		_addElement(instrs, (yyvsp[(5) - (5)].void_pointer));
		tInstrWhile * instrWhile = newInstrWhile(NULL, instrs);
		tInstr * instr = newInstr(INSTR_WHILE, instrWhile);
		(yyval.void_pointer) = instr;
	}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 492 "grammar.y"
    {
		tList * defParams = newDefParams();
		(yyval.void_pointer) = defParams;
	}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 497 "grammar.y"
    {
		(yyval.void_pointer) = (yyvsp[(1) - (1)].void_pointer);
	}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 503 "grammar.y"
    {
		tList * defParams = newDefParams();
		_addElement(defParams, (yyvsp[(1) - (1)].void_pointer));
		(yyval.void_pointer) = defParams;
	}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 509 "grammar.y"
    {
		_addElement((yyvsp[(1) - (3)].void_pointer), (yyvsp[(3) - (3)].void_pointer));
		(yyval.void_pointer) = (yyvsp[(1) - (3)].void_pointer);
	}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 516 "grammar.y"
    {
		tDefParam * defParam = newDefParam((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
		(yyval.void_pointer) = defParam;
	}
    break;



/* Line 1806 of yacc.c  */
#line 2109 "y.tab.c"
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
#line 535 "grammar.y"
	

