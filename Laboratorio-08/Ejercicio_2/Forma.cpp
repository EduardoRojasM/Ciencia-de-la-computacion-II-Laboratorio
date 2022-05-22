#include "Forma.h"

Forma::Forma(string _color,int _coord,string _forma)
{
    color = _color;
    coord [2] = _coord;
    forma = _forma;
    
}

Forma::~Forma()
{
}

void Forma::obtenerColor(){
    cout<<"El color es: "<<color<<endl;
}
void Forma::cambiarColor(){
    cout<<"A que color desea cambiar: ";
    cin>>color;
    cout<<"Color ingresado."<<endl;
    //cout<<"Ahora el color es: "<<color<<endl;
}
void Forma::moverCoordenadas(){
    char cor;
    int _x,_y;
    cout<<"Coordenadas actuales : ("<<coord[0]<<","<<coord[1]<<")"<<endl;
    cout<<"Que coordenada desea mover 'x' o 'y': ";
    cin>>cor;
    if (cor == 'x'){
        cout<<"Cuantas coordenadas desea mover en 'x': ";
        cin>>_x;
        coord[0] = coord[0] + _x;
        //cout<<"La nueva coordenada es: ("<<coord[0]<<","<<coord[1]<<")"<<endl;
    }
    else if (cor == 'y'){
        cout<<"Cuantas coordenadas desea mover en 'y': ";
        cin>>_y;
        coord[1] = coord[1] + _y;
        //cout<<"La nueva coordenada es: ("<<coord[0]<<","<<coord[1]<<")"<<endl;
    }
}

void Forma::imprimir(){
    cout<<"La forma es: "<<forma<<endl;
    cout<<"El color es: "<<color<<endl;
    cout<<"Coordenadas actuales del centro son: ("<<coord[0]<<","<<coord[1]<<")"<<endl;
}