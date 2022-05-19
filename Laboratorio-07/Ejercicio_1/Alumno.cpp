#include "Alumno.h"

Alumno::Alumno() : Persona ()
{
}

Alumno::~Alumno()
{
}

void Alumno::ingresarNombreEdad(){
    asignarEdad();
    asignarNombre();
}
