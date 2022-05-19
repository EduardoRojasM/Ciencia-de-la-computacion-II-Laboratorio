#include "ClaseMultimedia.h"

ClaseMultimedia::ClaseMultimedia(string _video,string _musica)
{
    video = _video;
    musica = _musica;
}

ClaseMultimedia::~ClaseMultimedia()
{
}

void ClaseMultimedia::mostrarMultimedia(){
    cout<<"Esta el video: "<<video<<endl;
    cout<<"Esta la musica: "<<musica<<endl;

}