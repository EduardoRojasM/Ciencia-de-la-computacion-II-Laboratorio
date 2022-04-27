/*4. Escriba un código que solicite una cantidad de minutos específica y muestre como
resultado la hora y fecha resultante tomando como referencia la hora y fecha actual y
restarle el tiempo indicado.*/

#include <iostream>

using namespace std;

int main(){
    
    int hora=14,minuto=39,mindes;
    int dia,anio,mes;
    cout<<"Hora y fecha actual: 14:39, 23 de abril 2022"<<endl;
    cout<<"Ingrese los minutos a descontar: ";
    cin>>mindes;
    int x = minuto-mindes; 
    int res;
    if (x>0 or x==0){
        minuto = x;
    }
    else if (x<0 and x>-60){
        minuto = 60+x;
        hora = hora-1;
    }
    else if(x==-60){
        hora = hora-1;
        minuto=0;
    }
    else if(x<-60){
        res=x/60;
        
    }

    cout<<hora<<":"<<minuto;


    return 0;
}