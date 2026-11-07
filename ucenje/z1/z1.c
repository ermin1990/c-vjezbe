#include <stdio.h>
#include "alati.h"

int main(){

    int x;
    int a;
    int b;

    printf("Molimo vas unesite jedan broj: ");
    scanf(" %d",&x);

    printf("\nKvadrat vašeg broja je: %d",kvadrat(x));

    

    printf("\nBroj koji ste unjeli je");
    if(jeParan(x)==1){
        printf(" paran");
    }else{
        printf(" neparan");
    }

    printf("\n#######################");

    printf("\nUpišite dva broja da ih uporedite:\n");
    printf("1.Broj: ");
    scanf(" %d",&a);
    printf("\n2.Broj: ");
    scanf(" %d",&b);

    printf("\n Od ova dva broja veći je broj %d \n", veci(a,b));



}