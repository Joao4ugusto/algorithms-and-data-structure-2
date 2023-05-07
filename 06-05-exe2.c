#include <stdio.h>

#define MAX 10

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto pontos[MAX];
    int primeiro;
    int ultimo;
} FilaPontos;

void adicionaPonto(FilaPontos *fila, Ponto ponto) {
    fila->pontos[fila->ultimo] = ponto;
    fila->ultimo = (fila->ultimo + 1) % MAX;
}

Ponto removePonto(FilaPontos *fila) {
    Ponto pontoRemovido = fila->pontos[fila->primeiro];
    fila->primeiro = (fila->primeiro + 1) % MAX;
    return pontoRemovido;
}

int main() {
    FilaPontos fila = { .primeiro = 0, .ultimo = 0 };

    adicionaPonto(&fila, (Ponto) {1, 2});
    adicionaPonto(&fila, (Ponto) {3, 4});
    adicionaPonto(&fila, (Ponto) {5, 6});

    printf("Ponto removido: (%d,%d)\n", removePonto(&fila).x, removePonto(&fila).y);

    return 0;
}
