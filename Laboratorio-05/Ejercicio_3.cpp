/*3. Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.*/

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int *vector1;
int cantidad;

void insertar (int);
void eliminar (int);

int main(){
    bool x=true;
    int y;
    while(x){
    
    cout<<"Que desea: "<<endl;
    cout<<"1. Insertar elementos"<<endl;
    cout<<"2. Eliminar elementos"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>y;
    switch (y)
    {
    case 1:
        cout<<"Que cantidad desea: ";
        cin>>cantidad;
        insertar(cantidad);
        break;
    case 2:
        int elm;
        cout<<"Cual desea eliminar: ";
        cin>>elm;
        eliminar(elm);
        break;
    case 3:
        x=false;
        break;
    default:
        break;
    }
    
    }
    return 0;
}

void insertar (int c){
vector1 = new int[c];
    for (int i=0;i<c;i++){
        vector1[i] = rand()%10000+1;
        if(i>0){
            if(vector1[i]<vector1[i-1]){
                i--;
            }
            else if(vector1[i]==vector1[i-1]){
                i--;
            }
        }
    }
    for (int i=0;i<cantidad;i++){
        cout<<vector1[i]<<" - ";
    }
    cout<<endl;
}

void eliminar (int elemento){
    for (int i=0;i<cantidad;i++){
        if (vector1[i]==elemento){
            vector1[i]=0;
            cout<<"Eliminado"<<endl;
        }
    }
}