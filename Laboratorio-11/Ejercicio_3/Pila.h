#pragma once
#include "Nodo.h"

class Pila{
    public:
        Nodo *limite;
        Pila();
        void Push(int n);
        int buscar(int busq);
};