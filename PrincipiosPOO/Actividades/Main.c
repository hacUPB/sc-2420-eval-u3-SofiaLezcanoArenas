#include <stdio.h> //es una biblioteca que viene con el lenguaje
#include "personaje.h" //yo lo creo y debe estar en un lugar accesible
#include "mago.h"
#include "guerrero.h"

int main(void) //creo instancias y utilizo instancias
{
	Personaje* Guerrero; //son punteros, van a guardar la dirección donde se va a guardar la info de la instancia. Son lo que retorna el contructor
	//Mago = Personaje_crear("Archivald", 5, 10); //se le dan sus datos propios a ese objeto

	//printf("El mago se llama %s\n", get_name(Mago)); //la forma correcta de acceder a datos es con un getter.

	//Personaje_destruir(Mago); //cuando se termine de usar la instancia, hay que destruirla para liberar la memoria dinámica.

	Mago* Mago1;

	Mago1 = Mago_crear("Archivald", 5, 10, 13, 20, 18);
	atacar(Mago1);
	//Mago_destruir(Mago1);
}