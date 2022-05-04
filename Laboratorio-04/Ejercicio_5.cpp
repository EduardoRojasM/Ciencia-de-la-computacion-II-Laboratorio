/* 5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock. La
tienda dispone de 10 productos distintos. El programa debe ser capaz de:
a. Dar de alta un producto nuevo.
b. Buscar un producto por su nombre.
c. Modificar el stock y precio de un producto dado. */

#include <iostream>
#include "string"

using namespace std;

int main(){
    //Informacion recogida
    string nombre [10] = {"chock","pepa","carm","urls"};
    int precio [10] = {15,12,23,45};
    int cantidad [10] = {12,54,1,87};
    //Variables
    int n,bo=0,c=0,d=0,t=0;
    string o,u,y;
    //Bucle/menu
    while (bo==0){
        cout<<"**********************************************"<<endl;
        cout<<"Que desea hacer: "<<endl<<
        "1. Salir"<<endl<<
        "2. Dar de alta un producto"<<endl<<
        "3. Buscar un producto por su nombre"<<endl<<
        "4. Modificar el stock y precio de un producto dado"<<endl;   
        cin>>n;
        switch (n)
        {
        case 2:
        //Eliminar producto
            cout<<"Que producto desea eliminar (nombre): ";
            cin>>o;
            for(int i=0;i<10;i++){
                if(nombre[i]==o){
                    precio[i]=0;
                    nombre[i]='0'; 
                    cantidad[i]=0;
                    cout<<"Producto Eliminado"<<endl;
                    c++;  
                }
            }
            if(c==0){
                cout<<"No existe el producto"<<endl;
            }
            c=0;
            break;
        case 3:
        //Buscar prodcuto
            cout<<"Que producto desea buscar (nombre): ";
            cin>>u;
            for(int i=0;i<10;i++){
                if(nombre[i]==u){
                    cout<<"El precio es: "<<precio[i]<<endl;
                    cout<<"El Nombre es: "<<nombre[i]<<endl; 
                    cout<<"La cantidad es: "<<cantidad[i]<<endl;
                    cout<<"Producto Mostrado"<<endl;
                    d++;  
                }
            }
            if(d==0){
                cout<<"No existe el producto"<<endl;
            }
            d=0;
            break;
        case 4:
        //Modificar producto
            int nprecio,ncantidad;
            cout<<"De que producto desea modificar el precio y stock (nombre): ";
            cin>>y;
            for(int i=0;i<10;i++){
                if(nombre[i]==y){
                    cout<<"Que precio desea ponerle: ";
                    cin>>precio[i];
                    cout<<"Que cantidad desea ponerle :";
                    cin>>cantidad[i];
                    t++;  
                }
            }
            if(t==0){
                cout<<"No existe el producto"<<endl;
            }
            t=0;
            break;
        case 1:
        //Salir
            bo=1;
            cout<<"Fin del programa"; 
            break;
        default:
        //Por si la opcion no existe
            cout<<"No existe la opcion."<<endl;
            break;
        }
    }
    return 0;
}