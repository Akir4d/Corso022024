#include <stdio.h>

int main(){
    int array[10] = {2, 5, 6, 8, 9, 9, 3, 8, 9, 7};
    int somma = 0;
    for (int n = 0; n < 10; n++) {
        int so = somma + array[n];
        printf("La somma di %d + %d (array[%d]) è %d\n", somma, array[n], n, so);
        somma = so;
    }
    
}