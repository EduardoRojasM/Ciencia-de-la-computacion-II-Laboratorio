#include "stdfix.h"
#include "Arreglo.h"
#include <iostream>
#include <string>

Arreglo::Arreglo(int _datos)
{
    datos[5] = _datos;
}

Arreglo::~Arreglo()
{
}

void Arreglo::AgregarDato(){
    int i;
    while(i<5){
        if(datos[i]==-1){
            cout<<"Si hay espacio en la posicion ["<<i<<"]. Digite que numero desea ingresar: ";
            cin>>datos[i];
            cout<<"Dato ingresado."<<endl;
            i=0;
            break;
        }
        i++;
        if (i==5){
            cout<<"No hay espacio para ingresar numeros."<<endl;
        }
    }
}

void Arreglo::EliminarDato(){
    int elm=0,i=0,c=0,j=0;
    while(true){
        if(datos[i]!=-1){
            i++;
        }
        else if (datos[i]==-1){
            c++;
        }
        
        if(i>0){
            cout<<"Si hay datos en el arreglo."<<endl;
            cout<<"Que dato desea eliminar: ";
            cin>>elm;
            for (j=0;j<5;j++){

                if (datos[j]==elm){
                    datos[j]=-1;
                    cout<<"Dato eliminado"<<endl;
                    break;
                }
            }
            j=0;
            i=0;
            c=0;
            break;
        }
        else if(c==5){
            cout<<"El arreglo esta vacio. No hay datos para eliminar"<<endl;
            c=0;
            break;
        }
    }
}
