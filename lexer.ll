%{
#include <iostream>
#include <string>
using namespace std;

#include "tokens.h"
#include "Lexer.h"

%}

%option c++
%option outfile="Lexer.cpp"
%option yyclass="Lexer"
%option case-insensitive

ENTERO [0-9]+
FLOTANTE [0-9]*\.[0-9]+([Ee][+-]?[0-9]+)?
DOUBLE [0-9]*.[0-9]+([Ee][+-][0-9]+)
ID [A-Za-z_][A-Za-z0-9_]*
ESP [ \t\n\r]
CADENA ["]([^"\\\n]|\\.|\\\n)*["]

%%

"+" { return MAS; }
"-" { return MENOS;}
"*" { return MUL;}
"/" { return DIV;}
"=" { return ASIG;}
"(" { return LPAR;}
")" { return RPAR;}
"," { return COMA;}
";" { return PYC;}
"."      { return PUNTO;}
"{" { return LKEY;}
"}" { return RKEY; }
"||"     { return OR;}
"&&"     { return AND;}
"!"	    { return NOT;}
"<"      { return MENOR;}
">"      { return MAYOR;}
"=="     { return IGUAL;}
"!="     { return NOIGUAL;}
">="     { return MAYORIGUAL;}
"<="     { return MENORIGUAL;}

"if"    { return IF;}
"int"    { return INT;}
"float"    { return FLOAT;}
"else"  { return ELSE;}
"while"    { return WHILE;}
"double" { return DOUBLE;}
"struct" { return STRUCT;}
"void"   { return VOID;}
"do"     { return DO;}
"print"  { return PRINT;}
"scan"   { return SCAN;}
"break"  { return BREAK;}
"return" { return RETURN;}

{ENTERO}    { return NUMERO;}
{FLOTANTE}  { return NUMERO;}
{DOUBLE}    { return NUMERO;}
{CADENA}    { return CADENA;}
{ID} {return ID;}
{ESP}   {}


.   { cout<<"ERROR LEXICO "<<yytext<<endl;}
%%
int yyFlexLexer::yywrap(){
    return 1;
}