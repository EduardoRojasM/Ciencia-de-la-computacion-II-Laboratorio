/*2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.*/

#include <iostream>

using namespace std;

int main(){ 
    int cantidad,i=1;
    
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
        if (cantidad == 50){
            break;
        }
    }
    return 0;
}