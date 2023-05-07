#include <stdio.h>
#include <stdlib.h>

typedef struct _data{
    int dia;
    int mes;
    int ano;
} Data;

void envia_datas(Data *p, int dia, int mes, int ano){
   p->dia = dia;
   p->mes = mes;
   p->ano = ano;
}

void printf_datas(Data *p){
    printf("Dia = %d\n", p->dia);
    printf("Dia = %d\n", p->mes);
    printf("Dia = %d\n", p->ano);
}

int main(){

    Data data[2];

    envia_datas(&data[0], 2, 5 ,2023);
    envia_datas(&data[1], 10, 2 ,2023);
    

    for(int i = 0; i < 2; i++){
        printf_datas(&data[i]);
    }
  
    return 0;
}