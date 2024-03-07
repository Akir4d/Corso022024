#include <stdio.h>

int main(){
    int num1 = 41;
    int num2 = 5;
    int addizione = num1 + num2;
    printf("Addizione di %d + %d = %d\n", num1, num2, addizione);
    printf("Sottrazione di %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Moltiplicazione di %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Divisione di %d / %d = %.2f\n", num1, num2, (float)num1 / (float)num2);
    float num3 = 21;
    float num4 = 5;
    printf("Divisione di %.0f / %.0f = %.2f\n", num3, num4, num3 / num4);
    printf("Divisione di %d / %d = %.2f\n", (int)num3, (int)num4, num3 / num4);
    printf("Modulo di %d su %d = %d\n", num1, num2, num1 % num2);
    return 0;
}