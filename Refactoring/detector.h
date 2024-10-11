#ifndef DETECTOR_H
#define DETECTOR_H

typedef struct Detector { //estructura que contiene atributos y métodos del personaje
    void (*detectarColision)(const struct Detector* this); //está en duda su uso
} Detector;

#endif // DETECTOR_H