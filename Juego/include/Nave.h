#ifndef NAVE_H
#define NAVE_H


class Nave
{
    private:
        int x, y;
        int vidas;
    public:
        Nave(int _x, int _y, int _vidas);
        void coordenada(int, int);
        void borrarCursor();
        void caracter();
        void borrar();
        void mover();
        void numeroVidas();
        void morir();



};

#endif // NAVE_H
