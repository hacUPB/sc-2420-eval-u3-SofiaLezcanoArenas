#include "Personaje.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void mostrar_estado_impl(const Personaje* this) {
    printf("Personaje: %s | Vida: %d | Nivel: %d\\n", this->nombre, this->vida, this->nivel);
}

//static void atacar(const Personaje* this) {
//    printf("El personaje est� atacando");
//}

Personaje* Personaje_crear(const char* nombre, int vida, int nivel) { // es una funci�n que recibe tres par�metros (atributos) //crea un punterp
    Personaje* nuevo_personaje = (Personaje*)malloc(sizeof(Personaje)); //reserva cierta cantidad de bites y la guarda en la direcci�n. Crea las variables de forma din�mica
    if (!nuevo_personaje) return NULL;
    //nuevo_personaje->nombre = strdup(nombre); //strdup guarda un espacio en la ram//inicializa las variables
    strcpy_s(nuevo_personaje->nombre, 30, nombre);
    nuevo_personaje->vida = vida;
    nuevo_personaje->nivel = nivel;
    nuevo_personaje->mostrar_estado = mostrar_estado_impl; //mostrar estado va a estar en tal direcci�n de memoria
    //nuevo_personaje->atacar = atacar;
    return nuevo_personaje; //retorna un puntero que es la direcci�n donde se va a almacenar esa estructura
}

char* get_name(Personaje* this) //esta es la direcci�n de memoria donde est� la info
{
    return this->nombre; //retorna el nombre
}

void Personaje_destruir(Personaje* this) { 
    if (this) {
        //free(this->nombre); //esto era porque se creaba de manera din�mica, as� que ahora solo toca liberar el espacio de la estructura
        free(this); //Lo que se debe liberar solo es lo que se crea de manera din�mica, lo est�tico no es posible liberarlo
    }
}
// se puede reservar RAM como memoria est�tica(stac) que es cuando se crea cualquier variable. O se pueden crear de manera din�mica
// (heap) que se crean solo cuando se vayan a usar. Se crean usando la funci�n (tipo)malloc(sizeof(tama�o))