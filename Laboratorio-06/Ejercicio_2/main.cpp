#include "stdfix.h"
#include <iostream>
#include "Alumno.h"
#include "Alumno.cpp"

int main(){
    Alumno a1 = Alumno(20204677,"Eduardo","Rojas Miranda",15,14,20);
    a1.Promedio();
    system("pause");
    return 0;
}
