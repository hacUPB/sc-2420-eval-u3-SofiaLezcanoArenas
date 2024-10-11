#include "entidad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

int obtenerPosicion(const Entidad* this)
{
    return this->posicion;
}

int obtenerAlto(const Entidad* this)
{
    return this->alto;
}

int obtenerAncho(const Entidad* this)
{
    return this->ancho;
}

int obtenerPuntaje(const Entidad* this)
{
    return this->puntaje;
}

void dibujarEntidad(const Entidad* this)
{

}