#pragma once

#include "Cuenta.h"

class CuentaJoven : private Cuenta
{
private:
public:
    CuentaJoven();
    void imprimir();
    ~CuentaJoven();
};
