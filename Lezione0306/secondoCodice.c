#include <stdio.h>
/*
* Semplice esempio di input
*/

int main(){
    int numa; 
    int numb;
    int somma;

    printf("\nInserisci primo numero: ");
    scanf("%d", &numa);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &numb);

    somma = numa + numb;

    printf("\nLa somma è: %d\n", somma);

    return 0;
}