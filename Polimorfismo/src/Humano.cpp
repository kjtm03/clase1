#include "Humano.h"
#include <iostream>
using namespace std;

Humano::Humano(string nombr3, int ed4d, string p4is,int dn1):Animal(nombr3, ed4d)
{
    pais = p4is;
    dni = dn1;
}
void Humano::obtenerDatos()
{
    Animal::obtenerDatos();
    cout<<"Pais: "<<pais<<endl;
    cout<<"DNI: "<<dni<<endl;
}
