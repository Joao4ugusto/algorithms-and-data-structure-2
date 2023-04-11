#include <stdio.h>
#include <stdlib.h>


int main(){

    int ***m = (int***)calloc(2, sizeof(int**));

    for(int k = 0; k < 2; k++){
        m[k] = (int**) calloc(2, sizeof(int*));

        for(int i = 0; i < 2; i++){
        m[k][i] = (int*) calloc(3, sizeof(int));
        }

    }
    
    int cont = 0;

    printf("&m = %p | m = %p\n", &m, m);
   
   // para cada fatia
   for(int k = 0; k < 2; k++){
    printf("&m[%d] = %p | m[%d] = %p\n", k,&m[k],k, m[k]);
    // para cada linha
    for(int i = 0; i < 2; i++){
        printf("&m[%d][%d] = %p | m[%d][%d] = %p\n", k, i, &m[k][i], k, i, m[k][i]);
        // paraa cada coluna
        for(int j = 0; j < 3; j++){
           printf("&m[%d][%d][%d] = %p | m[%d][%d][%d] = %p\n", k,i,j, &m[k][i][j], k,i,j, m[k][i][j]);
        }
        puts("");
    }
    puts("");
   }

   // FALTA DESALOCAR A MATRIZ 3D DINAMICA

   for(int i = 0; i < 2; i++){
    free(m[i]);
   }
    
   free(m);
   m = NULL;

    return 0;
}