#include <stdio.h>

float media(int vetor[], int tamanho) {
    int i, soma = 0;
    float media;

    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    media = (float) soma / tamanho;
    return media;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(int);
    float media_vetor = media(vetor, tamanho);

    printf("Media do vetor: %.2f\n", media_vetor);

    return 0;
}