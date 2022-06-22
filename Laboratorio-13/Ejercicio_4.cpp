#include <iostream>

using namespace std;

struct Empleados
{
    string nombre;
    // H = Hombre, M = Mujer
    char sexo;
    float sueldo;
};

int main(){
    int cant;
    cout<<"De cuantos empleados desea ingresar datos: ";
    cin>>cant;
    Empleados empleado[cant];

    for (int i=0;i<cant;i++){
        cout<<"Informacion del empleado "<<i+1<<" :"<<endl;
        cout<<"Nombre del empleado: ";
        cin>>empleado[i].nombre;
        cout<<"Sexo del empleado ('H' o 'M'): ";
        cin>>empleado[i].sexo;
        cout<<"Sueldo del empleado: ";
        cin>>empleado[i].sueldo;
    }

    float mayor = empleado[0].sueldo, menor = empleado[0].sueldo;

    for (int i=0;i<cant;i++){
        if (empleado[i].sueldo>mayor){
            mayor = empleado[i].sueldo;
        }
        if (empleado[i].sueldo<menor){
            menor = empleado[i].sueldo;
        }
    }

    for (int i=0;i<cant;i++){
        if (empleado[i].sueldo==mayor){
            cout<<"El empleado con mas sueldo es: "<<endl;
            cout<<"Nombre: "<<empleado[i].nombre<<endl;
            cout<<"Sexo: "<<empleado[i].sexo<<endl;
            cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
            cout<<endl;
        }
        if (empleado[i].sueldo==menor){
            cout<<"El empleado con menor sueldo es: "<<endl;
            cout<<"Nombre: "<<empleado[i].nombre<<endl;
            cout<<"Sexo: "<<empleado[i].sexo<<endl;
            cout<<"Sueldo: "<<empleado[i].sueldo<<endl;
            cout<<endl;
        }
    }

    return 0;
}