#include <stdio.h>
#include <stdlib.h>
#include "pilha1.h"


int main() {
    Stack stack;
    init(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    while (!isEmpty(&stack)) {
        int item = pop(&stack);
        printf("%d\n", item);
    }

    return 0;
}