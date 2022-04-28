/*2. Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.*/

#include <iostream>

using namespace std;

void bisiesto (int anio);

int main(){
    int x;
    cout<<"Digite el anio para verificar si es bisiesto: ";
    cin>>x;
    bisiesto(x);
    return 0;
}

//Si divisible por 4 y no es divisible por 100 es bisiesto
void bisiesto (int anio){
    if (anio%4==0){
        if(anio%100==0){
            cout<<"No es bisiesto";
        }
        cout<<"Es bisiesto";
    }
    else{
        cout<<"No es bisiesto";
    }
}