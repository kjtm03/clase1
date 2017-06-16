#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray
{
    int _size;
    Point *points;
    void _resize(int newSize);
public:
    PointArray();
    PointArray(Point pts[],int _size);
    PointArray(PointArray& pv);

    void _clear();
    int getSize() const;
    void push(Point &p);
    void _insert(int pos, Point &p);
    void _remove(int pos);
    Point *get(int pos);
    const Point *get(int pos) const;

    ~PointArray();
};

#endif // POINTARRAY_H
