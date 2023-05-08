#include <stdio.h>


#define TAM_MAX 10

typedef struct {
  int dados[TAM_MAX];
  int topo;
} Pilha;

void inicializar(Pilha *pilha) {
  pilha->topo = -1;
}

int esta_vazia(Pilha *pilha) {
  return pilha->topo == -1;
}

int esta_cheia(Pilha *pilha) {
  return pilha->topo == TAM_MAX - 1;
}

void empilhar(Pilha *pilha, int valor) {
  if (esta_cheia(pilha)) {
    printf("Erro: pilha esta cheia\n");
    exit(1);
  }
  pilha->topo++;
  pilha->dados[pilha->topo] = valor;
}

int desempilhar(Pilha *pilha) {
  if (esta_vazia(pilha)) {
    printf("Erro: pilha esta vazia\n");
    exit(1);
  }
  int valor = pilha->dados[pilha->topo];
  pilha->topo--;
  return valor;
}

void inverter(Pilha *pilha) {
  int temp[TAM_MAX];
  int i, j;
  for (i = 0; !esta_vazia(pilha); i++) {
    temp[i] = desempilhar(pilha);
  }
  for (j = 0; j < i; j++) {
    empilhar(pilha, temp[j]);
  }
}
