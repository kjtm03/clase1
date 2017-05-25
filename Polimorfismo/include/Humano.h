#ifndef HUMANO_H
#define HUMANO_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Humano:public Animal
{
    protected:
        string pais;
        int dni;
    public:
        Humano(string, int, string, int);
        void obtenerDatos();
};

#endif // HUMANO_H
