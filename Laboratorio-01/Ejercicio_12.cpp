/*12. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.*/

#include <iostream>

using namespace std;

int main(){
    int cu;
    cout<<"De cuanto quiere la serie de Fibonacci: ";
    cin>>cu;
    int fib [cu-2] = {0,1};
    for (int i=0; i<cu-2; i++){
        if(i==0)
        cout<<fib[i]<<", "<<fib[i+1];
        fib[i+2]=fib[i]+fib[i+1];
        cout<<", "<<fib[i+2];
    }

    return 0;
}