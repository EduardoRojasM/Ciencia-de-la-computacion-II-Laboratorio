#pragma once
#include <iostream>

using namespace std;

class Material
{
private:
    string material;
public:
    Material(string);
    ~Material();
    void mostrarMaterial();
};

