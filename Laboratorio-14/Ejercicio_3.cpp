#include "iostream"

using namespace std;

int main(){
    int columnas = 4, opc2=0, c = 0;
    string codigo, nombre, precio, cantidad, nom, cod;
    string **productos;
    int tamanio = 0;
    bool x = true;
    while (x == true){
        int opc;
        cout<<"Que desea hacer: "<<endl;
        cout<<"1. Dar de alta un producto nuevo."<<endl;
        cout<<"2. Buscar un producto"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout<<endl;
            tamanio++;
            productos = new string *[tamanio]; 
            productos[tamanio] = new string[columnas];

            cout<<"Producto "<<tamanio<<":"<<endl;

            cout << "Codigo: ";
            cin>>codigo;
            productos[tamanio][0] = codigo;

            cout << "Nombre: ";
            cin>>nombre;
            productos[tamanio][1] = nombre;

            cout << "Precio: ";
            cin>>precio;
            productos[tamanio][2] = precio;

            cout << "Cantidad: ";
            cin>>cantidad;
            productos[tamanio][3] = cantidad;
            cout<<endl;

            break;

        case 2:
            cout<<"Desea buscarlo con el: "<<endl;
            cout<<"1. Nombre"<<endl;
            cout<<"2. Codigo"<<endl;
            cin>>opc2;
            if (opc2 == 1){
                cout<<"Digite el nombre: ";
                cin>>nom;
                for (int i=0;i<tamanio+1;i++){
                    if (productos[i][1] == nom){
                        cout<<"Producto '"<<productos[i][1]<<"' encontrado."<<endl<<endl;
                        c++;
                    }
                }
            }
            else if (opc == 2){
                cout<<"Digite el codigo: ";
                cin>>cod;
                for (int i=0;i<tamanio+1;i++){
                    if (productos[i][0] == cod){
                        cout<<"Producto '"<<productos[i][0]<<"' encontrado."<<endl<<endl;
                        c++;
                    }
                }
            }
            else{
                cout<<"No hay la opcion."<<endl<<endl;
            }

            if (c==0){
                cout<<"No se encontro el producto."<<endl<<endl;
            }
            
            c = 0;
            break;

        case 3:
            x = false;
            break;
            
        default:
            cout<<"No existe la opcion"<<endl<<endl;
            break;
        }
    }
    

    for (int i = 0; i < tamanio; ++i){
        delete [] productos[i];
    }

    delete [] productos;

    return 0;
}