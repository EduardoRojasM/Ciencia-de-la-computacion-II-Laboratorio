/*10. Escribir un programa que almacene la cadena de caracteres contraseña en una
variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
correcta.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string contrasenia = "hola";
    string contrarecib;

    while(true){
        cout<<"Ingrese la contrasenia: ";
        cin>>contrarecib;
        if(contrarecib != contrasenia){
            cout<<"Contrasenia incorrecta"<<endl;
        }
        else{
            cout<<"Contrasenia correcta";
            break;
        }
    }

    return 0;
}