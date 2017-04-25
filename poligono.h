#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
#define MAX 100 // limite de 100 vertices
/**
 * @brief The Poligono class eh a classe que utiliza pontos (vertices) para formar um poligono
 */
class Poligono{

private:
    Point conj[MAX];// cria um vetor para guardar os vertices
    int n=0;
public:
    /**
     * @brief Poligono eh construtor
     * @param p conjunto de vertices que formam o poligono
     * @param tam quantidade de vertices
     */
    Poligono(Point p[MAX],int tam);//construtor
    /**
     * @brief Poligono construtor default
     */
    Poligono();
    ~Poligono();//destrutor
    /**
     * @brief setV adiciona um ponto(vertice) ao poligono
     * @param p ponto passado pelo usuario
     */
    void setV(Point p);//adiciona um vertice do poligono
    /**
     * @brief getV funcao para saber quantos vertices tem
     * @return retorna a quantidade de vertices do poligono
     */
    int getV();//retorna a quantidade de vertices do poligono
    /**
     * @brief area calcula a area do poligono
     * @return retorna o valor da area do poligono
     */
    float area();//calcula a area do poligono
    /**
     * @brief trans_pol translada cada vertice do poligono em a e b
     * @param a soma a em cada x
     * @param b soma b em cada y
     */
    void trans_pol(float a,float b);// translada cada vertice do poligono em a e b
    /**
     * @brief rot rotaciona a partir do ponto x0,y0 em teta graus
     * @param teta angulo fornecido pelo usuario
     * @param x ponto fornecido pelo usuario
     */
    void rot(double teta,Point x);//rotaciona a partir do ponto x0,y0 em teta graus
    /**
     * @brief imprimir imprime o poligono na forma (x0,y0)→(x1,y1)→(x2,y2)→…​
     */
    void imprimir();// imprime o poligono na forma (x0,y0)→(x1,y1)→(x2,y2)→…​

};

#endif // POLIGONO_H
