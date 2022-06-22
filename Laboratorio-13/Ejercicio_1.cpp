#include <iostream>

using namespace std;

struct Datos
{
    string nombre;
    // DIA/MES/AÑO
    int fecha[3];
};

int main(){
    int n;
    cout<<"De cuantas personas desea ingresar datos: ";
    cin>>n;
    Datos datos[n];

    for (int i=0;i<n;i++){
    cout<<"Ingresa su nombre: ";
    cin>>datos[i].nombre;
    cout<<"Ingresa la fecha de cumpleanio:"<<endl;
    cout<<"Ingrese el dia: ";
    cin>>datos[i].fecha[0];
    cout<<"Ingrese el mes: ";
    cin>>datos[i].fecha[1];
    cout<<"Ingrese el anio: ";
    cin>>datos[i].fecha[2];
    cout<<endl<<endl;
    }
    for (int j=0;j<n;j++){
        if (datos[j].fecha[1]==6){
        cout<<"Nacido en Junio (mes actual): "<<endl;
        cout<<"Nombre: "<<datos[j].nombre<<endl;
        cout<<"Fecha de nacimiento: "<<datos[j].fecha[0]<<"/"<<datos[j].fecha[1]<<"/"<<datos[j].fecha[2]<<endl;
        }
    }
    return 0;
}