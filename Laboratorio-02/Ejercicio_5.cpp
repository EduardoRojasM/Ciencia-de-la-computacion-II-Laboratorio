/*5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos.
*/

#include <iostream>

using namespace std;

int main(){
    int numeros[100], x, mayor, menor, suma=0;
    cout<<"Ingrese que cantidad de numeros desea: ";
    cin>>x;
    for (int i=0;i<x;i++){
        cout<<"Ingrese el numero en posicion "<<i+1<<": ";
        cin>>numeros[i];
        if (numeros[i]>mayor){
            mayor = numeros[i];
        }
    }

    menor = mayor;

    for (int i=0;i<x;i++){
    if (numeros[i]<menor){
            menor = numeros[i];
        }
    }

    for (int j=0; j<x;j++){
        suma = suma + numeros[j];
    }

    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    cout<<"La suma de los numeros es: "<<suma<<endl;

    
    return 0;
}