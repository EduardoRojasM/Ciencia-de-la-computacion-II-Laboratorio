/* 4. Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente. */

#include <iostream>

using namespace std;

int main(){
    int x=0,contador;
    int primos[100];
    for (int i=1;i<=100;i++){
        for (int j=2;j<i;j++){
            if(i%j==0){
                contador++;
            }
        }  
        if (contador==0){
            primos[x]=i;
            x++;
        }
        contador=0;
    }
    //Imprimir en forma descendente
    cout<<"Lo numeros primos del 1-100, en orden descendente:"<<endl;
    for (int i=x-1;i>=0;i--){
        cout<<primos[i]<<" ";
        }
    return 0;
}
