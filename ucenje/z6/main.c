#include <stdio.h>


void pozdrav(){
    printf("\n*************\n");
    printf("Pozdrav!\n");
    printf("*************\n");
}

void kvadratBroja(){
    int a;

    printf("Unesite brojeve.\n");
    printf("a: ");
    scanf("%d",&a);

    printf("\nKvadrat unesenog broja %d je: %d.\n",a, a*a);

}

int main(){

int izbor;

    do{

        printf("\nOdaberite jednu opciju?\n");
        printf("1. Pozdrav\n2.Kvadrat broja\n3.Izlaz\n");

        printf("Unesi odabir: ");
        scanf("%d",&izbor);

        switch (izbor){
            case 1:
                pozdrav();
                break;
            case 2:
                kvadratBroja();
                break;
            default:
            printf("Odabrali ste pogrešan izbor, pokušajte ponovo.\n");
        }


    }while(izbor != 3);
return 0;
}