#include <stdio.h>
#include "cubo.h"

int main() {
    Cubo meu_cubo;
    inicializar(&meu_cubo, 3);

    printf("Aresta: %.2f\n", get_aresta(&meu_cubo));
    printf("Area: %.2f\n", calcular_area(&meu_cubo));
    printf("Volume: %.2f\n", calcular_volume(&meu_cubo));

    return 0;
}