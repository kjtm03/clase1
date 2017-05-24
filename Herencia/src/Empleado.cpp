#include "Empleado.h"
#include <iostream>
using namespace std;

Empleado::Empleado(int ed4d, string n0mbre, int c0digo, float su3ldo):Persona(ed4d,n0mbre)
{
    codigo = c0digo;
    sueldo = su3ldo;
}
void Empleado::imprimirEmpleado()
{
    imprimirDatos();
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Sueldo: "<<"S/."<<sueldo<<endl;
}
