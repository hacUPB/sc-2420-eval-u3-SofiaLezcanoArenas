#include "chocolate.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

int obtenerXChocolate(const Entidad* this) //ojo por si toca cambiarle el nombre a estas funciones por polimorfismo
{
    return this->x;
}

int obtenerYChocolate(const Entidad* this) //ojo por si toca cambiarle el nombre a estas funciones por polimorfismo
{
    return this->y;
}

int obtenerAltoChocolate(const Entidad* this)
{
    return this->alto;
}

int obtenerAnchoChocolate(const Entidad* this)
{
    return this->ancho;
}

int obtenerPuntajeChocolate(const Entidad* this)
{
    return this->puntaje;
}

void dibujarChocolate(const Entidad* this) //en dudaaa
{

}

Chocolate* Chocolate_crear(int x, int y, int ancho, int alto, int puntaje)
{
    Chocolate* nuevo_cubito = (Chocolate*)malloc(sizeof(Chocolate));
    if (!nuevo_cubito) return NULL;
    //nuevo_guerrero->base.nombre = strdup(nombre);
    //strcpy_s(nuevo_cubito->base.nombre, 30, nombre);
    nuevo_cubito->base.x = x;
    nuevo_cubito->base.y = y;
    nuevo_cubito->base.ancho = ancho;
    nuevo_cubito->base.alto = alto;
    nuevo_cubito->base.puntaje = puntaje;
    nuevo_cubito->base.obtenerX = obtenerXChocolate;
    nuevo_cubito->base.obtenerY = obtenerYChocolate;
    nuevo_cubito->base.obtenerAlto = obtenerAltoChocolate;
    nuevo_cubito->base.obtenerAncho = obtenerAnchoChocolate;
    nuevo_cubito->base.obtenerPuntaje = obtenerPuntajeChocolate;
    nuevo_cubito->base.dibujarEntidad = dibujarChocolate;
    //nuevo_mago->base.atacar = atacar;
    return nuevo_cubito;
}

void Chocolate_destruir(Chocolate* this)
{
    if (this) {
        //free(this->base.nombre); // tengo que ponerle nombre al cubito o cómo hago para destruirlo si no es con el nombre?
        free(this);
    }
}

void Desaparecer(Chocolate* this) //son diferentes, una cosa es visualmente (puede reaparecer al reiniciar) y otra cosa es liberar el espacio de memoria (solo sucede cuando ya ha ganado)
{

}

int RetornarPuntos(Chocolate* this)
{

}
