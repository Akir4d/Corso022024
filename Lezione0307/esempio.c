#include <stdio.h>

void scriviVettore(int *ptr)
{
    // Cicliamo 10 volte per inserire i numeri interi
    for (int i = 0; i < 10; i++)
    {
        printf("Inserisci un numero per %d: ", i);
        scanf("%d", ptr);
        ptr++;
    }
}

void leggiVettore(int *ptr)
{
    // Cicliamo 10 volte per stampare i 10 elementi del vettore
    for (int i = 0; i < 10; i++)
    {
        printf("Elemento %d del vettore: %d\n", i, *ptr);
        ptr++;
    }
}

int main()
{
    // Dichiarazione e inizializzazione di un array di 10 interi
    // con tutti gli elementi a 0
    int n[10] = {0};

    // Dichiarazione di un puntatore a intero
    int *n_ptr;

    // Assegniamo al puntatore l'indirizzo del primo elemento dell'array
    n_ptr = &n[0];

    scriviVettore(n_ptr);
    leggiVettore(n_ptr);
}