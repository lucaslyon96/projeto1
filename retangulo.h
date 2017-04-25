#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"
/**
 * @brief The Retangulo class eh a classe filha de poligono que constroe um retangulo
 */
class Retangulo: public Poligono
{
private:
    float x;
    float y;
    float l;
    float h;

public:
    /**
     * @brief Retangulo construtor com parametros
     * @param mx valor x do vertice superior esquerdo
     * @param my valor y do vertice superior esquerdo
     * @param ml largura do retangulo
     * @param mh altura do retangulo
     */
    Retangulo(float mx,float my, float ml,float mh);
    /**
     * @brief Retangulo construtor default
     */
    Retangulo();
    ~Retangulo();
    /**
     * @brief setX altera o valor de x
     * @param ax parametro passado pelo usuario
     */
    void setX(float ax);
    /**
     * @brief setY altera o valor de y
     * @param ay parametro passado pelo usuario
     */
    void setY(float ay);
    /**
     * @brief setL altera o valor de l(largura)
     * @param al parametro passado pelo usuario
     */
    void setL(float al);
    /**
     * @brief setH altera o valor de h(altura)
     * @param ah parametro passado pelo usuario
     */
    void setH(float ah);
    /**
     * @brief getX pega o valor de x
     * @return retorna x
     */
    float getX();
    /**
     * @brief getY pega o valor de y
     * @return retorna y
     */
    float getY();
    /**
     * @brief getL pega o valor de l(largura)
     * @return retorna l(largura)
     */
    float getL();
    /**
     * @brief getH pega o valor de h(altura)
     * @return retorna h(altura)
     */
    float getH();
};

#endif // RETANGULO_H
