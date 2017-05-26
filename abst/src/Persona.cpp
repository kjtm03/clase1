#include "Persona.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

Persona::Persona(string n0mbre,int ed4d, string p4is, Birthday _hdp)
{
    nombre = n0mbre;
    edad = ed4d;
    pais = p4is;
    hdp = _hdp;
}
void Persona::mostrarDatos()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Pais: "<<pais<<endl;
}
Persona::~Persona()
{
    cout<<"GG, se murio este wey v:"<<endl;
}
