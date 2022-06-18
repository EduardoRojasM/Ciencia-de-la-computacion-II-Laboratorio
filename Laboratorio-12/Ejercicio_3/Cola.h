#pragma once
#include "Nodo.h"

class cola {
    public:
    cola() ; 
    nodo *ultimo;
    nodo *primero;
    void Anadir(int v);
    int Buscar(int Busqueda);
};