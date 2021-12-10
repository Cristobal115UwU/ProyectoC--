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
        const int INT = 1;
        const int FLOAT = 2;
        const int DOUBLE = 3;
        const int STRUCT = 4;
        const int VOID = 5;
        const int IF = 6;
        const int ELSE = 7;
        const int WHILE = 8;
        const int DO = 9;
        const int PRINT = 10;
        const int SCAN =11;
        const int BREAK = 12;
        const int RETURN = 13;
        const int ID = 14;
        const int MAS = 15;
        const int MENOS = 16;
        const int MULT = 17;
        const int DIV = 18;
        const int ASIG = 19;
        const int OR = 20;
        const int AND = 21; 
        const int NOT = 22;
        const int MENOR = 23;
        const int MAYOR = 24;
        const int IGUAL = 25;
        const int NOIGUAL = 26;
        const int MAYORIGUAL = 27;
        const int MENORIGUAL = 28;
        const int NUMERO = 29;
        const int CADENA = 30;
        const int PYC = 31;
        const int COMA = 32;
        const int PUNTO = 33;
        const int LPAR = 34;
        const int RPAR = 35;
        const int LKEY = 36;
        const int RKEY = 37;
        const int BLANCO = 38;
    };

}

#endif /* END __SCANNER_H__ */