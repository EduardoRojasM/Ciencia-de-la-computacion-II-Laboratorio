#include "stdfix.h"
#include <iostream>
#include "string"
#include "Edad.h"

Edad::Edad(int _FA_D, int _FA_M, int _FA_A, int _FN_D, int _FN_M, int _FN_A, string _Nombre)
{
    FA_D = _FA_D;
    FA_M = _FA_M;
    FA_A = _FA_A;
    FN_D = _FN_D;
    FN_M = _FN_M;
    FN_A = _FN_A;
    Nombre = _Nombre;
}

Edad::~Edad()
{
}

void Edad::CalcularEdad(){
    int edad;

    if (FA_D<FN_D){
        FA_M--;
    }
    if (FA_M<FN_M){
        FA_A--;
    }
    edad = FA_A-FN_A;

    cout<<"La persona se llama "<<Nombre<<endl;
    cout<<"Su edad es: "<<edad<<endl;
}