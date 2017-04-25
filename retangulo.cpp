#include "retangulo.h"
#include <iostream>

using namespace std;

    Retangulo::Retangulo(float mx,float my, float ml,float mh):Poligono (){
        x = mx;
        y = my;
        l = ml;
        h = mh;
        Point p(x,y),p1(x+l,y),p2(x+l,y-h),p3(x,y-h);
        setV(p);
        setV(p1);
        setV(p2);
        setV(p3);
}
    Retangulo::Retangulo(){

    }

    void  Retangulo::setX(float ax){
        x=ax;
    }

    void  Retangulo::setY(float ay){
        y=ay;
    }

    void  Retangulo::setL(float al){
        l=al;
    }

    void  Retangulo::setH(float ah){
        h=ah;
    }

    float  Retangulo::getX(){
        return x;
    }

    float  Retangulo::getY(){
        return y;
    }

    float  Retangulo::getL(){
        return l;
    }

    float  Retangulo::getH(){
        return h;
    }


     Retangulo::~Retangulo(){

    }


