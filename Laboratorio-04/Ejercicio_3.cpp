/* 3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par. */

#include <iostream>

using namespace std;

int main(){

    int numeros [5][3], suma=0;
    for (int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese el numero entero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    
    for (int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(i%2==0){
                suma = suma + numeros[i][j];
            }
        }
    }
    cout<<"La suma de las filas pares son: "<<suma;

    return 0;
}

