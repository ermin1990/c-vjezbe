#include <stdio.h>

#define RED 3
#define KOLONA 3

void upisiMatricu(int matrica[][KOLONA], int redovi)
{

    printf("Molimo vas upišite brojeve u matricu.\n");
    for (int i = 0; i < redovi; i++)
    {
        for (int j = 0; j < KOLONA; j++)
        {
            printf("Broj [%d][%d]:", i, j);
            scanf("%d", &matrica[i][j]);
            printf("\n");
        }
    }
}

void najveciBroj(int matrica[][KOLONA], int redovi)
{
    int najveciBroj = matrica[0][0];
    for (int i = 0; i < redovi; i++)
    {
        for (int j = 0; j < KOLONA; j++)
        {

            if (najveciBroj < matrica[i][j])
            {
                najveciBroj = matrica[i][j];
            }
        }
    }
    printf("\nNajveći broj u matrici je %d:", najveciBroj);

}

int zbrojiDijagonalu(int matrica[][KOLONA],int redovi)
{
    int zbirDijagonale = 0;
    for (int i = 0; i < redovi; i++)
    {
        zbirDijagonale = zbirDijagonale + matrica[i][i];
    }
    return zbirDijagonale;
}

int main()
{

    int matrica[RED][KOLONA];

    upisiMatricu(matrica, RED);
    najveciBroj(matrica, RED);

    int zbir = zbrojiDijagonalu(matrica, RED);
    printf("\nZbir dijagonale je %d\n", zbir);
}