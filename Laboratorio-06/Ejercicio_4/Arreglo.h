#pragma once
#include <iostream>

using namespace std;

class Arreglo
{
private:
    int datos [5] = {-1,-1,-1,-1,-1};
public:
    Arreglo(int);
    ~Arreglo();
    void AgregarDato();
    void EliminarDato();
};

