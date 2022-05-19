#include "Ave.h"

Ave::Ave(string _comida,string _color,int _patas)
{
    comida = _comida;
    color = _color;
    patas = _patas;
}

Ave::~Ave()
{
}

void Ave::mostrarInformacion(){
    cout<<"Tiene color "<<color<<" y "<<patas<<" patas"<<endl;
}

void Ave::comer(){
    cout<<"Come "<<comida<<endl;
}