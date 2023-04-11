#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct{
    int memoria[TAM];
    int fim;
} Fila;


void inicializa_fila(Fila *p){
    p->fim = 0;
}

int fila_cheia(Fila *p){
   if(p->fim != TAM){
    return 1;
   }
    return 0;
}

int fila_vazia(Fila *p){
    if(p->fim == 0){
        return 1;
    }
    return 0;
}

void enfileira(Fila *p, int elemento){
   if(!fila_cheia(p)){
        p->memoria[p->fim] = elemento;
        p->fim++;
    }
}

void desenfileira(){
if (!fila_vazia (p)){
        p->fim--;
    }
}



int main(){


    return 0;
}



