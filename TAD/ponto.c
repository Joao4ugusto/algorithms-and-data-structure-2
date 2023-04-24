#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"


struct Ponto{
    float x;
    float y;
};


int main(){
    float d;
    Ponto *p, *q;
    
    p = ponto_cria(10,21);
    q = ponto_cria(7, 25);
    d = ponto_distancia(p, q);

    printf("Distancia entre pontos:%.2f\n", d);
    ponto_libera(p);
    ponto_libera(q);
    return 0;
}