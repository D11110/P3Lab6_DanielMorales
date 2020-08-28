#include <iostream>
#include "STRING.HPP"

#ifndef CHAR_H
#define CHAR_H

using namespace std;

class CHAR
{
private:
    char caracter;

public:
    CHAR(){

    };
    CHAR(char caracterRecibido)
    {
        caracter = caracterRecibido;
    };
    char getChar()
    {
        return caracter;
    };

    void operator<<(CHAR caracterRecibido)
    {
        caracter = caracterRecibido.getChar();
    }

    void operator<<(char caracterRecibido)
    {
        caracter = caracterRecibido;
    }

    STRING operator+(CHAR caracterRecibido)
    {
        STRING temp;
        string newString;
        newString += caracter;
        newString += caracterRecibido.getChar();
        temp << newString;
        return temp;
    }

    void operator!()
    {
        std::cout << caracter << std::endl;
    };
};

#endif