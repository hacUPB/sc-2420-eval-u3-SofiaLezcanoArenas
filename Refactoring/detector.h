#ifndef DETECTOR_H
#define DETECTOR_H

typedef struct Detector 
{
    void (*detectarColision)(const struct Detector* this);
    void (*dibujarElemento)(const struct Detector* this); //está en duda su uso
} Detector;

#endif // DETECTOR_H