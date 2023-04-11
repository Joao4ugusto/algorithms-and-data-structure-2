#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char titulo[100];
    unsigned int num_paginas;
    float valor;
}Livro;


// CONSTRUTOR PARA TIPO LIVROS DE DADOS
Livro *add_livro(const char *titulo, unsigned int num_paginas, float valor){
    Livro *livro = (Livro *)calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->num_paginas = num_paginas;
    livro->valor = valor;

    return livro;
}

// PRINTF PARA TIPO LIVRO DE DADOS
void printf_Livro(const Livro *livro){
    printf("Titulo: %s\n", livro->titulo);
    printf("Paginas: %d\n", livro->num_paginas);
    printf("Valor: R$%.2f reais\n", livro->valor);
}

int main(){
    
    Livro *livro_1 = add_livro("effect java", 200, 129.90);

    printf_Livro(livro_1);
 
    return 0;
}