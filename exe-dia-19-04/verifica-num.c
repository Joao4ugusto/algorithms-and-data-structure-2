#include <stdio.h>
#include <stdlib.h>

void verifica_num(int num){
    if(num%2 == 0){
        printf("O numero eh par");
    } else {
        printf("O numero eh impar");
    }
}

int main(){
    
    int num;

    printf("Digite um numero!");
    scanf("%d", &num);

    verifica_num(num);

    return 0;
}