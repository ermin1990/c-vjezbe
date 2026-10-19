#include <stdio.h>

int main()
{

    char slovo;

    do
    {
        printf("#######################");
        printf("\n Unesite jedno slovo: ");
        scanf("%c", &slovo);
        getchar();
        
        if (slovo != 'k')
        {
            printf("Niste uspjeli pogoditi slovo, pokšajte ponovo.\n");
            }
        else
        {
            printf("Bravo, uspjeli ste pogoditi tajno slovo.\n");
        }
    } while (slovo != 'k');
    return 0;
}
