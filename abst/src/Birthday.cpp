#include "Birthday.h"
#include <iostream>
using namespace std;

/*Birthday::Birthday(int di4,int m3s,int an1o)
{
    dia = di4;
    mes = m3s;
    anio = an1o;
}*/

void Birthday::fecha()
{
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
int Birthday::edad()
{
    int cont=0;
    cont+=2017-anio-1;
    if(mes<=5)
        cont+=1;
    cout<<cont<<endl;

}
