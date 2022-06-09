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
    //Calcular cuantos elementos ingresados hay.
    i++;
}
void Lista::Eliminar_Ultimo(){
    int x=0;
    Nodo *elm = getPrimero();
    while (x<i-2){
        elm = elm -> getEnlace();
        x++;
    }
    elm -> setEnlace(NULL);
}
