#include <stdio.h>

void start()
{
    printf("Upišite brojeve kako želite.\nDa završite unesite 0.\n");
}

void unos()
{

    int broj;
    int zbir = 0;
    int brojeva = 0;

    do
    {

        printf("Unesi broj: ");
        scanf("%d", &broj);
        if (broj != 0)
        {
            zbir = zbir + broj;
            brojeva++;
        }

    } while (broj != 0);

    printf("\nUnijeli ste %d. brojeva.\n", brojeva);
    printf("\nZbir svih unešenih brojeva je: %d\n", zbir);
}

int main()
{

    start();
    unos();

    printf("\nHvala što ste koristili naše usluge.\n");
    return 0;
}