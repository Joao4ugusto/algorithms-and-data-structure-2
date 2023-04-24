#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

int main(){

   Retangulo r;

   inicializa(&r, 20, 5);

   printf("area: %.2f\n", area_retangulo(&r));
    printf("perimetro: %.2f\n", perimetro_retangulo(&r));
}