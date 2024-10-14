#ifndef PISTA_H
#define PISTA_H

#include "detector.h"

typedef struct Pista {
    Detector base; // puede tener cualquier nombre la variable base. Esta representa la estructura
    void (*matarCubito)(const struct Pista* this);
} Pista;

Pista* Pista_crear(int x1, int y1, int x2, int y2);
void Pista_destruir(Pista* this);
void MatarCubito(Pista* this);

#endif // PISTA_H