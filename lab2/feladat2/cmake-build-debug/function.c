//
// Created by patka on 23/02/2021.
//

#include "function.h"
max(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }if (b>a && b>c){
        return b;
    }
    if (c>a && c>b){
        return c;
    }
}
min(int a, int b, int c){
    if (a<b && a<c){
        return a;
    }if (b<a && b<c){
        return b;
    }
    if (c<a && c<b){
        return c;
    }
}