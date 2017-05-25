#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Perro:public Animal
{
    protected:
        string raza;
        string color;
    public:
        Perro(string,int, string, string);
        void obtenerDatos();
};

#endif // PERRO_H
