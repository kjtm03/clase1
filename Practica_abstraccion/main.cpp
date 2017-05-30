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

cout<<"Gerente: "<<endl;
vector[0]->MostrarDatos();
cout<<endl;
cout<<"Gerente: "<<endl;
vector[1]->MostrarDatos();
cout<<endl;


}
