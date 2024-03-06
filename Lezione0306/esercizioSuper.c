#include <stdio.h>
#include <math.h>
/*
 * Questo e' un commento
 */

int unElemento()
{

    return 0;
}

int dueElementi()
{
    double a, b;
    int scelta;
    printf("\nInserisci il primo: ");
    scanf("%lf", &a);
    printf("\nInserisci il secondo: ");
    scanf("%lf", &b);
    printf("\n1 somma\n2 moltiplicazione\n3 divisione\n4 resto\n5 potenza\n\nScegli: ");
    scanf("%d", &scelta);
    switch (scelta)
    {
    case 1:
        printf("\nla Somma è: %d\n", (int)a+(int)b);
        break;
    default:
        break;
    }
    return 0;
}

int treElementi()
{
    int a, b, c;
    printf("\nInserisci intero 1: ");
    scanf("%d", &a);
    printf("\nInserisci intero 2: ");
    scanf("%d", &b);
    printf("\nInserisci intero 3: ");
    scanf("%d", &c);
    printf("\nLa somma dei tre numeri è: %d\n", a+b+c);
    return 0;
}


int main()
{
    int input;
    printf("Su quanti numeri vuoi operare da 1 a 3? ");
    scanf("%d", &input);
    printf("****************************************\n");

    switch (input)
    {
    case 1:
        unElemento();
        break;
    case 2:
        dueElementi();
        break;
    case 3:
        treElementi();
        break;
    default:
        printf("Ho detto da 1 a 3!\n");
        break;
    }
    return 0;
}


