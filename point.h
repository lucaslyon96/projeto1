#ifndef POINT_H
#define POINT_H
/**
 * @brief The Point class eh a classe de pontos bidimensionais
 */

class Point{
public:
    float x;
    float y;
public:
    /**
     * @brief Point eh o construtor
     * @param mx parametro x para criacao do ponto
     * @param my parametro y para criacao do ponto
     */
    Point(float mx=0,float my=0);
    ~Point();
    /**
     * @brief setX altera o valor de x
     * @param mx novo valor passado pelo usuario
     */
    void setX(float mx);
    /**
     * @brief setY altera o valor de y
     * @param my novo valor passado pelo usuario
     */
    void setY(float my);
    /**
     * @brief setXY altera tanto o valor x quanto o valor y
     * @param mx novo valor passado pelo usuario
     * @param my novo valor passado pelo usuario
     */
    void setXY(float mx,float my);
    /**
     * @brief getX retorna o valor de x
     * @return x
     */
    float getX();
    /**
     * @brief getY retorna o valor de y
     * @return y
     */
    float getY();
    /**
     * @brief add faz a soma de dois pontos
     * @param p1 ponto passado pelo usuario que sera somado
     * @return retorna a soma
     */
    Point add(Point p1);
    /**
     * @brief sub faz a subtracao de dois pontos
     * @param p1 ponto passado pelo usuario que sera subtraido
     * @return retorna a subtracao
     */
    Point sub(Point p1);
    /**
     * @brief norma calcula a distancia do ponto ate a origem
     * @return a distancia/norma
     */
    float norma();
    /**
     * @brief translada soma a em x e b em y
     * @param a valor passado pelo usuario para ser somado a x
     * @param b valor passado pelo usuario para ser somado a y
     */
    void translada(float a, float b);
    /**
     * @brief imprime imprime o ponto na forma (a,b)
     */
    void imprime();
};

#endif // POINT_H
