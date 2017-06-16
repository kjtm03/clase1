#include "PointArray.h"
#include <iostream>
PointArray::PointArray()
{
    _size=0;
    points= new Point[0];
}

PointArray::PointArray(Point pts[],int newSize)
{
    _size=newSize;
    points = new Point[newSize];
    for(int i=0;i<newSize;i++)
        points[i]=pts[i];
}

int PointArray::getSize() const
{
    return _size;
}

PointArray::PointArray(PointArray &pv)
{
    _size=pv._size;
    points=new Point[_size];
    for(int i=0; i<_size;i++)
        points[i]=pv.points[i];
}

void PointArray::_resize(int newSize)
{
    Point *pts=new Point[newSize];
    int minSize=(newSize>_size? _size: newSize);
    for(int i=0;i<minSize;i++)
        pts[i]=points[i];
    delete [] points;
    _size=newSize;
    points=pts;
}

void PointArray::_clear()
{
    _resize(0);
}

void PointArray::_insert(int pos,Point &p)
{
    _resize(_size+1);
    for(int i=_size-1;i<pos;i--)
        points[i]=points[i-1];
    points[pos]=p;
}

void PointArray::_remove(int pos)
{
    if(pos>=0 or pos <_size)
    {
        for(int i=pos;i<_size-2;i++)
            points[i]=points[i+1];
    }
    _resize(_size-1);
}

Point *PointArray::get(int pos)
{
    return pos>=0 and pos<_size? points+pos: NULL;
}


const Point *PointArray::get(int pos) const
{
    return pos>=0 and pos<_size? points+pos: NULL;
}

PointArray::~PointArray()
{
    delete[] points;
}
