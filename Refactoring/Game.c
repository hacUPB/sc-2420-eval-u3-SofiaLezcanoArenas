#include <stdio.h> //es una biblioteca que viene con el lenguaje
#include <SDL.h>
#include <math.h>
#include "game.h"
#include "entidad.h"
#include "cubito.h"
#include "chocolate.h"
#include "detector.h"
#include "pista.h"
#include "meta.h"
#include "ventana.h"

int initialize_window()
{
    int WINDOW_WIDTH = 800;
    int WINDOW_HEIGHT = 600;
    SDL_Window* window;      // Almacenar la ventana dentro de la estructura Ventana
    SDL_Renderer* renderer;

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        fprintf(stderr, "Error initializing SDL.\n");
        return false; //el condicional nos ayuda a verificar si hay errores en la inicialización de SDL
    }
    window = SDL_CreateWindow(
        "A simple game loop using C & SDL",
        SDL_WINDOWPOS_CENTERED, //posición en x
        SDL_WINDOWPOS_CENTERED, //posición en y
        WINDOW_WIDTH, //ancho de la ventana
        WINDOW_HEIGHT, //alto de la ventana
        SDL_WINDOW_SHOWN //------------------------- este era el problema para la visualización de la ventana
    );
    if (!window) {
        fprintf(stderr, "Error creating SDL Window.\n");
        return false; //el condicional nos ayuda a verificar si hay errores en la creación de la ventana
    }
    renderer = SDL_CreateRenderer(window, -1, 0); //(ventana a donde estará atado el rederer, -1 es para usar el display driver por defecto, banderas especiales para el render)
    if (!renderer) {
        fprintf(stderr, "Error creating SDL Renderer.\n");
        return false; //el condicional nos ayuda a verificar si hay errores en la creación del renderer
    }
    return true;
}

void setup(void) 
{

}

void update(cubito, ventana) 
{//se administran las entradas y eventos, se colocan los métodos de movimiento
    int FPS = 30;
    float FRAME_TIME = (1000 / FPS);
    int last_frame_time = SDL_GetTicks();
    int time_to_wait = FRAME_TIME - (SDL_GetTicks() - last_frame_time);

    if (time_to_wait > 0 && time_to_wait <= FRAME_TIME)
    {
        SDL_Delay(time_to_wait);
    }

    float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0f; // Get delta_time factor converted to seconds to be used to update objects

    SDL_Event event; //se crea un evento SDL llamado evento
    while (SDL_PollEvent(&event)) //mientras que haya un evento
    {
        int teclaEspacio = obtenerTeclaEspacio(cubito);
        int empezar=obtenerEmpezar(cubito);
        switch (event.type)
        {
        case SDL_QUIT: // si se hace clic en la x de la ventana o alt+4. Nota: aquí no funciona automáticamente
            game_is_running = false; //el game loop se detendrá
            break;
        case SDL_KEYDOWN:
            if (event.key.keysym.sym == SDLK_ESCAPE) //si se presiona Escape
            {
                game_is_running = false; //el game loop se detendrá
            }
            if (event.key.keysym.sym == SDLK_SPACE && teclaEspacio == 0)
            {
                teclaEspacio = 1;
                printf("tecla espacio = %i", teclaEspacio);
                empezar = 1;

            }
            if (event.key.keysym.sym == SDLK_UP && empezar != 0)
            {
                empezar = 2;
            }
            if (event.key.keysym.sym == SDLK_DOWN && empezar != 0)
            {
                empezar = 3;
            }
            if (event.key.keysym.sym == SDLK_RIGHT && empezar != 0)
            {
                empezar = 4;
            }
            break;
        }
    }
}

void render(cubito, choco1, ventana)
{ //se llaman los métodos que dibujan
    dibujarCubito(cubito, ventana);
}

int main(void) //AQUÍ SE HACEN LAS INSTANCIAS Y SE LES PASAN POR PARÁMETROS A LAS OTRAS FUNCIONES
{

    //INSTANCIAS
    
    //cubito
    Cubito* cubito;
    cubito = Cubito_crear(50, 540, 30, 30, 0, 120, 0, 0); // los últimos dos son empezar y tecla espacio
    //chocolate
    Chocolate* choco1;
    //choco1=Chocolate_crear()
    //Pista
    Pista* lh1;
    lh1 = Pista_crear(0, 500, 150, 500);
    Pista* lh2;
    lh2 = Pista_crear(150, 400, 250, 400);
    Pista* lh3;
    lh3 = Pista_crear(250, 100, 500, 100);
    Pista* lh4;
    lh4 = Pista_crear(500, 450, 550, 450);
    Pista* lh5;
    lh5 = Pista_crear(650, 100, 800, 100);
    Pista* lh6;
    lh6 = Pista_crear(400, 550, 650, 450);
    Pista* lh7;
    lh7 = Pista_crear(350, 200, 400, 200);
    Pista* lh8;
    lh8 = Pista_crear(250, 500, 350, 500);

    Pista* lv1;
    lv1 = Pista_crear(150, 500, 150, 400);
    Pista* lv2;
    lv2 = Pista_crear(250, 400, 250, 100);
    Pista* lv3;
    lv3 = Pista_crear(500, 100, 500, 450);
    Pista* lv4;
    lv4 = Pista_crear(550, 400, 550, 0);
    Pista* lv5;
    lv5 = Pista_crear(650, 100, 650, 550);
    Pista* lv6;
    lv6 = Pista_crear(400, 550, 400, 200);
    Pista* lv7;
    lv7 = Pista_crear(350, 200, 250, 500);
    Pista* lv8;
    lv8 = Pista_crear(250, 500, 250, 600);

    //meta
    Meta* meta;
    meta = Meta_crear(700, 0, 700, 100);

    

    //VARIABLES
    int game_is_running = false;
    int last_frame_time = 0; //ojo
    game_is_running = initialize_window();

    setup();
    update();

    while (game_is_running)
    {
        update();
        render();
    }
}