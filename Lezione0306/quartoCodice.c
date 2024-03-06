#include <stdio.h>
/*
 * Semplice esempio di input
 */

int main()
{
    int numa;

    printf("\nDimmi un numero da 1 a 3: ");
    scanf("%d", &numa);
    switch(numa){
        case 0:
            printf("Quasi te lo incremento di 1  -> ");
        case 1:
            printf("Mi piace è una buona soluzione\n");
            break;
        case 2:
            printf("Ti piace osare\n");
            break;
        case 4: 
            printf("Non ");
        case 3:
            printf("Hai ottenuto il massimo\n");
            break;
        default:
            printf("Ho detto un numero da 1 a 3!!!\n");
    }
    
    return 0;
}