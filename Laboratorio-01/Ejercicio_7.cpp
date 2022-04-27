/*7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.*/

#include <iostream>

using namespace std;

int main(){
    int pr,sg;
    cout<<"Ingrese dos numeros para ver si son divisores entre ellos"<<endl;
    cout<<"Ingrese el primer numero: ";
    cin>>pr;
    cout<<"Ingrese el segundo numero: ";
    cin>>sg;

    if(pr%sg==0){
        cout<<"El segundo numero: "<<sg<<" es divisor del primer numero: "<<pr<<endl;
    }
    else if(sg%pr==0){
        cout<<"El primer numero: "<<pr<<" es divisor del segundo numero: "<<sg<<endl;
    }
    else{
        cout<<"No son divisores entre ellos"<<endl;
    }


    return 0;
}