#pragma once
#include <iostream>

using namespace std;

template <class T, class P, class I>
class Calculadora
{
private:
    T x;
    P y;
public:
    Calculadora(T x, P y);
    I Suma();
    I Resta();
    I Division();
    I Multiplicacion();
    ~Calculadora();
};
