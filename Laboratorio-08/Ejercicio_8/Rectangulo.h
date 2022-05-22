#pragma once
#include <iostream>

using namespace std;
#include "Forma.h"

class Rectangulo : public Forma
{
private:
    float L_menor, L_mayor;
public:
    Rectangulo(string,int,string,float,float);
    ~Rectangulo();
    void imprimir();
    int area();
    void perimetro();
    void cambioTamanio();
};

