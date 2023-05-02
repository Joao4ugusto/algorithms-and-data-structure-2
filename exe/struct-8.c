#include <stdio.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int ano_publicacao;
};

int main() {
    struct Livro livros[5];
    int ano_pesquisa;

    // Preenchendo informações dos livros
    for (int i = 0; i < 5; i++) {
        printf("Digite as informações do livro %d:\n", i + 1);
        printf("Título: ");
        scanf("%s", livros[i].titulo);
        printf("Autor: ");
        scanf("%s", livros[i].autor);
        printf("Ano de publicação: ");
        scanf("%d", &livros[i].ano_publicacao);
    }

    // Pedindo ano de pesquisa
    printf("\nDigite um ano para pesquisar: ");
    scanf("%d", &ano_pesquisa);

    // Imprimindo títulos dos livros publicados no ano de pesquisa
    printf("\nLivros publicados em %d:\n", ano_pesquisa);
    for (int i = 0; i < 5; i++) {
        if (livros[i].ano_publicacao == ano_pesquisa) {
            printf("- %s\n", livros[i].titulo);
        }
    }

    return 0;
}
