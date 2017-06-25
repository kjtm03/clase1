#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Nave.h"
#include "Borde.h"
#include "Kamikaze.h"

int main()
{
    Borde limite(0,0);
    limite.crearLimites();
    Nave uno(37,30,6);
    uno.caracter();
    uno.borrar();
    uno.borrarCursor();
    uno.numeroVidas();
    Kamikaze kamikaze(10,10),kamikaze1(10,10);
    bool game_over = false;
    while(!game_over){

        kamikaze.mover(); kamikaze.colision(uno);
        //kamikaze1.mover(); kamikaze1.colision(uno);
        uno.morir();
        uno.mover();
        Sleep(30);
    }
}
