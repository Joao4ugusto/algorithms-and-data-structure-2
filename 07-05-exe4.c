#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _ponto {
   float x;
   float y;
} Ponto;

void recebe(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float distancia(Ponto *p1, Ponto *p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    Ponto x, y;
    
    recebe(&x, 0, 0);
    recebe(&y, 10, 5);

    float d = distancia(&x, &y);
    printf("Distancia entre os pontos: %.2f\n", d);

    return 0;
}
