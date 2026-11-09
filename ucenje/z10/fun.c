#include <stdio.h>
#include "fun.h"

void unosMatrice(int matrica[][K],int red){
    for(int i = 0; i<red;i++){
        for(int j=0;j<K;j++){
            printf("\nBroj[%d][%d]: ",i,j);
            scanf("%d",&matrica[i][j]);
        }
    }
}

void prikazMatrice(int matrica[][K],int red){
    for(int i = 0; i<red;i++){
        for(int j=0;j<K;j++){
            printf("[%d]",matrica[i][j]);
        }
        printf("\n");
    }
}

int zbirReda(int matrica[][K],int red){
    int suma=0;
    for(int i = 0; i<K;i++){
            suma += matrica[red][i];
        }
    return suma;
}

int najveciZbir(int matrica[][K],int red){
    int index = 0;
    int najveci = zbirReda(matrica,0);
    for(int i = 0; i<red;i++){
        int zbir = zbirReda(matrica,i);
        if( zbir > najveci){
            najveci = zbir;
            index = i;
        }
    }
    return index+1;
}
