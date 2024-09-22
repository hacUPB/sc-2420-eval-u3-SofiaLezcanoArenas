#include "equipo.h"
#include <stdio.h>
#include <stdlib.h>

Equipo* Equipo_crear() {
    Equipo* equipo = (Equipo*)malloc(sizeof(Equipo));
    if (!equipo) return NULL;
    equipo->personajes = NULL;
    equipo->cantidad_personajes = 0;
    return equipo;
}

void Equipo_agregar_arma(Equipo* this, Personaje* personaje) {
    this->personajes = realloc(this->personajes, sizeof(Personaje*) * (this->cantidad_personajes + 1));
    this->personajes[this->cantidad_personajes++] = personaje;
}

void Equipo_mostrar(const Equipo* this) {
    printf("Equipo:\\n");
    for (int i = 0; i < this->cantidad_personajes; ++i) {
        printf(" - %s (Nivel: %d)\\n", this->personajes[i]->nombre, this->personajes[i]->nivel);
    }
}

void Equipo_destruir(Equipo* this) {
    if (this) {
        for (int i = 0; i < this->cantidad_personajes; ++i) {
            Personaje_destruir(this->personajes[i]);
        }
        free(this->personajes);
        free(this);
    }
}