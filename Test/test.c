#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int somma(int a, int b)
{
    return a + b;
}

int main()
{
    int numa;
    int numb;
    printf("Ciao\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    printf("\nInserisci il primo numero: ");
    scanf("%d", &numa);
    printf("\nInserisci il secondo numero: ");
    scanf("%d", &numb);
    printf("\nsomma = %d", somma(abs(numa), abs(numb)));
    printf("Hello,\nWorld!\tThis is a tab.\n");
    printf("This will beep. \a\n");
    printf("This is a backspace\b.\n");
    printf("This is a form feed\f\fNew page starts here.\n");
    return 0;
}