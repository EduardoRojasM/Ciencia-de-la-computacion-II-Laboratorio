#include <iostream>
#include "Color.h"
#include "Material.h"
#include "Objetos.h"
#include "Color.cpp"
#include "Material.cpp"
#include "Objetos.cpp"

int main(){
    Objetos obj1 = Objetos("rojo", "madera", "silla");
    obj1.crearObjeto();
    return 0;
}