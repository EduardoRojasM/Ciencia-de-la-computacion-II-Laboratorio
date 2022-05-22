#include "Elipse.h"

Elipse::Elipse(string _color,int _coord,string _forma, int _radio_menor, int _radio_mayor) : Forma(_color, _coord,_forma)
{
    radio_menor = _radio_menor;
    radio_mayor = _radio_mayor;
}

Elipse::~Elipse()
{
}

int Elipse::area(){
    float area;
    area = pi*(radio_menor*radio_mayor);
    return area;
}

void Elipse::imprimir(){
    Forma::imprimir();
    cout<<"El area de la elipse es: ";
    area();
}
