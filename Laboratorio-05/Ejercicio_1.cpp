/* 1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int x,y,aux;
    int *dir_x,*dir_y;

    dir_x = &x;
    dir_y = &y;
    
    cout<<"Digite el valor de (x) y (y): ";
    cin>>x>>y;

    aux = *dir_x;
    *dir_x = *dir_y;
    *dir_y = aux;

    cout<<"El valor intercambiado de x es: "<<*dir_x<<endl;
    cout<<"El valor intercambiado de y es: "<<*dir_y<<endl;

    return 0;
}