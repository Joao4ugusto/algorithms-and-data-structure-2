#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int x;
    int y;
} Ponto;

float distancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    srand(time(NULL));

    Ponto fila[5];
    for (int i = 0; i < 5; i++) {
        fila[i].x = rand() % 10;
        fila[i].y = rand() % 10;
    }

    for (int i = 0; i < 5; i++) {
        printf("Distancia do ponto (%d,%d) para o ponto (0,0) = %f\n", fila[i].x, fila[i].y, distancia(fila[i], (Ponto) {0, 0}));
    }

    return 0;
}
