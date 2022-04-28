/*4. Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/

#include <iostream>

using namespace std;

void primos (int n);

int main(){
    int n1;
    cout<<"Cuantos numeros primos desea: ";
    cin>>n1;
    primos(n1);

    return 0;
}

void primos (int n){
    int cantidad,i=1;
    
    cout<<"Los "<<n<<" primeros numeros primos son: "<<endl;

    while (true){
        i++;
        int contador=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                contador ++;
            }
        }
        if (contador == 2){
                cout<<i<<endl;
                cantidad++;
            }
        if (cantidad == n){
            break;
        }

    }
}