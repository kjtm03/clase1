#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "Nave.h"
#define ARRIBA 72

#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
using namespace std;

Nave::Nave(int _x,int _y)
{
    x = _x;
    y = _y;
}
void Nave::gotoxy1(int x, int y)
{
    HANDLE identi;
    identi = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos_cursor;
    pos_cursor.X = x;
    pos_cursor.Y = y;

    SetConsoleCursorPosition(identi,pos_cursor);
}
void Nave::ocultar()
{
    HANDLE identi;
    identi = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize = 50;
    cursor.bVisible = false;

    SetConsoleCursorInfo(identi, &cursor);
}
void Nave::crear(){
    gotoxy1(x,y); printf(     "%c",30);
    gotoxy1(x,y+1); printf( "%c%c%c",91,236,93);
    gotoxy1(x,y+2); printf("%c%c  %c%c",30,2,2,30);
}
void Nave::borrar(){
    gotoxy1(x,y);printf("      ");
    gotoxy1(x,y+1);printf("      ");
    gotoxy1(x,y+2);printf("      ");
}
void Nave::mover(){
    if(kbhit()){
        char tecla = getch();
        borrar();
        if(tecla== IZQUIERDA)x--;
        if(tecla== DERECHA)x++;
        if(tecla== ARRIBA)y--;
        if(tecla==ABAJO)y++;
        crear();
    }
}
