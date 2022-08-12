#include <iostream>

using namespace std;

class Regresion_Lineal{
public:
    double *operator ()(double x[], double y[], int tamanio){
        double xy [tamanio];
        double x2 [tamanio];
        double sumax = 0;
        double sumay = 0;
        double sumaxy = 0;
        double sumax2 = 0;
        double a;
        double b;
        static double resultado[2];

        for (int i=0; i<tamanio; i++){
            xy[i] = x[i]*y[i];
        }
        for (int i=0; i<tamanio; i++){
            x2[i] = x[i]*x[i];
        }
        for (int i=0; i<tamanio; i++){
            sumax =+ x[i];
        }
        for (int i=0; i<tamanio; i++){
            sumay =+ y[i];
        }
        for (int i=0; i<tamanio; i++){
            sumaxy =+ xy[i];
        }
        for (int i=0; i<tamanio; i++){
            sumax2 =+ x2[i];
        }

        a = ((tamanio*sumaxy) - (sumax*sumay)) / ((tamanio*sumax2)-(sumax*sumax));
        b = (sumay/tamanio)-(a*(sumax/tamanio));

        resultado[0] = a;
        resultado[1] = b;

        return resultado;
    }
};

int main(){
    Regresion_Lineal res;
    int tamanio = 8;
    double *ress;
    double x[tamanio] = {1,2,2,3,4,4,5,6};
    double y[tamanio] = {2,3,4,4,4,6,3,4};

    ress = res(x,y,tamanio);

    for (int i=0;i<2;i++){
        cout<<*(ress+i)<<endl;
    }

    return 0;
}