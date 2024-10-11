#include <stdio.h> //es una biblioteca que viene con el lenguaje
#include "game.h"
#include <SDL.h>
#include <math.h>

void setup(void) 
{

}

void update(void) 
{

}

void render(void)
{

}

int main(void) 
{
    game_is_running = initialize_window();

    setup();

    while (game_is_running)
    {
        update();
        render();
    }
}