#include <stdio.h>
/*
 * Semplice esempio di input
 */

int main()
{
    int n = 5;
    int fattoriale = 1;
    while(n > 0){
        fattoriale=fattoriale*n;
        printf("il fattoriale ora è %d e n è %d\n", fattoriale, n);
        n--;
    }
    printf("Il fattoriale è: %d\n", fattoriale);
    return 0;
}