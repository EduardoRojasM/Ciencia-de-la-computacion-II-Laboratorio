#include "stdfix.h"
#include <iostream>
#include "Edad.h"
#include "Edad.cpp"

int main(){
    int DA,MA,AA,DN,MN,AN;
    string nombre;
    cout<<"Escriba su nombre: ";
    cin>>nombre;
    cout<<"Digita la fecha actual con el siguiente orden (Dia-Mes-Anio): ";
    cin>>DA>>MA>>AA;
    cout<<"Digita la fecha de nacimiento con el siguiente orden (Dia-Mes-Anio): ";
    cin>>DN>>MN>>AN;
    Edad e1 = Edad(DA,MA,AA,DN,MN,AN,nombre);
    e1.CalcularEdad();
    return 0;
}