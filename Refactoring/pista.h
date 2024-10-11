#ifndef PISTA_H
#define PISTA_H

#include "detector.h"

struct linea {
    int x1;
    int y1;
    int x2;
    int y2;
};


typedef struct Pista {
    Detector base; // puede tener cualquier nombre la variable base. Esta representa la estructura
    struct linea lh1;
    struct linea lh2;
    struct linea lh3;
    struct linea lh4;
    struct linea lh5;
    struct linea lh6;
    struct linea lh7;
    struct linea lh8;
    struct linea lv1;
    struct linea lv2;
    struct linea lv3;
    struct linea lv4;
    struct linea lv5;
    struct linea lv6;
    struct linea lv7;
    struct linea lv8;
    void (*matarCubito)(const struct Pista* this);
} Pista;

Pista* Pista_crear(struct linea lh1, struct linea lh2, struct linea lh3, struct linea lh4, struct linea lh5, struct linea lh6, struct linea lh7, struct linea lh8, struct linea lv1, struct linea lv2, struct linea lv3, struct linea lv4, struct linea lv5, struct linea lv6, struct linea lv7, struct linea lv8);
void Pista_destruir(Pista* this);

#endif // PISTA_H