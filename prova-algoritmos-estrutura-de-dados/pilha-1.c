#include <stdio.h>
#include <stdlib.h>
#include "pilha-1.h"


int main(){
    Pilha pilha;
    inicializar(&pilha);

    empilhar(&pilha, 1);
    empilhar(&pilha, 2);
    empilhar(&pilha, 3);

    printf("Pilha antes da inversao:\n");
    while (!esta_vazia(&pilha)) {
    printf("%d ", desempilhar(&pilha));
    }
    printf("\n");

    empilhar(&pilha, 1);
    empilhar(&pilha, 2);
    empilhar(&pilha, 3);

    inverter(&pilha);

    printf("Pilha depois da inversao:\n");
    while (!esta_vazia(&pilha)) {
    printf("%d ", desempilhar(&pilha));
    }
    printf("\n");
    return 0;
}