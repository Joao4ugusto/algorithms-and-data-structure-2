#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct {
   int memoria[TAM];
   int topo;
} pilha;

// AQUI
void inicializa_pilha(pilha *p){
    p->topo = 0;
}

int pilha_cheia (pilha *p){
    if(p->topo != TAM) return 1;
    return 0;
}

int pilha_vazia(pilha *p){
    if(p->topo == 0) return 1;
    return 0;
}

int topo_pilha (pilha *p){
    return (p->memoria[p->topo-1]);
}

void empilha(pilha *p, int elemento){
    //if(p->topo != TAM){
    //if(pilha_cheia (p) != 1);
    if(!pilha_cheia(p)){
        p->memoria[p->topo] = elemento;
        p->topo++;
    }
}

void desempilha (pilha *p){
    //if (p->topo != 0){
    //if(pilha_vazia (p) != 1);
    if (!pilha_vazia (p)){
        p->topo--;
    }
}
