#pragma once
#include "OperacionBase.h"

#include <iostream>

using namespace std;

class OperacionFactorial : public OperacionBase
{
private:
public:
    OperacionFactorial(int);
    ~OperacionFactorial();
    void devolverFactorial();
};

