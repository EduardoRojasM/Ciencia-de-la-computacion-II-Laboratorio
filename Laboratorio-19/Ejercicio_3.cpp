#include <iostream>

using namespace std;

int tamanio_res = 0;

class Find{
public:
    //El vector usado para buscar las coincidencias
    int i,j,aux,min;

    int *operator ()(int a[], int b[]){
        static int sumaab [20];

            //Suma de los dos arrays
            for (int i=0; i<10; i++){
                sumaab[i] = a[i];
            }
            for (int h=10; h<20; h++){
                sumaab[h] = b[h-10];
            }

            //Ordenar el array metodo sort
	        for(i=0;i<20;i++){
		        min = i;
		    for(j=i+1;j<20;j++){
			    if(sumaab[j] < sumaab[min]){
				min = j;
			    }
		    }

		aux = sumaab[i];
		sumaab[i] = sumaab[min];
		sumaab[min] = aux;
	}
        //Retorno del array ordenado
        return sumaab;
    }
};

int main(){
    //Array a y b
    int a[10] = {9,8,7,3,2,1,4,5,6,10};
    int b[10] = {11,12,13,17,18,19,14,15,16,20};

    Find array;
    int *x; 
    x = array(a,b);

    //Imprimir el array junto ordenado
    for (int i=0;i<20;i++){
        cout<<*(x+i)<<endl;
    }
    
    return 0;
}