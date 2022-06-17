#include "Pila.h"

Pila::Pila(){
    this->limite = NULL;
}

void Pila::Push(int n){
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->siguiente = this->limite;
    this->limite = nuevo;
    cout<<"Nodo "<<n<<" ingresado."<<endl;
}




