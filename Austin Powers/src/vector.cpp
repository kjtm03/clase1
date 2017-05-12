#include <iostream>
#include "Vector.h"
#include <math.h>
using namespace std;

void Vector::impri()
{
    cout<<"Start "<<endl;
    start.imprimir();
    cout<<"End "<< endl;
    end1.imprimir();
}
void Vector::formula()
{
    cout<<sqrt((end1.x-start.x)*(end1.x-start.x)+(end1.y-start.y)*(end1.y-start.y));
}


