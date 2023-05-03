#include <stdio.h>


int main(){
    
    int num[6] = {1,2,2,3,9,7};
    int num_rep[6] = {0,0,0,0,0,0};
    int cont = 0;

    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            if(num[i] == num[j]){
                num_rep[cont] = num[j];
                cont++;
                break;
            }
        }
    }

    for(int i = 0; i < cont; i++){
        int rep = 1;
        for(int j = i+1; j < cont; j++){
            if(num_rep[i] == num_rep[j]){
                rep++;
            }
        }
        printf("%d (%d Vezes)", num_rep[i], rep);
    }

    return 0;
}