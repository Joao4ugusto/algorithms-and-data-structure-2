#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _aluno{
    char *nome;
    float nota1;
    float nota2;
    float nota3;
} Aluno;


void inicializa(Aluno *p, char *nome, float nota1, float nota2, float nota3){
    strcpy(p->nome, nome);
    p->nota1 = nota1;
    p->nota2 = nota2;
    p->nota3 = nota3;
}

void imprime(Aluno *p){
    printf("Nome = %s\n", p->nome);
    printf("Nota1 = %.2f\n", p->nota1);
    printf("Nota2 = %.2f\n", p->nota2);
    printf("Nota3 = %.2f\n", p->nota3);
}

float media(Aluno *p){
    float soma = p->nota1 + p->nota2 + p->nota3;
    return soma / 3;
}


int main(){
    
    Aluno *a;
    inicializa(&a, "Joao", 5.0, 4.0, 7.0);
    imprime(&a);

    printf("A media eh: %.2f\n", media(&a));
     

    return 0;
}