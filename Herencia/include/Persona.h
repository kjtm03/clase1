#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona
{
    private:
        int edad;
        string nombre;
    public:
        Persona(int,string);
        void imprimirDatos();

};

#endif // PERSONA_H
