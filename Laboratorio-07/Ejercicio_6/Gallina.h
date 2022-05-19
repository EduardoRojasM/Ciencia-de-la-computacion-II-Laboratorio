#pragma once
#include <iostream>

using namespace std;

#include "Ave.h"

class Gallina : public Ave
{
private:
    string pico;
public:
    Gallina(string,string,int,string);
    ~Gallina();
    void mostrarInfoGallina();
};
