//
// Created by patka on 02/03/2021.
//

#ifndef FELADAT_1_FUNCTION_H
#define FELADAT_1_FUNCTION_H
typedef struct{
    char name[25];
};CEG;

//helyfoglalas
CEG* create(int n);

//helyfelszabaditas
void destroy(CEG*, int n);

void read_data(CEG* a, int a,FILE *f );





#endif //FELADAT_1_FUNCTION_H
