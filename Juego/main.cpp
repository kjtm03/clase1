#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <conio.h>
#include "Nave.h"
#include "Borde.h"

int main()
{
    Borde limite(0,0);
    limite.crearLimites();
    Nave uno(37,30,6);
    uno.caracter();
    uno.borrar();
    uno.borrarCursor();
    uno.numeroVidas();
    bool game_over = false;
    while(!game_over){uno.morir();uno.mover();Sleep(30);}

}
