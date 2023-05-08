#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 10

typedef struct _pilha{
    int itens[TAMANHO_MAXIMO];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

int esta_cheia(Pilha *p) {
    return p->topo == TAMANHO_MAXIMO - 1;
}

int esta_vazia(Pilha *p) {
    return p->topo == -1;
}

void empilhar(Pilha *p, int valor) {
    if (esta_cheia(p)) {
        printf("Estouro de pilha!\n");
        exit(EXIT_FAILURE);
    }
    p->topo++;
    p->itens[p->topo] = valor;
}

int desempilhar(Pilha *p) {
    if (esta_vazia(p)) {
        printf("Subfluxo de pilha!\n");
        exit(EXIT_FAILURE);
    }
    int valor = p->itens[p->topo];
    p->topo--;
    return valor;
}