#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "Nave.h"




using namespace std;

/*void gotoxy(int x, int y){
    HANDLE identi;
    identi = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos_cursor;
    pos_cursor.X = x;
    pos_cursor.Y = y;

    SetConsoleCursorPosition(identi,pos_cursor);
}*/
/*void Ocultar_cursor(){
    HANDLE identi;
    identi = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize = 50;
    cursor.bVisible = false;

    SetConsoleCursorInfo(identi, &cursor);
}*/

int main()
{
    Nave nave(10,10);
    nave.crear();
    nave.borrar();
    nave.ocultar();
    bool GameOver = false;
    while(!GameOver){

    nave.mover();
    Sleep(30);
    }

    return 0;
}
