#include <stdio.h>
#include "fun.h"

int unosOcjena(int ocjene[], int maxBrojOcjena)
{

    int brojOcjena = 0;
    int ocjena = -1;
    printf("\nMolimo vas unesite ocjene.\nKada unesete 0 završavate unos.\nMožete unijeti maksimalno %d", maxBrojOcjena);

    while (brojOcjena < maxBrojOcjena && ocjena != 0)
    {
        printf("\nBroj %d: ", brojOcjena + 1);
        scanf("%d", &ocjene[brojOcjena]);
        ocjena = ocjene[brojOcjena];
        if (ocjene[brojOcjena] == 0)
        {
            break;
        }
        if (ocjena >= 5 && ocjena <= 10)
        {
            brojOcjena++;
        }
        else
        {
            printf("\nMolimo vas upišite ispravnu ocjenu od 5 do 10!\n");
        }
    }
    return brojOcjena;
}

double prosjekOcjena(int ocjene[], int brOcjena)
{
    int sum = 0;
    for (int i = 0; i < brOcjena; i++)
    {
        sum = sum + ocjene[i];
    }
    return (double)sum / brOcjena;
}

int brojDesetki(int ocjene[], int brOcjena)
{
    int brDesetki = 0;
    for (int i = 0; i < brOcjena; i++)
    {
        if (ocjene[i] == 10)
        {
            brDesetki += 1;
        }
    }

    return brDesetki;
}