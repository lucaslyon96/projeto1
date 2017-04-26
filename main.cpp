#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
#include <cmath>

using namespace std;

int main()
{
    Point p(-1,2.5);
    Retangulo r(0,0,4,3);
    r.imprimir();
    cout<<"Area do retangulo :"<<r.area()<<endl;
    r.trans_pol(-3,4);
    cout<<"Area do retangulo :"<<r.area()<<endl;
    r.rot(30,p);
    r.imprimir();
    cout<<"Area do retangulo :"<<r.area()<<endl;
    return 0;
}

