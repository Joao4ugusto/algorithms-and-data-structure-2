#include <stdio.h>

int main() {
    int valor, soma = 0;
    
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);
    
    for (int i = 2; i <= valor; i += 2) {
        soma += i;
    }
    
    printf("A soma dos numeros pares ate %d eh: %d\n", valor, soma);
    
    return 0;
}