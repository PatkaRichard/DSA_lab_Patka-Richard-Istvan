//
// Created by patka on 01/03/2021.
//

#include "function.h"
even(int a[5]){
    int g;
    g=0;
    for (int i = 0; i < 5; ++i) {
        if( a[i] % 2 == 0){
            g++;
        }
    }
    return g;
}

odd(int a[5]){
        int h;
        h=0;
        for (int i = 0; i < 5; ++i) {
            if( a[i] % 2 == 1){
                h++;
            }
        }
        return h;
}
up(int a[5]){
        int j;
        j=0;
        for (int i = 0; i < 5; ++i) {
            if( a[i] >= 0){
                j++;
            }
        }
        return j;
}
down(int a[5]){
        int k;
        k=0;
        for (int i = 0; i < 5; ++i) {
            if( a[i] < 0){
                k++;
            }
        }
        return k;
}