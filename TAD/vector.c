#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


int main(){

   Vector v;
   init(&v, 3);
   set(&v, 0, 1);
   set(&v, 1, 2);
   set(&v, 2, 3);
   printf("Valor do segundo elemento: %d\n", get(v, 1));
   printf("Norma do vetor: %f\n", norm(v));


    return 0;
}