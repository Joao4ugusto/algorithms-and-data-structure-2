#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _pessoa{
    char nome[100];
    int idade;
    float altura;
} Pessoa;

void recebe_pessoas(Pessoa *pessoa, const char *nome, int idade, float altura){

    strcpy(pessoa->nome, nome);
    pessoa->idade = idade;
    pessoa->altura = altura;
}

void printf_pessoas(Pessoa pessoa){
    printf("Nome = %s\n", pessoa.nome);
    printf("Idade = %d\n", pessoa.idade);
    printf("Altura = %f\n", pessoa.altura);
}

void mais_alto(Pessoa *pessoas, int tamanho_vetor){
    Pessoa *pessoa_mais_alta = &pessoas[0];
    for(int i = 1; i < tamanho_vetor; i++){
        if(pessoas[i].altura > pessoa_mais_alta->altura){
            pessoa_mais_alta = &pessoas[i];
        }
    }
    printf("%s eh a pessoa mais alta, com %f metros de altura\n", pessoa_mais_alta->nome, pessoa_mais_alta->altura);
}

int main(){
     Pessoa vet[3];

    recebe_pessoas(&vet[0], "jota", 20, 1.70);
    recebe_pessoas(&vet[1], "pedro", 21, 1.50);
    recebe_pessoas(&vet[2], "luis", 22, 1.75);

    for(int i = 0; i < 3; i++){
    printf_pessoas(vet[i]);
    } 

    mais_alto(vet, 3);
   
    return 0;
}




