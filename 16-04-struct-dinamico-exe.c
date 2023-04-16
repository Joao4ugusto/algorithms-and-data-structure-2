#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _aluno{
    char nome[100];
    int idade;
} Aluno;

Aluno *create_aluno(const char *nome, int idade){
    Aluno *aluno = (Aluno*) calloc(1, sizeof(Aluno));

    strcpy(aluno->nome, nome);
    aluno->idade = idade;

    return aluno;
}

void printf_aluno(const Aluno *aluno){
    printf("Nome = %s\n", aluno->nome);
    printf("Idade = %d\n", aluno->idade);
}

int main(){
    
    Aluno *aluno = create_aluno("Joao", 20);
    printf_aluno(aluno);
    return 0;
}