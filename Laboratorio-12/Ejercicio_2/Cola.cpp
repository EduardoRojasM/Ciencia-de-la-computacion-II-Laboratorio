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

int cola::Eliminar() {
   nodo *nodo;
   int v;

   nodo = primero;
   if(!nodo) 
   return 0;

   primero = nodo->siguiente;
   v = nodo->valor;
   delete nodo;
   
   if(!primero) 
   ultimo = NULL;

   cout<<"Elemento "<<v<<" eliminado."<<endl;
   return v;
}
