#include <stdio.h> //es una biblioteca que viene con el lenguaje
#include "game.h"
#include <SDL.h>
#include <math.h>
//hay que crear una clase para ventana porque se comporta como objeto y tiene varios procesos que ser�a mejor no meterlos en el archivo principal
void setup(void) 
{

}

void update(void) 
{//se administran las entradas y eventos, se colocan los m�todos de movimiento

}

void render(void)
{ //se llaman los m�todos que dibujan

}

int main(void) //AQU� SE HACEN LAS INSTANCIAS Y SE LES PASAN POR PAR�METROS A LAS OTRAS FUNCIONES
{
    //game_is_running = initialize_window();

    setup();

    /*while (game_is_running)
    {
        update();
        render();
    }*/
}