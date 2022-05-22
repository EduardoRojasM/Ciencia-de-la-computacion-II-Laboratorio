#include "Rectangulo.h"
#include "Forma.h"
#include "Cuadrado.h"
#include "Rectangulo.cpp"
#include "Forma.cpp"
#include "Cuadrado.cpp"

int main(){
    int coordenadas[2]= {0,0};
    Cuadrado c1 = Cuadrado("Azul",coordenadas[2],"Cuadrado",3,3);
    c1.obtenerColor();
    c1.cambiarColor();
    c1.cambioTamanio();
    c1.moverCoordenadas();
    c1.area();
    c1.perimetro();
    cout<<"*******Impresion de todos los datos*******"<<endl;
    c1.imprimir();  
    return 0;
}