#include <stdio.h>
/*
 * Semplice esempio di input
 */

int main()
{
    int fattoriale = 1;
    for(int n = 5;n > 0;n--){
        fattoriale=fattoriale*n;
        printf("il fattoriale ora è %d e n è %d\n", fattoriale, n);
    }
    printf("Il fattoriale è: %d\n", fattoriale);

    
    for(int t = 1; t < 10; t++){
        printf("%d\n", t);
    }
    return 0;
}