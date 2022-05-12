#pragma once
#include <iostream>

using namespace std;

class Alumno
{
private:
    int CUI;
    string Nombre,Apellidos;
    int n1, n2, n3;
public:
    Alumno(int, string, string, int, int, int);
    ~Alumno();
    void Promedio();
};


