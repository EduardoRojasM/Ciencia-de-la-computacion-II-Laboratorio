#pragma once
#include <iostream>

using namespace std;

class Nodo
{
private:
    int dato;
    Nodo *enlace;
public:
    Nodo();
    ~Nodo();
    //Dato
    void setDato(int);
    int getDato();
    //Enlace
    void setEnlace(Nodo*);
    Nodo *getEnlace();
};