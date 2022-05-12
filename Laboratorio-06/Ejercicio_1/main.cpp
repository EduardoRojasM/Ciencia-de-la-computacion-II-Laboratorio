#include "stdfix.h"
#include <iostream>
#include "Area.h"
#include "Area.cpp"

int main(){
    Area a1 = Area(12,5);
    a1.cal_area();
    a1.cal_perimentro();
    system("pause");
    return 0;
}