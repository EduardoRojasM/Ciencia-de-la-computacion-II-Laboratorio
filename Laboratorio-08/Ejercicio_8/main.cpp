#include "Forma.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include "Forma.cpp"
#include "Rectangulo.cpp"
#include "Elipse.cpp"

int main(){
    int coordenadas[2]={0,0};
    string objetos[4]= {"r1","r2","e1","e2"};
    Rectangulo objetos[0] = Rectangulo("azul",coordenadas[2],"rectangulo",4,15);
    Elipse objetos[2] = Elipse("rojo",coordenadas[2],"elipse",10,20);
    Rectangulo objetos[1] = Rectangulo("verde",coordenadas[2],"rectangulo",12,10);
    Elipse objetos[3] = Elipse("amarillo",coordenadas[2],"elipse",16,26);

    for (int i=0;i<4;i++){
        objetos[i].area();
    }

    return 0;
}