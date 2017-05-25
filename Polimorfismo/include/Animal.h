#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
    protected:
        string nombre;
        int edad;
    public:
        Animal(string,int);
        virtual void obtenerDatos();
};

#endif // ANIMAL_H
