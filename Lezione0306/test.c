#include <stdio.h>

int main() {
    int varInt = 10;
    int *i = &varInt; // i ora contiene l'indirizzo di varInt
    char varChar = 'A';
    char *c = &varChar; // c ora contiene l'indirizzo di varChar
    
    printf("L'indirizzo di varInt è: %p\n", (void*)i);
    printf("Il valore puntato da i è: %d\n", *i);
    printf("L'indirizzo di varChar è: %p\n", (void*)c);
    printf("Il valore puntato da c è: %c\n", *c);

    return 0;
}