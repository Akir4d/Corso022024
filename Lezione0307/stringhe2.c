#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[20] = {'\0'};
    printf("Inserisci esattamente 'Ciao':");
    scanf("%s", stringa1);
    char stringa2[] = "Mondo";
    char stringa3[] = "Ciao";

    // Confronta stringa1 e stringa2
    if (strcmp(stringa1, stringa2) == 0) {
        printf("%s e %s sono uguali\n", stringa1, stringa2);
    } else {
        printf("%s e %s non sono uguali\n", stringa1, stringa2);
    }

    // Confronta stringa1 e stringa3
    if (strcmp(stringa1, stringa3) == 0) {
        printf("%s e %s sono uguali\n", stringa1, stringa3);
    } else {
        printf("%s e %s non sono uguali\n", stringa1, stringa3);
    }

    strcat(stringa1, " ");
    strcat(stringa1, stringa2);
    strcat(stringa1, "!");
    printf("%s\n", stringa1);

    return 0;
}