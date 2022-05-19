#include "Objetos.h"

Objetos::Objetos(string _rgb, string _material, string _objeto) : Color ( _rgb), Material(_material)
{
    objeto = _objeto;
}

Objetos::~Objetos()
{
}

void Objetos::crearObjeto(){
    cout<<objeto<<" de color ";
    mostrarColor();
    cout<<" y material de ";
    mostrarMaterial();
}