#pragma once
#include <iostream>
#include "Persona.h"

using namespace std;

class Alumno : public Persona{
public:
    Alumno();
    ~Alumno();
    void ingresarNombreEdad();
};
