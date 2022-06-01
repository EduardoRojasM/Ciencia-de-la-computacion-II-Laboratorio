/* 2. Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas. */

#include <iostream>

using namespace std;

template <class A, class B>
A operaciones (A,B);

int main(){
    int a = 5;
    float b = 12.2;
    operaciones(a,b);
    return 0;
}

template <class A, class B>
A operaciones (A n1,B n2){
    cout<<"La suma es: "<<n1+n2<<endl;
    cout<<"La resta es: "<<n1-n2<<endl;
    cout<<"La multiplicacion es: "<<n1*n2<<endl;
    cout<<"La division es: "<<n1/n2<<endl;
    return 0;
}