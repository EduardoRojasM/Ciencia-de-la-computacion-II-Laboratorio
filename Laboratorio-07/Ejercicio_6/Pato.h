#pragma once
#include <iostream>

using namespace std;

#include "Ave.h"

class Pato : public Ave
{
private:
    string cocinado;
public:
    Pato(string,string,int,string);
    ~Pato();
    void mostrarInfoPato();
};

