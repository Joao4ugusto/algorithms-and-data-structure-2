
typedef struct _retangulo{
   float comprimento;
   float largura;   
} Retangulo;


void inicializa(Retangulo *r, float comprimento, float largura){
    r->comprimento = comprimento;
    r->largura = largura;
}

float area_retangulo(Retangulo *r){
    return r->comprimento * r->largura;
}

float perimetro_retangulo(Retangulo *r){
    return r->largura * 2 + r->comprimento * 2;
}

