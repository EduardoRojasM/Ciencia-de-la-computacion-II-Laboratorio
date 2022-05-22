#include "Rectangulo.h"
#include "Forma.h"
#include "Rectangulo.cpp"
#include "Forma.cpp"

int main(){
    int coordenadas[2]= {0,0};

    Rectangulo r1 = Rectangulo("Azul",coordenadas[2],"Rectangular",12,23);
    r1.cambiarColor();
    r1.cambioTamanio();
    r1.moverCoordenadas();
    r1.imprimir();
    r1.obtenerColor();
    r1.perimetro();
    return 0;
}