#pragma once
#include <iostream>

using namespace std;

class Matriz
{
private:
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
public:
    Matriz(int);
    ~Matriz();
    void BuscarElemento();
};


