#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _funcionario {
    char nome[100];
    int idade;
    
} Funcionario;

Funcionario *create_funcionario(const char *nome, int idade){
    Funcionario *funcionario = malloc(sizeof(Funcionario));
    if (funcionario == NULL) {
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    strcpy(funcionario->nome, nome);
    funcionario->idade = idade;
 
    return funcionario;
}

void printf_imprimi(const Funcionario *funcionario){
    printf("Nome: %s\n", funcionario->nome);
    printf("Idade: %d\n", funcionario->idade);
}

int main(){   
    Funcionario *funcionarios = create_funcionario("Joao Augusto", 20);
    printf_imprimi(funcionarios);
  
    free(funcionarios); //libera a memória alocada para funcionarios
    return 0;
}
