#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _aluno{
    char nome[100];
    int idade;
} Aluno;

void create_aluno(Aluno *aluno, const char *nome, int idade){
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
}

void printf_aluno(const Aluno *aluno){
    printf("Nome = %s\n", aluno->nome);
    printf("Idade = %d\n", aluno->idade);
}

int main(){
    
    Aluno aluno;
    create_aluno(&aluno, "joao", 20);
    printf_aluno(&aluno);

    return 0;
}