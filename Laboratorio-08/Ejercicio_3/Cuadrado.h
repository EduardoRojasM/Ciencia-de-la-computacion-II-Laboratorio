#pragma once

#include "Rectangulo.h"

using namespace std;

class Cuadrado : public Rectangulo
{
private:
public:
    Cuadrado(string,int,string,float,float);
    ~Cuadrado();
    void area();
    void perimetro();
    void imprimir();
};
