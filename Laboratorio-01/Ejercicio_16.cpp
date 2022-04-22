/*16. Escribir un programa que calcule la media de x cantidad números introducidos por el
teclado.*/

#include <iostream>

using namespace std;

int main(){
    int num,res,x;
    cout<<"De cuanto numeros desea calcular la media: ";
    cin>>num;

    for (int i=1;i<=num;i++){
        cout<<i<<". "<<"Ingrese el numero: ";
        cin>>x;
        res = res + x;
    }

    cout<<"La media es: "<<res/num;

    return 0;
}