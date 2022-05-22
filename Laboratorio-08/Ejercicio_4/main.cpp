#include "Forma.h"
#include "Elipse.h"
#include "Circulo.h"
#include "Forma.cpp"
#include "Elipse.cpp"
#include "Circulo.cpp"

int main(){
    int coordenadas[2] = {0,0};
    Circulo c1 = Circulo("Azul",coordenadas[2],"Circulo",4,5);
    c1.area();
    c1.imprimir();
    return 0;
}
