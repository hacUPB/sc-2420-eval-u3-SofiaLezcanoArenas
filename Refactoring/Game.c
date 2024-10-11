#include <stdio.h> //es una biblioteca que viene con el lenguaje
#include "game.h"
#include <SDL.h>
#include <math.h>
//hay que crear una clase para ventana porque se comporta como objeto y tiene varios procesos que sería mejor no meterlos en el archivo principal
void setup(void) 
{

}

void update(void) 
{//se administran las entradas y eventos, se colocan los métodos de movimiento

}

void render(void)
{ //se llaman los métodos que dibujan

}

int main(void) //AQUÍ SE HACEN LAS INSTANCIAS Y SE LES PASAN POR PARÁMETROS A LAS OTRAS FUNCIONES
{
    //game_is_running = initialize_window();

    setup();

    /*while (game_is_running)
    {
        update();
        render();
    }*/
}