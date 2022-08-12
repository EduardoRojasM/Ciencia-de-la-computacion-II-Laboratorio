#include <iostream>

using namespace std;

int tamanio_res = 0;

class Find{
public:
    //El vector usado para buscar las coincidencias
    int vector[10] = {1,2,3,3,3,1,2,2,1,1};
    //Functor
    int *operator ()(int ini, int fin, int busq){
        static int resultado [1000];
        for (int i=ini; i<=fin; i++){
            if (vector[i]==busq){
                resultado[tamanio_res] = vector[i];
                tamanio_res++;
            }
        }
        //Retorno del array
        return resultado;
    }
};

int main(){
    Find array;
    int *x; 
    //Del elemento 1 al elemento 9 cuantos 1 hay
    x = array(1,9,1);
    //Imprimiendo el resultado
    for (int i=0;i<tamanio_res;i++){
        cout<<*(x+i)<<endl;
    }
    return 0;
}