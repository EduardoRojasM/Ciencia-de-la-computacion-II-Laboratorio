/* 1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla. */

#include "iostream"
#include "string"

using namespace std;

int main(){
    string nombre[4];
    string apellido[4];
    string edad[4];
    string dni[4];
    cout << "Por favor ingrese la siguiente información de las personas: \n";
    for(int i = 0; i < 3; i++){
        cout <<endl<<"Informacion de la persona "<<i+1<<": "<<endl;
        cout << "Nombre: ";
        getline(cin, nombre[i]);
        cout << "Apellido: ";
        getline(cin, apellido[i]);
        cout << "Edad: ";
        getline(cin, edad[i]);
        cout << "DNI: ";
        getline(cin, dni[i]);
    }
    cout<<"Nombre - Apellido - Edad - DNI"<<endl;
    for(int i=0;i<3;i++){
        cout<<nombre[i]<<" - "<<apellido[i]<<" - "<<edad[i]<<" - "<<dni[i]<<endl;
    }
}