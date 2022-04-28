/*5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x.
*/

#include <iostream>

using namespace std;

int menu(int x);

int main(){
    int n;
    cout<<"Que desea hacer: "<<endl<<"1. Introducir un valor x entero comprendido entre 0 y 100."
    <<endl<<"2. Validar que sea un valor par."
    <<endl<<"3. Sumar todos los numeros impares desde el 0 hasta el valor de x."<<endl;
    cin>>n;
    menu(n);
    return 0;
}

int menu(int x){
    int n1,n2,n3,suma;
    switch (x)
    {
    case 1:
        cout<<"Introduzca el valor: ";
        cin>>n1;
        if(n1>100 or n1<0){
            cout<<"No es un valor entre 0 y 100";
        }
        else{
            cout<<"El valor esta entre 0 y 100";
        }
        break;
    case 2:
        cout<<"Digite su numero: ";
        cin>>n2;
        if(n2%2==0){
            cout<<"El numero es par";
        }
        else{
            cout<<"El numero no es par";
        }
        break;
    case 3:
        cout<<"Hasta que impar desea sumar: ";
        cin>>n3;
        for(int i=0;i<=n3;i++){
            if(i%2!=0){
                suma = suma + i;
            }
        }
        cout<<"La suma es: "<<suma;
        break;
    default:
        cout<<"No existe la opcion.";
        break;
    }
}