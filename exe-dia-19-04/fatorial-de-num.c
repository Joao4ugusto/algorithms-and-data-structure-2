#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    if(num == 0){
        return 1;
    } else  {
        return num * fatorial(num - 1);
    }
}

int main(){
   
   int num;

   printf("Digite um numero:");
   scanf("%d", &num);

   printf("%d  = %d\n", num, fatorial(num));

    return 0;
}
