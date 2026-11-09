/*
 * ZADATAK: Matricu N x N popuni brojevima 1, 2, 3, ... u obliku spirale
 * (od gornjeg lijevog ugla, udesno, pa dolje, pa ulijevo, pa gore, pa opet
 * unutra...), a zatim je ispiši.
 *
 * Za N = 5 treba ispisati:
 *
 *    1   2   3   4   5
 *   16  17  18  19   6
 *   15  24  25  20   7
 *   14  23  22  21   8
 *   13  12  11  10   9
 *
 * ---------------------------------------------------------------------
 * 4 PITANJA PRIJE KODA
 *
 * 1. Šta pamtim?
 *    - matricu m
 *    - broj koji upisujem (1, 2, 3, ...)
 *    - ČETIRI GRANICE koje se pomjeraju prema unutra:
 *        gore, dolje, lijevo, desno
 *
 * 2. Šta se ponavlja i dokle?
 *    Jedan "krug" spirale se ponavlja DOK imamo još prostora:
 *        vrti dok je (gore <= dolje) I (lijevo <= desno)
 *    (isto kao u z8: sa && petlja staje čim jedan uslov postane netačan)
 *
 * 3. Šta radi jedan krug? Četiri koraka:
 *      a) gornji red,  s lijeva na desno   -> pa gore++    (red je gotov)
 *      b) desna kolona, odozgo prema dolje  -> pa desno--
 *      c) donji red,   s desna na lijevo   -> pa dolje--
 *      d) lijeva kolona, odozdo prema gore  -> pa lijevo++
 *
 * 4. Koje odluke / rubni slučajevi?
 *    Kod c) i d) MORAMO ponovo provjeriti ima li još prostora, jer su
 *    se granice u međuvremenu pomjerile. Bez toga, kod neparnog N
 *    (npr. 3 ili 5) srednji element bi se upisao DVA puta.
 *
 * KORISNO: jedna funkcija = jedan posao.
 *    popuniSpiralu : popunjava matricu (ništa ne ispisuje)
 *    ispisiMatricu : ispisuje (ništa ne računa)
 *
 * ZA DODATNE BODOVE na ispitu: prototipe stavi u spirala.h, tijela
 * funkcija u spirala.c, a main u main.c (pogledaj z8).
 * ---------------------------------------------------------------------
 */

#include <stdio.h>

#define N 5

/* Matrica se šalje preko imena, bez []. Druga dimenzija je OBAVEZNA. */
void popuniSpiralu(int m[][N], int n)
{
    int gore = 0;
    int dolje = n - 1;
    int lijevo = 0;
    int desno = n - 1;
    int broj = 1; /* sljedeći broj koji upisujemo */

    while (gore <= dolje && lijevo <= desno)
    {
        /* a) gornji red: lijevo -> desno */
        for (int j = lijevo; j <= desno; j++)
        {
            m[gore][j] = broj;
            broj++;
        }
        gore++;

        /* b) desna kolona: gore -> dolje */
        for (int i = gore; i <= dolje; i++)
        {
            m[i][desno] = broj;
            broj++;
        }
        desno--;

        /* c) donji red: desno -> lijevo (samo ako je ostao red) */
        if (gore <= dolje)
        {
            for (int j = desno; j >= lijevo; j--)
            {
                m[dolje][j] = broj;
                broj++;
            }
            dolje--;
        }

        /* d) lijeva kolona: dolje -> gore (samo ako je ostala kolona) */
        if (lijevo <= desno)
        {
            for (int i = dolje; i >= gore; i--)
            {
                m[i][lijevo] = broj;
                broj++;
            }
            lijevo++;
        }
    }
}

void ispisiMatricu(int m[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrica[N][N];

    popuniSpiralu(matrica, N);
    ispisiMatricu(matrica, N);

    return 0;
}
