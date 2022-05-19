#include "Ave.h"
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"
#include "Ave.cpp"
#include "Ganso.cpp"
#include "Pato.cpp"
#include "Gallina.cpp"

int main(){
    cout<<"El ganso: "<<endl;
    Ganso ganso1 = Ganso("gromineas", "blanco", 2, "on on");
    ganso1.mostrarInfoGanso();

    cout<<endl<<"La gallina: "<<endl;
    Gallina gallina1 = Gallina("maiz", "anaranjado", 2, "pequenio");
    gallina1.mostrarInfoGallina();

    cout<<endl<<"El pato: "<<endl;
    Pato pato1 = Pato("avena", "amarillo", 2, "arroz con pato");
    pato1.mostrarInfoPato();

    return 0;
}