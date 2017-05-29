#ifndef GERENTE_H
#define GERENTE_H
#include <Persona.h>
#include "Birthday.h"
#include <iostream>
using namespace std;

class Gerente:public Persona
{
    protected:
        string codigo;
        string area;

    public:
        Gerente(string,string,int,Birthday,string,string);
        void MostrarDatos();
        ~Gerente();
};

#endif // GERENTE_H
