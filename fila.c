#include<stdio.h>
#include<stdlib.h>
#include"fila.h"
int main(void){
    fila a;
    int opcao, elemento;
    inicialize_fila(&a);
    while(1){
        printf("FILA: 1-Enfileirar 2-Desenfileirar 3-Topo 4-Inverte 0-Sair: \n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        if(opcao==0){
            break;
        }
        if(opcao==1){
            if(fila_cheia(&a)){
                printf("Fila Cheia\n");
            }
            else{
                printf("Elemento: ");
                scanf("%d", &elemento);
                enfileira(&a, elemento);
            }
        }
        if(opcao==2){
            if(fila_vazia(&a)){
                printf("Fila Vazia\n");
            }
            else{
                printf("O Elemento %d sera desenfileirado\n", fim_fila(&a));
                desenfileira(&a);
            }
        }
        if(opcao==3){
            if(fila_vazia (&a))
            printf("fila vazia");
            else
            printf("inicio = %d\n", fim_fila(&a));
        }
    }
}


