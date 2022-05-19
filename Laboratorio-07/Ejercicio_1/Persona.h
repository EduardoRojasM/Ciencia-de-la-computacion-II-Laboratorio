#pragma once
#include <iostream>

using namespace std;

class Persona
{
private:
    int edad;
    string nombre;
public:
    Persona();
    ~Persona();
    void asignarEdad();
    void asignarNombre();
};


