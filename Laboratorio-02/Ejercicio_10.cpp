/*10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
una a una las letras de la palabra introducida empezando por la última.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra [100];
    int l;
    cout<<"Introduce la palabra: ";
    cin>>palabra;

    l = strlen (palabra);

    for (int i=l; i>=0;i--)
    cout<<palabra[i];

    return 0;
}