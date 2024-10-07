#ifndef PERSONAJE_H
#define PERSONAJE_H

typedef struct Personaje { //estructura que contiene atributos y m�todos del personaje
    char nombre[30]; //arreglo de caracteres en vez de un puntero
    int vida;
    int nivel;
    void (*mostrar_estado)(const struct Personaje* this);
    void(*atacar)(const struct Personaje* this);
} Personaje;

Personaje* Personaje_crear(const char* nombre, int vida, int nivel); //m�tdodo constructor que se llama. El puntero usa una funci�n para reservar un espacio en la memoria
void Personaje_destruir(Personaje* this); //m�todo destructor -> libera la memoria RAM que ya no se usa
char* get_name(Personaje* this); //recible un puntero que es la  direcci�n de memoria donde se almacenan las variables de la clase. This es el puntero de la memoria.
#endif // PERSONAJE_H
//garbage collector -> libera la memoria RAM no usada. En bajo nivel esto debe hacerse manualmente con el m�todo destructor.