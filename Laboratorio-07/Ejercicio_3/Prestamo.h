#pragma once

#include "ProductoBancario.h"

class Prestamo : protected ProductoBancario
{
private:
public:
    Prestamo();
    void imprimir();
    ~Prestamo();
};
