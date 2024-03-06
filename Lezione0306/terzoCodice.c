#include <stdio.h>
/*
 * Semplice esempio di input
 */

int main()
{
    int numa;
    int numb;
    int diviso;

    printf("\nInserisci primo numero: ");
    scanf("%d", &numa);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &numb);

    if (numb != 0)
    {
        diviso = numa / numb;
        printf("\nLa divisione è: %d\n", diviso);
    }
    else
    {
        printf("\nNon è possibile dividere per 0!!!\n");
    }
    return 0;
}