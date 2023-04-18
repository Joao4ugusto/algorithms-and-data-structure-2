#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// De forma estatica

typedef struct _produto{
    char nome[100];
    float valor;
    int qtd;
} Produto;

void add_produto(Produto *produto, const char *nome, const float valor, const int qtd){
    strcpy(produto->nome, nome);
    produto->valor = valor;
    produto->qtd = qtd;
}

void print(const Produto *produto){
    printf("Nome = %s\n", produto->nome);
    printf("Valor = %.2f\n", produto->valor);
    printf("Nome = %d\n", produto->qtd);
}

void atualiza_estoque(Produto *produto, int item){
    produto->qtd = produto->qtd - item;
}


int main(){
    Produto *produto;

    add_produto(produto, "qualquer", 59.90, 200);
    print(produto);
    atualiza_estoque(produto, 20);

    puts("\nEstoque novo\n");
    print(produto);

    return 0;
}



