#include "iostream"

using namespace std;

int main(){
    int columnas = 4, c = 0;
    string codigo, nombre, precio, cantidad, baja;
    string **productos;
    int tamanio = 0;
    bool x = true;
    while (x == true){
        int opc;
        cout<<"Que desea hacer: "<<endl;
        cout<<"1. Dar de alta un producto nuevo."<<endl;
        cout<<"2. Dar de baja a un producto."<<endl;
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
            cout<<"A que producto desea darle de baja (nombre): ";
            cin>>baja;
            for (int i=0;i<tamanio+1;i++){
                if (productos[i][1] == baja){
                    productos[i][2] = "0";
                    cout<<"Producto '"<<productos[i][1]<<"' dado de baja (out of stock)."<<endl<<endl;
                    c++;
                }
            }
            if (c==0){
                cout<<"No existe el producto"<<endl<<endl;
            }
            c = 0;
            break;

        case 3:
            x = false;
            break;

        default:
            cout<<"No existe la opcion";
            break;
        }
    }
    

    for (int i = 0; i < tamanio; ++i){
        delete [] productos[i];
    }

    delete [] productos;

    return 0;
}
