/*1. Sumar todos los enteros pares desde 2 hasta 100.*/

#include <iostream>

using namespace std;

int main(){
    int suma=0;
    for (int i=2;i<=100;i++){
        if (i%2==0){
            suma += i;
        }
    }
    cout<<"La suma es: "<<suma;

    return 0;
}