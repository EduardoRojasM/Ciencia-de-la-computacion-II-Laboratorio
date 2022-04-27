/*3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de
cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el
formato de salida debe de estar en AM o PM según corresponda).*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int ingre=0,h=0,m=0,r=0,n=0;
    float minsumados=0;
    string A,P;
    cout<<"Ingrese una hora del dia"<<endl;
    cout<<"Ingrese la hora: ";
    cin>>h;
    cout<<"Ingrese los minutos: ";
    cin>>m;
    cout<<"Cuanto minutos desea agregar: ";
    cin>>ingre;

    minsumados = m+ingre;

    if (minsumados==60){
        h = h + 1;
    }
    else if (minsumados<60){
        m = m + ingre;
    }
    else{
        r = minsumados/60;
        h = h + r;
        m = minsumados - (60*r);
    }    

    //Ver si es AM O PM

    int res = h/12;

    if (res%2==0){
        A = "AM";
    }
    else if (res%2==1){
        A = "PM";
    }

    //Calcular si son mas de 12 horas para reiniciar

    if(h>12){
    n = h/12;
    h = h - (12*n);
    }

    cout<<"La hora seria: "<<h<<":"<<m<<" "<<A;

    return 0;
}