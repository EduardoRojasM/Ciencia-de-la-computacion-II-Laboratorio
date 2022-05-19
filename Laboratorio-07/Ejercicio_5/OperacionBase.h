#pragma once

#include <iostream>

using namespace std;

class OperacionBase
{
private:
    int ooperador;
public:
    OperacionBase(int);
    ~OperacionBase();
    int getOperador();
};

