#ifndef VENTANA_H
#define VENTANA_H

//#define WINDOW_WIDTH 800
//#define WINDOW_HEIGHT 600
//#define FPS 30
//#define FRAME_TIME (1000/FPS)

typedef struct Ventana
{
    int WINDOW_WIDTH;
    int WINDOW_HEIGHT;
    int FPS;
    float FRAME_TIME;
      // Almacenar el renderer dentro de la estructura Ventana
} Ventana;

int initialize_window(Ventana* this);
int obtenerWW(Ventana* this);
int obtenerWH(Ventana* this);
int obtenerFPS(Ventana* this);
float obtenerFT(Ventana* this);


#endif // VENTANA_H
