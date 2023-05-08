#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int top;
    int data[MAX_SIZE];
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, int x) {
    if (isFull(s)) {
        printf("Erro: Pilha cheia!\n");
        exit(EXIT_FAILURE);
    }

    s->top++;
    s->data[s->top] = x;
}

int pop(Stack *s) {
    int x;

    if (isEmpty(s)) {
        printf("Erro: Pilha vazia!\n");
        exit(EXIT_FAILURE);
    }

    x = s->data[s->top];
    s->top--;

    return x;
}

void print(Stack *s) {
    int i;

    printf("Elementos da pilha: ");

    for (i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }

    printf("\n");
}

int main() {
    Stack s;
    int vetor[] = {1, 2, 3, 4, 5};
    int i, n = sizeof(vetor) / sizeof(int);

    init(&s);

    for (i = 0; i < n; i++) {
        push(&s, vetor[i]);
    }

    print(&s);
   

    return 0;
}
