#ifndef ENTIDAD_H
#define ENTIDAD_H

typedef struct Entidad { //estructura que contiene atributos y métodos del personaje
    int x;
    int y;
    int ancho;
    int alto;
    int puntaje;
    int (*obtenerX)(const struct Entidad* this);
    int (*obtenerY)(const struct Entidad* this);
    int (*obtenerAlto)(const struct Entidad* this);
    int (*obtenerAncho)(const struct Entidad* this);
    int (*obtenerPuntaje)(const struct Entidad* this);
    void (*dibujarEntidad)(const struct Entidad* this); //está en duda su uso
} Entidad;

#endif // ENTIDAD_H