#ifndef META_H
#define META_H

#include "detector.h"

typedef struct Meta {
    Detector base;
    int x1;
    int y1;
    int x2;
    int y2;
    void (*detectarCubito)(const struct Meta* this);
} Meta;

Meta* Meta_crear(int x1, int y1, int x2, int y2);
void Meta_destruir(Meta* this);

#endif // META_H