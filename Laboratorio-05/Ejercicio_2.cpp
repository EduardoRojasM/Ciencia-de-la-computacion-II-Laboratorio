/* 2. Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los punteros. 
Repita este proceso de asignación y retiro de memoria dentro de un for de 1 000 000 veces. */

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    //Declaracion de punteros y variables
    float *vector1,*vector2,Ppunto=0,aux=0;
    int cantidad;

    for(int i=0;i<10;i++){
        cantidad = rand()%100+1;

        //Reservo Memoria
        vector1 = new float[cantidad];
        vector2 = new float[cantidad];
    
        //Ingreso de datos
        for(int i=0;i<cantidad;i++){
            vector1[i] = rand()%100+1;
            vector2[i] = rand()%100+1;
        }
        //Para hallar el Producto Punto ((x1*y1)+(x2*y2))
        for(int i=0;i<cantidad;i++){
            aux=vector1[i]*vector2[i];
            Ppunto=Ppunto+aux;
        }

        //Mostrar el Producto Punto
        cout<<"El producto punto de los vectores es: "<<Ppunto<<endl;
        cout<<"******************************************"<<endl;

        //Libero Memoria
        delete[] vector1;
        delete[] vector2;

    }

    return 0;
}