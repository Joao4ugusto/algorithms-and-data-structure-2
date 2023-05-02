#define TAM 5

typedef struct _pilha {
   int memoria[TAM];
   int topo;
} Pilha;

void inicializa_pilha(Pilha *pilha) {
    pilha->topo = 0;
}

int pilha_vazia(Pilha *pilha) {
    if(pilha->topo == 0) {
        return 1;
    }
    return 0;
}

int pilha_cheia(Pilha *pilha) {
    if(pilha->topo == TAM) {
        return 1;
    }
    return 0;
}

void empilha(Pilha *pilha, int elemento) {
    if(!pilha_cheia(pilha)) {
        pilha->memoria[pilha->topo] = elemento;
        pilha->topo++;
    }
}

void desempilha(Pilha *pilha) {
    int i;
    if(!pilha_vazia(pilha)) {
        for(i = 0; i < (pilha->topo-1); i++) {
            pilha->memoria[i] = pilha->memoria[i+1];
        }
        pilha->topo--;
    }
}

int topo_pilha(Pilha *pilha) {
    return pilha->memoria[pilha->topo-1];
}


void inverte_pilha(Pilha *pilha) {
    Pilha pilha_auxiliar;
    inicializa_pilha(&pilha_auxiliar);

    while(!pilha_vazia(pilha)) {
        int elemento = topo_pilha(pilha);
        desempilha(pilha);
        empilha(&pilha_auxiliar, elemento);
    }

    while(!pilha_vazia(&pilha_auxiliar)) {
        int elemento = topo_pilha(&pilha_auxiliar);
        desempilha(&pilha_auxiliar);
        empilha(pilha, elemento);
    }
}


