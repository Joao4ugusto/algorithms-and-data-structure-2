#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _livros{
    char titulo[100];
    char autor[100];
    int paginas;
} Livros;


void add_livros(Livros *livros, const char *titulo, const char *autor, int paginas){
    strcpy(livros->titulo, titulo);
    strcpy(livros->autor, autor);
    livros->paginas = paginas;
}

void printf_livros(Livros *livros){
    printf("Titulo = %s\n", livros->titulo);
    printf("Autor = %s\n", livros->autor);
    printf("paginas = %d\n", livros->paginas);
}

int main(){
     
    Livros livros[2];
    add_livros(&livros[0], "fada do dente", "Joao", 200);
    add_livros(&livros[1], "fada madrinha", "pedro", 100);

   for(int i = 0; i < 2; i++){
    printf_livros(&livros[i]);
   }


    return 0;
}