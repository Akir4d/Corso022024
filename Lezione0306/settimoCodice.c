#include <stdio.h>
/*
* Semplice esempio di input
*/

int somma(int a, int b){
    int somma = a + b;
    return somma;
}


int main(){
    int numa; 
    int numb;

    printf("\nInserisci primo numero: ");
    scanf("%d", &numa);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &numb);
    printf("\nLa somma è: %d\n", somma(numa, numb));

    return 0;
}