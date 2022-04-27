/*8. Escribir un programa que genere la tabla de multiplicar de un número introducido por
el teclado.*/

#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"De que numero deseas la tabla de multiplicar: ";
    cin>>num;

    for (int i=0;i<=12;i++){
        int res=0;
        res=num*i;
        cout<<num<<" x "<<i<<" = "<<res<<endl;
    }
    return 0;
}