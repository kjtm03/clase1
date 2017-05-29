#include <iostream>
#include <Persona.h>
#include <Gerente.h>
#include <Janitor.h>
#include "Birthday.h"

using namespace std;

int main()
{

Persona *vector[3];
vector[0] = new Gerente("Yasuo","Masculino",25,Birthday(1991,3,7),"0234","Marketing");
vector[1] = new Gerente("Jaina","Femenino",40,Birthday(1982,8,11),"0345","Finanzas");
vector[2] = new Janitor("Grim Fandango","Masculino",18,Birthday(1998,6,20),700,"Limpiaventanas");

cout<<"Gerente: "<<endl;
vector[0]->MostrarDatos();
cout<<endl;
cout<<"Gerente: "<<endl;
vector[1]->MostrarDatos();
cout<<endl;
cout<<"Conserje: "<<endl;
vector[2]->MostrarDatos();

}
