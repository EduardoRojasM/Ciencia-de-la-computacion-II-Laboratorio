#pragma once
#include <iostream>

using namespace std;

#include "Ave.h"

class Ganso : public Ave
{
private:
    string sonido;
public:
    Ganso(string,string,int,string);
    ~Ganso();
    void mostrarInfoGanso();
};

