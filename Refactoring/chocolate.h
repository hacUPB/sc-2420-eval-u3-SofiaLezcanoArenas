#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include "entidad.h"

typedef struct Chocolate {
	Entidad base; // puede tener cualquier nombre la variable base. Esta representa la estructura
	
} Chocolate;

Chocolate* Chocolate_crear(int x, int y, int ancho, int alto, int puntaje, int velocidad, int empezar, int teclaEspacio);
void Chocolate_destruir(Chocolate* this);

void Desaparecer(Chocolate* this);
int RetornarPuntos(Chocolate* this);

#endif // CHOCOLATE_H