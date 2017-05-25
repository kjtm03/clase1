#include <iostream>
#include "Animal.h"
#include "Humano.h"
#include "Perro.h"
using namespace std;

int main()
{
    Animal *vector[4];
    vector[0] = new Humano("Ragnar",33,"Escandinavia",70595943);
    vector[1] = new Perro("Barnum",4,"Doberman","Negro");
    vector[2] = new Humano("Aeonaxx",45,"Islas Feroe", 55003344);
    vector[3] = new Perro("Flufy",6,"Husky","Blanco y negro");

    vector[0]->obtenerDatos();
    cout<<"\n";
    vector[1]->obtenerDatos();
    cout<<"\n";
    vector[2]->obtenerDatos();
    cout<<"\n";
    vector[3]->obtenerDatos();

}
