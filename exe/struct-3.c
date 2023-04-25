#include <stdio.h>
#include <stdlib.h>

typedef struct _retangulo{
   float base;
   float altura;
} Retangulo;


void inicializa(Retangulo *p, float base, float altura){
    p->base = base;
    p->altura = altura;
}

float area_retagulo( Retangulo *p){
    return p->base * p-> altura;
}

int main(){

    Retangulo *r;
    
    inicializa(&r, 2.5, 4.35);
    printf("Area: %.2f\n", area_retagulo(&r));

    return 0;
}