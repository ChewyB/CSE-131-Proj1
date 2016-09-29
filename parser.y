/* File: parser.y
 * --------------
 * Bison input file to generate the parser for the compiler.
 *
 * pp2: your job is to write a parser that will construct the parse tree
 *      and if no parse errors were found, print it.  The parser should 
 *      accept the language as described in specification, and as augmented 
 *      in the pp2 handout.
 */

%{

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

%}

/* The section before the first %% is the Definitions section of the yacc
 * input file. Here is where you declare tokens and types, add precedence
 * and associativity options, and so on.
 */
 
/* yylval 
 * ------
 * Here we define the type of the yylval global variable that is used by
 * the scanner to store attibute information about the token just scanned
 * and thus communicate that information to the parser. 
 *
 * pp2: You will need to add new fields to this union as you add different 
 *      attributes to your non-terminal symbols.
 */
%union {
    
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

}


/* Tokens
 * ------
 * Here we tell yacc about all the token types that we are using.
 * Bison will assign unique numbers to these and export the #define
 * in the generated y.tab.h header file.
 */
%token  T_Void
%token  T_Bool T_Float T_Int
%token  T_Vec2 T_Vec3 T_Vec4
%token  T_Mat2 T_Mat3 T_Mat4
%token  T_While T_Break T_Continue T_Else T_For T_If T_Return T_Switch T_Case T_Default
%token  T_Field_selection

%token  <identifier> T_Identifier
%token  <integerConstant> T_IntConstant
%token  <floatConstant> T_FloatConstant
%token  <boolConstant> T_BoolConstant


 %token  T_LeftParen
         T_RightParen
         %left T_Dot
         %left T_Inc_op
         %left T_Dec_op
         T_Plus
         T_Dash
         T_Star
         T_Slash
         T_RightAngle
         T_LeftAngle
         T_LE_op
         T_GE_op
         T_EQ_op     
         T_NE_op
         %left T_And_op    
         %left T_Or_op     
         %right T_Equal    
         %right T_Add_assign
         %right T_Sub_assign
         %right T_Mul_assign
         T_Div_assign
         T_Colon
         T_Semicolon 
         T_LeftBrace 
         T_RightBrace
         T_LeftBracket
         T_RightBracket
         T_Comma
         
         
         


/* Non-terminal types
 * ------------------
 * In order for yacc to assign/access the correct field of $$, $1, we
 * must to declare which field is appropriate for the non-terminal.
 * As an example, this first type declaration establishes that the DeclList
 * non-terminal uses the field named "declList" in the yylval union. This
 * means that when we are setting $$ for a reduction for DeclList or reading
 * $n which corresponds to a DeclList nonterminal we are accessing the field
 * of the union named "declList" which is of type List<Decl*>.
 * pp2: You'll need to add many of these of your own.
 */

%type <declList>              DeclList

%type <varList>               Single_Declaration_List
                              ParamDeclList

%type <varDecl>               Single_Declaration
                              Parameter_Declaration

%type <decl>                  Decl
%type <fnDecl>                Function_Prototype 
                              Function_Declarator
                              Function_Header 
                               
                              Function_Definition 
               
%type <stmt>                  Compound_Statement 
                              Statement 
                              Switch_Statement
                              Iteration_Statement
                              Selection_Statement
                              
                              
%type <caseList>              Case_List
%type <_case>                 Case
%type <_default>              Default

%type <stmtList>              Statement_List

%type <type>                  Fully_Specified_Type     
                        
%type <expression>            Expression
                              Primary_Expression
                              Postfix_Expression
                              Unary_Expression 
                              Multiplicative_Expression
                              Additive_Expression
                              Shift_Expression
                              Relational_Expression
                              Equality_Expression
                              Logical_Or_Expression
                              Logical_Xor_Expression
                              Logical_And_Expression
                              Inclusive_Or_Expression
                              Exclusive_Or_Expression
                              And_Expression
                              Conditional_Expression
                              Assignment_Expression
                              Expression_Statement

                            

%type <op>                    Unary_Operator
%type <op>                    Assignment_Operator



%%
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.
   
 */

Program   :    DeclList            { 
                                      @1; 
                                      /* pp2: The @1 is needed to convince 
                                       * yacc to set up yylloc. You can remove 
                                       * it once you have other uses of @n*/
                                      Program *program = new Program($1);
                                      // if no errors, advance to next phase
                                      if (ReportError::NumErrors() == 0) 
                                          program->Print(0);
                                    }
          ;

DeclList  :    DeclList Decl        { ($$=$1)->Append($2); }
          |    Decl                 { ($$ = new List<Decl*>)->Append($1); }
          ;

Decl      :   Single_Declaration T_Semicolon      {$$ = $1;}
          |   Function_Prototype T_Semicolon      {$$ = $1;}
          |   Function_Definition     {}
          ;

/* BEGIN Function_Prototype */

Function_Prototype    :   Function_Declarator T_RightParen
                      ;

Function_Declarator   :   Function_Header
                      ;

Function_Header       :   Fully_Specified_Type T_Identifier T_LeftParen   { $$ = new FnDecl(new Identifier(@2, $2), $1, new List<VarDecl*>); }
                      |   Fully_Specified_Type T_Identifier T_LeftParen ParamDeclList     {$$ = new FnDecl(new Identifier(@2, $2), $1, $4);}
                      ;

ParamDeclList         :  Parameter_Declaration  T_Comma  ParamDeclList   { ($$=$3)->Append($1); } 
                      |   Parameter_Declaration                          { ($$ = new List<VarDecl*>)->Append($1); }
                      ;

Parameter_Declaration             :   Fully_Specified_Type T_Identifier {}
                                  |   Fully_Specified_Type  {}
                                  ;

/* END Function_Prototype */




 /* BEGIN Init_Declaration_List */

Single_Declaration         :   Fully_Specified_Type T_Identifier   { $$ = new VarDecl(new Identifier(@2, $2), $1); }
                           ;

Single_Declaration_List    :   Single_Declaration_List Single_Declaration     {($$=$1)->Append($2);}
                           |                                                {$$ = new List<VarDecl*>;}
                           ; 

Fully_Specified_Type  :   T_Void        {$$ = Type::voidType;}
                      |   T_Float       {$$ = Type::floatType;}
                      |   T_Int         {$$ = Type::intType;}
                      |   T_Bool        {$$ = Type::boolType;}
                      |   T_Vec2        {$$ = Type::vec2;}
                      |   T_Vec3        {$$ = Type::vec3;}
                      |   T_Vec4        {$$ = Type::vec4;}
                      |   T_Mat2        {$$ = Type::mat2;}
                      |   T_Mat3        {$$ = Type::mat3;}
                      |   T_Mat4        {$$ = Type::mat4;}
                      ;

 /* END Init_Declaration_List */


/* BEGIN OF StatementList */

Function_Definition   :   Function_Prototype Compound_Statement       {($$ = $1)->SetFunctionBody($2);}
                      ;

Compound_Statement                :  T_LeftBrace Single_Declaration_List Statement_List T_RightBrace    {$$ = new StmtBlock($2, $3);}
                                  ; 

Statement_List                    :   Statement_List Statement  {($$=$1)->Append($2);}
                                  |   Statement                 {($$ = new List<Stmt*>)->Append($1);} 
                                  |                             {$$ =  new List<Stmt*>;}
                                  ;

Statement                         :   Compound_Statement  {}
                                  |   Simple_Statement  {}
                                  ;

Simple_Statement                  :   Declaration_Statement
                                  |   Expression_Statement
                                  |   Selection_Statement
                                  |   Switch_Statement
                                  |   Iteration_Statement
                                  ;

Declaration_Statement             :   Decl
                                  ;

Expression_Statement              :   Expression T_Semicolon    {$$ = $1;}
                                  |   T_Semicolon             {$$ = new EmptyExpr();}
                                  ;

Expression                        :   Assignment_Expression
                                  ;

Assignment_Expression             :   Conditional_Expression
                                  |   Unary_Expression Assignment_Operator Assignment_Expression  {$$ = new AssignExpr($1, $2, $3);} 
                                  ;

Conditional_Expression            :   Logical_Or_Expression
                                  ;

Logical_Or_Expression             :   Logical_Xor_Expression
                                  |   Logical_Or_Expression T_Or_op Logical_Xor_Expression        {$$ = new LogicalExpr($1, new Operator(@2, (const char*)"||"), $3);}
                                  ;

Logical_Xor_Expression            :   Logical_And_Expression
                                  ;

Logical_And_Expression            :   Inclusive_Or_Expression
                                  |   Logical_And_Expression T_And_op Inclusive_Or_Expression     {$$ = new LogicalExpr($1, new Operator(@2, (const char*)"&&"), $3);}
                                  ;

Inclusive_Or_Expression           : Exclusive_Or_Expression
                                  ; 

Exclusive_Or_Expression           : And_Expression
                                  ;

And_Expression          : Equality_Expression                                    
                        ;

Equality_Expression     : Relational_Expression                                 
                        | Equality_Expression T_EQ_op Relational_Expression     {$$ = new EqualityExpr($1, new Operator(@2, (const char*)"=="), $3);}
                        | Equality_Expression T_NE_op Relational_Expression     {$$ = new EqualityExpr($1, new Operator(@2, (const char*)"!="), $3);}
                        ;

Relational_Expression   : Shift_Expression                                      
                        | Relational_Expression T_LeftAngle Shift_Expression    {$$ = new RelationalExpr($1, new Operator(@2, (const char*)">"), $3);}
                        | Relational_Expression T_RightAngle Shift_Expression   {$$ = new RelationalExpr($1, new Operator(@2, (const char*)"<"), $3);}
                        | Relational_Expression T_LE_op Shift_Expression        {$$ = new RelationalExpr($1, new Operator(@2, (const char*)"<="), $3);}
                        | Relational_Expression T_GE_op Shift_Expression        {$$ = new RelationalExpr($1, new Operator(@2, (const char*)">="), $3);}
                        ;

Shift_Expression        : Additive_Expression                                  
                        ;  

Additive_Expression       : Multiplicative_Expression                          
                          | Additive_Expression T_Plus Multiplicative_Expression   {$$ = new ArithmeticExpr($1, new Operator(@2, (const char*)"+"), $3);}
                          | Additive_Expression T_Dash Multiplicative_Expression   {$$ = new ArithmeticExpr($1, new Operator(@2, (const char*)"-"), $3);}
                          ; 

Multiplicative_Expression : Unary_Expression                                    
                          | Multiplicative_Expression T_Star Unary_Expression      {$$ = new ArithmeticExpr($1, new Operator(@2, (const char*)"*"), $3); }
                          | Multiplicative_Expression T_Slash Unary_Expression     {$$ = new ArithmeticExpr($1, new Operator(@2, (const char*)"/"), $3); }      
                          ; 

Unary_Expression        : Postfix_Expression                                    
                        | T_Inc_op Unary_Expression                             {$$ = new ArithmeticExpr(new Operator(@1, (const char*)"++"), $2);} 
                        | T_Dec_op Unary_Expression                             {$$ = new ArithmeticExpr(new Operator(@1, (const char*)"--"), $2);}
                        | Unary_Operator Unary_Expression                       {$$ = $2;}                     
                        ;

Postfix_Expression      : Primary_Expression                                    
                        | Postfix_Expression T_Dot T_Field_selection            { } /*  NEEDS TO BE FINISHED */ 
                        | Postfix_Expression T_Inc_op                           {$$ = new PostfixExpr($1, new Operator(@2, (const char*)"++"));}
                        | Postfix_Expression T_Dec_op                           {$$ = new PostfixExpr($1, new Operator(@2, (const char*)"--"));}
                        ;

Assignment_Operator    : T_Equal                                                {$$ = new Operator(@1, (const char*)"="); }
                       | T_Mul_assign                                           {$$ = new Operator(@1, (const char*)"*="); }      
                       | T_Div_assign                                           {$$ = new Operator(@1, (const char*)"/="); }
                       | T_Add_assign                                           {$$ = new Operator(@1, (const char*)"+="); }
                       | T_Sub_assign                                           {$$ = new Operator(@1, (const char*)"-="); }
                       ;

Unary_Operator         : T_Plus                                                   {$$ = new Operator(@1, (const char*)"+");}
                       | T_Dash                                                   {$$ = new Operator(@1, (const char*)"-");}
                       ;
                       
                       
Primary_Expression     : T_IntConstant                                          {$$ = new IntConstant(@1, $1);}        
                       | T_FloatConstant                                        {$$ = new FloatConstant(@1, $1);}
                       | T_BoolConstant                                         {$$ = new BoolConstant(@1, $1);}
                       | T_Identifier                                           {$$ = new VarExpr(@1, new Identifier(@1, $1));  }
                       | T_LeftParen Expression T_RightParen                    {$$ = $2;}
                       ;

//Variable_Identifier    : T_Identifier {}
//                       ;

/******************* END OF STATEMENT LIST *******************/




/*******************  BEGIN SELECTION STATEMENT ***************/

Selection_Statement               : T_If T_LeftParen Expression T_RightParen Compound_Statement                     {$$ = new IfStmt($3, $5, NULL );}
                                  | T_If T_LeftParen Expression T_RightParen Compound_Statement T_Else Statement    {$$ = new IfStmt($3, $5, $7 );}
                                  ;

/*******************  END SELECTION STATEMENT ***************/




/*******************  BEGIN SWITCH STATEMENT ***************/
Switch_Statement       : T_Switch T_LeftParen Expression T_RightParen T_LeftBrace Case_List Default T_RightBrace               {$$ = new SwitchStmt($3, $6, $7);}
                       ;

Case_List              : Case_List Case                                                      {($$=$1)->Append($2);}
                       | Case                                                                {($$ = new List<Case*>)->Append($1);}
                       ;

Default                : T_Default T_Colon Statement_List                                        {$$ = new Default($3);} 
                       |                                                                         { $$ = NULL;}
                       ;                       
/*******************  END SWITCH STATEMENT ****************/




/*******************  END CASE_LABEL STATEMENT ****************/

    
Case            : T_Case T_IntConstant T_Colon Statement_List                              {$$ = new Case(new IntConstant(@2, $2), $4);}
                ; 
/*******************  END CASE_LABEL STATEMENT ****************/



/*******************  END ITERATION STATEMENT ****************/
Iteration_Statement      : T_While T_LeftParen Expression T_RightParen Statement                                                {$$ = new WhileStmt($3, $5);}
                         | T_For T_LeftParen Expression_Statement Expression_Statement Expression T_RightParen Statement        {$$ = new ForStmt($3, $4, $5, $7); }
                         ; 

/*******************  END ITERATION STATEMENT ****************/




%%

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

