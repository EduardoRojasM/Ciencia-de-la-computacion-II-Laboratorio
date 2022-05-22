#include "Elipse.h"
#include <iostream>
#pragma once
using namespace std;

class Circulo : public Elipse
{
private:
public:
    Circulo(string,int,string,int,int);
    ~Circulo();
    void area();
    void imprimir();
};

