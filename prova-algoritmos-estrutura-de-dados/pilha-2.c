#include <stdio.h>
#include <stdlib.h>
#include "pilha-2.h"


int main(){
    
    Pilha p;
    inicializa(&p);

    empilhar(&p, 10);
    empilhar(&p, 20);

    while(!esta_vazia(&p)){
        printf("%d", desempilhar(&p));
    }

    return 0;
}