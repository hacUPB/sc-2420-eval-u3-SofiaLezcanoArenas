#include "Arma.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrar_info(const Arma* this) 
{
    printf("Arma: %s | Daño: %d | Alcance: %d\\n", this->nombre, this->dano, this->alcance);
}

static Arma* Arma_crear(const char* nombre, static int dano, int alcance) { // es una función que recibe tres parámetros (atributos) //crea un punterp
    Arma* nuevo_arma = (Arma*)malloc(sizeof(Arma)); //reserva cierta cantidad de bites y la guarda en la dirección. Crea las variables de forma dinámica
    if (!nuevo_arma) return NULL;
    //nuevo_arma->nombre = strdup(nombre); //strdup guarda un espacio en la ram//inicializa las variables
    strcpy_s(nuevo_arma->nombre, 30, nombre);
    nuevo_arma->dano = dano;
    nuevo_arma->alcance = alcance;
    return nuevo_arma; //retorna un puntero que es la dirección donde se va a almacenar esa estructura
}

 static void Arma_destruir(Arma* this) {
     if (this) {
         //free(this->nombre); //esto era porque se creaba de manera dinámica, así que ahora solo toca liberar el espacio de la estructura
         free(this); //Lo que se debe liberar solo es lo que se crea de manera dinámica, lo estático no es posible liberarlo
     }
 }

