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