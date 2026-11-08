#include <stdio.h>

/*

Zadatak: “Parni brojevi”

Korisnik unese 6 cijelih brojeva u niz. Ispiši:

koliko ima parnih
najveći broj

*/

#define BR_UNOSA 6

int daLiJeParanBroj(int broj)
{

    if (broj % 2 == 0)
    {
        return 1;
    }
    return 0;
}

void maxNum(int brojevi[], int brojUnosa){
    int broj = brojevi[0];
    for(int i = 0; i<brojUnosa; i++){
        if(broj<brojevi[i]){
            broj = brojevi[i];
        }
    }

    printf("\nNajveći broj je %d\n", broj);
}

int main()
{

    int brojevi[BR_UNOSA];
    int parniBrojevi = 0;

    printf("Molimo vas unesite %d cijelih brojeva.\n", BR_UNOSA);

    for (int i = 0; i < BR_UNOSA; i++)
    {
        printf("\nBroj %d: ", i + 1);
        scanf("%d", &brojevi[i]);
        if(daLiJeParanBroj(brojevi[i])){
            parniBrojevi++;
        }
    }

    printf("\nBroj parnih brojeva je: %d", parniBrojevi);

    maxNum(brojevi,BR_UNOSA);
    
}