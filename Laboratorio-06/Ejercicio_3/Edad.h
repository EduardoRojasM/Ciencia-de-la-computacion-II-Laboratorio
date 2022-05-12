#pragma once
#include <iostream>

using namespace std;

class Edad
{
private:
    //FA=Fecha Actual - FN=Fecha Nacimiento - D=dia - M=mes - A=anio
    int FA_D, FA_M, FA_A;
    int FN_D, FN_M, FN_A;
    string Nombre;
public:
    Edad(int, int, int, int, int, int, string);
    ~Edad();
    void CalcularEdad();
};


