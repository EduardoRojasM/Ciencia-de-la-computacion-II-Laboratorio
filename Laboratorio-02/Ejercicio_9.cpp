/*9. Escribir un programa que pida al usuario un número entero y muestre por pantalla un
triángulo rectángulo como el de más abajo, de altura el número introducido.
*
**
***
****
*****
*/

#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Ingrese un numero entero para hacer un triangulo: ";
    cin>>num;
    for (int i=1;i<=num;i++){
        for (int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}