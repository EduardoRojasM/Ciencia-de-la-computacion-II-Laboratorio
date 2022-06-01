/* 1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados. */

#include <iostream>

using namespace std;

template <class A, class B, class C>
A minandmax (A n1, B n2, C n3);

int main(){
    double n1=15.654;
    int n2=654;
    float n3=657.2;
    minandmax(n1,n2,n3);
    return 0;
}

template <class A, class B, class C>
A minandmax (A n1, B n2, C n3){
    A mayor, menor;
    if (n1>n2 and n1>n3){
        mayor = n1;
    }
    else if (n2>n1 and n2>n3){
        mayor = n2;
    }
    else{
        mayor = n3;
    }

    if (n1<n2 and n1<n3){
        menor = n1;
    }
    else if (n2<n1 and n2<n3){
        menor = n2;
    }
    else{
        menor = n3;
    }

    cout<<"El menor es: "<<menor<<endl;
    cout<<"El mayor es: "<<mayor<<endl;
}