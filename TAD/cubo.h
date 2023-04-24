typedef struct _cubo{
   float aresta;
} Cubo;


void inicializar(Cubo *c, float aresta) {
    c->aresta = aresta;
}

float get_aresta(Cubo *c) {
    return c->aresta;
}

void set_aresta(Cubo *c, float aresta) {
    c->aresta = aresta;
}

float calcular_area(Cubo *c) {
    return 6 * c->aresta * c->aresta;
}

float calcular_volume(Cubo *c) {
    return c->aresta * c->aresta * c->aresta;
}

