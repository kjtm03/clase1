#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <iostream>

using namespace std;


class Persona
{
    private:
        string name,sex;
        int edad;
        Birthday b;
    public:
        Persona(string,string,int,Birthday);
        void MostrarDatos();
        ~Persona();


};

#endif // PERSONA_H
