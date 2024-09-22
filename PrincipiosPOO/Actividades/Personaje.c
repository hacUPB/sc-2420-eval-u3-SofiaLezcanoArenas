#include "Personaje.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void mostrar_estado_impl(const Personaje* this) {
    printf("Personaje: %s | Vida: %d | Nivel: %d\\n", this->nombre, this->vida, this->nivel);
}

//static void atacar(const Personaje* this) {
//    printf("El personaje está atacando");
//}

Personaje* Personaje_crear(const char* nombre, int vida, int nivel) { // es una función que recibe tres parámetros (atributos) //crea un punterp
    Personaje* nuevo_personaje = (Personaje*)malloc(sizeof(Personaje)); //reserva cierta cantidad de bites y la guarda en la dirección. Crea las variables de forma dinámica
    if (!nuevo_personaje) return NULL;
    //nuevo_personaje->nombre = strdup(nombre); //strdup guarda un espacio en la ram//inicializa las variables
    strcpy_s(nuevo_personaje->nombre, 30, nombre);
    nuevo_personaje->vida = vida;
    nuevo_personaje->nivel = nivel;
    nuevo_personaje->mostrar_estado = mostrar_estado_impl; //mostrar estado va a estar en tal dirección de memoria
    //nuevo_personaje->atacar = atacar;
    return nuevo_personaje; //retorna un puntero que es la dirección donde se va a almacenar esa estructura
}

char* get_name(Personaje* this) //esta es la dirección de memoria donde está la info
{
    return this->nombre; //retorna el nombre
}

void Personaje_destruir(Personaje* this) { 
    if (this) {
        //free(this->nombre); //esto era porque se creaba de manera dinámica, así que ahora solo toca liberar el espacio de la estructura
        free(this); //Lo que se debe liberar solo es lo que se crea de manera dinámica, lo estático no es posible liberarlo
    }
}
// se puede reservar RAM como memoria estática(stac) que es cuando se crea cualquier variable. O se pueden crear de manera dinámica
// (heap) que se crean solo cuando se vayan a usar. Se crean usando la función (tipo)malloc(sizeof(tamaño))