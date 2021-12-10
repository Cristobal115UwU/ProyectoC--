#ifndef __SCANNER_HPP__ 
#define __SCANNER_HPP__ 1

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h> 
#endif

namespace C_1{
    class Scanner : public yyFlexLexer{
    public:
        Scanner(std::istream *in) : yyFlexLexer(in){
        };

        using FlexLexer::yylex;
        virtual int yylex();

    private:
    const int ERROR = -1;
    const int ACEPTAR = 0;
    const int CHAR = 1;
    const int INT = 2;
    const int FLOAT = 3;
    const int DOUBLE = 4;
    const int STRUCT = 5;
    const int VOID = 6;
    const int IF = 7;
    const int ELSE = 8;
    const int WHILE = 9;
    const int DO = 10;
    const int PRINT = 11;
    const int SCAN =12;
    const int BREAK = 13;
    const int RETURN = 14;
    const int ID = 15;
    const int MAS = 16;
    const int MENOS = 17;
    const int MULT = 18;
    const int DIV = 19;
    const int ASIG = 20;
    const int OR = 21;
    const int AND = 22; 
    const int NOT = 23;
    const int MENOR = 24;
    const int MAYOR = 25;
    const int IGUAL = 26;
    const int NOIGUAL = 27;
    const int MAYORIGUAL = 28;
    const int MENORIGUAL = 29;
    const int NUMERO = 30;
    const int CADENA = 31;
    const int CARACTER = 32;
    const int PYC = 33;
    const int COMA = 34;
    const int PUNTO = 35;
    const int LPAR = 36;
    const int RPAR = 37;
    const int LLLAVE = 38;
    const int RLLAVE = 39;
    const int BLANCO = 40;
    };

}

#endif /* END __SCANNER_H__ */