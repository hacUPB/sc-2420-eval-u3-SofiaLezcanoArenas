#ifndef PISTA_H
#define PISTA_H

#include "detector.h"

typedef struct Pista {
    Detector base; // puede tener cualquier nombre la variable base. Esta representa la estructura
    //int width;
    //int height; //creo que no son necesarios
} Pista; //esto está bien? así es como lo tenía al otro lado o debería hacer instancias para cada linea?

Pista* Pista_crear(int x1, int y1, int x2, int y2);
void Pista_destruir(Pista* this);

#endif // PISTA_H