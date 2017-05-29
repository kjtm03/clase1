#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(string _name, string _sex, int _edad, Birthday _b)
{
    name = _name;
    sex = _sex;
    edad = _edad;
    b = _b;
}
void Persona::MostrarDatos()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Sex: "<<sex<<endl;
    cout<<"Age: "<<edad<<endl;
    cout<<"Birthday: ";b.getFecha();cout<<endl;

}

Persona::~Persona()
{
    cout<<"Se murio este men v:"<<endl;
}
