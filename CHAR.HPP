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
    CHAR(char a)
    {
        caracter = a;
    };
    char getChar()
    {
        return caracter;
    };

    void operator<<(CHAR a)
    {
        caracter = a.getChar();
    }

    void operator<<(char a)
    {
        caracter = a;
    }

    STRING operator+(CHAR car1)
    {
        STRING temp;
        string newString;
        newString += caracter;
        newString += car1.getChar();
        temp << newString;
        return temp;
    }

    void operator!()
    {
        std::cout << caracter << std::endl;
    };
};

#endif