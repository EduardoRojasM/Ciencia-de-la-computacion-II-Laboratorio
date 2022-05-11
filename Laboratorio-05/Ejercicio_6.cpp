/* 6. Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero. */

#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return  a - b;
}

int multiplica(int a, int b) {
    return  a * b;
}

int divide(int a, int b) {
    return  a / b;
}

int main() {
    int (*operacion[4]) (int,int) = {suma, resta, multiplica, divide};

    int a,b,c;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;

    cout<<endl<<"Operaciones: "<<endl;
    for(int i = 0; i < 4; i++) {
        c = operacion[i] (a, b); 
        if (i==0){
            cout<<"Suma: ";
        }
        else if (i==1){
            cout<<"Resta: ";
        }
        else if (i==2){
            cout<<"Multiplicacion: ";
        }
        else {
            cout<<"Division: ";
        }
        cout<<c<<endl;       
    }

    return 0;
}