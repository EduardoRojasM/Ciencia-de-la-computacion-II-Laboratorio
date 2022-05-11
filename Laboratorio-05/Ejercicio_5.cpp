/* 5. Implemente su propia función de concatenación de cadenas de texto especial (¡no es
la función ordinaria de concatenación!), recibirá como parámetro dos punteros de
caracteres y tendrá que asignar el contenido del segundo puntero al INICIO del primer
puntero. La función no retorna ningún valor. */

#include <iostream>

using namespace std;

void concatenacion(string *,string *);

int main(){
    string a,b;
    cout<<"Ingrese dos caracteres: ";
    cin>>a>>b;
    concatenacion(&a,&b);

    return 0;
}

void concatenacion(string *x,string *y){
    cout<<*y<<*x;
}