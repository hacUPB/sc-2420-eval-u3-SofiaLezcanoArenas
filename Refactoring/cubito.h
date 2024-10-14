#ifndef CUBITO_H
#define CUBITO_H

#include "entidad.h"

typedef struct Cubito {
	Entidad base; // puede tener cualquier nombre la variable base. Esta representa la estructura
	int velocidad;
	int empezar;
	int teclaEspacio;
} Cubito;

Cubito* Cubito_crear(int x, int y, int ancho, int alto, int puntaje, int velocidad, int empezar, int teclaEspacio);
void Cubito_destruir(Cubito* this);

void MoverDerecha(Cubito* this);
void MoverArriba(Cubito* this);
void MoverAbajo(Cubito* this);
void CalcularPuntaje(Cubito* this);
void DetectarInicio(Cubito* this);
int obtenerEmpezar(Cubito* this);
int obtenerTeclaEspacio(Cubito* this);
int obtenerVelocidad(Cubito* this);

#endif // CUBITO_H