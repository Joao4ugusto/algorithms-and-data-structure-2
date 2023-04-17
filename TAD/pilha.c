#include "pilha.h"

int main(){
    
    pilha a;
    int opcao;
    int elemento;
    inicializa_pilha(&a);
    while(1){
        printf("PILHA: 1-Empilhar 2-Desempilhar 3-Topo 4-Inverter 0-Sair");
        printf("opcao: "); scanf("%d", &opcao);
        if(opcao == 0) break;
        if(opcao == 1){
            if(pilha_cheia (&a));
            printf("pilha cheia");
            else {
                printf("Elemento: ");
                scanf("%d", elemento);
                empilha(&a, elemento);
            }
            if(opcao == 2){
                if(pilha_vazia (&a));
                printf("pilha vazia");
                else {
                    printf("O elemento %d sera desempilhado\n", topo_pilha (&a));
                    desempilha (&a);
                }
            }
            if(opcao == 3){
                printf("Topo = %d\n", topo_pilha (&a));
            }
        }
    }

    return 0;
}


