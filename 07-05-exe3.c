#include <stdio.h>
#include <string.h>

typedef struct _pessoa{
   char nome[100];
   int idade;
} Pessoa;

void recebe(Pessoa *p, char *nome, int idade){
    strcpy(p->nome, nome);
    p->idade = idade;
}

void printf_pessoa(Pessoa *p){
    printf("Nome = %s\n", p->nome);
    printf("Idade = %d\n", p->idade);
}

int main(){
    
    Pessoa *p;
    
    recebe(&p, "Rose Eliane", 45);
    printf_pessoa(&p);

    return 0;
}