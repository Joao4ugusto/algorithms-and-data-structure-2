#include <stdio.h>

int main() {
   int tamanho, i, j;
   
   printf("Digite o tamanho do vetor: ");
   scanf("%d", &tamanho);
   
   int vetor[tamanho];
   
   printf("Digite os valores do vetor:\n");
   for (i = 0; i < tamanho; i++) {
      scanf("%d", &vetor[i]);
   }
   
   printf("Vetor original: ");
   for (i = 0; i < tamanho; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");
   
   for (i = 0; i < tamanho; i++) {
      if (vetor[i] == 3) {
         for (j = i; j < tamanho - 1; j++) {
            vetor[j] = vetor[j+1];
         }
         tamanho--;
         i--;
      }
   }
   
   printf("Vetor sem o número 3: ");
   for (i = 0; i < tamanho; i++) {
      printf("%d ", vetor[i]);
   }
   printf("\n");
   
   return 0;
}
