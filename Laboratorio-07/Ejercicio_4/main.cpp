#include "ClaseDisco.h"
#include "ClaseMultimedia.h"
#include "ClaseDisco.cpp"
#include "ClaseMultimedia.cpp"

int main(){
    ClaseDisco c1 = ClaseDisco("Viaje a Rusia", "Thriller", "Viejo");
    c1.mostrarInformacion();
    return 0;
}