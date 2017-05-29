#include "Janitor.h"
#include <iostream>
#include "Birthday.h"

using namespace std;

Janitor::Janitor(string _name,string _sex,int _edad,Birthday _b,int _s,string _tarea):Persona(_name,_sex,_edad,_b)
{
    salario_minimo = _s;
    tarea = _tarea;

}
void Janitor::MostrarDatos()
{
    Persona::MostrarDatos();
    cout<<"Salario minimo: "<<salario_minimo<<endl;
    cout<<"Tarea: "<<tarea<<endl;
}

Janitor::~Janitor()
{
    cout<<"Se murio este men v:"<<endl;
}

