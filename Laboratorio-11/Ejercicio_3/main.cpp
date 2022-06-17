#include "Pila.h"
#include "Pila.cpp"
#include "Nodo.h"
#include "Nodo.cpp"

int main(){
    Pila pl1 = Pila();
    int n, opc, bus;
    bool vf=true;
    
    while(vf == true){
        cout<<"*************************************"<<endl;
        cout<<"Que deseas hacer:"<<endl<<"1. Insertar elemento a la pila."<<
        endl<<"2. Buscar elemento de la lista"<<endl<<"3. Salir"<<endl;
        cin>>opc;

        if (opc == 1){
            cout<<"Que entero desea ingresar a la pila: ";
            cin>>n;
            pl1.Push(n);
        }
        else if (opc == 2){
            cout<<"Que elemento desea buscar: ";
            cin>>bus;
            pl1.buscar(bus);
        }
        else if(opc == 3){
            vf = false;
        }
    }
    return 0;
}