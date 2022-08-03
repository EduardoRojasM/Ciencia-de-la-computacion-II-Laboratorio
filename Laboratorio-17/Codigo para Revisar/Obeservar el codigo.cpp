#include <iostream> 

using namespace std;

template <class T> 
class Contendor {
    //Define el tipo a T para poder ser Int, Float o Double
    T elemento; 
    public : 
    //iguala el elemento a arg
    Contendor (T arg ) {
        elemento = arg ; 
    } 
    //Retorna el elemento sumandole 1
    T add() {
        return ++elemento; 
    } 
}; 

template <> 
class Contendor<char> {
    //declara el elemento tipo char
    char elemento;
    public : 
    //iguala el elemento a arg
    Contendor ( char arg ) {
        elemento = arg ; 
    } 
    char uppercase() { 
        //Solo si es desde el a a la z
    if ((elemento >= 'a') && (elemento <= 'z')) { 
        //resta A-a siendo -32 para que el al elemento elegido le resta 32 para hallar su Mayuscula
        elemento += 'A'-'a';}
        //retorna el char ya en mayuscula
    return elemento;
    }
}; 

int main(){
    //Le asignas cualquier tipo int, float o duble y le suma 1 al numero puesto
    Contendor<int> cint (5);
    //En caso de que sea caracter los vuelve mayuscula 
    Contendor<char> cchar ('t');
    //Añade 1 al numero 5 siendo 6
    cout<<cint.add()<<endl;
    //la t la convierte en T, restandole -32 a la t
    cout<<cchar.uppercase()<<endl;
    return 0;
}