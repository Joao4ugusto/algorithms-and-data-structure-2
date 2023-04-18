#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _retangulo{
    float altura;
    float largura;

} Retangulo;

void add_retangulo(Retangulo *retangulo, const float altura, const float largura){
    retangulo->altura = altura;
    retangulo->largura = largura;
}

void valor_retangulo(Retangulo *retangulo,const float altura, const float largura){
    float area, perimetro;
    area = retangulo->altura + retangulo->largura;
    perimetro = area * 2;

    printf("%.2f", perimetro);
}

int main(){
    
    Retangulo retangulo;
    add_retangulo(&retangulo, 4.00, 6.00);
    valor_retangulo(&retangulo, 4.00, 6.00);

    return 0;
}