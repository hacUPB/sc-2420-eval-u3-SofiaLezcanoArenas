#include "guerrero.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void mostrar_estado_impl(const Personaje* this) {
    Guerrero* guerrero = (Guerrero*)this;
    printf("Guerrero: %s | Vida: %d | Nivel: %d | Fuerza: %d\\n", this->nombre, this->vida, this->nivel, guerrero->fuerza);
}

void atacar_guerrero(const Personaje* this) {
    Guerrero* guerrero = (Guerrero*)this;
    printf("El guerrero esta lanzando un ataque\n");
}

Guerrero* Guerrero_crear(const char* nombre, int vida, int nivel, int fuerza) {
    Guerrero* nuevo_guerrero = (Guerrero*)malloc(sizeof(Guerrero));
    if (!nuevo_guerrero) return NULL;
    //nuevo_guerrero->base.nombre = strdup(nombre);
    strcpy_s(nuevo_guerrero->base.nombre, 30, nombre);
    nuevo_guerrero->base.vida = vida;
    nuevo_guerrero->base.nivel = nivel;
    nuevo_guerrero->fuerza = fuerza;
    nuevo_guerrero->base.mostrar_estado = mostrar_estado_impl;
    //nuevo_guerrero->base.atacar = atacar;
    return nuevo_guerrero;
}

void Guerrero_destruir(Guerrero* this) {
    if (this) {
        free(this->base.nombre);
        free(this);
    }
}