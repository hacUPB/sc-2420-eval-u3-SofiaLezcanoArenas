#ifndef PERSONAJE_H
#define PERSONAJE_H

typedef struct Personaje { //estructura que contiene atributos y métodos del personaje
    char nombre[30]; //arreglo de caracteres en vez de un puntero
    int vida;
    int nivel;
    void (*mostrar_estado)(const struct Personaje* this);
    void(*atacar)(const struct Personaje* this);
} Personaje;

Personaje* Personaje_crear(const char* nombre, int vida, int nivel); //métdodo constructor que se llama. El puntero usa una función para reservar un espacio en la memoria
void Personaje_destruir(Personaje* this); //método destructor -> libera la memoria RAM que ya no se usa
char* get_name(Personaje* this); //recible un puntero que es la  dirección de memoria donde se almacenan las variables de la clase. This es el puntero de la memoria.
#endif // PERSONAJE_H
//garbage collector -> libera la memoria RAM no usada. En bajo nivel esto debe hacerse manualmente con el método destructor.