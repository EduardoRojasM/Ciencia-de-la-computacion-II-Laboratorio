#include "OperacionFactorial.h"

OperacionFactorial::OperacionFactorial(int _operador) : OperacionBase(_operador)
{
}

OperacionFactorial::~OperacionFactorial()
{
}

void OperacionFactorial::devolverFactorial(){
    int facto=1;
    int base = getOperador();
    for (int i=1; i<=base; i++){
        facto = facto * i;
    }
    cout<<"El factorial es: "<<facto<<endl;
}