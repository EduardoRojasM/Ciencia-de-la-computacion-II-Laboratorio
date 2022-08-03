#include "Calculadora.h"
#include "Calculadora.cpp"

int main(){
                //x   y     resultado
    Calculadora<float,double,double> c1(2.2148,1.12);

    cout<<"Suma: "<<c1.Suma()<<endl;
    cout<<"Resta: "<<c1.Resta()<<endl;
    cout<<"Division: "<<c1.Division()<<endl;
    cout<<"Multiplicacion: "<<c1.Multiplicacion()<<endl;
    return 0;
}