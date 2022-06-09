#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

class Lista
{
private:
    Nodo *Primero;
    int i = 0;
public:
    Lista();
    ~Lista();
    void setPrimero(Nodo *);
    Nodo *getPrimero();
    Nodo *getUltimo();
    void Agregar (Nodo *);
    void Eliminar_Ultimo();
};
