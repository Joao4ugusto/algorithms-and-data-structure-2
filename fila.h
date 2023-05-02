#define TAM 5

typedef struct{
    int memoria[TAM];
    int fim;
    int inicio;
    int qtd;
} fila;

void inicialize_fila(fila *f){
    f->fim = f->inicio = f->qtd = 0;
}

int fila_cheia(fila *f){
    if(f->qtd == TAM){
        return 1;
    }
    return 0;
}

int fila_vazia(fila *f){
    if(f->qtd == 0){
        return 1;
    }
    return 0;
}

void enfileira(fila *f, int elemento){
    if(!fila_cheia(f)){
        f->memoria[f->fim] = elemento;
        f->fim++;
        f->qtd++;
        if(f->fim == TAM) f->fim=0;
    }
}

void desenfileira(fila *f){
if(!fila_vazia(f)){
    f->qtd--;
    f->inicio++;
    if(f->inicio == TAM){
        f->inicio = 0;
    }
}
}

int inicio_fila(Fila *f){
    if(!fila_vazia(f)){
        return f->memoria[f->inicio];
    }
}





