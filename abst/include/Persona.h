#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <iostream>
using namespace std;

class Persona
{
    protected:
        string nombre;
        int edad;
        string pais;
        Birthday hdp;
    public:
        Persona(string n0mbre,int ed4d, string p4is, Birthday);
        void mostrarDatos();
        virtual ~Persona();


};

#endif // PERSONA_H
