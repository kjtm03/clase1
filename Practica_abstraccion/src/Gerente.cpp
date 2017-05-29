#include "Gerente.h"
#include <iostream>
#include "Birthday.h"

using namespace std;

Gerente::Gerente(string _name,string _sex,int _edad,Birthday _b,string _codigo,string _area):Persona(_name,_sex,_edad,_b)
{
    codigo = _codigo;
    area = _area;
}

void Gerente::MostrarDatos()
{

    Persona::MostrarDatos();
    cout<<"Code: "<<codigo<<endl;
    cout<<"Area: "<<area<<endl;

}

Gerente::~Gerente()
{
    cout<<"Se murio este men v:"<<endl;
}
