#include <stdio.h>

int main()
{

    int visina;
    int sirina;

    printf("\n#####################################################\n");
    printf("Molim vas da unesete visinu i širinu za pravougaonik.\n");
    printf("Za izlaz unesite 0 za obje varijable\n");

    do
    {
        printf("\nMolimo vas unesite visinu: ");
        scanf(" %d", &visina);

        printf("\nMolimo vas unesite širinu: ");
        scanf(" %d", &sirina);

        if (visina != 0 && sirina != 0)
        {
            for (int i = 0; i < visina; i++)
            {
                for (int j = 0; j < sirina; j++)
                {
                    printf("* ");
                }
                printf(" \n");
            }
        }
        else
        {
            printf("\nUnesite ponovo");
            printf("\n#####################################################\n");
        }

    } while (visina != 0 || sirina != 0);

    printf("Kraj programa, hvala na korištenju.");
    return 0;
}