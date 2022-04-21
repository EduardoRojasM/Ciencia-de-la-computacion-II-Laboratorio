/*3. Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nombre [20] = {};
    char apellidop [20] = {};
    char apellidom [20] = {};
    char dominio [20] = {"@unsa.edu.pe"};
    cout<<"Ingrese su primer nombre: ";
    cin.getline(nombre, 20, '\n');
    cout<<"Ingrese su apellido paterno: ";
    cin.getline(apellidop, 20, '\n');
    cout<<"Ingrese su apellido materno: ";
    cin.getline(apellidom, 20, '\n');
    //Generar correo UNSA
    cout<<"Su correo UNSA es: "<<nombre[0]<<apellidop<<apellidom[0]<<dominio;

    return 0;
}