#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Aluno{
    char nome[100];
    int idade;
    float notaMed;
} Aluno;


void add_aluno(Aluno *aluno, const char *nome, const int idade, const float notaMed){
    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->notaMed = notaMed;
}

void printf_aluno(Aluno *aluno){
    printf("Nome = %s\n", aluno->nome);
    printf("Idade = %d\n", aluno->idade);
    printf("Nota = %.2f\n", aluno->notaMed);
}

void passa_ano(Aluno *aluno){
    if(aluno->notaMed >= 7.00){
        printf("Parabens vc passou!");
    } else{
        printf("Vc rodou!");
    }
}


int main(){

   Aluno *aluno;

   add_aluno(aluno,"Pedro", 18, 7.50);
   printf_aluno(aluno);
   passa_ano(aluno);

    return 0;
}