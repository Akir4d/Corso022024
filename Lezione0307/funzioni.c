#include <stdio.h>

int fattoriale(int n)
{
    int fattoriale = 1;
    while (n > 0)
    {
        fattoriale = fattoriale * n;
        n--;
    }
    return fattoriale;
}

int main()
{
    int num1, ft;
    printf("Scrivi il numero per calcolare il fattoriale: ");
    scanf("%d", &num1);
    ft = fattoriale(num1);
    printf("Il fattoraile di %d è %d\n", num1, ft);
}