#include <stdio.h>

int main() {
    int vet[5] = {1, 5, 3, 4, 5};
    int target = 10;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vet[i] + vet[j] == target) {
                printf("Indices %d e %d\n", i, j);
                break;
            }
        }
    }

    return 0;
}