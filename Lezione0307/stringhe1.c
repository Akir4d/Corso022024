#include <stdio.h>

int main() {
    char stringa1[20] = {'\0'};
    char stringa2[] = "Ciao";
    printf("Scrivi esattamente 'Ciao':");
    scanf("%s", stringa1);
    // non si possono comparare 2 array dà errore
    // if(stringa1 == stringa2) printf("%s\n", stringa1);
    // ma possiamo comparare il primo carattere
    if(stringa1[0] == stringa2[0]) printf("%s\n", stringa1);
    return 0;
}