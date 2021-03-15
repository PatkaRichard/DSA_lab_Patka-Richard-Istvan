//
// Created by patka on 09/03/2021.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>

Matrix* createMatrix(int rows, int cols){
    Matrix* array;
    array = (Matrix*)malloc(1 * sizeof(Matrix));
    if(!array)
    {
        printf("Hiba!");
        return 0;
    }

    array->rows = rows;
    array->cols = cols;

    array->data = (int**)malloc(rows * sizeof(int*));

    for(int i = 0; i <  rows; i++)
    {
        array->data[i] = (int*)malloc(cols * sizeof(int));
    }

    if(!array->data)
    {
        printf("Hiba!");
        return 0;
    }

    return array;

}

void readMatrix(const char *fileName, Matrix **array){
    FILE *f=fopen(fileName,"r");
    if(!f){
        printf("Hiba az allomany megnyitasakor");
        return;
    }
    Matrix* aux;
    int auxr,auxc;
    fscanf(f,"%i%i",&auxr,&auxc);
    aux=createMatrix(auxr, auxc);
    for(int i=0;i<auxr;++i){
        for(int j=0;j<auxc;++j){
            fscanf(f,"%i",&aux->data[i][j]);
        }
    }
    *array=aux;
}

void printMatrix(Matrix *array){
    for(int i=0;i<array->rows;++i){
        for(int j=0;j<array->cols;++j){
            printf("%i ", array->data[i][j]);
        }
        printf("\n");
    }
}
void soratlag(int rows, Matrix *array){
    float d;
    d=0;
    float e;
    e=0;
    for(int i = rows-1; i < rows; ++i) {
        for (int j = 0; j < array->cols; ++j) {
        d=d+array->data[i][j];
        }
    }
    e=d/array->cols;
    printf("%f a sor elemeinek az osszege, %f a sor elemeinek az atlaga \n ",d, e);
}
void oszlopatlag(int cols, Matrix *array) {
    float d;
    d = 0;
    float e;
    e = 0;
            for (int i = 0; i < array->rows; ++i) {
            for (int j = cols - 1; j < cols; ++j) {
            d = d + array->data[i][j];
        }
    }
    e = d / array->rows;
    printf("%f az oszlop elemeinek az osszege, %f az oszlop elemeinek az atlaga \n ", d, e);
}
void teljesatlag(Matrix *array) {
    float d;
    d = 0;
    for (int i = 0; i < array->rows; ++i) {
        for (int j = 0; j < array->cols; ++j) {
            d = d + array->data[i][j];
        }
    }
    d=d/(array->rows*array->cols);
    printf("%f a matrix osszes elemenek az atlaga", d);
}