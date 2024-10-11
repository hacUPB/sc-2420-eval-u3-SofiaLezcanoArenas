#include "cubito.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

int obtenerPosicion(const Entidad* this) //ojo por si toca cambiarle el nombre a estas funciones por polimorfismo
{
    return this->posicion;
}

int obtenerAlto(const Entidad* this) //entidad o ya acá se pondría cubito? y así dependiendo del hijo
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

void dibujarElemento(const Entidad* this) //en dudaaa
{

}

Cubito* Cubito_crear(int posicion, int ancho, int alto, int puntaje, int velocidad, int empezar, int teclaEspacio) 
{
    Cubito* nuevo_cubito = (Cubito*)malloc(sizeof(Cubito));
    if (!nuevo_cubito) return NULL;
    //nuevo_guerrero->base.nombre = strdup(nombre);
    //strcpy_s(nuevo_cubito->base.nombre, 30, nombre);
    nuevo_cubito->base.posicion = posicion;
    nuevo_cubito->base.ancho = ancho;
    nuevo_cubito->base.alto = alto;
    nuevo_cubito->base.puntaje = puntaje;
    nuevo_cubito->velocidad = velocidad;
    nuevo_cubito->empezar = empezar;
    nuevo_cubito->teclaEspacio = teclaEspacio;
    nuevo_cubito->base.obtenerPosicion = obtenerPosicion;
    nuevo_cubito->base.obtenerAlto = obtenerAlto;
    nuevo_cubito->base.obtenerAncho = obtenerAncho;
    nuevo_cubito->base.obtenerPuntaje = obtenerPuntaje;
    nuevo_cubito->base.dibujarElemento = dibujarElemento;
    //nuevo_mago->base.atacar = atacar;
    return nuevo_cubito;
}

void Cubito_destruir(Cubito* this) 
{
    if (this) {
        //free(this->base.nombre); // tengo que ponerle nombre al cubito o cómo hago para destruirlo si no es con el nombre?
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