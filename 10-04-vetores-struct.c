#include <stdio.h>
#include <stdlib.h>

typedef struct _livro {
    char titulo[100];
    unsigned int num_paginas;
    float preco;
} Livro;


typedef struct _vetor_livros {
    Livro **vet;
    int n_elems;  // numero de elementos
} VetorLivros;


// "construtor" para livros
Livro *create_livro(const char *titulo, unsigned int num_paginas,
                    float preco) {
    Livro *livro = (Livro *) calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->num_paginas = num_paginas;
    livro->preco = preco;

    return livro;
}

void print_livro(const Livro *livro) {
    printf("Titulo: %s\n", livro->titulo);
    printf("Num Paginas: %d\n", livro->num_paginas);
    printf("Preco: R$ %.2f\n\n", livro->preco);
}


int main(){
  Livro **vet = (Livro **) calloc(3, sizeof(Livro *));
    vet[0] = create_livro("Harry Potter 1", 200, 25);
    vet[1] = create_livro("A Batalha do Apocalipse", 600, 40);
    vet[2] = create_livro("O Senhor dos Anéis", 500, 15);

    for (int i = 0; i < 3; i++) {
        print_livro(vet[i]);
    }
  
    return 0;
}