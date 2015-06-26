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

#line 243 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 258 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    97,   102,   109,   118,   123,   132,   137,
     144,   149,   158,   163,   171,   180,   185,   192,   201,   206,
     213,   218,   222,   226,   232,   236,   240,   248,   255,   262,
     268,   276,   286,   293,   298,   303,   311,   316,   330,   338,
     342,   348,   354,   360,   366,   372,   382,   386,   392,   398,
     402,   406,   410,   414,   418,   424,   428,   434,   442,   446,
     448,   450,   452,   458,   462,   468,   476,   480,   486,   492,
     502,   506,   516,   520,   523,   526,   529,   532,   539,   543,
     546,   549,   551,   555,   559,   565,   571,   577,   585,   590,
     595,   600,   610,   615,   621,   627,   634,   641,   646,   652,
     659
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "parameter", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -99

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-99)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -99,    24,    66,   -99,    19,    -3,   -99,   -99,   -17,    -8,
     -99,     1,    43,   -99,    -4,   -99,    57,   -99,   -13,     4,
     -31,    72,    41,   -99,   -11,    90,   -99,   -99,   -99,   -99,
     -99,   -99,    75,    59,    63,   116,   260,    62,    62,    62,
      62,    62,   260,   -99,   -99,   -99,    83,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,    91,   106,   111,   117,
      44,   124,    -5,    11,   -99,   -99,   123,   -99,   -99,   260,
     -99,   157,   134,   118,   -99,   -99,   160,   140,   -99,   -99,
     260,   260,   260,   260,   260,   260,   283,   283,   154,   122,
     -99,    93,   123,   123,   123,   123,   123,   139,   -99,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   191,   -99,   -99,   150,   -99,   163,
      72,   158,   260,   -99,   -99,   -99,   -99,   -99,   -99,   168,
     173,   260,   -99,   169,   111,   117,    44,   124,   124,    -5,
      -5,    -5,    -5,    11,    11,   -99,   -99,   -99,   159,   -99,
     -99,   -99,    72,   -99,   175,    38,   -99,   -25,   -99,   283,
     260,    85,   176,   -99,   -99,   -99,   -99,   260,   -99,   -23,
     -99,   179,   132,   166,   -99,   -99,   -99,   214,   -99,   200,
       8,   -99,   -99,   -99,   -99,   234,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
      10,     0,     0,    93,    94,     6,     0,    29,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      31,    86,    75,    76,    73,    74,    77,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,    81,     0,    96,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,     0,
       0,    97,    87,     0,    50,    52,    54,    56,    57,    59,
      60,    61,    62,    64,    65,    67,    68,    69,    83,    11,
      19,    95,    92,    30,     0,     0,   100,     0,    98,     0,
      97,     0,     0,    19,    19,    37,    71,     0,    47,     0,
      14,     0,     0,     0,    99,    84,    19,    35,    36,     0,
       0,    32,    17,    19,    34,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   211,   212,
     -99,   -56,    74,   -99,   -99,   -99,   -99,   -99,    50,   -99,
     -99,   -36,    -7,   -98,    35,   -99,   131,   135,   130,    22,
      81,    20,   -53,   -99,   155,   -99,   -99,   -99,   -99,    92,
     -99,   113,    86,    68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    12,    15,    16,    17,    18,
      27,    19,    45,    46,    47,    48,    49,    50,    51,   181,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   115,   116,    67,    68,    72,
      73,    74,   157,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      90,   133,    25,    20,    25,    69,    97,    28,    29,    30,
      31,    32,    33,   109,   110,    34,    33,    35,    70,   166,
      36,   175,    37,    38,     3,   167,     8,   167,    39,    40,
      10,   111,   112,   117,   113,    26,    11,    75,    41,    21,
       9,    28,    29,    30,    31,    32,    33,    42,    13,    34,
      14,    35,    43,    44,    36,   183,    37,    38,   145,   146,
     147,   168,    39,    40,    22,    28,    29,    30,    31,    91,
     103,   104,    41,   123,   124,   125,   126,   127,   128,    71,
       4,    42,    77,     5,    21,   164,   153,    44,    28,    29,
      30,    31,    32,    33,   161,   156,    34,    76,    35,    78,
      79,    36,    86,    37,    38,    42,    87,   172,   173,    39,
      40,    80,    81,    82,    83,    84,    85,    78,    79,    41,
     179,   129,   130,    88,   156,   137,   138,   185,    42,   143,
     144,   156,    98,   170,    44,    28,    29,    30,    31,    32,
      33,   100,    99,    34,   101,    35,    78,    79,    36,   102,
      37,    38,   105,   106,   107,   108,    39,    40,    80,    81,
      82,    83,    84,    85,   118,   114,    41,   121,   120,    28,
      29,    30,    31,    32,    33,    42,   122,    34,   119,    35,
     177,    44,    36,   132,    37,    38,   139,   140,   141,   142,
      39,    40,    92,    93,    94,    95,    96,   131,   148,   149,
      41,   152,   160,    28,    29,    30,    31,    32,    33,    42,
     150,    34,   154,    35,   178,    44,    36,   155,    37,    38,
     171,   159,   163,   180,    39,    40,   176,    23,    24,   165,
     184,   134,   136,   151,    41,   174,   135,    28,    29,    30,
      31,    32,    33,    42,   162,    34,   169,    35,   182,    44,
      36,     0,    37,    38,     0,     0,     0,     0,    39,    40,
       0,     0,     0,    28,    29,    30,    31,    89,    41,     0,
       0,     0,     0,    35,     0,     0,     0,    42,    37,    38,
       0,     0,   186,    44,    39,    40,    28,    29,    30,    31,
      91,     0,     0,     0,    41,     0,    35,     0,     0,     0,
       0,    37,    38,    42,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42
};

static const yytype_int16 yycheck[] =
{
      36,    99,    15,     7,    15,    36,    42,     3,     4,     5,
       6,     7,     8,    18,    19,    11,     8,    13,    49,    44,
      16,    44,    18,    19,     0,    50,     7,    50,    24,    25,
      47,    20,    21,    69,    23,    48,    44,    48,    34,    43,
      43,     3,     4,     5,     6,     7,     8,    43,    47,    11,
       7,    13,    48,    49,    16,    47,    18,    19,   111,   112,
     113,   159,    24,    25,     7,     3,     4,     5,     6,     7,
      26,    27,    34,    80,    81,    82,    83,    84,    85,     7,
      14,    43,     7,    17,    43,    47,   122,    49,     3,     4,
       5,     6,     7,     8,   150,   131,    11,     7,    13,    24,
      25,    16,    43,    18,    19,    43,    43,   163,   164,    24,
      25,    36,    37,    38,    39,    40,    41,    24,    25,    34,
     176,    86,    87,     7,   160,   103,   104,   183,    43,   109,
     110,   167,    49,    48,    49,     3,     4,     5,     6,     7,
       8,    35,    51,    11,    33,    13,    24,    25,    16,    32,
      18,    19,    28,    29,    30,    31,    24,    25,    36,    37,
      38,    39,    40,    41,     7,    42,    34,     7,    50,     3,
       4,     5,     6,     7,     8,    43,    36,    11,    44,    13,
      48,    49,    16,    44,    18,    19,   105,   106,   107,   108,
      24,    25,    37,    38,    39,    40,    41,    43,     7,    49,
      34,    43,    43,     3,     4,     5,     6,     7,     8,    43,
      47,    11,    44,    13,    48,    49,    16,    44,    18,    19,
      44,    52,    47,     9,    24,    25,    47,    16,    16,   155,
     180,   100,   102,   120,    34,   167,   101,     3,     4,     5,
       6,     7,     8,    43,   152,    11,   160,    13,    48,    49,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    34,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    43,    18,    19,
      -1,    -1,    48,    49,    24,    25,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    34,    -1,    13,    -1,    -1,    -1,
      -1,    18,    19,    43,    -1,    -1,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43
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
      49,     7,    92,    93,    94,    48,     7,     7,    24,    25,
      36,    37,    38,    39,    40,    41,    43,    43,     7,     7,
      74,     7,    87,    87,    87,    87,    87,    74,    49,    51,
      35,    33,    32,    26,    27,    28,    29,    30,    31,    18,
      19,    20,    21,    23,    42,    88,    89,    74,     7,    44,
      50,     7,    36,    75,    75,    75,    75,    75,    75,    77,
      77,    43,    44,    76,    79,    80,    81,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    85,     7,    49,
      47,    94,    43,    74,    44,    44,    74,    95,    96,    52,
      43,    64,    92,    47,    47,    65,    44,    50,    76,    95,
      48,    44,    64,    64,    96,    44,    47,    48,    48,    64,
       9,    72,    48,    47,    71,    64,    48
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       2,     2,     2,     2,     5,     1,     1,     3,     1,     1,
       1,     1,     0,     1,     1,     3,     2,     0,     1,     3,
       1
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
#line 87 "grammar.y" /* yacc.c:1646  */
    {
		tProgram * program = newProgram();
		addClasses(program, (yyvsp[-1].void_pointer));
		addMain(program, (yyvsp[0].void_pointer));
		printProgram(program);
		deleteProgram(program);
	}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 102 "grammar.y" /* yacc.c:1646  */
    {
		tList * classes = newClasses();
		(yyval.void_pointer) = classes;
	}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 109 "grammar.y" /* yacc.c:1646  */
    {
		tMain * main = newMain((yyvsp[-1].void_pointer));
		(yyval.void_pointer) = main;
	}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "grammar.y" /* yacc.c:1646  */
    {
		tClass * class = newClass((yyvsp[-5].string), (yyvsp[-3].void_pointer), (yyvsp[-2].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = class;
	}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 123 "grammar.y" /* yacc.c:1646  */
    {
		tClass * class = newClass((yyvsp[-4].string), (yyvsp[-2].void_pointer), newConstructors(NULL), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = class;
	}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 132 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 137 "grammar.y" /* yacc.c:1646  */
    {
		tList * properties = newProperties();
		(yyval.void_pointer) = properties;
	}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "grammar.y" /* yacc.c:1646  */
    {
		tProperty * property = newProperty((yyvsp[-2].string), (yyvsp[-1].string), NULL);
		(yyval.void_pointer) = property;
	}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "grammar.y" /* yacc.c:1646  */
    {
		tProperty * property = newProperty((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = property;
	}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 163 "grammar.y" /* yacc.c:1646  */
    {
		tList * constructors = newConstructors();
		_addElement(constructors, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = constructors;
	}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 171 "grammar.y" /* yacc.c:1646  */
    {
		tConstructor * constructor = newConstructor((yyvsp[-6].string), (yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = constructor;
	}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 180 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "grammar.y" /* yacc.c:1646  */
    {
		tList * methods = newMethods();
		(yyval.void_pointer) = methods;
	}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 192 "grammar.y" /* yacc.c:1646  */
    {
		tMethod * method = newMethod((yyvsp[-7].string), (yyvsp[-6].string), (yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = method;
	}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 201 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "grammar.y" /* yacc.c:1646  */
    {
		tList * instrs = newInstrs();
		(yyval.void_pointer) = instrs;
	}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 213 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		(yyval.void_pointer) = instr;
	}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 218 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 222 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 226 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 232 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 236 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 240 "grammar.y" /* yacc.c:1646  */
    {
		tInstrSimple * instrSimple = newInstrSimple((yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		(yyval.void_pointer) = instr;
	}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 248 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_IF, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instr;
	}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 255 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_WHILE, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instr;
	}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 262 "grammar.y" /* yacc.c:1646  */
    {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[-1].string), (yyvsp[0].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 268 "grammar.y" /* yacc.c:1646  */
    {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 276 "grammar.y" /* yacc.c:1646  */
    {
		tInstrReturn * instrReturn = newInstrReturn((yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		(yyval.void_pointer) = instr;
	}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 286 "grammar.y" /* yacc.c:1646  */
    {
		tInstrIf * instrIf = newInstrIf((yyvsp[-5].void_pointer), (yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instrIf;
	}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 293 "grammar.y" /* yacc.c:1646  */
    {
		tInstrElse * instrElse = newInstrElse(NULL, (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = instrElse;
	}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 298 "grammar.y" /* yacc.c:1646  */
    {
		tInstrElse * instrElse = newInstrElse((yyvsp[0].void_pointer), NULL);
		(yyval.void_pointer) = instrElse;
	}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 303 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = NULL;
	}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 311 "grammar.y" /* yacc.c:1646  */
    {
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = instrWhile;
	}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 316 "grammar.y" /* yacc.c:1646  */
    {
		tList * instrs = newInstrs();
		_addElement(instrs, (yyvsp[0].void_pointer));
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[-2].void_pointer), instrs);
		(yyval.void_pointer) = instrWhile;
	}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 330 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 338 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 342 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 348 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 354 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 360 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 366 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 372 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 382 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 392 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 398 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 406 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 414 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 424 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 428 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 434 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 442 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 458 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 462 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 468 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 476 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 480 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 486 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 492 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 502 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 506 "grammar.y" /* yacc.c:1646  */
    {
		tObjectCreation * objCreation = newObjCreation((yyvsp[-3].string), (yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_CREATION, objCreation);
		(yyval.void_pointer) = expr;
	}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 516 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 520 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 523 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 526 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 529 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 532 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 539 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 543 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 546 "grammar.y" /* yacc.c:1646  */
    {
	}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 565 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = (yyvsp[0].void_pointer);
		tExpr * expr = newExpr(EXPR_BUILT_IN, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = expr;
	}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 571 "grammar.y" /* yacc.c:1646  */
    {
		tIdentifier * identifier = newIdentifier((yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_IDENTIFIER, identifier);
		(yyval.void_pointer) = expr;
	}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 577 "grammar.y" /* yacc.c:1646  */
    {
		tParenthesisExpr * parenthesisExpr = newParenthesisExpr((yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_PARENTHESIS, parenthesisExpr);
		(yyval.void_pointer) = expr;
	}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 585 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_INT, &(yyvsp[0].integer), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 590 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_BOOLEAN, &(yyvsp[0].boolean), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 595 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_CHAR, &(yyvsp[0].character), sizeof(char));
		(yyval.void_pointer) = builtIn;
	}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 600 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_STRING, (yyvsp[0].string), strlen((yyvsp[0].string)) + 1);
		free((yyvsp[0].string));
		(yyval.void_pointer) = builtIn;
	}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 610 "grammar.y" /* yacc.c:1646  */
    {
		tList * defParams = newDefParams();
		(yyval.void_pointer) = defParams;
	}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 615 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 621 "grammar.y" /* yacc.c:1646  */
    {
		tList * defParams = newDefParams();
		_addElement(defParams, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = defParams;
	}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 627 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 634 "grammar.y" /* yacc.c:1646  */
    {
		tDefParam * defParam = newDefParam((yyvsp[-1].string), (yyvsp[0].string));
		(yyval.void_pointer) = defParam;
	}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 641 "grammar.y" /* yacc.c:1646  */
    {
		tList * params = newParams();
		(yyval.void_pointer) = params;
	}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 646 "grammar.y" /* yacc.c:1646  */
    {
		tList * params = newParams();
		_addElement(params, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = params;
	}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 652 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 659 "grammar.y" /* yacc.c:1646  */
    {
		tParam * param = newParam((yyvsp[0].void_pointer));
		(yyval.void_pointer) = param;
	}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2284 "y.tab.c" /* yacc.c:1646  */
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
#line 666 "grammar.y" /* yacc.c:1906  */
	
