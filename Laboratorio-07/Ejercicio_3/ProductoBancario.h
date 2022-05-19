#pragma once

#include <iostream>

using namespace std;

class ProductoBancario
{
private:
    string cliente="Eduardo";
    double saldo=2500.25;
    int numProductos=5;
public:
    ProductoBancario();
    void imprimir();
    ~ProductoBancario();    
};

