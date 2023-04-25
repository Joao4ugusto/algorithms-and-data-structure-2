#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _pessoa{
    char *nome;
    int idade;
    float altura;
} Pessoa;

void inicializa(Pessoa *p, char *nome, int idade, float altura){
    strcpy(p->nome, nome);
    p->idade = idade;
    p->altura = altura;
}

void printf_v(Pessoa *p){
    printf("Nome =  %s\n", p->nome);
    printf("Idade = %d\n", p->idade);
    printf("Altura = %.2f\n", p->altura);
}


int main(){

    Pessoa *p;
    inicializa(&p, "Joao Augusto", 20, 1.70);
    printf_v(&p);
    free(&p);
    
    return 0;
}