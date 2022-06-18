#include "Cola.h"

cola::cola(){
   this->ultimo = NULL;
   this->primero = NULL;
}

void cola::Anadir(int v) {
   nodo *nuevo;
   nuevo = new nodo();

   if(ultimo) 
   ultimo->siguiente = nuevo;

   nuevo -> valor = v;
   ultimo = nuevo;
   cout<<"Dato "<<v<<" insertado"<<endl;

   if(!primero) 
   primero = nuevo;
}

int cola::Buscar(int busqueda) {
   nodo *nuevo = new nodo();
   int v = 0;

   while (busqueda!=v){
      nuevo = primero;

      if(!nuevo)
      return 0;

      primero = nuevo->siguiente;
      v = nuevo->valor;

      if(busqueda==v){
      cout<<"Elemento "<<busqueda<<" encontrado."<<endl;
      break;
      }

      if(!primero) 
      ultimo = NULL;
  
   }
   cout<<"Elemento no encontrado."<<endl;
   return 0;
}
