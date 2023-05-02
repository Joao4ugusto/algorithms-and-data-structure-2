#include <stdio.h>
#include <string.h>

// Definindo a estrutura Aluno
struct Aluno {
   char nome[50];
   int idade;
   float media;
};

// Função para preencher as informações de um aluno
void preencheAluno(struct Aluno *aluno, char nome[], int idade, float media) {
   strcpy(aluno->nome, nome);
   aluno->idade = idade;
   aluno->media = media;
}

// Função para imprimir as informações de um aluno
void imprimeAluno(struct Aluno aluno) {
   printf("Nome: %s\n", aluno.nome);
   printf("Idade: %d\n", aluno.idade);
   printf("Media: %.2f\n\n", aluno.media);
}

int main() {
   int n = 3; // número de alunos
   // Declarando um array de alunos
   struct Aluno turma[n];

   // Preenchendo as informações de cada aluno
   preencheAluno(&turma[0], "Joao", 20, 8.5);
   preencheAluno(&turma[1], "Maria", 21, 9.0);
   preencheAluno(&turma[2], "Pedro", 19, 7.5);

   // Imprimindo as informações de cada aluno usando a função imprimeAluno
   for (int i = 0; i < n; i++) {
      printf("Aluno %d:\n", i+1);
      imprimeAluno(turma[i]);
   }

   return 0;
}
