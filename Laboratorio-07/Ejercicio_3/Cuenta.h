#pragma once

#include "ProductoBancario.h"

class Cuenta : public ProductoBancario
{
private:
public:
    Cuenta();
    void imprimir();
    ~Cuenta();
};
