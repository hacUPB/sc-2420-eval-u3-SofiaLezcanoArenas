#include <SDL.h>
#include <math.h>
#include "meta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

void dibujarMeta(const Detector* this) //en dudaaa
{

}

void detectarMeta(const Detector* this) 
{

}

void detenerCubito(const Detector* this)
{

}

Meta* Meta_crear(int x1, int y1, int x2, int y2)
{
    Meta* nueva_meta = (Meta*)malloc(sizeof(Meta));
    if (!nueva_meta) return NULL;
    nueva_meta->x1 = x1;
    nueva_meta->y1 = y1;
    nueva_meta->x2 = x2;
    nueva_meta->y2 = y2;
    nueva_meta->base.detectarColision = detectarMeta;
    nueva_meta->base.dibujarElemento = dibujarMeta;
    return nueva_meta;
}

void Meta_destruir(Meta* this)
{
    if (this) {
        free(this);
    }
}