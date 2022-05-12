#pragma once
#include <iostream>

using namespace std;

class Area
{
private:
    int base;
    int altura;
public:
    Area(int,int);
    ~Area();
    void cal_area();
    void cal_perimentro();
};