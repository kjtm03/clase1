#include "Estudiante.h"
#include <iostream>
#include "Persona.h"
using namespace std;

Estudiante::Estudiante(int ed4d, string n0mbre, string c4rne, float n0ta):Persona(ed4d,n0mbre)
{
    carne = c4rne;
    nota = n0ta;
}
void Estudiante::imprimirEstudiante()
{
    imprimirDatos();
    cout<<"Carne: "<<carne<<endl;
    cout<<"Nota: "<<nota<<endl;
}
