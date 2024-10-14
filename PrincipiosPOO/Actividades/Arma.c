#include "Arma.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrar_info(const Arma* this) 
{
    printf("Arma: %s | Da�o: %d | Alcance: %d\\n", this->nombre, this->dano, this->alcance);
}

static Arma* Arma_crear(const char* nombre, static int dano, int alcance) { // es una funci�n que recibe tres par�metros (atributos) //crea un punterp
    Arma* nuevo_arma = (Arma*)malloc(sizeof(Arma)); //reserva cierta cantidad de bites y la guarda en la direcci�n. Crea las variables de forma din�mica
    if (!nuevo_arma) return NULL;
    //nuevo_arma->nombre = strdup(nombre); //strdup guarda un espacio en la ram//inicializa las variables
    strcpy_s(nuevo_arma->nombre, 30, nombre);
    nuevo_arma->dano = dano;
    nuevo_arma->alcance = alcance;
    return nuevo_arma; //retorna un puntero que es la direcci�n donde se va a almacenar esa estructura
}

 static void Arma_destruir(Arma* this) {
     if (this) {
         //free(this->nombre); //esto era porque se creaba de manera din�mica, as� que ahora solo toca liberar el espacio de la estructura
         free(this); //Lo que se debe liberar solo es lo que se crea de manera din�mica, lo est�tico no es posible liberarlo
     }
 }

