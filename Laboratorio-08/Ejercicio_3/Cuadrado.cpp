#include "Cuadrado.h"

Cuadrado::Cuadrado(string _color,int _coord,string _forma, float _L_menor, float _L_mayor) : Rectangulo(_color,_coord,_forma,_L_menor,_L_mayor)
{
}

Cuadrado::~Cuadrado()
{
}

void Cuadrado::area(){
    cout<<"El area es: "<<L_menor*L_menor<<endl;   
}
void Cuadrado::perimetro(){
    cout<<"El perimetro es: "<< 4 * L_menor<<endl;
}

void Cuadrado::imprimir(){
    Rectangulo::imprimir();
    cout<<"El area es: "<<L_menor*L_menor<<endl;
    cout<<"El perimetro es: "<< 4 * L_menor<<endl;
}
