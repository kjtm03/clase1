#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(string nombr3, int ed4d)
{
    nombre = nombr3;
    edad = ed4d;
}
void Animal::obtenerDatos()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
