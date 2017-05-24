#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Persona.h"
using namespace std;

class Estudiante:public Persona
{
    protected:
        string carne;
        int nota;
    public:
        Estudiante(int, string, string, float);
        void imprimirEstudiante();
};

#endif // ESTUDIANTE_H
