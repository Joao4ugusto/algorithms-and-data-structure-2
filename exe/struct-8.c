#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char titulo[100];
    char autor[100];
    int ano;
} Livro;


void add_livro(Livro *l, char *titulo, char *autor, int ano){
    strcpy(l->titulo, titulo);
    strcpy(l->autor, autor);
    l->ano = ano;
}

void printf_livro(const Livro *l){
    printf("Titulo = %s\n", l->titulo);
    printf("Autor = %s\n", l->autor);
    printf("Ano = %d\n", l->ano);
}

int main(){


   Livro livro[3];
   
   add_livro(&livro[0], "Girua", "Joao Augusto", 2002);
   printf_livro(&livro);

    return 0;
}