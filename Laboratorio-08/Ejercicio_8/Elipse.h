#pragma once
#include <iostream>
#include "Forma.h"
using namespace std;

class Elipse : public Forma
{
protected:
    int radio_menor, radio_mayor;
    float pi = 3.1416;
public:
    Elipse(string,int,string,int,int);
    ~Elipse();
    int area();
    void imprimir();
};

