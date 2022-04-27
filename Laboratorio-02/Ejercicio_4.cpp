/*4. Escriba un código que solicite ingresar dos números 𝑥 y 𝑦, tal que 𝑥 < 𝑦. Muestre
todos los números primos que se encuentren entre el rango de valores, de no
encontrarse, mostrar el primo más cercano a 𝑥 o 𝑦.*/

#include <iostream>

using namespace std;

int main(){
    int x,y,cantidad,num=1;
    cout<<"Ingresa x como comienzo de un intervalo y y como el fin"<<endl;
    cout<<"Ingresa el numero x: ";
    cin>>x;
    cout<<"Ingresa el numero y: ";
    cin>>y;
    for (int i=x+1;i<y;i++){
        int contador=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                contador ++;
            }
        }
        if (contador == 2){
                cout<<i<<endl;
                cantidad++;
            }
        }
        while (cantidad == 0){
            if (y*1==y){
                int c=0;
                int y2 = y+num;
                for (int i=1;i<=y2;i++){
                    if(y2%i==0){
                        c++;
                    }
                }
                if (c==2){
                    cout<<"El primero mas cercano es a 'y', y seria: "<<y2;
                    break;
                }
            }
            if (x*1==x){
                int c=0;
                int x2 = x-num;
                for (int i=1;i<=x2;i++){
                    if(x2%i==0){
                        c++;
                    }
                }
                if (c==2){
                    cout<<"El primero mas cercano es a 'x', y seria: "<<x2;
                    break;
                }
            }
            num++;
        }
    return 0;
}