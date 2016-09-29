
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 11 "parser.y"


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine



/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     T_Void = 258,
     T_Bool = 259,
     T_Float = 260,
     T_Int = 261,
     T_Vec2 = 262,
     T_Vec3 = 263,
     T_Vec4 = 264,
     T_Mat2 = 265,
     T_Mat3 = 266,
     T_Mat4 = 267,
     T_While = 268,
     T_Break = 269,
     T_Continue = 270,
     T_Else = 271,
     T_For = 272,
     T_If = 273,
     T_Return = 274,
     T_Switch = 275,
     T_Case = 276,
     T_Default = 277,
     T_Field_selection = 278,
     T_Identifier = 279,
     T_IntConstant = 280,
     T_FloatConstant = 281,
     T_BoolConstant = 282,
     T_LeftParen = 283,
     T_RightParen = 284,
     T_Dot = 285,
     T_Inc_op = 286,
     T_NE_op = 287,
     T_EQ_op = 288,
     T_GE_op = 289,
     T_LE_op = 290,
     T_LeftAngle = 291,
     T_RightAngle = 292,
     T_Slash = 293,
     T_Star = 294,
     T_Dash = 295,
     T_Plus = 296,
     T_Dec_op = 297,
     T_And_op = 298,
     T_Or_op = 299,
     T_Equal = 300,
     T_Add_assign = 301,
     T_Sub_assign = 302,
     T_Comma = 303,
     T_RightBracket = 304,
     T_LeftBracket = 305,
     T_RightBrace = 306,
     T_LeftBrace = 307,
     T_Semicolon = 308,
     T_Colon = 309,
     T_Div_assign = 310,
     T_Mul_assign = 311
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Float 260
#define T_Int 261
#define T_Vec2 262
#define T_Vec3 263
#define T_Vec4 264
#define T_Mat2 265
#define T_Mat3 266
#define T_Mat4 267
#define T_While 268
#define T_Break 269
#define T_Continue 270
#define T_Else 271
#define T_For 272
#define T_If 273
#define T_Return 274
#define T_Switch 275
#define T_Case 276
#define T_Default 277
#define T_Field_selection 278
#define T_Identifier 279
#define T_IntConstant 280
#define T_FloatConstant 281
#define T_BoolConstant 282
#define T_LeftParen 283
#define T_RightParen 284
#define T_Dot 285
#define T_Inc_op 286
#define T_NE_op 287
#define T_EQ_op 288
#define T_GE_op 289
#define T_LE_op 290
#define T_LeftAngle 291
#define T_RightAngle 292
#define T_Slash 293
#define T_Star 294
#define T_Dash 295
#define T_Plus 296
#define T_Dec_op 297
#define T_And_op 298
#define T_Or_op 299
#define T_Equal 300
#define T_Add_assign 301
#define T_Sub_assign 302
#define T_Comma 303
#define T_RightBracket 304
#define T_LeftBracket 305
#define T_RightBrace 306
#define T_LeftBrace 307
#define T_Semicolon 308
#define T_Colon 309
#define T_Div_assign 310
#define T_Mul_assign 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "parser.y"

    
    int                 integerConstant;
    bool                boolConstant;
    float               floatConstant;
    char                identifier[MaxIdentLen+1]; // +1 for terminating null

    Decl                *decl;
    List<Decl*>         *declList;
    List<Stmt*>         *stmtList;
    List<VarDecl*>      *varList;
    List<Case*>         *caseList;


    Stmt                *stmt;
    
    Operator            *op;
    PostfixExpr         *postfixexpr;
    Expr                *expression;
    ArithmeticExpr      *arithmeticexpr;
    RelationalExpr      *relationalexpr;
    EqualityExpr        *equalityexpr;
    LogicalExpr         *logicalexpr;
    AssignExpr          *assignexpr;


    Type                *type;
    NamedType           *namedType;
    ArrayType           *arrayType;

    VarDecl             *varDecl;
    FnDecl              *fnDecl;
    StmtBlock           *stmtBlock;
    ConditionalStmt     *conditionalStmt;
    LoopStmt            *loopStmt;
    ForStmt             *forStmt;
    WhileStmt           *whileStmt;
    IfStmt              *ifStmt;
    IfStmtExprError     *ifStmtExpreError;
    ReturnStmt          *returnStmt;
    SwitchLabel         *switchLabel;
    Case                *_case;
    Default             *_default;
    SwitchStmt          *switchStmt;
    SwitchStmtError     *switchStmtError;




/* Line 214 of yacc.c  */
#line 288 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 313 "y.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  155

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
       0,     0,     3,     5,     8,    10,    13,    16,    18,    21,
      23,    27,    32,    36,    38,    41,    43,    46,    49,    50,
      52,    54,    56,    58,    60,    62,    64,    66,    68,    70,
      73,    78,    81,    83,    84,    86,    88,    90,    92,    94,
      96,    98,   100,   103,   105,   107,   109,   113,   115,   117,
     121,   123,   125,   129,   131,   133,   135,   137,   141,   145,
     147,   151,   155,   159,   163,   165,   167,   171,   175,   177,
     181,   185,   187,   190,   193,   196,   198,   202,   205,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   228,
     230,   234,   240,   248,   257,   260,   262,   266,   267,   272,
     278
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    59,    60,    -1,    60,    -1,
      66,    53,    -1,    61,    53,    -1,    69,    -1,    62,    29,
      -1,    63,    -1,    68,    24,    28,    -1,    68,    24,    28,
      64,    -1,    65,    48,    64,    -1,    65,    -1,    68,    24,
      -1,    68,    -1,    68,    24,    -1,    67,    66,    -1,    -1,
       3,    -1,     5,    -1,     6,    -1,     4,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      61,    70,    -1,    52,    67,    71,    51,    -1,    71,    72,
      -1,    72,    -1,    -1,    70,    -1,    73,    -1,    74,    -1,
      75,    -1,    95,    -1,    96,    -1,   100,    -1,    60,    -1,
      76,    53,    -1,    53,    -1,    77,    -1,    78,    -1,    90,
      92,    77,    -1,    79,    -1,    80,    -1,    79,    44,    80,
      -1,    81,    -1,    82,    -1,    81,    43,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    86,    -1,    85,    33,    86,
      -1,    85,    32,    86,    -1,    87,    -1,    86,    36,    87,
      -1,    86,    37,    87,    -1,    86,    35,    87,    -1,    86,
      34,    87,    -1,    88,    -1,    89,    -1,    88,    41,    89,
      -1,    88,    40,    89,    -1,    90,    -1,    89,    39,    90,
      -1,    89,    38,    90,    -1,    91,    -1,    31,    90,    -1,
      42,    90,    -1,    93,    90,    -1,    94,    -1,    91,    30,
      23,    -1,    91,    31,    -1,    91,    42,    -1,    45,    -1,
      56,    -1,    55,    -1,    46,    -1,    47,    -1,    41,    -1,
      40,    -1,    25,    -1,    26,    -1,    27,    -1,    24,    -1,
      28,    76,    29,    -1,    18,    28,    76,    29,    70,    -1,
      18,    28,    76,    29,    70,    16,    72,    -1,    20,    28,
      76,    29,    52,    97,    98,    51,    -1,    97,    99,    -1,
      99,    -1,    22,    54,    71,    -1,    -1,    21,    25,    54,
      71,    -1,    13,    28,    76,    29,    72,    -1,    17,    28,
      75,    75,    76,    29,    72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   219,   219,   231,   232,   235,   236,   237,   242,   245,
     248,   249,   252,   253,   256,   257,   267,   270,   271,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   291,
     294,   297,   298,   299,   302,   303,   306,   307,   308,   309,
     310,   313,   316,   317,   320,   323,   324,   327,   330,   331,
     334,   337,   338,   341,   344,   347,   350,   351,   352,   355,
     356,   357,   358,   359,   362,   365,   366,   367,   370,   371,
     372,   375,   376,   377,   378,   381,   382,   383,   384,   387,
     388,   389,   390,   391,   394,   395,   399,   400,   401,   402,
     403,   416,   417,   426,   429,   430,   433,   434,   444,   451,
     452
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Float", "T_Int",
  "T_Vec2", "T_Vec3", "T_Vec4", "T_Mat2", "T_Mat3", "T_Mat4", "T_While",
  "T_Break", "T_Continue", "T_Else", "T_For", "T_If", "T_Return",
  "T_Switch", "T_Case", "T_Default", "T_Field_selection", "T_Identifier",
  "T_IntConstant", "T_FloatConstant", "T_BoolConstant", "T_LeftParen",
  "T_RightParen", "T_Dot", "T_Inc_op", "T_NE_op", "T_EQ_op", "T_GE_op",
  "T_LE_op", "T_LeftAngle", "T_RightAngle", "T_Slash", "T_Star", "T_Dash",
  "T_Plus", "T_Dec_op", "T_And_op", "T_Or_op", "T_Equal", "T_Add_assign",
  "T_Sub_assign", "T_Comma", "T_RightBracket", "T_LeftBracket",
  "T_RightBrace", "T_LeftBrace", "T_Semicolon", "T_Colon", "T_Div_assign",
  "T_Mul_assign", "$accept", "Program", "DeclList", "Decl",
  "Function_Prototype", "Function_Declarator", "Function_Header",
  "ParamDeclList", "Parameter_Declaration", "Single_Declaration",
  "Single_Declaration_List", "Fully_Specified_Type", "Function_Definition",
  "Compound_Statement", "Statement_List", "Statement", "Simple_Statement",
  "Declaration_Statement", "Expression_Statement", "Expression",
  "Assignment_Expression", "Conditional_Expression",
  "Logical_Or_Expression", "Logical_Xor_Expression",
  "Logical_And_Expression", "Inclusive_Or_Expression",
  "Exclusive_Or_Expression", "And_Expression", "Equality_Expression",
  "Relational_Expression", "Shift_Expression", "Additive_Expression",
  "Multiplicative_Expression", "Unary_Expression", "Postfix_Expression",
  "Assignment_Operator", "Unary_Operator", "Primary_Expression",
  "Selection_Statement", "Switch_Statement", "Case_List", "Default",
  "Case", "Iteration_Statement", 0
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
       0,    57,    58,    59,    59,    60,    60,    60,    61,    62,
      63,    63,    64,    64,    65,    65,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      70,    71,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    74,    75,    75,    76,    77,    77,    78,    79,    79,
      80,    81,    81,    82,    83,    84,    85,    85,    85,    86,
      86,    86,    86,    86,    87,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    96,    97,    97,    98,    98,    99,   100,
     100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     2,     1,
       3,     4,     3,     1,     2,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     2,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     1,     1,     3,
       1,     1,     3,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     1,     2,     2,     2,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     7,     8,     2,     1,     3,     0,     4,     5,
       7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    22,    20,    21,    23,    24,    25,    26,    27,
      28,     0,     2,     4,     0,     0,     9,     0,     0,     7,
       1,     3,    18,     6,    29,     8,     5,    16,    33,    10,
       0,     0,     0,     0,    89,    86,    87,    88,     0,     0,
      85,    84,     0,    43,    41,    17,    34,     0,    32,    35,
      36,    37,     0,    44,    45,    47,    48,    50,    51,    53,
      54,    55,    56,    59,    64,    65,    68,    71,     0,    75,
      38,    39,    40,    11,    13,    15,     0,     0,     0,     0,
       0,    72,    73,    30,    31,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    82,
      83,    81,    80,     0,     0,    77,    78,    74,     0,    14,
       0,     0,     0,     0,    90,    49,    68,    52,    58,    57,
      63,    62,    60,    61,    67,    66,    70,    69,    46,    76,
      12,     0,     0,     0,     0,    99,     0,    91,     0,     0,
       0,     0,    97,    95,   100,    92,     0,     0,     0,    94,
      33,    33,    93,    98,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    44,    14,    15,    16,    73,    74,    17,
      28,    18,    19,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   103,    68,    69,    70,    71,
     142,   148,   143,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
      94,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,    21,    94,   -74,   -39,    -2,   -74,   -17,    14,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,    44,   168,    94,
      53,    58,    59,    60,   -74,   -74,   -74,   -74,     4,     4,
     -74,   -74,     4,   -74,   -74,   -17,   -74,   117,   -74,   -74,
     -74,   -74,   -12,   -74,   -74,    45,   -74,    47,   -74,   -74,
     -74,   -13,    13,   -74,    30,   -22,    18,    -8,     4,   -74,
     -74,   -74,   -74,   -74,    43,    68,     4,   -16,     4,     4,
      66,   -74,   -74,   -74,   -74,   -74,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,   -74,   -74,
     -74,   -74,   -74,     4,    86,   -74,   -74,   -74,    94,   -74,
      81,   -16,    82,    83,   -74,   -74,   -74,   -74,    13,    13,
     -74,   -74,   -74,   -74,   -22,   -22,   -74,   -74,   -74,   -74,
     -74,   168,     4,    61,    62,   -74,    87,    99,    96,   168,
     168,    93,    54,   -74,   -74,   -74,    77,    78,    85,   -74,
     168,   168,   -74,   168,   168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,     6,   -74,   -74,   -74,    25,   -74,   110,
     -74,   -26,   -74,   -14,   -73,   -46,   -74,   -74,   -72,   -36,
      36,   -74,   -74,    63,   -74,    64,   -74,   -74,   -74,    -9,
     -24,   -74,   -11,   -35,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     5,   -74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,    84,    80,    75,    81,   111,    13,    82,    34,    35,
      36,    37,    38,    22,    23,    39,    96,    97,    21,    88,
      89,    20,   104,   105,    40,    41,    42,    25,    34,    35,
      36,    37,    38,   107,   106,    39,    26,    43,    27,   132,
     110,    85,   112,   113,    40,    41,    42,    90,    91,    92,
      93,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   126,   127,    98,    99,   100,   120,   121,   122,   123,
      94,    95,    29,   101,   102,   141,   147,   153,   154,   118,
     119,    76,    75,   124,   125,   135,    77,    78,    79,    86,
      87,   108,   109,   144,   145,   114,   136,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    84,    84,   129,
     131,   133,   134,    22,   138,   140,   139,   141,   146,   137,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      30,   150,   151,   130,    31,    32,   152,    33,    45,   128,
       0,    34,    35,    36,    37,    38,     0,   149,    39,   115,
       0,   117,     0,     0,     0,     0,     0,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    22,
      43,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    30,     0,     0,     0,    31,    32,     0,    33,     0,
       0,     0,    34,    35,    36,    37,    38,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    43
};

static const yytype_int16 yycheck[] =
{
      14,    47,    38,    29,    39,    77,     0,    42,    24,    25,
      26,    27,    28,    52,    53,    31,    38,    39,    12,    32,
      33,     0,    30,    31,    40,    41,    42,    29,    24,    25,
      26,    27,    28,    68,    42,    31,    53,    53,    24,   111,
      76,    53,    78,    79,    40,    41,    42,    34,    35,    36,
      37,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    45,    46,    47,    90,    91,    92,    93,
      40,    41,    28,    55,    56,    21,    22,   150,   151,    88,
      89,    28,   108,    94,    95,   131,    28,    28,    28,    44,
      43,    48,    24,   139,   140,    29,   132,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   153,   154,    23,
      29,    29,    29,    52,    52,    16,    29,    21,    25,   133,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    54,    54,   108,    17,    18,    51,    20,    28,   103,
      -1,    24,    25,    26,    27,    28,    -1,   142,    31,    86,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    58,    59,    60,    61,    62,    63,    66,    68,    69,
       0,    60,    52,    53,    70,    29,    53,    24,    67,    28,
      13,    17,    18,    20,    24,    25,    26,    27,    28,    31,
      40,    41,    42,    53,    60,    66,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    93,    94,
      95,    96,   100,    64,    65,    68,    28,    28,    28,    28,
      76,    90,    90,    51,    72,    53,    44,    43,    32,    33,
      34,    35,    36,    37,    40,    41,    38,    39,    45,    46,
      47,    55,    56,    92,    30,    31,    42,    90,    48,    24,
      76,    75,    76,    76,    29,    80,    90,    82,    86,    86,
      87,    87,    87,    87,    89,    89,    90,    90,    77,    23,
      64,    29,    75,    29,    29,    72,    76,    70,    52,    29,
      16,    21,    97,    99,    72,    72,    25,    22,    98,    99,
      54,    54,    51,    71,    71
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { 
                                      (yylsp[(1) - (1)]); 
                                      /* pp2: The @1 is needed to convince 
                                       * yacc to set up yylloc. You can remove 
                                       * it once you have other uses of @n*/
                                      Program *program = new Program((yyvsp[(1) - (1)].declList));
                                      // if no errors, advance to next phase
                                      if (ReportError::NumErrors() == 0) 
                                          program->Print(0);
                                    }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {(yyval.decl) = (yyvsp[(1) - (2)].varDecl);}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    {(yyval.decl) = (yyvsp[(1) - (2)].fnDecl);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    {}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { (yyval.fnDecl) = new FnDecl(new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier)), (yyvsp[(1) - (3)].type), new List<VarDecl*>); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {(yyval.fnDecl) = new FnDecl(new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier)), (yyvsp[(1) - (4)].type), (yyvsp[(4) - (4)].varList));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { ((yyval.varList)=(yyvsp[(3) - (3)].varList))->Append((yyvsp[(1) - (3)].varDecl)); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { ((yyval.varList) = new List<VarDecl*>)->Append((yyvsp[(1) - (1)].varDecl)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].type)); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {((yyval.varList)=(yyvsp[(1) - (2)].varList))->Append((yyvsp[(2) - (2)].varDecl));}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {(yyval.varList) = new List<VarDecl*>;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    {(yyval.type) = Type::voidType;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {(yyval.type) = Type::floatType;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {(yyval.type) = Type::intType;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {(yyval.type) = Type::boolType;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {(yyval.type) = Type::vec2;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {(yyval.type) = Type::vec3;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {(yyval.type) = Type::vec4;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {(yyval.type) = Type::mat2;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    {(yyval.type) = Type::mat3;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {(yyval.type) = Type::mat4;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    {((yyval.fnDecl) = (yyvsp[(1) - (2)].fnDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt));}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    {(yyval.stmt) = new StmtBlock((yyvsp[(2) - (4)].varList), (yyvsp[(3) - (4)].stmtList));}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {((yyval.stmtList)=(yyvsp[(1) - (2)].stmtList))->Append((yyvsp[(2) - (2)].stmt));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    {((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {(yyval.stmtList) =  new List<Stmt*>;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    {(yyval.expression) = (yyvsp[(1) - (2)].expression);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    {(yyval.expression) = new EmptyExpr();}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {(yyval.expression) = new AssignExpr((yyvsp[(1) - (3)].expression), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].expression));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    {(yyval.expression) = new LogicalExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"||"), (yyvsp[(3) - (3)].expression));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    {(yyval.expression) = new LogicalExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"&&"), (yyvsp[(3) - (3)].expression));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    {(yyval.expression) = new EqualityExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"=="), (yyvsp[(3) - (3)].expression));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {(yyval.expression) = new EqualityExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"!="), (yyvsp[(3) - (3)].expression));}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {(yyval.expression) = new RelationalExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)">"), (yyvsp[(3) - (3)].expression));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    {(yyval.expression) = new RelationalExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"<"), (yyvsp[(3) - (3)].expression));}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {(yyval.expression) = new RelationalExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"<="), (yyvsp[(3) - (3)].expression));}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    {(yyval.expression) = new RelationalExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)">="), (yyvsp[(3) - (3)].expression));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {(yyval.expression) = new ArithmeticExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"+"), (yyvsp[(3) - (3)].expression));}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    {(yyval.expression) = new ArithmeticExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"-"), (yyvsp[(3) - (3)].expression));}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 371 "parser.y"
    {(yyval.expression) = new ArithmeticExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"*"), (yyvsp[(3) - (3)].expression)); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {(yyval.expression) = new ArithmeticExpr((yyvsp[(1) - (3)].expression), new Operator((yylsp[(2) - (3)]), (const char*)"/"), (yyvsp[(3) - (3)].expression)); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    {(yyval.expression) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), (const char*)"++"), (yyvsp[(2) - (2)].expression));}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 377 "parser.y"
    {(yyval.expression) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), (const char*)"--"), (yyvsp[(2) - (2)].expression));}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 378 "parser.y"
    {(yyval.expression) = (yyvsp[(2) - (2)].expression);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 382 "parser.y"
    { }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 383 "parser.y"
    {(yyval.expression) = new PostfixExpr((yyvsp[(1) - (2)].expression), new Operator((yylsp[(2) - (2)]), (const char*)"++"));}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {(yyval.expression) = new PostfixExpr((yyvsp[(1) - (2)].expression), new Operator((yylsp[(2) - (2)]), (const char*)"--"));}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 387 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"="); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"*="); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"/="); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"+="); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"-="); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"+");}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 395 "parser.y"
    {(yyval.op) = new Operator((yylsp[(1) - (1)]), (const char*)"-");}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    {(yyval.expression) = new IntConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].integerConstant));}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    {(yyval.expression) = new FloatConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].floatConstant));}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    {(yyval.expression) = new BoolConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].boolConstant));}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    {(yyval.expression) = new VarExpr((yylsp[(1) - (1)]), new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)));  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    {(yyval.expression) = (yyvsp[(2) - (3)].expression);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    {(yyval.stmt) = new IfStmt((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].stmt), NULL );}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {(yyval.stmt) = new IfStmt((yyvsp[(3) - (7)].expression), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt) );}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    {(yyval.stmt) = new SwitchStmt((yyvsp[(3) - (8)].expression), (yyvsp[(6) - (8)].caseList), (yyvsp[(7) - (8)]._default));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 429 "parser.y"
    {((yyval.caseList)=(yyvsp[(1) - (2)].caseList))->Append((yyvsp[(2) - (2)]._case));}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    {((yyval.caseList) = new List<Case*>)->Append((yyvsp[(1) - (1)]._case));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    {(yyval._default) = new Default((yyvsp[(3) - (3)].stmtList));}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    { (yyval._default) = NULL;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    {(yyval._case) = new Case(new IntConstant((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].integerConstant)), (yyvsp[(4) - (4)].stmtList));}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    {(yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].stmt));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {(yyval.stmt) = new ForStmt((yyvsp[(3) - (7)].expression), (yyvsp[(4) - (7)].expression), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].stmt)); }
    break;



/* Line 1455 of yacc.c  */
#line 2260 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



/* Line 1675 of yacc.c  */
#line 460 "parser.y"


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}


