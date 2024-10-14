#include <SDL.h>
#include <math.h>
#include "pista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

void dibujarPista(const Detector* this)
{

}

void detectarColisionPista(const Detector* this)
{

}

void matarCubito(const Detector* this)
{

}

Pista* Pista_crear(int x1, int y1, int x2, int y2)
{
    Pista* nueva_pista = (Pista*)malloc(sizeof(Pista));
    if (!nueva_pista) return NULL;
    nueva_pista->base.x1 = x1;
    nueva_pista->base.y1 = y1;
    nueva_pista->base.x2 = x2;
    nueva_pista->base.y2 = y2;
    nueva_pista->base.detectarColision = detectarColisionPista;
    nueva_pista->base.dibujarElemento = dibujarPista;
    return nueva_pista;
}

void Pista_destruir(Pista* this)
{
    if (this)
    {
        free(this); //como no se tienen más variables de tipo dinámico (malloc), entonces con esta linea es suficiente para liberar la memoria
    }
}