#include "Perro.h"
#include <iostream>
using namespace std;

Perro::Perro(string nombr3,int ed4d, string r4z4, string c0l0r):Animal(nombr3, ed4d)
{
    raza = r4z4;
    color = c0l0r;
}
void Perro::obtenerDatos()
{
    Animal::obtenerDatos();
    cout<<"Raza: "<<raza<<endl;
    cout<<"Color: "<<color<<endl;
}
