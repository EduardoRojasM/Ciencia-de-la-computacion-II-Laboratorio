#include "stdfix.h"
#include <iostream>
#include "string"
#include "Alumno.h"

Alumno::Alumno(int _CUI, string _Nombre, string _Apellidos, int _n1, int _n2, int _n3)
{
    CUI = _CUI;
    Nombre = _Nombre;     
    Apellidos = _Apellidos;  
    n1 = _n1; 
    n2 = _n2; 
    n3 = _n3; 
}

Alumno::~Alumno()
{
}

void Alumno::Promedio(){
    float prom;
    prom = (n1+n2+n3)/3;
    cout<<"El CUI de alumno es: "<<CUI<<endl;
    cout<<"El primer nombre de alumno es: "<<Nombre<<endl;
    cout<<"El promedio de alumno es: "<<prom<<endl<<endl;
    if (prom>=10.5){
        cout<<"El alumno aprobo! (Ciencia de la computacion II)"<<endl;
    }
    else{
        cout<<"El alumno desaprobo! (Ciencia de la computacion II)"<<endl;
    }
}
