#include <stdio.h>
#include "fun.h"

int main()
{

    int matrica[R][K];

    printf("Molimo vas unesite cijele brojeme u Matricu.\n");

    unosMatrice(matrica, R);
    prikazMatrice(matrica, R);


    for(int i = 0;i<R;i++){
        printf("Zbir za %d.red je: %d",i+1,zbirReda(matrica,i));
    }

    printf("Index reda sa najvećim zbirom je: %d",najveciZbir(matrica, R));
    

    return 0;
}