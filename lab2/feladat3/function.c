//
// Created by patka on 28/02/2021.
//

#include "function.h"



sum(int a[4]){
    int b;
    b = 0;
    for (int i = 0; i < 4; ++i) {
        b = b +a[i];
    }
        return b;
    }
mult(int a[4]){
    int c;
    c = 1;
    for (int i = 0; i < 4; ++i) {
        c = c*a[i];
    }
    return c;
}
atlag(int a[4]) {
    int d;
    d = 0;
    for (int i = 0; i < 4; ++i) {
        d = d + a[i];
    } d= d/5;
    return d;
}
