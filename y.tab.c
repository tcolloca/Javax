/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "grammar.y" /* yacc.c:339  */

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


#line 94 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 30 "grammar.y" /* yacc.c:355  */

        int integer;
        int boolean;
        char * string;
        char character;
        void * void_pointer;

#line 252 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 267 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,   108,   114,   119,   126,   133,   140,   148,
     153,   161,   170,   175,   182,   187,   195,   200,   207,   215,
     227,   232,   240,   249,   254,   261,   273,   278,   285,   290,
     294,   298,   304,   308,   312,   320,   327,   334,   343,   355,
     365,   372,   377,   382,   390,   395,   409,   417,   421,   427,
     433,   439,   445,   451,   461,   465,   471,   477,   481,   489,
     493,   501,   505,   515,   519,   525,   533,   537,   543,   549,
     555,   565,   569,   575,   583,   587,   593,   599,   609,   613,
     622,   633,   637,   646,   650,   656,   662,   668,   674,   684,
     688,   694,   700,   706,   714,   722,   732,   738,   744,   750,
     758,   763,   768,   773,   783,   788,   794,   800,   807,   817,
     822,   828,   835,   842,   847,   855,   859
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "BOOLEAN", "CHAR", "STRING",
  "IDENTIFIER", "IF", "ELSE", "FOR", "WHILE", "CONST", "NEW", "IMPORT",
  "EXTENDS", "CLASS", "METHOD", "PROGRAM", "RETURN", "MAIN", "OP_PLUS",
  "OP_MINUS", "OP_MULTIPLICATION", "OP_DIVITION", "OP_EXP", "OP_MODULO",
  "OP_PLUS_PLUS", "OP_MINUS_MINUS", "OP_EQ", "OP_NE", "OP_GE", "OP_LE",
  "OP_GT", "OP_LT", "OP_AND", "OP_OR", "OP_NOT", "OP_IMPLIES", "OP_ASSIGN",
  "OP_PLUS_SH", "OP_MINUS_SH", "OP_MULT_SH", "OP_DIV_SH", "OP_MOD_SH",
  "OP_PROP", "LPAR", "RPAR", "LBRA", "RBRA", "LCUR", "RCUR", "SEMC",
  "COMA", "COND_QUES", "COND_COLN", "$accept", "program", "program_name",
  "imports", "import", "import_element", "classes", "main", "class",
  "extends", "class_instance_properties", "class_instance_property",
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
  "parameter", "type", "brackets", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -114

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,   -19,    44,  -140,    48,  -140,    37,  -140,    62,  -140,
      15,  -140,   -23,    65,    57,  -140,  -140,    89,  -140,    96,
      66,  -140,   116,    84,    90,  -140,  -140,  -140,   124,     6,
     -25,  -140,   134,  -140,    -9,   136,  -140,  -140,  -140,  -140,
      -1,    91,    99,   139,   282,    34,    34,    34,    34,    34,
     282,  -140,  -140,  -140,    95,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,    50,    97,   112,   113,   117,    70,    28,
      87,    81,  -140,  -140,   109,    93,  -140,   148,   149,   110,
     122,   114,  -140,    -2,   149,  -140,  -140,   -36,   271,   123,
     282,   282,   -16,   125,  -140,   109,   109,   109,   109,   109,
     137,  -140,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   151,  -140,  -140,  -140,  -140,   142,   138,
     140,   132,  -140,   183,  -140,   150,  -140,   184,   282,  -140,
     152,   282,   156,   157,   282,   282,   123,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   154,   113,   117,    70,    28,    28,
      87,    87,    87,    87,    81,    81,  -140,  -140,  -140,   159,
     282,   164,   149,  -140,  -140,   160,   163,  -140,   169,   177,
      60,  -140,   -29,  -140,   282,   282,  -140,  -140,  -140,   149,
    -140,  -140,  -140,  -140,  -140,  -140,   282,  -140,   -27,   111,
     172,   161,   189,  -140,  -140,  -140,   179,   222,  -140,  -140,
      -4,  -140,   217,  -140,  -140,  -140,   245,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,    10,     3,     0,     4,
       0,     8,     0,     0,     0,     2,     9,     0,     6,    15,
       0,     7,     0,     0,     0,    14,    17,    27,    24,     0,
     113,    16,    24,    21,     0,     0,   100,   101,   102,   103,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    28,    26,     0,    30,    31,    32,    33,    35,
      36,    34,    46,    47,    54,    56,    57,    59,    61,    63,
      66,    71,    74,    78,    83,    89,    96,     0,   104,     0,
     114,     0,    20,     0,     0,    13,    23,     0,     0,    99,
       0,     0,     0,    97,    39,    86,    87,    84,    85,    88,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    92,    90,    91,    37,   113,
       0,   105,   106,     0,   115,     0,    12,     0,     0,    18,
       0,     0,     0,     0,   109,     0,    80,    98,    48,    49,
      50,    51,    52,    53,     0,    58,    60,    62,    64,    65,
      67,    68,    69,    70,    72,    73,    75,    76,    77,    94,
       0,     0,     0,   108,   116,     0,     0,    81,     0,     0,
       0,   112,     0,   110,     0,   109,    38,    27,   107,   104,
      19,    82,    27,    27,    45,    79,     0,    55,     0,     0,
       0,     0,     0,   111,    95,    22,     0,    43,    44,    27,
       0,    40,     0,    27,    42,    25,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,   200,   201,  -140,  -139,    54,  -140,  -140,
    -140,  -140,  -140,    27,  -140,  -140,   -43,   209,  -106,    35,
    -140,   133,   145,   135,    16,   -31,    17,   -45,   155,  -140,
     130,  -140,  -140,  -140,  -140,    68,  -140,    71,    74,    64,
     -28,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     9,    12,    10,    15,    16,    23,
      28,    31,    32,    33,    34,    86,    29,    53,    54,    55,
      56,    57,    58,    59,   211,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    89,    73,
      74,   124,   125,    75,    76,   130,   131,   132,   182,   183,
      77,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    94,   154,   138,    41,     1,  -113,   100,    84,    36,
      37,    38,    39,    40,    41,    84,   139,    42,   195,    43,
     204,    78,    17,    79,   196,    44,   196,    45,    46,    18,
     144,    13,   145,    47,    48,    14,     4,    36,    37,    38,
      39,    93,    85,    49,     5,   140,   213,    88,   199,   136,
     133,     8,    50,   201,   202,     7,   137,    51,    52,   114,
     115,   116,   117,    36,    37,    38,    39,    40,    41,    11,
     212,    42,    19,    43,   216,   166,   167,   168,   197,    44,
      50,    45,    46,   160,   161,   162,   163,    47,    48,   102,
     103,   104,   105,   106,   107,   176,    21,    49,   178,   112,
     113,   181,   140,    20,   120,   121,    50,   122,   118,   119,
     193,    22,    52,    24,    36,    37,    38,    39,    40,    41,
     126,   127,    42,    25,    43,   142,   143,   186,   158,   159,
      44,    30,    45,    46,    26,   164,   165,    90,    47,    48,
      27,    81,   181,    87,   133,    91,    92,   101,    49,   110,
     109,   108,   111,   181,   123,   128,   129,    50,   169,   134,
      78,   133,   205,    52,    36,    37,    38,    39,    40,    41,
     135,   141,    42,   145,    43,    95,    96,    97,    98,    99,
      44,   170,    45,    46,   147,   172,    79,   171,    47,    48,
     173,   175,    36,    37,    38,    39,    40,    41,    49,   174,
      42,   177,    43,   179,   180,   185,   189,    50,    44,   184,
      45,    46,   207,    52,   187,   190,    47,    48,   191,   206,
      36,    37,    38,    39,    40,    41,    49,   192,    42,   209,
      43,   210,    82,    83,   194,    50,    44,   214,    45,    46,
     208,    52,   155,   188,    47,    48,   157,   146,    36,    37,
      38,    39,    40,    41,    49,   156,    42,   200,    43,   198,
     203,     0,     0,    50,    44,     0,    45,    46,   215,    52,
       0,     0,    47,    48,    36,    37,    38,    39,    93,     0,
       0,     0,    49,     0,    43,    36,    37,    38,    39,    93,
       0,    50,    45,    46,     0,    43,   217,    52,    47,    48,
       0,     0,     0,    45,    46,     0,     0,     0,    49,    47,
      48,   148,   149,   150,   151,   152,   153,    50,     0,    49,
     134,     0,     0,     0,     0,     0,     0,     0,    50
};

static const yytype_int16 yycheck[] =
{
      28,    44,   108,    39,     8,    18,     7,    50,    17,     3,
       4,     5,     6,     7,     8,    17,    52,    11,    47,    13,
      47,    46,    45,    48,    53,    19,    53,    21,    22,    52,
      46,    16,    48,    27,    28,    20,    55,     3,     4,     5,
       6,     7,    51,    37,     0,    88,    50,    48,   187,    51,
      78,    14,    46,   192,   193,     7,    84,    51,    52,    31,
      32,    33,    34,     3,     4,     5,     6,     7,     8,     7,
     209,    11,     7,    13,   213,   120,   121,   122,   184,    19,
      46,    21,    22,   114,   115,   116,   117,    27,    28,    39,
      40,    41,    42,    43,    44,   138,     7,    37,   141,    29,
      30,   144,   145,    46,    23,    24,    46,    26,    21,    22,
      50,    15,    52,    47,     3,     4,     5,     6,     7,     8,
      27,    28,    11,     7,    13,    90,    91,   170,   112,   113,
      19,     7,    21,    22,    50,   118,   119,    46,    27,    28,
      50,     7,   185,     7,   172,    46,     7,    52,    37,    36,
      38,    54,    35,   196,    45,     7,     7,    46,     7,    49,
      46,   189,    51,    52,     3,     4,     5,     6,     7,     8,
      48,    48,    11,    48,    13,    45,    46,    47,    48,    49,
      19,    39,    21,    22,    47,    53,    48,    47,    27,    28,
       7,     7,     3,     4,     5,     6,     7,     8,    37,    49,
      11,    49,    13,    47,    47,    46,    46,    46,    19,    55,
      21,    22,    51,    52,    50,    52,    27,    28,    49,    47,
       3,     4,     5,     6,     7,     8,    37,    50,    11,    50,
      13,     9,    32,    32,   180,    46,    19,   210,    21,    22,
      51,    52,   109,   172,    27,    28,   111,    92,     3,     4,
       5,     6,     7,     8,    37,   110,    11,   189,    13,   185,
     196,    -1,    -1,    46,    19,    -1,    21,    22,    51,    52,
      -1,    -1,    27,    28,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    37,    -1,    13,     3,     4,     5,     6,     7,
      -1,    46,    21,    22,    -1,    13,    51,    52,    27,    28,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    37,    27,
      28,   102,   103,   104,   105,   106,   107,    46,    -1,    37,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    57,    58,    55,     0,    59,     7,    14,    60,
      62,     7,    61,    16,    20,    63,    64,    45,    52,     7,
      46,     7,    15,    65,    47,     7,    50,    50,    66,    72,
       7,    67,    68,    69,    70,   106,     3,     4,     5,     6,
       7,     8,    11,    13,    19,    21,    22,    27,    28,    37,
      46,    51,    52,    73,    74,    75,    76,    77,    78,    79,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    95,    96,    99,   100,   106,    46,    48,
     107,     7,    69,    70,    17,    51,    71,     7,    48,    94,
      46,    46,     7,     7,    82,    96,    96,    96,    96,    96,
      82,    52,    39,    40,    41,    42,    43,    44,    54,    38,
      36,    35,    29,    30,    31,    32,    33,    34,    21,    22,
      23,    24,    26,    45,    97,    98,    27,    28,     7,     7,
     101,   102,   103,   106,    49,    48,    51,   106,    39,    52,
      82,    48,    85,    85,    46,    48,    94,    47,    83,    83,
      83,    83,    83,    83,    84,    87,    88,    89,    90,    90,
      91,    91,    91,    91,    92,    92,    93,    93,    93,     7,
      39,    47,    53,     7,    49,     7,    82,    49,    82,    47,
      47,    82,   104,   105,    55,    46,    82,    50,   103,    46,
      52,    49,    50,    50,    73,    47,    53,    84,   104,    72,
     101,    72,    72,   105,    47,    51,    47,    51,    51,    50,
       9,    80,    72,    50,    79,    51,    72,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    59,    60,    61,    61,    62,
      62,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    70,    70,    71,    72,    72,    73,    73,
      73,    73,    74,    74,    74,    75,    76,    77,    77,    78,
      79,    80,    80,    80,    81,    81,    82,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    90,    90,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    97,    98,    99,    99,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   102,   103,   104,
     104,   104,   105,   106,   106,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       1,     1,     1,     1,     0,     1,     1,     3,     2,     0,
       1,     3,     1,     1,     2,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 92 "grammar.y" /* yacc.c:1646  */
    {
		tProgram * program = newProgram((yyvsp[-3].string));
		addImports(program, (yyvsp[-2].void_pointer));
		addClasses(program, (yyvsp[-1].void_pointer));
		addMain(program, (yyvsp[0].void_pointer));
		if (!checkPendingClasses()) {
			printUknownTypes();
		}
		printProgram(program);
		deleteProgram(program);
		deletePendingClasses();
		deleteClassesMap();
	}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 108 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.string) = (yyvsp[0].string);
	}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 114 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 119 "grammar.y" /* yacc.c:1646  */
    {
		tList * imports = newImports();
		(yyval.void_pointer) = imports;
	}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 126 "grammar.y" /* yacc.c:1646  */
    {
		tImport * import = newImport((yyvsp[-1].void_pointer));
		(yyval.void_pointer) = import;
	}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 133 "grammar.y" /* yacc.c:1646  */
    {
		char ** aux = malloc(sizeof(char *));
		aux = memcpy(aux, &(yyvsp[0].string), sizeof(char *));
		_addElement((yyvsp[-2].void_pointer), aux);
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 140 "grammar.y" /* yacc.c:1646  */
    {
		char ** aux = malloc(sizeof(char *));
		aux = memcpy(aux, &(yyvsp[0].string), sizeof(char *));
		tList * importElems = newImportElems(aux);
		(yyval.void_pointer) = importElems;
	}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 148 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 153 "grammar.y" /* yacc.c:1646  */
    {
		initPendingClasses();
		tList * classes = newClasses();
		(yyval.void_pointer) = classes;
	}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 161 "grammar.y" /* yacc.c:1646  */
    {
		tMain * main = newMain((yyvsp[-1].void_pointer));
		(yyval.void_pointer) = main;
	}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 170 "grammar.y" /* yacc.c:1646  */
    {
		tClass * class = newClass((yyvsp[-6].string), (yyvsp[-5].void_pointer), (yyvsp[-3].void_pointer), (yyvsp[-2].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = class;
	}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 175 "grammar.y" /* yacc.c:1646  */
    {
		tClass * class = newClass((yyvsp[-5].string), (yyvsp[-4].void_pointer), (yyvsp[-2].void_pointer), newConstructors(NULL), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = class;
	}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 182 "grammar.y" /* yacc.c:1646  */
    {
		tExtends * extends = newExtends((yyvsp[0].string));
		(yyval.void_pointer) = extends;
	}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 187 "grammar.y" /* yacc.c:1646  */
    {
		tExtends * extends = newExtends(NULL);
		(yyval.void_pointer) = extends;
	}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 200 "grammar.y" /* yacc.c:1646  */
    {
		tList * properties = newProperties();
		(yyval.void_pointer) = properties;
	}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "grammar.y" /* yacc.c:1646  */
    {
		if (!isType((yyvsp[-2].void_pointer))) {
			addPendingClass((yyvsp[-2].void_pointer));
		}
		tProperty * property = newProperty((yyvsp[-2].void_pointer), (yyvsp[-1].string), NULL);
		(yyval.void_pointer) = property;
	}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "grammar.y" /* yacc.c:1646  */
    {
		if (!isType((yyvsp[-4].void_pointer))) {
			addPendingClass((yyvsp[-4].void_pointer));
		}
		tProperty * property = newProperty((yyvsp[-4].void_pointer), (yyvsp[-3].string), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = property;
	}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 227 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 232 "grammar.y" /* yacc.c:1646  */
    {
		tList * constructors = newConstructors();
		_addElement(constructors, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = constructors;
	}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 240 "grammar.y" /* yacc.c:1646  */
    {
		tConstructor * constructor = newConstructor((yyvsp[-6].string), (yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = constructor;
	}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 249 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 254 "grammar.y" /* yacc.c:1646  */
    {
		tList * methods = newMethods();
		(yyval.void_pointer) = methods;
	}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 261 "grammar.y" /* yacc.c:1646  */
    {
		if (!isType((yyvsp[-7].void_pointer))) {
			addPendingClass((yyvsp[-7].void_pointer));
		}
		tMethod * method = newMethod((yyvsp[-7].void_pointer), (yyvsp[-6].string), (yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = method;
	}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 273 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 278 "grammar.y" /* yacc.c:1646  */
    {
		tList * instrs = newInstrs();
		(yyval.void_pointer) = instrs;
	}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 285 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		(yyval.void_pointer) = instr;
	}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 290 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 294 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 304 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 308 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 312 "grammar.y" /* yacc.c:1646  */
    {
		tInstrSimple * instrSimple = newInstrSimple((yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		(yyval.void_pointer) = instr;
	}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 320 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_IF, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instr;
	}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 327 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_WHILE, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instr;
	}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 334 "grammar.y" /* yacc.c:1646  */
    {
		if (!isType((yyvsp[-1].void_pointer))) {
			addPendingClass((yyvsp[-1].void_pointer)); // TODO!
		}
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[-1].void_pointer), (yyvsp[0].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 343 "grammar.y" /* yacc.c:1646  */
    {
		if (!isType((yyvsp[-3].void_pointer))) {
			addPendingClass((yyvsp[-3].void_pointer)); // TODO!
		}
		free((yyvsp[-1].string));
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[-3].void_pointer), (yyvsp[-2].string), (yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 355 "grammar.y" /* yacc.c:1646  */
    {
		tInstrReturn * instrReturn = newInstrReturn((yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		(yyval.void_pointer) = instr;
	}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 365 "grammar.y" /* yacc.c:1646  */
    {
		tInstrIf * instrIf = newInstrIf((yyvsp[-5].void_pointer), (yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instrIf;
	}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 372 "grammar.y" /* yacc.c:1646  */
    {
		tInstrElse * instrElse = newInstrElse(NULL, (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = instrElse;
	}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 377 "grammar.y" /* yacc.c:1646  */
    {
		tInstrElse * instrElse = newInstrElse((yyvsp[0].void_pointer), NULL);
		(yyval.void_pointer) = instrElse;
	}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 382 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = NULL;
	}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 390 "grammar.y" /* yacc.c:1646  */
    {
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = instrWhile;
	}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 395 "grammar.y" /* yacc.c:1646  */
    {
		tList * instrs = newInstrs();
		_addElement(instrs, (yyvsp[0].void_pointer));
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[-2].void_pointer), instrs);
		(yyval.void_pointer) = instrWhile;
	}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 409 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 417 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 421 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 427 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 433 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 439 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 445 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 451 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 461 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 471 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 477 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 481 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 489 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 493 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 501 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 505 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 515 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 519 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 525 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 533 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 537 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 543 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 549 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 555 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 565 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 569 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 575 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 583 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 587 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 593 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 599 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 609 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 613 "grammar.y" /* yacc.c:1646  */
    {
		if (!isTypeName((yyvsp[-3].string))) {
			addPendingClassName((yyvsp[-3].string)); // TODO!
		}
		tObjectCreation * objCreation = newObjCreation((yyvsp[-3].string), (yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_CREATION, objCreation);
		(yyval.void_pointer) = expr;
	}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 622 "grammar.y" /* yacc.c:1646  */
    {
		if (!isTypeName((yyvsp[-1].string))) {
			addPendingClassName((yyvsp[-1].string)); // TODO!
		}
		tArrayCreationExpr * arrayCreationExpr = newArrayCreationExpr((yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ARRAY_CREATION, arrayCreationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 633 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = newSizes((yyvsp[-1].void_pointer));
	}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 637 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-3].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = (yyvsp[-3].void_pointer);
	}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 646 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 650 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 656 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 662 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 668 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 674 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 684 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 688 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[-1].void_pointer), (yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 694 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[-1].void_pointer), (yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 700 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-1].void_pointer), NULL, (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 706 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-1].void_pointer), NULL, (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 714 "grammar.y" /* yacc.c:1646  */
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[0].string), NULL);
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 722 "grammar.y" /* yacc.c:1646  */
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[-3].string), (yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 732 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = (yyvsp[0].void_pointer);
		tExpr * expr = newExpr(EXPR_BUILT_IN, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = expr;
	}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 738 "grammar.y" /* yacc.c:1646  */
    {
		tIdentifier * identifier = newIdentifier((yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_IDENTIFIER, identifier);
		(yyval.void_pointer) = expr;
	}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 744 "grammar.y" /* yacc.c:1646  */
    {
		tParenthesisExpr * parenthesisExpr = newParenthesisExpr((yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_PARENTHESIS, parenthesisExpr);
		(yyval.void_pointer) = expr;
	}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 750 "grammar.y" /* yacc.c:1646  */
    {
		tArrayExpr * arrayExpr = newArrayExpr((yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ARRAY, arrayExpr);
		(yyval.void_pointer) = expr;
	}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 758 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_INT, &(yyvsp[0].integer), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 763 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_BOOLEAN, &(yyvsp[0].boolean), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 768 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_CHAR, &(yyvsp[0].character), sizeof(char));
		(yyval.void_pointer) = builtIn;
	}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 773 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_STRING, (yyvsp[0].string), strlen((yyvsp[0].string)) + 1);
		free((yyvsp[0].string));
		(yyval.void_pointer) = builtIn;
	}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 783 "grammar.y" /* yacc.c:1646  */
    {
		tList * defParams = newDefParams();
		(yyval.void_pointer) = defParams;
	}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 788 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 794 "grammar.y" /* yacc.c:1646  */
    {
		tList * defParams = newDefParams();
		_addElement(defParams, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = defParams;
	}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 800 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 807 "grammar.y" /* yacc.c:1646  */
    {
		if (!isType((yyvsp[-1].void_pointer))) {
			addPendingClass((yyvsp[-1].void_pointer)); // TODO!
		}
		tDefParam * defParam = newDefParam((yyvsp[-1].void_pointer), (yyvsp[0].string));
		(yyval.void_pointer) = defParam;
	}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 817 "grammar.y" /* yacc.c:1646  */
    {
		tList * params = newParams();
		(yyval.void_pointer) = params;
	}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 822 "grammar.y" /* yacc.c:1646  */
    {
		tList * params = newParams();
		_addElement(params, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = params;
	}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 828 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 835 "grammar.y" /* yacc.c:1646  */
    {
		tParam * param = newParam((yyvsp[0].void_pointer));
		(yyval.void_pointer) = param;
	}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 842 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = newType((yyvsp[0].string));
	}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 847 "grammar.y" /* yacc.c:1646  */
    {
		tType * type = newType((yyvsp[-1].string));
		addBrackets(type, (yyvsp[0].integer));
		(yyval.void_pointer) = type;
	}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 855 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.integer) = 1;
	}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 859 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.integer) = (yyvsp[-2].integer) + 1;
	}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2618 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 864 "grammar.y" /* yacc.c:1906  */
	
