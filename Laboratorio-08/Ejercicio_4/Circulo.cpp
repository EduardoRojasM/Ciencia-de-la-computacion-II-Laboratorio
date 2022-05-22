#include "Circulo.h"

Circulo::Circulo(string _color,int _coord,string _forma, int _radio_menor, int _radio_mayor) : Elipse(_color, _coord,_forma,_radio_menor,_radio_mayor)
{
}

Circulo::~Circulo()
{
}

void Circulo::area(){
    float area = pi * (radio_menor*radio_menor);
    cout<<"El area del circulo es : "<<area<<endl;
}

void Circulo::imprimir(){
    Forma::imprimir();
    Circulo::area();
}