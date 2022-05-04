/* 6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma. */

#include <iostream>

using namespace std;

int main(){

    int numeros [3][3], suma=0, summayor,filam;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese el numero entero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    
    for (int i=0;i<3.;i++){
        for(int j=0;j<3;j++){
                suma = suma + numeros[i][j];
                if (summayor<suma){
                    summayor = suma;
                    filam=i;
                }
            }
            suma = 0;
    }
    cout<<"La mayor suma esta en la fila " <<filam<< " y es: "<<summayor;

    return 0;
}
