/*17. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
negativos.*/

#include <iostream>

using namespace std;

int main(){
    int numeros [10], suma;
    cout<<"Ingrese 10 numeros (se sumaran los negativos): "<<endl;
    for(int i=0;i<=9;i++){
        cout<<i+1<<". "<<"introduzca el numero: ";
        cin>>numeros[i];
        if(numeros[i]<0){
            suma = suma + numeros[i];
        }
    }
    cout<<"Suma total de lo numeros negativos: "<<suma;

    return 0;
}