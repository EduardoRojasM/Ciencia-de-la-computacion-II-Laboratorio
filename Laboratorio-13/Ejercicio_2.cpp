#include <iostream>

using namespace std;



int main(){
    struct Alumnos
    {
    string nombre;
    int grupo;
    // 1ra Fase/2da Fase/3er Fase/Proyecto Final
    float notas[4];
    };

    int n;
    cout<<"Cuantos alumnos deseas ingresar: ";
    cin>>n;
    Alumnos alumnos[n];

    for (int i=0;i<n;i++){
        cout<<"Ingresa el nombre del alumno: ";
        cin>>alumnos[i].nombre;
        cout<<"Ingrese el grupo: ";
        cin>>alumnos[i].grupo;
        cout<<"Ingresa las notas:"<<endl;
        cout<<"Ingrese nota Fase 1: ";
        cin>>alumnos[i].notas[0];
        cout<<"Ingrese nota Fase 2: ";
        cin>>alumnos[i].notas[1];
        cout<<"Ingrese nota Fase 3: ";
        cin>>alumnos[i].notas[2];
        cout<<"Ingrese nota Proyecto Final: ";
        cin>>alumnos[i].notas[3];
        cout<<endl<<endl;
    }

    for (int j=0;j<n;j++){
        float promedio;
        float n1,n2,n3,n4;
        cout<<"La nota Final de "<<alumnos[j].nombre<<" del grupo "<<alumnos[j].grupo<< " es:"<<endl;

        n1 = (alumnos[j].notas[0]*15)/100;
        n2 = (alumnos[j].notas[1]*20)/100;
        n3 = (alumnos[j].notas[2]*25)/100;
        n4 = (alumnos[j].notas[3]*40)/100;
        promedio = n1+n2+n3+n4;

        cout<<promedio<<endl;
    }
    return 0;
}