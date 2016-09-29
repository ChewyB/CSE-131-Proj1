
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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




/* Line 1676 of yacc.c  */
#line 214 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;

