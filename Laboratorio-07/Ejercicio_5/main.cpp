#include "OperacionBase.h"
#include "OperacionBase.cpp"
#include "OperacionFactorial.h"
#include "OperacionFactorial.cpp"

int main(){
    OperacionFactorial fact1 = OperacionFactorial(6);
    fact1.devolverFactorial();
    return 0;
}