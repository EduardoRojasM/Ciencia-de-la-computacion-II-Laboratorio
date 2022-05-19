#pragma once
#include <iostream>

using namespace std;

class Ave
{
private:
    string comida;
    string color;
    int patas;
public:
    Ave(string,string,int);
    ~Ave();
    void mostrarInformacion();
    void comer();
};


