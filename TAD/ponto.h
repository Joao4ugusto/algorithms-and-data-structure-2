typedef struct _ponto{
    float x;
    float y;
} Ponto;

Ponto *ponto_cria(float x, float y){
    Ponto *p = (Ponto*) malloc(1 * sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void ponto_libera(Ponto *p){
    free(p);
}

int ponto_acessa(Ponto *p, float *x, float *y){
    if(p == NULL)
    return 0;

    *x = p->x;
    *y = p->y;
    return 1;
}

int ponto_atribuiu(Ponto *p, float x, float y){
    if(p == NULL)
    return 0;

    p->x = x;
    p->y = y;

    return 1;
}


float ponto_distancia(Ponto *P1, Ponto *P2){
   if(P1 == NULL || P2 == NULL)
   return -1;

   float dx = P1->x - P2->x;
   float dy = P1->y - P2->y;
   return sqrt(dx * dx + dy * dy);
}

