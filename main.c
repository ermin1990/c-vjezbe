#include <stdio.h>

int main(void) {
    printf("\n");
    printf("=====================================\n");
    printf("\tRAČUN ZA KUPOVINU\n");
    printf("=====================================\n");
    printf("Artikal\t\tKoličina\tCijena\n");
    printf("-------------------------------------\n");
    printf("Tastatura\t%d\t\t%d KM\n", 1, 45);
    printf("Miš\t\t%d\t\t%d KM\n", 2, 2 * 20);
    printf("Podloga\t\t%d\t\t%d KM\n", 1, 15);
    printf("-------------------------------------\n");
    printf("Ukupno za platiti:\t\t%d KM\n", 45 + (2*20) + 15);
    printf("=====================================\n");

    return 0;
}
