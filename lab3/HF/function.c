//
// Created by patka on 08/03/2021.
//

#include "function.h"
int time (int sec){
    int s, m, h;
    s = sec % 60;
    m = sec/60;
    h = m/60;
    m = m % 60;
    return int h,int m,int s;
}
float distance(float a, float b, float c, float d){
    float x, y;
    x = a - c;
    y = b - d;
    float d, e;
    d = x*x + y*y;
    e = sqrt(d);
    return e;
}
float delta(int a, int b, int c){
    float del;
    del = b^2 -4*a*c;
    float x, y;
    x = -b + del/2*a;
    y = -b - del/2*a;
    return x , y;
}