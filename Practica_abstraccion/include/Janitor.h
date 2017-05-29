#ifndef CONSERJE_H
#define CONSERJE_H
#include <Persona.h>
#include "Birthday.h"

class Janitor:public Persona
{
    private:
        int salario_minimo;
        string tarea;
    public:
        Janitor(string,string,int,Birthday,int,string);
        void MostrarDatos();
        ~Janitor();




};

#endif // CONSERJE_H
