#include "Borde.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>

Borde::Borde(int _i, int _j){i = _i; j = _j;}
void Borde::coordenada1(int i, int j)
{
    HANDLE hCon;
    COORD Pos;
    Pos.X = i;
    Pos.Y = j;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,Pos);
}
void Borde::crearLimites()
{
    for(int k = 1; k<79 ; k++){
        coordenada1(k,2);printf("%c",205);
        coordenada1(k,33);printf("%c",205);
    }
    for(int k = 3; k<33 ; k++){
        coordenada1(1,k);printf("%c",186);
        coordenada1(78,k);printf("%c",186);
    }
    coordenada1(1,2);printf("%c",201);//primera barra horizontal
    coordenada1(78,2);printf("%c",187);//segunda barra horizontal
    coordenada1(1,33);printf("%c",200);//primera barra vertical
    coordenada1(78,33);printf("%c",188);//segunda barra vertical
}
