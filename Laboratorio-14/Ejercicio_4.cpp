#include "iostream"

using namespace std;

int main(){
    int columnas = 4, opc2;
    string codigo, nombre, precio, cantidad, cod;
    string **productos;
    int tamanio = 0;
    bool x = true;
    while (x == true){
        int opc;
        cout<<"Que desea hacer: "<<endl;
        cout<<"1. Dar de alta un producto nuevo."<<endl;
        cout<<"2. Modificar algun dato de un producto."<<endl;
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
            cout<<"Que producto desea cambiar (codigo): ";
            cin>>cod;
            for (int i=0;i<tamanio+1;i++){
                if (productos[i][0] == cod){
                    cout<<"Que desea cambiar:"<<endl;
                    cout<<"1. Codigo"<<endl;
                    cout<<"2. Nombre"<<endl;
                    cout<<"3. Precio"<<endl;
                    cout<<"4. Cantidad"<<endl;
                    cin>>opc2;
                    if (opc2==1){
                        cout<<"Que nuevo codigo desea ponerle: ";
                        cin>>productos[i][0];
                        cout<<"Codigo cambiado por: "<<productos[i][0]<<endl<<endl;
                    }
                    else if (opc2==2){
                        cout<<"Que nuevo nombre desea ponerle: ";
                        cin>>productos[i][1];
                        cout<<"Nombre cambiado por: "<<productos[i][1]<<endl<<endl;
                    }
                    else if (opc2==3){
                        cout<<"Que nuevo precio desea ponerle: ";
                        cin>>productos[i][2];
                        cout<<"Precio cambiado por: "<<productos[i][2]<<endl<<endl;
                    }
                    else if (opc2==4){
                        cout<<"Que nueva cantidad desea ponerle: ";
                        cin>>productos[i][3];
                        cout<<"Cantidad cambiada por: "<<productos[i][3]<<endl<<endl;
                    }
                }
            }
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