#include "Nodo.h"

//Constructor
Nodo::Nodo()
{
    dato = 0;
    enlace = NULL;
}

Nodo::~Nodo()
{
}

void Nodo::setDato(int _dato){
    dato = _dato;
}

int Nodo::getDato(){
    return dato;
}

void Nodo::setEnlace(Nodo *_enlace){
    enlace = _enlace;
}

Nodo *Nodo::getEnlace(){
    return enlace;
}
