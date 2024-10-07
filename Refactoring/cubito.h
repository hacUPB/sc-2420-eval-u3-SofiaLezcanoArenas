#ifndef CUBITO_H
#define CUBITO_H

#include "entidad.h"

typedef struct Cubito {
	Entidad base; // puede tener cualquier nombre la variable base. Esta representa la estructura
	int fuerza;
	int mana;
	int sabiduria;
} Cubito;

Cubito* Cubito_crear(const char* nombre, int vida, int nivel, int fuerza, int mana, int sabiduria);
void Cubito_destruir(Cubito* this);

#endif // CUBITO_H