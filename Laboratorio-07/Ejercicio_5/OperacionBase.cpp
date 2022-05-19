#include "OperacionBase.h"

OperacionBase::OperacionBase (int _operador)
{
    ooperador = _operador;
}

OperacionBase::~OperacionBase()
{
}

int OperacionBase::getOperador(){
    return ooperador;
}   
