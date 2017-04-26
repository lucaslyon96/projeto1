#include "poligono.h"
#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

        Poligono::Poligono(Point p[],int tam)
        {
            n=tam;
            for(int i=0;i<n-1;i++){
                conj[i].x = p[i].x;
                conj[i].y = p[i].y;
            }

        }//construtor
        Poligono::Poligono(){
        }//construtor default
        Poligono::~Poligono(){

        }//destrutor
        void Poligono::setV(Point p){
                conj[n].x = p.x;
                conj[n].y = p.y;
                n=n+1;
        }//adiciona um vertice do poligono
        int Poligono::getV(){
            return n;
        }//retorna a quantidade de vertices do poligono
        float Poligono::area(){
            float soma_a=0,soma_b=0;
            //formula para calcular a area pelos vertices
            for (int i = 1;i<n;i++){
                soma_a=soma_a+conj[i-1].x*conj[i].y;
                soma_b=soma_b+conj[i].x*conj[i-1].y;
            }

            soma_a=soma_a+conj[n-1].x*conj[0].y;
            soma_b=soma_b+conj[0].x*conj[n-1].y;

            if(soma_a>soma_b){
                return ((soma_a-soma_b)/2.0);
            }
            else if (soma_b>soma_a){
                return ((soma_b-soma_a)/2.0);
            }
            else {
                exit;
            }

        }//calcula a area do poligono
        void Poligono::trans_pol(float a,float b){
            for(int i=0;i<n;i++){
                conj[i].x=conj[i].x+a;
                conj[i].y=conj[i].y+b;
            }
        }// translada cada vertice do poligono em a e b
        void Poligono::rot(double teta,Point x){
            float cx = x.x;
                          float cy = x.y;
                          float angle = teta;
                          Point p;
                          float s = sin(angle);
                          float c = cos(angle);

                          // translate point back to origin:
                          p.x -= cx;
                          p.y -= cy;

                          // rotate point
                          float xnew = p.x * c - p.y * s;
                          float ynew = p.x * s + p.y * c;

                          // translate point back:
                          p.x = xnew + cx;
                          p.y = ynew + cy;
        }//rotaciona a partir do ponto x0,y0 em teta graus
        void Poligono::imprimir(){
            for(int i=0;i<n;i++){
                cout<<"("<<conj[i].x<<","<<conj[i].y<<")->";
            }
        }// imprime o poligono na forma (x0,y0)→(x1,y1)→(x2,y2)→…​




