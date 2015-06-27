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
       0,    88,    88,    98,   103,   110,   119,   124,   133,   138,
     145,   150,   159,   164,   172,   181,   186,   193,   202,   207,
     214,   219,   223,   227,   233,   237,   241,   249,   256,   263,
     269,   277,   287,   294,   299,   304,   312,   317,   331,   339,
     343,   349,   355,   361,   367,   373,   383,   387,   393,   399,
     403,   407,   411,   419,   423,   433,   437,   443,   451,   455,
     461,   467,   473,   483,   487,   493,   501,   505,   511,   517,
     527,   531,   541,   545,   551,   557,   563,   569,   579,   583,
     589,   595,   601,   609,   617,   627,   633,   639,   647,   652,
     657,   662,   672,   677,   683,   689,   696,   703,   708,   714,
     721
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

#define YYPACT_NINF -97

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-97)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -97,    16,    31,   -97,    14,   -39,   -97,   -97,   -21,   -14,
     -97,   -10,    39,   -97,     6,   -97,    61,   -97,   -13,     4,
     -22,    92,    54,   -97,   -12,   103,   -97,   -97,   -97,   -97,
     -97,   -97,    89,    69,    70,   108,   260,    36,    36,    36,
      36,    36,   260,   -97,   -97,   -97,    38,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,    91,   109,   116,   120,
      24,    90,    42,    11,   -97,   -97,   122,    41,   -97,   260,
     -97,   158,   123,   118,   -97,   -97,   169,   147,   260,   260,
     260,   260,   260,   260,   283,   283,   135,    52,   -97,   -97,
     122,   122,   122,   122,   122,   143,   -97,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   179,   -97,   -97,   -97,   -97,   139,   -97,   145,
      92,   146,   260,   -97,   -97,   -97,   -97,   -97,   -97,   149,
     150,   260,   -97,   144,   116,   120,    24,    90,    90,    42,
      42,    42,    42,    11,    11,   -97,   -97,   -97,   152,   -97,
     -97,   -97,    92,   -97,   151,    51,   -97,   -26,   -97,   283,
     260,    98,   153,   -97,   -97,   -97,   -97,   260,   -97,   -25,
     -97,   154,   132,   166,   -97,   -97,   -97,   190,   -97,   200,
      -3,   -97,   -97,   -97,   -97,   234,   -97
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
      10,     0,     0,    93,    94,     6,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    31,    86,
      75,    76,    73,    74,    77,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,    81,    79,    80,     0,    96,     0,
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
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   186,   194,
     -97,   142,    57,   -97,   -97,   -97,   -97,   -97,    37,   -97,
     -97,   -36,    80,   -96,    -7,   -97,   124,   121,   126,    32,
     -32,     0,    44,   -97,    43,   -97,   -97,   -97,   -97,    71,
     -97,   101,    67,    62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    12,    15,    16,    17,    18,
      27,    19,    45,    46,    47,    48,    49,    50,    51,   181,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,   113,   114,    67,    68,    72,
      73,    74,   157,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      88,   133,    25,    25,     9,    33,    95,    28,    29,    30,
      31,    32,    33,    20,    69,    34,     3,    35,   166,   175,
      36,     8,    37,    38,   167,   167,    10,    70,    39,    40,
      11,   109,   110,   117,   111,    26,    75,    13,    41,    28,
      29,    30,    31,    89,   183,     4,    14,    42,     5,    21,
     101,   102,    43,    44,    28,    29,    30,    31,    32,    33,
     107,   108,    34,   168,    35,   115,   116,    36,    22,    37,
      38,   139,   140,   141,   142,    39,    40,   129,   130,    42,
      90,    91,    92,    93,    94,    41,   153,    96,    78,    79,
      80,    81,    82,    83,    42,   156,    77,    21,   164,    71,
      44,    28,    29,    30,    31,    32,    33,   143,   144,    34,
      76,    35,    84,    85,    36,    86,    37,    38,   103,   104,
     105,   106,    39,    40,   156,    78,    79,    80,    81,    82,
      83,   156,    41,   137,   138,    28,    29,    30,    31,    32,
      33,    42,    97,    34,    98,    35,   170,    44,    36,    99,
      37,    38,   100,   145,   146,   147,    39,    40,   123,   124,
     125,   126,   127,   128,   112,   118,    41,   119,   120,    28,
      29,    30,    31,    32,    33,    42,   121,    34,   131,    35,
     177,    44,    36,   122,    37,    38,   148,   132,   149,   152,
      39,    40,   150,   154,   155,   160,   159,   171,   163,   180,
      41,   176,    23,    28,    29,    30,    31,    32,    33,    42,
      24,    34,   165,    35,   178,    44,    36,   184,    37,    38,
     135,   151,   134,   162,    39,    40,   136,   169,     0,   174,
       0,     0,     0,     0,    41,     0,     0,    28,    29,    30,
      31,    32,    33,    42,     0,    34,     0,    35,   182,    44,
      36,     0,    37,    38,     0,     0,     0,     0,    39,    40,
       0,     0,     0,    28,    29,    30,    31,    87,    41,     0,
       0,     0,     0,    35,     0,     0,     0,    42,    37,    38,
       0,     0,   186,    44,    39,    40,    28,    29,    30,    31,
      89,     0,   161,     0,    41,     0,    35,     0,     0,     0,
       0,    37,    38,    42,     0,   172,   173,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,    41,   179,     0,
       0,     0,     0,     0,     0,   185,    42
};

static const yytype_int16 yycheck[] =
{
      36,    97,    15,    15,    43,     8,    42,     3,     4,     5,
       6,     7,     8,     7,    36,    11,     0,    13,    44,    44,
      16,     7,    18,    19,    50,    50,    47,    49,    24,    25,
      44,    20,    21,    69,    23,    48,    48,    47,    34,     3,
       4,     5,     6,     7,    47,    14,     7,    43,    17,    43,
      26,    27,    48,    49,     3,     4,     5,     6,     7,     8,
      18,    19,    11,   159,    13,    24,    25,    16,     7,    18,
      19,   103,   104,   105,   106,    24,    25,    84,    85,    43,
      37,    38,    39,    40,    41,    34,   122,    49,    36,    37,
      38,    39,    40,    41,    43,   131,     7,    43,    47,     7,
      49,     3,     4,     5,     6,     7,     8,   107,   108,    11,
       7,    13,    43,    43,    16,     7,    18,    19,    28,    29,
      30,    31,    24,    25,   160,    36,    37,    38,    39,    40,
      41,   167,    34,   101,   102,     3,     4,     5,     6,     7,
       8,    43,    51,    11,    35,    13,    48,    49,    16,    33,
      18,    19,    32,   109,   110,   111,    24,    25,    78,    79,
      80,    81,    82,    83,    42,     7,    34,    44,    50,     3,
       4,     5,     6,     7,     8,    43,     7,    11,    43,    13,
      48,    49,    16,    36,    18,    19,     7,    44,    49,    43,
      24,    25,    47,    44,    44,    43,    52,    44,    47,     9,
      34,    47,    16,     3,     4,     5,     6,     7,     8,    43,
      16,    11,   155,    13,    48,    49,    16,   180,    18,    19,
      99,   120,    98,   152,    24,    25,   100,   160,    -1,   167,
      -1,    -1,    -1,    -1,    34,    -1,    -1,     3,     4,     5,
       6,     7,     8,    43,    -1,    11,    -1,    13,    48,    49,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    34,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    43,    18,    19,
      -1,    -1,    48,    49,    24,    25,     3,     4,     5,     6,
       7,    -1,   150,    -1,    34,    -1,    13,    -1,    -1,    -1,
      -1,    18,    19,    43,    -1,   163,   164,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,   176,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    43
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
      49,     7,    92,    93,    94,    48,     7,     7,    36,    37,
      38,    39,    40,    41,    43,    43,     7,     7,    74,     7,
      87,    87,    87,    87,    87,    74,    49,    51,    35,    33,
      32,    26,    27,    28,    29,    30,    31,    18,    19,    20,
      21,    23,    42,    88,    89,    24,    25,    74,     7,    44,
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
#line 88 "grammar.y" /* yacc.c:1646  */
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
#line 98 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "grammar.y" /* yacc.c:1646  */
    {
		tList * classes = newClasses();
		(yyval.void_pointer) = classes;
	}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "grammar.y" /* yacc.c:1646  */
    {
		tMain * main = newMain((yyvsp[-1].void_pointer));
		(yyval.void_pointer) = main;
	}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 119 "grammar.y" /* yacc.c:1646  */
    {
		tClass * class = newClass((yyvsp[-5].string), (yyvsp[-3].void_pointer), (yyvsp[-2].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = class;
	}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 124 "grammar.y" /* yacc.c:1646  */
    {
		tClass * class = newClass((yyvsp[-4].string), (yyvsp[-2].void_pointer), newConstructors(NULL), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = class;
	}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 133 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "grammar.y" /* yacc.c:1646  */
    {
		tList * properties = newProperties();
		(yyval.void_pointer) = properties;
	}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 145 "grammar.y" /* yacc.c:1646  */
    {
		tProperty * property = newProperty((yyvsp[-2].string), (yyvsp[-1].string), NULL);
		(yyval.void_pointer) = property;
	}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "grammar.y" /* yacc.c:1646  */
    {
		tProperty * property = newProperty((yyvsp[-4].string), (yyvsp[-3].string), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = property;
	}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 164 "grammar.y" /* yacc.c:1646  */
    {
		tList * constructors = newConstructors();
		_addElement(constructors, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = constructors;
	}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "grammar.y" /* yacc.c:1646  */
    {
		tConstructor * constructor = newConstructor((yyvsp[-6].string), (yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = constructor;
	}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 181 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 186 "grammar.y" /* yacc.c:1646  */
    {
		tList * methods = newMethods();
		(yyval.void_pointer) = methods;
	}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 193 "grammar.y" /* yacc.c:1646  */
    {
		tMethod * method = newMethod((yyvsp[-7].string), (yyvsp[-6].string), (yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = method;
	}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-1].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 207 "grammar.y" /* yacc.c:1646  */
    {
		tList * instrs = newInstrs();
		(yyval.void_pointer) = instrs;
	}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 214 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_NULL, NULL);
		(yyval.void_pointer) = instr;
	}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 219 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[-1].void_pointer);
	}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 223 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 227 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 233 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 237 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 241 "grammar.y" /* yacc.c:1646  */
    {
		tInstrSimple * instrSimple = newInstrSimple((yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_SIMPLE, instrSimple);
		(yyval.void_pointer) = instr;
	}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 249 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_IF, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instr;
	}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 256 "grammar.y" /* yacc.c:1646  */
    {
		tInstr * instr = newInstr(INSTR_WHILE, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instr;
	}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "grammar.y" /* yacc.c:1646  */
    {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[-1].string), (yyvsp[0].string), NULL);
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 269 "grammar.y" /* yacc.c:1646  */
    {
		tInstrDeclaration * instrDeclaration = newInstrDeclaration((yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_DECLARATION, instrDeclaration);
		(yyval.void_pointer) = instr;
	}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 277 "grammar.y" /* yacc.c:1646  */
    {
		tInstrReturn * instrReturn = newInstrReturn((yyvsp[0].void_pointer));
		tInstr * instr = newInstr(INSTR_RETURN, instrReturn);
		(yyval.void_pointer) = instr;
	}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 287 "grammar.y" /* yacc.c:1646  */
    {
		tInstrIf * instrIf = newInstrIf((yyvsp[-5].void_pointer), (yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = instrIf;
	}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 294 "grammar.y" /* yacc.c:1646  */
    {
		tInstrElse * instrElse = newInstrElse(NULL, (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = instrElse;
	}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 299 "grammar.y" /* yacc.c:1646  */
    {
		tInstrElse * instrElse = newInstrElse((yyvsp[0].void_pointer), NULL);
		(yyval.void_pointer) = instrElse;
	}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 304 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = NULL;
	}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 312 "grammar.y" /* yacc.c:1646  */
    {
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[-4].void_pointer), (yyvsp[-1].void_pointer));
		(yyval.void_pointer) = instrWhile;
	}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 317 "grammar.y" /* yacc.c:1646  */
    {
		tList * instrs = newInstrs();
		_addElement(instrs, (yyvsp[0].void_pointer));
		tInstrWhile * instrWhile = newInstrWhile((yyvsp[-2].void_pointer), instrs);
		(yyval.void_pointer) = instrWhile;
	}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 331 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 339 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 343 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 349 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 355 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 361 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 367 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 373 "grammar.y" /* yacc.c:1646  */
    { 
		tAssignmentExpr * assignmentExpr = newAssignmentExpr((yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_ASSIGNMENT, assignmentExpr);
		(yyval.void_pointer) = expr;
	}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 383 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 393 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 399 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 407 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 411 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 419 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 423 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 433 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 437 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 443 "grammar.y" /* yacc.c:1646  */
    {
		tEqualityExpr * equalityExpr = newEqualityExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_EQUALITY, equalityExpr);
		(yyval.void_pointer) = expr;
	}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 451 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 455 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 461 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 467 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 473 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 483 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 487 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 493 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 501 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 505 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 511 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 517 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-2].void_pointer), (yyvsp[-1].string), (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 527 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 531 "grammar.y" /* yacc.c:1646  */
    {
		tObjectCreation * objCreation = newObjCreation((yyvsp[-3].string), (yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_CREATION, objCreation);
		(yyval.void_pointer) = expr;
	}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 541 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 545 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 551 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 557 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 563 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 569 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr((yyvsp[-1].string), (yyvsp[0].void_pointer), NULL);
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 579 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 583 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[-1].void_pointer), (yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 589 "grammar.y" /* yacc.c:1646  */
    {
		tModifExpr * modifExpr = newModifExpr(NULL, (yyvsp[-1].void_pointer), (yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_MODIF, modifExpr);
		(yyval.void_pointer) = expr;
	}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 595 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-1].void_pointer), NULL, (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 601 "grammar.y" /* yacc.c:1646  */
    {
		tOperationExpr * operationExpr = newOperationExpr((yyvsp[-1].void_pointer), NULL, (yyvsp[0].void_pointer));
		tExpr * expr = newExpr(EXPR_OPERATION, operationExpr);
		(yyval.void_pointer) = expr;
	}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 609 "grammar.y" /* yacc.c:1646  */
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[0].string), NULL);
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 617 "grammar.y" /* yacc.c:1646  */
    {
		tObjAccessExpr * objAccessExpr = newObjAccessExpr((yyvsp[-3].string), (yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_OBJ_ACCESS, objAccessExpr); 
		(yyval.void_pointer) = expr;
	}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 627 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = (yyvsp[0].void_pointer);
		tExpr * expr = newExpr(EXPR_BUILT_IN, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = expr;
	}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 633 "grammar.y" /* yacc.c:1646  */
    {
		tIdentifier * identifier = newIdentifier((yyvsp[0].string));
		tExpr * expr = newExpr(EXPR_IDENTIFIER, identifier);
		(yyval.void_pointer) = expr;
	}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 639 "grammar.y" /* yacc.c:1646  */
    {
		tParenthesisExpr * parenthesisExpr = newParenthesisExpr((yyvsp[-1].void_pointer));
		tExpr * expr = newExpr(EXPR_PARENTHESIS, parenthesisExpr);
		(yyval.void_pointer) = expr;
	}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 647 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_INT, &(yyvsp[0].integer), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 652 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_BOOLEAN, &(yyvsp[0].boolean), sizeof(int));
		(yyval.void_pointer) = builtIn;
	}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 657 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_CHAR, &(yyvsp[0].character), sizeof(char));
		(yyval.void_pointer) = builtIn;
	}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 662 "grammar.y" /* yacc.c:1646  */
    {
		tBuiltInExpr * builtIn = newBuiltIn(INPUT_STRING, (yyvsp[0].string), strlen((yyvsp[0].string)) + 1);
		free((yyvsp[0].string));
		(yyval.void_pointer) = builtIn;
	}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 672 "grammar.y" /* yacc.c:1646  */
    {
		tList * defParams = newDefParams();
		(yyval.void_pointer) = defParams;
	}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 677 "grammar.y" /* yacc.c:1646  */
    {
		(yyval.void_pointer) = (yyvsp[0].void_pointer);
	}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 683 "grammar.y" /* yacc.c:1646  */
    {
		tList * defParams = newDefParams();
		_addElement(defParams, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = defParams;
	}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 689 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 696 "grammar.y" /* yacc.c:1646  */
    {
		tDefParam * defParam = newDefParam((yyvsp[-1].string), (yyvsp[0].string));
		(yyval.void_pointer) = defParam;
	}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 703 "grammar.y" /* yacc.c:1646  */
    {
		tList * params = newParams();
		(yyval.void_pointer) = params;
	}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 708 "grammar.y" /* yacc.c:1646  */
    {
		tList * params = newParams();
		_addElement(params, (yyvsp[0].void_pointer));
		(yyval.void_pointer) = params;
	}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 714 "grammar.y" /* yacc.c:1646  */
    {
		_addElement((yyvsp[-2].void_pointer), (yyvsp[0].void_pointer));
		(yyval.void_pointer) = (yyvsp[-2].void_pointer);
	}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 721 "grammar.y" /* yacc.c:1646  */
    {
		tParam * param = newParam((yyvsp[0].void_pointer));
		(yyval.void_pointer) = param;
	}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2405 "y.tab.c" /* yacc.c:1646  */
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
#line 728 "grammar.y" /* yacc.c:1906  */
	
