#include "Rectangulo.h"

Rectangulo::Rectangulo(string _color,int _coord,string _forma, float _L_menor, float _L_mayor) : Forma(_color,_coord,_forma)
{
    L_menor = _L_menor;
    L_mayor = _L_mayor;
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::imprimir(){
    Forma::imprimir();
    cout<<"El lado mayor es: "<<L_mayor<<endl;
    cout<<"El lado menor es: "<<L_menor<<endl;
}

int Rectangulo::area(){
    return L_mayor*L_menor;   
}
void Rectangulo::perimetro(){
    cout<<"El perimetro es: "<< (2 * L_mayor) + (2 * L_menor)<<endl;
}
void Rectangulo::cambioTamanio(){
    float tam;
    cout<<"Cuanto desea aumentar o disminuir el tamanio: ";
    cin>>tam;
    L_mayor = tam * L_mayor;
    L_menor = tam * L_menor;
    //cout<<"El nuevo tamanio es: "<<L_mayor<<" x "<<L_menor<<endl;
}