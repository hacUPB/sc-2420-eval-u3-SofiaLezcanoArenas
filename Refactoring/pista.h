#ifndef PISTA_H
#define PISTA_H

#include "detector.h"

typedef struct Pista {
    Detector base; // puede tener cualquier nombre la variable base. Esta representa la estructura
    //int width;
    //int height; //creo que no son necesarios
} Pista; //esto est� bien? as� es como lo ten�a al otro lado o deber�a hacer instancias para cada linea?

Pista* Pista_crear(int x1, int y1, int x2, int y2);
void Pista_destruir(Pista* this);

#endif // PISTA_H