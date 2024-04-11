#include <stdio.h>
#include <string.h>

int main() {
    char overflowBuffer[10]; // Buffer piccolo dove simuliamo l'overflow
    int variableToBeOverwritten  = 100;

    printf("Prima: variableToBeOverwritten = %d\n", variableToBeOverwritten);

    printf("Inserisci un input: ");
    char safeBuffer[256]; // Buffer grande per l'input sicuro
    if (fgets(safeBuffer, sizeof(safeBuffer), stdin)) {
        // Rimozione del carattere di nuova linea, se presente
        safeBuffer[strcspn(safeBuffer, "\n")] = 0;

        // Copia controllata dell'input nel buffer più piccolo per simulare un overflow
        // Attenzione: qui stiamo facendo intenzionalmente un overflow per dimostrazione
        strcpy(overflowBuffer, safeBuffer); // Usiamo strcpy per enfatizzare la simulazione dell'overflow
        
        // Nota: in pratica, mai usare strcpy senza prima verificare le dimensioni!
    }

    printf("Dopo: variableToBeOverwritten = %d\n", variableToBeOverwritten);

    return 0;
}
