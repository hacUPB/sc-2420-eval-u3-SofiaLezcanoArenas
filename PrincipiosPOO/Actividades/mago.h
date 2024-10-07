#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"

typedef struct Mago {
	Personaje base; // puede tener cualquier nombre la variable base. Esta representa la estructura
	int fuerza;
	int mana;
	int sabiduria;
} Mago;

Mago* Mago_crear(const char* nombre, int vida, int nivel, int fuerza, int mana, int sabiduria);
void Mago_destruir(Mago* this);

#endif // MAGO_H