#pragma once
#include <iostream>

using namespace std;

#include "Ave.h"

class Gallina : public Ave
{
private:
    string pico;
public:
    Gallina(string,string,int,string);
    ~Gallina();
    void mostrarInfoGallina();
};

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
