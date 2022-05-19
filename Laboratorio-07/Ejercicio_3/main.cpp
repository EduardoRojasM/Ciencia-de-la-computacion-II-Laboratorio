#include "Cuenta.h"
#include "CuentaJoven.h"
#include "Hipoteca.h"
#include "Prestamo.h"
#include "ProductoBancario.h"
#include "Cuenta.cpp"
#include "CuentaJoven.cpp"
#include "Hipoteca.cpp"
#include "Prestamo.cpp"
#include "ProductoBancario.cpp"

int main(){
    //Se mira todos los datos
    CuentaJoven cj1 = CuentaJoven();
    cj1.imprimir();
    Hipoteca h1 = Hipoteca();
    h1.imprimir();
    return 0;
}