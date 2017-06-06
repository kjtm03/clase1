#ifndef POINT_H
#define POINT_H


class Point
{
    int x,y;
    public:
        Point(int xx=0, int yy=0){x=xx,y=yy;}
        int getX() const {return x;}
        int getY() const {return y;}
};

#endif // POINT_H
