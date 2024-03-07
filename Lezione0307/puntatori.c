#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printInfo(char *str)
{
    printf("\nStringa: %s\n \e[1;30mLunghezza %d\e[0m\n", str, (int)(strlen(str) / sizeof(char)));
}

void reallocCheck(char *str, char *newStr)
{
    if (str != newStr)
    {
        printf(" Indirizzo cambiato dopo realloc da \e[1;31m%p a %p\e[0m\n", (void *)str, (void *)newStr);
    }
    else
    {
        printf(" Indirizzo rimasto invariato dopo realloc \e[1;33m%p\e[0m\n", (void *)newStr);
    }
}

char *aggiungiParole(char *stringa, char *parole)
{
    // Dimensione originale + lunghezza nuova stringa + 1 del char \0 finale
    size_t nuovaDimensione = strlen(stringa) + strlen(parole) + 1;
    // Aumentiamo le dimensioni di allocazione
    char *newStr = realloc(stringa, nuovaDimensione);
    // Controlliamo se è cambiato
    reallocCheck(stringa, newStr);
    stringa = newStr; // Aggiorna con il nuovo indirizzo, se cambiato
    strcat(stringa, parole); // Aggiunge al contenuto esistente
    printInfo(stringa);
    return stringa;
}

int main()
{
    printf("\n");
    char *str = malloc(strlen("Ciaù")); // Allocazione

    printf("Indirizzo: \e[1;33m%p\e[0m\n", (void *)str);
    strcpy(str, "Ciaù"); // Copia iniziale nella stringa
    printInfo(str);
    str = aggiungiParole(str, "\e[1;34m Mondo!\e[0m");
    str = aggiungiParole(str, " Questa funzione aggiunge stringa a \e[1;31mstringa\e[0m");
    str = aggiungiParole(str, " e fa il \e[1;35mcheck!\e[0m");
    printf(" Indirizzo finale: \e[1;33m%p\e[0m\n", (void *)str);

    free(str);  // Rilascio della memoria
    str = NULL; // evitiamo il dangling pointers
    printf("\nIndirizzo dopo free: \e[1;32m%p\e[0m\n\n", (void *)str);

    return 0;
}
