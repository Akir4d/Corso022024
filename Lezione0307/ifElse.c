#include <stdio.h>

int main(){
    int num1, num2;
    printf("Scrivi il primo numero: ");
    scanf("%d", &num1);
     printf("Scrivi il secondo numero: ");
    scanf("%d", &num2);
    int s = num1 - num2;
    if (s > 0) {
        printf("%d è positivo!\n", s);
    } else if (s < 0) { 
        printf("%d è negativo!\n", s);
    } else printf("%d è zero!\n", s); // se unico comando no servono le {}
    
}