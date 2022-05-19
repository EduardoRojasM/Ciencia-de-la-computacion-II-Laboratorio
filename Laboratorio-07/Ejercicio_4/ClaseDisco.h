#pragma once
#include <iostream>
#include "ClaseMultimedia.h"

using namespace std;

class ClaseDisco : public ClaseMultimedia
{
private:
    string estado;
public:
    ClaseDisco(string,string,string);
    ~ClaseDisco();
    void mostrarInformacion();
};


