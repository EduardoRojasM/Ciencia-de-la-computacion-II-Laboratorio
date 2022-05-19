#pragma once
#include <iostream>
#include "Color.h"
#include "Material.h"

using namespace std;

class Objetos : public Color, public Material
{
private:
    string objeto;
public:
    Objetos(string, string, string);
    ~Objetos();
    void crearObjeto();
};


