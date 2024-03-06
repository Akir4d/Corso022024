#include <stdio.h>
/*
 * Questo e' un commento
 */

int main()
{
    int numero = 5;
    numero = 10;
    float pi = 3.14;
    char lettera = 'A';
    int x, y;
    int input;
    printf("Numero intero: ");
    scanf("%d", &input);
    int a = 5, b = 3, risultato;
    risultato = a + b;
    printf("Il risultato è: %d\n", risultato);
    float numeroFloat = 3.14;
    int numeroIntero = (int)numeroFloat;
    printf("il numero Float è %f, mentre intero è %d\n", numeroFloat, numeroIntero);
    int c = 3, d = 4, scambio;
    scambio = c;
    c = d;
    d = scambio;
    printf("inversione c = %d, d = %d\n", c, d);
    return 0;
}
