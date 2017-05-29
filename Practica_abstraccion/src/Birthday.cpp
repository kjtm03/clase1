#include "Birthday.h"
#include <iostream>

using namespace std;
Birthday::Birthday()
{
  year = 0;
  month = 0;
  day = 0;
}


Birthday::Birthday(int _year, int _month, int _day)
{
  year = _year;
  month = _month;
  day = _day;
}

void Birthday::getFecha()
{
    cout<<year<<"/"<<month<<"/"<<day<<endl;
}
int Birthday::getEdad()
{
    int x =0;
    x+=2017-year-1;
    if(month<=5)
        x+=1;
        return x;
}
