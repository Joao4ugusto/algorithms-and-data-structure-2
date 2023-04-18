#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _pessoa{
    char nome[100];
    int idade;
    float altura;
} Pessoa;


void add_pessoa(Pessoa *pessoa, const char *nome, int idade, float altura){
    strcpy(pessoa->nome, nome);
    pessoa->idade = idade;
    pessoa->altura = altura;
}

void mais_alto(Pessoa *pessoa, int tamanho_vetor){
    Pessoa *pessoa_alta = &pessoa[0];
    for(int i = 1; i < tamanho_vetor; i++){
        if(pessoa[i].altura > pessoa_alta->altura){ 
            pessoa_alta = &pessoa[i];
        }
    }
   printf("%s pessoa mais alta com %.2f de altura\n", pessoa_alta->nome, pessoa_alta->altura);
}


int main(){
    Pessoa vet[3];

    add_pessoa(&vet[0], "Joao", 20, 1.70);
    add_pessoa(&vet[1], "Pedro", 23, 1.75);
    add_pessoa(&vet[2], "lucas", 25, 1.60);         
    
    mais_alto(vet, 3);

    return 0;
}