#include <stdio.h>
#include <stdlib.h>

typedef struct _ponto{
    int x;
    int y;
} Ponto;


void inicializa_ponto(Ponto *p, int x, int y){
   p->x = x;
   p->y = y;
}

void pirntf_ponto(Ponto *p){
    printf("X = %d\n", p->x);
    printf("Y = %d\n", p->y);
}

int distancia_pontos(Ponto *p, int *x, int *y){
    return p->x * p->y;
}

int main(){
    Ponto *p;
    inicializa_ponto(&p, 10, 20);
    pirntf_ponto(&p);

    printf("A distancia eh: %d", distancia_pontos(&p, 10, 20)); 
}