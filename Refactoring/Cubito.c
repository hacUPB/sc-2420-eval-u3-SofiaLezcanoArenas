#include "cubito.h"
#include "ventana.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include <math.h>

#include <stdbool.h>

int obtenerXCubito(const Cubito* this) //ojo por si toca cambiarle el nombre a estas funciones por polimorfismo
{
    return this->base.x;
}

int obtenerYCubito(const Cubito* this) //ojo por si toca cambiarle el nombre a estas funciones por polimorfismo
{
    return this->base.y;
}

int obtenerAltoCubito(const Cubito* this) //entidad o ya acá se pondría cubito? y así dependiendo del hijo
{
    return this->base.alto;
}

int obtenerAnchoCubito(const Cubito* this) // cambiar entidad por cubito
{
    return this->base.ancho;
}

int obtenerPuntajeCubito(const Cubito* this)
{
    return this->base.puntaje;
}

int obtenerEmpezar(const Cubito* this)
{
    return this->empezar;
}

int obtenerTeclaEspacio(const Cubito* this)
{
    return this->teclaEspacio;
}

int obtenerVelocidad(const Cubito* this)
{
    return this->velocidad;
}

void dibujarCubito(const Cubito* this, Ventana* ventana) //en dudaaa
{
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("No se pudo inicializar SDL: %s\n", SDL_GetError());
        return;
    }

    // Crear ventana
    SDL_Window* window = SDL_CreateWindow(
        "Cubito",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 480,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        printf("Error al crear la ventana: %s\n", SDL_GetError());
        SDL_Quit();
        return;
    }

    // Crear renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        printf("Error al crear el renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return;
    }

    // Limpiar el renderer
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Fondo negro
    SDL_RenderClear(renderer);
    int x = obtenerXCubito(this);
    int y = obtenerYCubito(this);
    int ancho = obtenerAnchoCubito(this);
    int alto = obtenerAltoCubito(this);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 200, 0, 100, 255);
    SDL_Rect rect =
    {
        x, //posición en x
        y, //posición en y
        ancho, //ancho
        alto //alto
    };
    SDL_RenderDrawRect(renderer, &rect); // si se quiere relleno, puede usarse SDL_RenderFillRect(renderer, referencia)

    SDL_RenderPresent(renderer); //cambio de buffer para evitar efecto glitch
}

Cubito* Cubito_crear(int x, int y, int ancho, int alto, int puntaje, int velocidad, int empezar, int teclaEspacio) 
{
    Cubito* nuevo_cubito = (Cubito*)malloc(sizeof(Cubito));
    if (!nuevo_cubito) return NULL;
    nuevo_cubito->base.x = x;
    nuevo_cubito->base.y = y;
    nuevo_cubito->base.ancho = ancho;
    nuevo_cubito->base.alto = alto;
    nuevo_cubito->base.puntaje = puntaje;
    nuevo_cubito->velocidad = velocidad;
    nuevo_cubito->empezar = empezar;
    nuevo_cubito->teclaEspacio = teclaEspacio;
    nuevo_cubito->base.obtenerX = obtenerXCubito;
    nuevo_cubito->base.obtenerY = obtenerYCubito;
    nuevo_cubito->base.obtenerAlto = obtenerAltoCubito;
    nuevo_cubito->base.obtenerAncho = obtenerAnchoCubito;
    nuevo_cubito->base.obtenerPuntaje = obtenerPuntajeCubito;
    nuevo_cubito->base.dibujarEntidad = dibujarCubito;
    return nuevo_cubito;
}

void Cubito_destruir(Cubito* this) 
{
    if (this)
    {
        free(this);
    }
}

void MoverDerecha(Cubito* this)
{
    int x = obtenerXCubito(this);
    int velocidad = obtenerVelocidad(this);
    int teclaEspacio = obtenerTeclaEspacio(this);
    int empezar = obtenerEmpezar(this);
    int last_frame_time = SDL_GetTicks();
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;
    if (teclaEspacio == 1 && empezar == 4)
    {
        x += (velocidad * delta_time);
    }
}

void MoverArriba(Cubito* this)
{
    int y = obtenerYCubito(this);
    int velocidad = obtenerVelocidad(this);
    int teclaEspacio = obtenerTeclaEspacio(this);
    int empezar = obtenerEmpezar(this);
    int last_frame_time = SDL_GetTicks();
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;
    if (teclaEspacio == 1 && empezar == 3)
    {
        y += (velocidad * delta_time);
    }
}

void MoverAbajo(Cubito* this)
{
    int y = obtenerYCubito(this);
    int velocidad = obtenerVelocidad(this);
    int teclaEspacio = obtenerTeclaEspacio(this);
    int empezar = obtenerEmpezar(this);
    int last_frame_time = SDL_GetTicks();
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;
    if (teclaEspacio == 1 && empezar == 2)
    {
        y -= (velocidad * delta_time);
    }
}

void CalcularPuntaje(Cubito* this)
{

}

void DetectarInicio(Cubito* this)
{
    int x = obtenerXCubito(this);
    int velocidad = obtenerVelocidad(this);
    int teclaEspacio = obtenerTeclaEspacio(this);
    int empezar = obtenerEmpezar(this);
    int last_frame_time = SDL_GetTicks();
    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f;
    if (empezar == 1)
    {
        x += (velocidad * delta_time);
    }
}