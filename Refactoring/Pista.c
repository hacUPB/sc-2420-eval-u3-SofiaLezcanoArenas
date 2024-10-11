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

Pista* Pista_crear(struct linea lh1, struct linea lh2, struct linea lh3, struct linea lh4, struct linea lh5, struct linea lh6, struct linea lh7, struct linea lh8, struct linea lv1, struct linea lv2, struct linea lv3, struct linea lv4, struct linea lv5, struct linea lv6, struct linea lv7, struct linea lv8)
{
    Pista* nueva_pista = (Pista*)malloc(sizeof(Pista));
    if (!nueva_pista) return NULL;
    nueva_pista->lh1 = lh1;
    nueva_pista->lh2 = lh2;
    nueva_pista->lh3 = lh3;
    nueva_pista->lh4 = lh4;
    nueva_pista->lh5 = lh5;
    nueva_pista->lh6 = lh6;
    nueva_pista->lh7 = lh7;
    nueva_pista->lh8 = lh8;
    nueva_pista->lv1 = lv1;
    nueva_pista->lv2 = lv2;
    nueva_pista->lv3 = lv3;
    nueva_pista->lv4 = lv4;
    nueva_pista->lv5 = lv5;
    nueva_pista->lv6 = lv6;
    nueva_pista->lv7 = lv7;
    nueva_pista->lv8 = lv8;
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