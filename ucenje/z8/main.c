#include <stdio.h>
#include "fun.h"

int main(){

    int ocjene[MAX_BROJ_OCJENA];

    int brOcjena = unosOcjena(ocjene,MAX_BROJ_OCJENA);

    printf("\nBroj ocjena koje ste unjeli je: %d", brOcjena);

    if(brOcjena != 0){
    double prosjek = prosjekOcjena(ocjene,brOcjena);
    printf("\nProsjek ocjena je %.2f", prosjek);
    }else{
        printf("\nNemamo prosjek ocjena jer niste unjeli nijednu ocjenu!\n");
    }
    

    int desetki = brojDesetki(ocjene,brOcjena);
    printf("\nBroj desetki koje ste upisali je %d", desetki);



    return 0;
}