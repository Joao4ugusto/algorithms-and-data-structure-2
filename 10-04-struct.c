#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _aluno {
    char nome[100];
    int idade;
} aluno;


int main(){

   aluno ted;
   strcpy(ted.nome, "Ted");
   ted.idade = 20;

   printf("sizeof(aluno) = %lu bytes\n", sizeof(aluno));

    return 0;
}