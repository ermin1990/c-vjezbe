#include <stdio.h>

int main()
{
    int sirina, visina;
    printf("Unesite širinu: ");
    scanf("%d", &sirina);
    printf("\nUnesite visinu: ");
    scanf("%d", &visina);
    printf("\n");

    printf("Površina pravougaonika je: %d\n", (sirina * visina));
    printf("Obim pravougaonika je: %d\n", (2 * (sirina + visina)));
    printf("\n");
    
    return 0;
}
