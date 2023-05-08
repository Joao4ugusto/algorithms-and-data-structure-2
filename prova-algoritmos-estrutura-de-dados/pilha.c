#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    
    Pilha p;
    inicializar(&p);

    empilhar(&p, 10);
    empilhar(&p, 20);
    empilhar(&p, 30);

    printf("Elemento removido: %d\n", desempilhar(&p));
    printf("Elemento removido: %d\n", desempilhar(&p));
    printf("Elemento removido: %d\n", desempilhar(&p));

    return 0;
}