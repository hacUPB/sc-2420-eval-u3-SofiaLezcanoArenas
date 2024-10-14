#include "entidad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

int obtenerX(const Entidad* this)
{
    return this->x;
}

int obtenerY(const Entidad* this)
{
    return this->y;
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