#ifndef ARMA_H
#define ARMA_H

typedef struct Arma 
{ //estructura que contiene atributos y métodos del personaje
    char nombre[30]; //arreglo de caracteres en vez de un puntero
    int dano;
    int alcance;
    
} Arma;

static void mostrar_info(const struct Arma* this);
static Arma* Arma_crear(const char* nombre, int dano, int alcance);
static void Arma_destruir(Arma* this);

#endif //ARMA_H