/*6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
en binario.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num=0,r=0;
    int binario[100];
    do{
        cout<<"Ingresa un numero entre el 100 y 999: ";
        cin>>num;
    }
    while (num<100 or num>999);
    
    for (int i=0;i<100;i++){
        binario[i] = num%2;
        num = num/2;
        r++;
        if (num==0){
            break;
        }  
    }
    
    cout<<"El numero binario es: ";
    for (int i=r-1; i>=0;i--){
        cout<<binario[i];
    }

    return 0;
}