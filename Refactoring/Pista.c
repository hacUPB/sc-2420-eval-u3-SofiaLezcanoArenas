#include <SDL.h>
#include <math.h>
#include "pista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

void dibujarElemento(const Detector* this) //en dudaaa
{

}

void detectarColision(const Detector* this) //en dudaaa
{

}

Pista* Pista_crear(int x1, int y1, int x2, int y2)
{
    Pista* nueva_pista = (Pista*)malloc(sizeof(Pista));
    if (!nueva_pista) return NULL;
    //nuevo_guerrero->base.nombre = strdup(nombre);
    //strcpy_s(nuevo_cubito->base.nombre, 30, nombre);
    nueva_pista->base.x1 = x1;
    nueva_pista->base.y1 = y1;
    nueva_pista->base.x2 = x2;
    nueva_pista->base.y2 = y2;
    nueva_pista->base.detectarColision = detectarColision;
    nueva_pista->base.dibujarElemento = dibujarElemento;
    return nueva_pista;
}

void Pista_destruir(Pista* this)
{
    if (this) {
        //free(this->base.nombre); // tengo que ponerle nombre al cubito o cómo hago para destruirlo si no es con el nombre?
        free(this);
    }
}