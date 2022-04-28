/*1. Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).*/

#include <iostream>

using namespace std;

int pow (int base, int exp);

int potencia=1;

int main(){
    int x,y;
    cout<<"Ingresar el numero base: ";
    cin>>x;
    cout<<"Ingresar el exponente: ";
    cin>>y;
    cout<<pow(x,y);
    return 0;
}

int pow (int base, int exp){
    for (int i=0; i<exp;i++){
        potencia *= base;
    }
    return potencia;
}