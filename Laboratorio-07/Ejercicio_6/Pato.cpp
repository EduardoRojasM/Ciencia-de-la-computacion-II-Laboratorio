#include "Pato.h"

Pato::Pato(string _comida,string _color,int _patas, string _cocinado) : Ave(_comida,_color,_patas)
{
    cocinado = _cocinado;
}

Pato::~Pato()
{
}

void Pato::mostrarInfoPato(){
    mostrarInformacion();
    comer();
    cout<<"Se hace la comida "<<cocinado<<endl;
}