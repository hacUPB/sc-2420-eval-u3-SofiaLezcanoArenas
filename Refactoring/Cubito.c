#include "cubito.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

int obtenerPosicionCubito(const Entidad* this) //ojo por si toca cambiarle el nombre a estas funciones por polimorfismo
{
    return this->posicion;
}

int obtenerAltoCubito(const Entidad* this) //entidad o ya acá se pondría cubito? y así dependiendo del hijo
{
    return this->alto;
}

int obtenerAnchoCubito(const Entidad* this) // cambiar entidad por cubito
{
    return this->ancho;
}

int obtenerPuntajeCubito(const Entidad* this)
{
    return this->puntaje;
}

void dibujarCubito(const Entidad* this) //en dudaaa
{

}

Cubito* Cubito_crear(int posicion, int ancho, int alto, int puntaje, int velocidad, int empezar, int teclaEspacio) 
{
    Cubito* nuevo_cubito = (Cubito*)malloc(sizeof(Cubito));
    if (!nuevo_cubito) return NULL;
    nuevo_cubito->base.posicion = posicion;
    nuevo_cubito->base.ancho = ancho;
    nuevo_cubito->base.alto = alto;
    nuevo_cubito->base.puntaje = puntaje;
    nuevo_cubito->velocidad = velocidad;
    nuevo_cubito->empezar = empezar;
    nuevo_cubito->teclaEspacio = teclaEspacio;
    nuevo_cubito->base.obtenerPosicion = obtenerPosicionCubito;
    nuevo_cubito->base.obtenerAlto = obtenerAltoCubito;
    nuevo_cubito->base.obtenerAncho = obtenerAnchoCubito;
    nuevo_cubito->base.obtenerPuntaje = obtenerPuntajeCubito;
    nuevo_cubito->base.dibujarEntidad = dibujarCubito;
    //nuevo_mago->base.atacar = atacar;
    return nuevo_cubito;
}

void Cubito_destruir(Cubito* this) 
{
    if (this)
    {
        free(this);
    }
}

void MoverDerecha(Cubito* this)
{
    
}

void MoverArriba(Cubito* this)
{

}

void MoverAbajo(Cubito* this)
{

}

void CalcularPuntaje(Cubito* this)
{

}

void DetectarInicio(Cubito* this)
{

}