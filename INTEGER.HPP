#include <iostream>

#ifndef INTEGER_H
#define INTEGER_H

using namespace std;

class INTEGER
{
private:
    int entero;

public:
    INTEGER()
    {
        entero = 0;
    };
    INTEGER(int a)
    {
        entero = a;
    };
    int getValor()
    {
        return entero;
    }
    void operator<<(INTEGER valor)
    {
        entero = valor.getValor();
    };
    void operator<<(int valor)
    {
        entero = valor;
    };

    void operator!()
    {
        std::cout << entero << std::endl;
    };
    INTEGER operator+(INTEGER suma)
    {
        INTEGER resp;
        int resultadoSuma = entero + suma.getValor();
        resp << resultadoSuma;
        return resp;
    };

    INTEGER operator-(INTEGER resta)
    {
        INTEGER respuesta;
        int resultadoResta = entero - resta.getValor();
        respuesta << resultadoResta;
        return respuesta;
    };

    INTEGER operator/(INTEGER div)
    {
        INTEGER respuesta;
        int resultadoDiv = entero / div.getValor();
        respuesta << resultadoDiv;
        return respuesta;
    };

    INTEGER operator*(INTEGER mult)
    {
        INTEGER respuesta;
        int resultadoMult = entero * mult.getValor();
        respuesta << resultadoMult;
        return respuesta;
    };
};

#endif