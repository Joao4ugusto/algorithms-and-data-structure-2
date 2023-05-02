#include <stdio.h>
#include <string.h>

// Definir a estrutura
struct Aluno {
  char nome[50];
  int idade;
  float nota;
};

int main() {
  // Criar uma variável do tipo Aluno
  struct Aluno aluno1;

  // Atribuir valores aos campos da struct
  strcpy(aluno1.nome, "João");
  aluno1.idade = 20;
  aluno1.nota = 7.5;

  // Imprimir os valores
  printf("Nome: %s\n", aluno1.nome);
  printf("Idade: %d\n", aluno1.idade);
  printf("Nota: %.1f\n", aluno1.nota);

  return 0;
}
