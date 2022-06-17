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

int Pila::Pop(){
    Nodo *aux = this->limite;
    if (aux != NULL){
        cout<<"Elemento "<<aux->dato<<" eliminado."<<endl;
        aux = aux->siguiente;
        this->limite = aux;
        return 0;
    }
    cout<<"No hay elementos"<<endl;
}


