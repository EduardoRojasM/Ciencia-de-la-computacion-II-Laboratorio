#include "Color.h"

Color::Color(string _rgb)
{
    rgb = _rgb;
}

Color::~Color()
{
}

void Color::mostrarColor(){
    cout<<rgb;
}