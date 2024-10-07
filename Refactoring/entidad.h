#ifndef ENTIDAD_H
#define ENTIDAD_H

typedef struct Entidad { //estructura que contiene atributos y métodos del personaje
    int posicion; //arreglo de caracteres en vez de un puntero
    int ancho;
    int alto;
    int puntaje;
    int (*obtenerPosicion)(const struct Entidad* this);
    int (*obtenerAlto)(const struct Entidad* this);
    int (*obtenerAncho)(const struct Entidad* this);
    int (*obtenerPuntaje)(const struct Entidad* this);
    void (*dibujarElemento)(const struct Entidad* this); //está en duda su uso
} Entidad;

#endif // ENTIDAD_H