#ifndef PISTA_H
#define PISTA_H

#include "detector.h"

typedef struct Pista {
    Detector base; // puede tener cualquier nombre la variable base. Esta representa la estructura
    int x1;
    int y1;
    int x2;
    int y2;
    //int width;
    //int height; //creo que no son necesarios
} lh1, lh2, lh3, lh4, lh5, lh6, lh7, lh8, lv1, lv2, lv3, lv4, lv5, lv6, lv7, lv8; //esto está bien? así es como lo tenía al otro lado o debería hacer instancias para cada linea?

Pista* Pista_crear(int x1, int y1, int x2, int y2);
void Pista_destruir(Pista* this);

void matarCubito(Pista* this);

#endif // PISTA_H