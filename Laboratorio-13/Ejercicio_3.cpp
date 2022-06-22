#include <iostream>

using namespace std;

struct Jugadores
{
    string nombre;
    int edad;
    float talla;
};

int main(){
    int cant_jugadores = 10;

    Jugadores jugador[cant_jugadores];

    for (int i=0;i<cant_jugadores;i++){
        cout<<"Informacion del jugador "<<i+1<<endl;
        cout<<"Ingrese el nombre del jugador: ";
        cin>>jugador[i].nombre;
        cout<<"Ingrese la edad del jugador: ";
        cin>>jugador[i].edad;
        cout<<"Ingrese la talla del jugador: ";
        cin>>jugador[i].talla;
    }

    for (int i=0;i<cant_jugadores;i++){
        if (jugador[i].edad<20 and jugador[i].talla>=1.71){
            cout<<"Informacion del jugador "<<i+1<<" (que cumple con tener menos de 20 y mas de 1.70 de altura: "<<endl;
            cout<<"Nombre: "<<jugador[i].nombre<<endl;
            cout<<"Edad: "<<jugador[i].edad<<endl;
            cout<<"Talla: "<<jugador[i].talla<<endl;
        }
    }
    
    return 0;
}