#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct _pilha{
    int itens[TAM];
    int top;
} Pilha;


void inicializa(Pilha *p){
    p->top = -1;
}

int esta_vazia(Pilha *p){
   return p->top == -1;
}

int esta_cheia(Pilha *p){
    return p->top == TAM -1;
}

void empilhar(Pilha *p, int valor){
    if(esta_cheia(p)){
        printf("Pilha esta cheia");
        exit(1);
    }
    p->top++;
    p->itens[p->top] = valor;
}

int desempilhar(Pilha *p){
    if(esta_vazia(p)){
        printf("Pilha esta vazia");
        exit(1);
    }
    return p->itens[p->top--];
}