#include "ClaseDisco.h"

ClaseDisco::ClaseDisco(string _video,string _musica,string _estado) : ClaseMultimedia(_video,_musica)
{
    estado = _estado;
}

ClaseDisco::~ClaseDisco()
{
}

void ClaseDisco::mostrarInformacion(){
    cout<<"El disco "<<estado<<" contiene: "<<endl;
    mostrarMultimedia();

}