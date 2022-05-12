#include "stdfix.h"
#include <iostream>
#include "string"
#include "Area.h"

Area::Area(int b, int h)
{
    base = b;
    altura = h;
}

Area::~Area()
{
}

void Area::cal_area(){
    cout<<"El area del rectangulo es: "<<base*altura<<endl;
}
void Area::cal_perimentro(){
    cout<<"El perimetro del rectangulo es: "<<2*(base+altura)<<endl;

}
