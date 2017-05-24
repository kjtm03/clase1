#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
#include "Empleado.h"
using namespace std;

int main()
{
    Persona p1(18,"Alejandro");
    p1.imprimirDatos();
    cout<<endl;
    Empleado p3(45,"Alf",1234,500);
    p3.imprimirEmpleado();
    cout<<endl;
    Estudiante p2(23,"Romulo","A++",13.5);
    p2.imprimirEstudiante();
}
