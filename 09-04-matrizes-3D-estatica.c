#include <stdio.h>
#include <stdlib.h>



int main(){

   //2 fatias, 2 linhas, 3 colunas 
   int m[2][2][3] = {

    // fatia[0]
   { 
    {0,1,2}, // linha [0]
    {3,4,5} // linha [1]
   },
   {
    //fatia[1]
    {6,7,8}, // linha [0]
    {9,10,11} // linha [0]
   },
};

   printf("&m = %p | m = %p\n", &m, m);
   
   // para cada fatia
   for(int k = 0; k < 2; k++){
    // para cada linha
    for(int i = 0; i < 2; i++){
        // paraa cada coluna
        for(int j = 0; j < 3; j++){
           printf("&m[%d][%d][%d] = %p | m[%d][%d][%d] = %p\n", k,i,j, &m[k][i][j], k,i,j, m[k][i][j]);
        }
    }
   }

    return 0;
}