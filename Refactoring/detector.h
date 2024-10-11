#ifndef DETECTOR_H
#define DETECTOR_H

typedef struct Detector { //estructura que contiene atributos y m�todos del personaje
    void (*detectarColision)(const struct Detector* this); //est� en duda su uso
} Detector;

#endif // DETECTOR_H