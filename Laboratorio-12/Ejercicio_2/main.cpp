#include "Cola.h"
#include "Cola.cpp"
#include "Nodo.h"
#include "Nodo.cpp"

int main() {
   cola Cola = cola();

   Cola.Anadir(10);
   Cola.Anadir(20); 
   Cola.Anadir(30);
   Cola.Anadir(40);
   Cola.Anadir(50);
   Cola.Eliminar();
   Cola.Eliminar();
   Cola.Eliminar();
   return 0;
}