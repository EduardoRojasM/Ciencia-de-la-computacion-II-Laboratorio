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

int Pila::buscar(int busq){
    Nodo *aux = this->limite;
    while (aux != NULL){
        if (aux->dato == busq){
            cout<<"Elemento "<<aux->dato<<" encontrado."<<endl;
            return aux->dato;
            break;
        }
        else{
            aux = aux->siguiente;
        }
    }
    cout<<"Elmento no encontrado."<<endl;
}



