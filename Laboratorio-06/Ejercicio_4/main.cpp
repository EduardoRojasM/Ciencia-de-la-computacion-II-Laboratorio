#include "stdfix.h"
#include <iostream>
#include "Arreglo.h"
#include "Arreglo.cpp"

int main(){
    int x;
    int datos [5];
    Arreglo a1 = Arreglo(datos[5]);
    
    while (true){
        cout<<"******************"<<endl;
        cout<<"Que desea hacer: "<<endl;
        cout<<"1. Agregar datos"<<endl;
        cout<<"2. Eliminar datos"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>x;
        if (x==1){a1.AgregarDato();}
        else if (x==2){a1.EliminarDato();}
        else if (x==3){break;}
        else{cout<<"No existe la opcion."<<endl;}
    }
    
    return 0;
}