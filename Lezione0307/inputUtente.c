#include <stdio.h>

int main(){
    int num1, num2;
    printf("Scrivi il primo numero: ");
    scanf("%d", &num1);
     printf("Scrivi il secondo numero: ");
    scanf("%d", &num2);
    printf("La somma di %d + %d = %d\n", num1, num2, num1 + num2);
}