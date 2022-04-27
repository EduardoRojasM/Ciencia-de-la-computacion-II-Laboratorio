/*7. Calcula el promedio de 3 notas para n estudiantes.*/

#include <iostream>

using namespace std;

int main(){
    int x,y,z,cant,prom;
    cout<<"Ingrese el numero de estudiantes a calificar: ";
    cin>>cant;
    for(int i=1; i<=cant; i++){
        prom=0;
        cout<<"Ingrese las 3 notas de los estudiantes: ";
        cin>>x>>y>>z;
        prom = (x+y+z)/3;
        cout<<"El promedio de sus 3 notas es: "<<prom<<endl;
    }
    return 0;
}