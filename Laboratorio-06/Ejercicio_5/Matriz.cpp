#include "Matriz.h"

Matriz::Matriz(int _matriz)
{
    matriz[3][3] = _matriz;
}

Matriz::~Matriz()
{
}

void Matriz::BuscarElemento(){
    int b,cont=0;
    cout<<"Que elemento desea buscar: ";
    cin>>b;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(matriz[i][j]==b){
                cout<<"Elemento encontrado: "<<endl;
                cout<<"Posicion ["<<i<<"]["<<j<<"]";
                cont++;
            }
        }
    }
    if (cont==0)
    cout<<"No existe el elemento.";
}