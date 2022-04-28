/*3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.
*/

#include <iostream>

using namespace std;

void anios(int fechaAA, int fechaAD, int fechaAM,int fechaNA, int fechaND, int fechaNM);

int main(){
    int fechaA [3];
    int fechaN [3];
    cout<<"Digite la fecha actual en este orden (Anio-dia-mes): ";
    cin>>fechaA[0]>>fechaA[1]>>fechaA[2];
    cout<<"Digite la fecha de nacimiento en este orden (Anio-dia-mes): ";
    cin>>fechaN[0]>>fechaN[1]>>fechaN[2];

    anios(fechaA[0],fechaA[1],fechaA[2],fechaN[0],fechaN[1],fechaN[2]);

    return 0;
}

void anios(int fechaAA, int fechaAD, int fechaAM,int fechaNA, int fechaND, int fechaNM){
    int dia=0,anio=0,mes=0;
    dia = fechaAD-fechaND;
    if (dia<0){
        fechaAM = fechaAM-1;
        dia = dia*(-1);
    }
    if(fechaAM<fechaNM){
        fechaAM = fechaAM + 12;
        fechaAA = fechaAA-1;
    }
    mes = fechaAM-fechaNM;
    anio = fechaAA-fechaNA;
    cout<<"Tienes "<<anio<<" anios, "<<mes<<" meses, "<<dia<<" dias.";
}