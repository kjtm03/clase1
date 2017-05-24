#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Persona.h"
using namespace std;

class Empleado:public Persona
{
    protected:
        int codigo, sueldo;
    public:
        Empleado(int,string,int, float);
        void imprimirEmpleado();

};

#endif // EMPLEADO_H
