#include "Ganso.h"

Ganso::Ganso(string _comida,string _color,int _patas,string _sonido) : Ave(_comida,_color,_patas)
{
    sonido = _sonido;
}

Ganso::~Ganso()
{
}

void Ganso::mostrarInfoGanso(){
    mostrarInformacion();
    comer();
    cout<<"Hace el sonido "<<sonido<<endl;
}
