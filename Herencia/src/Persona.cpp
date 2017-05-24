#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(int ed4d,string n0mbre)
{
    edad = ed4d;
    nombre = n0mbre;
}

void Persona::imprimirDatos()
{
    cout<<"Edad: "<<edad<<endl;
    cout<<"Nombre: "<<nombre<<endl;
}
