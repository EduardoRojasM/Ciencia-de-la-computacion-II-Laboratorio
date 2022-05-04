/* 2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función 
que busque ese numero, si lo encuentra, debe retornar un valor de verdaderos,
en caso contrario, retornar falso. */

#include "iostream"

using namespace std;

string buscar (int x);

int numero[8] = {1,2,3,4,5,6,7,8};

int main(){
    int n;
    cout<<"Que numero desea buscar: ";
    cin>>n;
    cout<<buscar(n);
    return 0;
}

string buscar (int x){
    
    for (int i=0;i<8;i++){
        if (numero[i]  == x){
            return "Verdadero";
        }
    }
    return "Falso";
}