#define MAX_SIZE 100

typedef struct {
    int top; // índice do topo da pilha
    int items[MAX_SIZE]; // vetor que armazena os itens da pilha
} Stack;

// Inicializa uma nova pilha
void init(Stack *stack) {
    stack->top = -1;
}

// Verifica se a pilha está vazia
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Verifica se a pilha está cheia
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Empilha um elemento na pilha
void push(Stack *stack, int item) {
    if (isFull(stack)) {
        printf("Erro: pilha cheia\n");
        exit(1);
    }
    stack->top++;
    stack->items[stack->top] = item;
}

// Desempilha um elemento da pilha
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Erro: pilha vazia\n");
        exit(1);
    }
    int item = stack->items[stack->top];
    stack->top--;
    return item;
}
