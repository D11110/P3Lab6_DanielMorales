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
    INTEGER(int valorRecibido)
    {
        entero = valorRecibido;
    };
    int getValor()
    {
        return entero;
    }
    void operator<<(INTEGER valorRecibido)
    {
        entero = valorRecibido.getValor();
    };
    void operator<<(int valorRecibido)
    {
        entero = valorRecibido;
    };

    void operator!()
    {
        std::cout << entero << std::endl;
    };
    INTEGER operator+(INTEGER valorRecibido)
    {
        INTEGER resp;
        int resultadoSuma = entero + valorRecibido.getValor();
        resp << resultadoSuma;
        return resp;
    };

    INTEGER operator-(INTEGER valorRecibido)
    {
        INTEGER respuesta;
        int resultadoResta = entero - valorRecibido.getValor();
        respuesta << resultadoResta;
        return respuesta;
    };

    INTEGER operator/(INTEGER valorRecibido)
    {
        INTEGER respuesta;
        int resultadoDiv = entero / valorRecibido.getValor();
        respuesta << resultadoDiv;
        return respuesta;
    };

    INTEGER operator*(INTEGER valorRecibido)
    {
        INTEGER respuesta;
        int resultadoMult = entero * valorRecibido.getValor();
        respuesta << resultadoMult;
        return respuesta;
    };
};

#endif