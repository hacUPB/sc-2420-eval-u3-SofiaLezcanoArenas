#include <SDL.h>
#include <math.h>
#include "meta.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

void dibujarElemento(const Detector* this) //en dudaaa
{

}

void detectarColision(const Detector* this) 
{

}

Meta* Meta_crear(int x1, int y1, int x2, int y2)
{
    Meta* nueva_meta = (Meta*)malloc(sizeof(Meta));
    if (!nueva_meta) return NULL;
    //nuevo_guerrero->base.nombre = strdup(nombre);
    //strcpy_s(nuevo_cubito->base.nombre, 30, nombre);
    nueva_meta->base.x1 = x1;
    nueva_meta->base.y1 = y1;
    nueva_meta->base.x2 = x2;
    nueva_meta->base.y2 = y2;
    nueva_meta->base.detectarColision = detectarColision;
    nueva_meta->base.dibujarElemento = dibujarElemento;
    return nueva_meta;
}

void Meta_destruir(Meta* this)
{
    if (this) {
        //free(this->base.nombre); // tengo que ponerle nombre al cubito o cómo hago para destruirlo si no es con el nombre?
        free(this);
    }
}