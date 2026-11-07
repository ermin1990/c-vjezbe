#include <stdio.h>
#include "alati.h"

int kvadrat(int x){
    return(x*x);
}

int veci(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int jeParan (int br){
    if(br % 2 == 0){
        return 1;
    }

    return 0;
}