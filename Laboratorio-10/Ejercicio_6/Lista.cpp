#include "Lista.h"

Lista::Lista()
{
    Primero = NULL; 
}

Lista::~Lista()
{
}

void Lista::setPrimero(Nodo *_Primero){
    Primero = _Primero;
}

Nodo *Lista::getPrimero(){
    return Primero;
}

Nodo *Lista::getUltimo(){
    Nodo *Ultimo = getPrimero();
    while (Ultimo->getEnlace()!=NULL)
    {
        Ultimo = Ultimo -> getEnlace();
    }
    return Ultimo;
}

void Lista::Agregar(Nodo *nuevo){
    if (getPrimero()==NULL){
        setPrimero(nuevo);
    }
    else{
        getUltimo() -> setEnlace(nuevo);
    }
    
}
void Lista::Eliminar (int num){
    Nodo *Buscar = getPrimero();
    Nodo *Anterior = NULL;
    if (Buscar -> getDato()==num){
        setPrimero(getPrimero()->getEnlace());
    }
    else{
        while (Buscar!=NULL and Buscar->getDato() != num){
            Anterior = Buscar;
            Buscar = Buscar -> getEnlace();
        }
        if (Buscar != NULL){
            Anterior -> setEnlace (Buscar -> getEnlace());
        }
    }
    delete Buscar;
}