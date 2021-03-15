//
// Created by patka on 09/03/2021.
//

#ifndef FELADAT1_FUNCTION_H
#define FELADAT1_FUNCTION_H
typedef struct  {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
}Matrix;
Matrix* createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);


//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix* array);

void soratlag(int rows, Matrix *array);

void oszlopatlag(int cols, Matrix *array);

void teljesatlag(Matrix *array);




#endif //FELADAT1_FUNCTION_H
