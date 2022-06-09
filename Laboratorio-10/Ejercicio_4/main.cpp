#include <iostream>
#include "Nodo.h"
#include "Lista.h"
#include "Nodo.cpp"
#include "Lista.cpp"

using namespace std;

int main(){
    //Definir las clases
    Nodo *Aux = NULL, *Aux2 = NULL;
    Lista *Cadena = new Lista();

    //Agregar numeros a la lista (Demostracion)
    Aux = new Nodo();
    Aux -> setDato(8);
    Cadena -> Agregar(Aux);
    
    Aux = new Nodo();
    Aux -> setDato(9);
    Cadena -> Agregar(Aux);

    Aux = new Nodo();
    Aux -> setDato(10);
    Cadena -> Agregar(Aux);

   //Imprimir (Demostracion)
    Aux2 = Cadena ->getPrimero();
    cout<<"Impresion de los datos de la lista: "<<endl;
    while (Aux2!=NULL){
        cout<<Aux2->getDato()<<" - ";
        Aux2 = Aux2 ->getEnlace();
    }

    cout<<endl;

    Cadena -> Eliminar_Ultimo();

    Aux2 = Cadena ->getPrimero();
    cout<<"Impresion de los datos de la lista renovada: "<<endl;
    while (Aux2!=NULL){
        cout<<Aux2->getDato()<<" - ";
        Aux2 = Aux2 ->getEnlace();
    }
    return 0;
}
