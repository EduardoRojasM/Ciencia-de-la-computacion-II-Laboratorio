/* 3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe. */

#include <iostream>

using namespace std;

template <class A, class B>
A correo (A,B);

int main(){
    char letra;
    string apellido;
    for (int i=0; i<5; i++){
        cout<<"Introduzca la letra: ";
        cin>>letra;
        cout<<"Introduzca el apellido: ";
        cin>>apellido;
        correo(letra,apellido);
    }
    return 0;
}

template <class A, class B>
A correo (A n1,B n2){
    cout<<"Correo: "<<endl;
    cout<<n1<<n2<<"@unsa.edu.pe"<<endl<<endl;
}