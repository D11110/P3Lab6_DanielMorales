#include <iostream>

#ifndef STRING_H
#define STRING_H

using namespace std;

class STRING
{
private:
    string cadena;

public:
    string getString()
    {
        return cadena;
    };
    void operator<<(STRING cadenaRecibida)
    {
        cadena = cadenaRecibida.getString();
    };
    void operator<<(string cadenaRecibida)
    {
        cadena = cadenaRecibida;
    };
    void operator!()
    {
        std::cout << cadena << std::endl;
    };
    STRING operator*(int cant)
    {
        string temp = "";
        for (int i = 0; i < cant; i++)
        {
            temp += cadena;
        }
        STRING tempo;
        tempo << temp;
        return tempo;
    };
};

#endif