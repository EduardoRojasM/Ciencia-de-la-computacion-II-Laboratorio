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
    void obtenerColor();
    void cambiarColor();
    void moverCoordenadas();
};

