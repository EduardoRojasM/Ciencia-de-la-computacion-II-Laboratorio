#include "Forma.h"
#include "Elipse.h"
#include "Forma.cpp"
#include "Elipse.cpp"

int main(){ 
    int coordenadas[2] = {0,0};
    Elipse e1 = Elipse("Azul",coordenadas[2],"Elipse",4,5);
    e1.area();
    e1.imprimir();
    return 0;
}