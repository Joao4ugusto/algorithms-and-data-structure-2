#define TAM 5
typedef struct{
    int memoria[TAM];
    int fim;
} fila;

void inicialize_fila(fila *f){
    f->fim = 0;
}

int fila_cheia(fila *f){
    if(f->fim == TAM){
        return 1;
    }
    return 0;
}

int fila_vazia(fila *f){
    if(f->fim == 0){
        return 1;
    }
    return 0;
}

void enfileira(fila *f, int elemento){
    if(f->fim != TAM){
        f->memoria[f->fim] = elemento;
        f->fim++;
    }
}

void desenfileira(fila *f){
int i;
    if(!fila_vazia(f)){
        for(i=0; i<(f->fim-1); i++)
        f->memoria[i] = f->memoria[i+1];
    f->fim--;
    }
}

int fim_fila(fila *f){
    return f->memoria[0];
}
