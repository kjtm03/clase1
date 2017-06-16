#ifndef POINT_H
#define POINT_H


class Point
{
    int x,y;
public:
    Point(int _x, int _y);
    Point() {}
    ~Point();
    int getX();
    int getY();
    void setX(int _x);
    void setY(int _y);
};

#endif // POINT_H
