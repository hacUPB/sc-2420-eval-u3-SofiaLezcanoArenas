#include <stdio.h> //es una biblioteca que viene con el lenguaje
#include "personaje.h" //yo lo creo y debe estar en un lugar accesible
#include "mago.h"
#include "guerrero.h"
#include "arma.h"
#include "equipo.h"
#include <stdlib.h>
#include <string.h>

int main(void) //creo instancias y utilizo instancias
{
	Personaje* guerrero; //son punteros, van a guardar la dirección donde se va a guardar la info de la instancia. Son lo que retorna el contructor
	guerrero = Personaje_crear("Carl", 3, 10);
	//Mago = Personaje_crear("Archivald", 5, 10); //se le dan sus datos propios a ese objeto

	//printf("El mago se llama %s\n", get_name(Mago)); //la forma correcta de acceder a datos es con un getter.

	//Personaje_destruir(Mago); //cuando se termine de usar la instancia, hay que destruirla para liberar la memoria dinámica.
	Personaje* elfo;
	elfo = Personaje_crear("Rayla", 6, 20);
	Mago* Mago1;
	Mago1 = Mago_crear("Archivald", 5, 10, 13, 20, 18);
	Guerrero* guerrera1;
	guerrera1 = Guerrero_crear("Cherie", 5, 3, 13);
	
	atacar(guerrero);
	atacar_guerrero(guerrera1);
	atacar_mago(Mago1);

	//Mago_destruir(Mago1);

	Equipo* equipo;
	equipo = Equipo_crear();
	Equipo_agregar_personaje(equipo, guerrero);
	Equipo_agregar_personaje(equipo,elfo);
	Equipo_agregar_personaje(equipo, guerrera1);
	Equipo_agregar_personaje(equipo, Mago1);
	Equipo_mostrar(equipo);
}