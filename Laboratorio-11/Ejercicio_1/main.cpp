#include "Pila.h"
#include "Pila.cpp"
#include "Nodo.h"
#include "Nodo.cpp"

int main(){
    Pila pl1 = Pila();
    int n, opc;
    bool vf=true;
    
    while(vf == true){
        cout<<"*************************************"<<endl;
        cout<<"Que deseas hacer:"<<endl<<"1. Insertar elemento a la pila."<<
        endl<<"2. Eliminar Elemento de la lista"<<endl<<"3. Salir"<<endl;
        cin>>opc;
        if (opc == 1){
            cout<<"Que entero desea ingresar a la pila: ";
            cin>>n;
            pl1.Push(n);
        }
        else if (opc == 2){
            vf = false;
        }
    }
    return 0;
}
