#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

class Lista
{
private:
    Nodo *Primero;
public:
    Lista();
    ~Lista();
    void setPrimero(Nodo *);
    Nodo *getPrimero();
    Nodo *getUltimo();
    void Agregar (Nodo *);
};
