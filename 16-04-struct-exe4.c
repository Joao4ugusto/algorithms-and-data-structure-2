#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _data{
    int dia;
    int mes;
    int ano;
} Data;

void add_data(Data *data, const int dia, const int mes, const int ano){
   data->dia = dia;
   data->mes = mes;
   data->ano = ano;
}

void data_recente(Data *data, int num){
    Data *data_recente = &data[0];
    for(int i = 1; i < num; i++){
       if(data[i].ano > data_recente->ano ||(data[i].ano == data_recente->ano && data[i].mes > data_recente->mes) ||
         (data[i].ano == data_recente->ano && data[i].mes == data_recente->mes && data[i].dia > data_recente->dia)) {
        data_recente = &data[i];
       }
    }
    printf("Data %d/%d/%d eh mais atual!\n", data_recente->dia, data_recente->mes, data_recente->ano);
}


int main(){
    Data data[4];

    add_data(&data[0], 31, 10, 2002);
    add_data(&data[1], 16, 3, 2023);
    add_data(&data[2], 23, 2, 2023);
    add_data(&data[3], 12, 4, 2023);


    data_recente(data, 4);

    return 0;
}