#include <stdio.h>
#include "sala.h"

int main()
{

    int sala[SALA_REDOVI][SALA_SJEDISTA];
    popuniSalu(sala, SALA_REDOVI);

    int red;
    int kolona;

    prikaziSalu(sala, SALA_REDOVI);

    do
    {
        
        printf("Molimo vas odaberite red i kolonu da zauzmete sjedište.\n");
        printf("Upišite red: ");
        scanf("%d", &red);
        printf("\nUpišite kolonu: ");
        scanf("%d", &kolona);

        if (red == 0 && kolona == 0)
        {
            break;
        }
        else
        {
            rezervisiMjesto(sala, red - 1, kolona - 1);
            prikaziSalu(sala, SALA_REDOVI);
        }

    } while (provjeriSlobodnaMjesta(sala, SALA_REDOVI) > 0);

    return 0;
}