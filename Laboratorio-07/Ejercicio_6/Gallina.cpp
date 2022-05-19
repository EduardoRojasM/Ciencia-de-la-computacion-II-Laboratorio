#include "Gallina.h"

Gallina::Gallina(string _comida,string _color,int _patas, string _pico) : Ave(_comida,_color,_patas)
{
    pico = _pico;
}

Gallina::~Gallina()
{
}
void Gallina::mostrarInfoGallina(){
    mostrarInformacion();
    comer();
    cout<<"Tiene el pico "<<pico<<endl;
}
