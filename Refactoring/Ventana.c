#include "ventana.h"
#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int obtenerWW(Ventana* this) 
{
    return this->WINDOW_WIDTH;
}
int obtenerWH(Ventana* this)
{
    return this->WINDOW_HEIGHT;
}
int obtenerFPS(Ventana* this)
{
    return this->FPS;
}
float obtenerFT(Ventana* this)
{
    return this->FRAME_TIME;
}

