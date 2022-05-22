#pragma once
#include <iostream>

using namespace std;

class Forma
{
private:
    string color;
    int coord [2] = {0,0};
    string forma;
public:
    Forma(string,int,string);
    ~Forma();
    virtual void imprimir();
    virtual void obtenerColor();
    virtual void cambiarColor();
    virtual void moverCoordenadas();
};

