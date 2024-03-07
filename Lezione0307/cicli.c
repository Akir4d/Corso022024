#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }
    int somma = 0;
    for (int n = 1; n <= 100; n++) {
        somma = somma + n;
        printf("La somma da 1 a %d è %d\n", n,somma);
    }
    //printf("La somma da 1 a 100 è %d\n", somma);
}