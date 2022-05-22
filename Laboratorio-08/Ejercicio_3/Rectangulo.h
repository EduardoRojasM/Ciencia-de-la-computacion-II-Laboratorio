#pragma once
#include <iostream>

using namespace std;
#include "Forma.h"

class Rectangulo : public Forma
{
protected:
    float L_menor, L_mayor;
public:
    Rectangulo(string,int,string,float,float);
    ~Rectangulo();
    void imprimir();
    virtual void area();
    virtual void perimetro();
    void cambioTamanio();
};

