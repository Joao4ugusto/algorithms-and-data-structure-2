#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char *titulo;
    char *autor;
    int ano;
} Livro;

Livro inicializa(Livro *p, char *titulo, char *autor, int ano){
    Livro *livro = (Livro*)calloc(1, sizeof(Livro));
    strcpy(livro->titulo, titulo);
    strcpy(livro->autor, autor);
    livro->ano = ano;

    return livro;
}

void printf_livro(Livro *p){
    printf("Titulo = %s\n", p->titulo);
    printf("Autor = %s\n", p->autor);
    printf("Ano = %d\n", p->ano);
}



int main(){
    Livro l[3];

    l[0] = inicializa(l[0], "sei la 1", "Joaozin", 2001);
    l[1] = inicializa(l[1], "sei la 2", "Joao augusto", 2000);
    l[2] = inicializa(l[2], "sei la 3", "Joao oliveira", 2002);

    if(int i = 0; i < 3; i++){
        printf_livro(&l[i]);
    }
}