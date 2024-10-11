#ifndef DETECTOR_H
#define DETECTOR_H

typedef struct Detector { //estructura que contiene atributos y métodos del personaje
    int x1;
    int y1;
    int x2;
    int y2;
    void (*detectarColision)(const struct Detector* this);
    void (*dibujarElemento)(const struct Detector* this); //está en duda su uso
} Detector;

#endif // DETECTOR_H