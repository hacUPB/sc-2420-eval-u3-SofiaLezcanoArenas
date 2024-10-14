#ifndef DETECTOR_H
#define DETECTOR_H

typedef struct Detector 
{
    int x1;
    int y1;
    int x2;
    int y2;
    void (*detectarColision)(const struct Detector* this);
    void (*dibujarElemento)(const struct Detector* this); //está en duda su uso
} Detector;

#endif // DETECTOR_H