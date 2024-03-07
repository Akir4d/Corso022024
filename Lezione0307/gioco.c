#include <stdio.h>

char print_menu() {
    char lettera;
    printf("\nMenu Gioco:\n");
    printf("A -> Inizia una nuova partita\nB -> Esci dal gioco\n");
    printf("Lettera scelta:");
    scanf(" %c", &lettera);
    return lettera;
}

int gioca_livello(char* domanda, char* risposta1, char* risposta2, char* risposta3, int risposta_corretta){
    int punti = 0;
    char risposta;
    char conv[3] = {'A', 'B', 'C'};
    char convm[3] = {'a', 'b', 'c'};
    risposta_corretta--;
    printf("\n%s?\n", domanda);
    printf("A -> %s\n", risposta1);
    printf("B -> %s\n", risposta2);
    printf("C -> %s\n", risposta3);
    printf("Scegli la risposta corretta: ");
    scanf(" %c", &risposta);
    if(conv[risposta_corretta] == risposta || convm[risposta_corretta] == risposta){
        punti++;
    }
    return punti;
}

int main() {
    int sec = 5;
    int punti = 0;
    while (sec > 0){
        sec--;
        char menu = print_menu();
        if(menu == 'B' || menu == 'b') return 0;
        punti = punti + gioca_livello("Di che colore è il mare?", "Rosso", "Bianco", "Blue", 3);
        punti = punti + gioca_livello("Di che colore è il cavallo di Napoleone?", "Nero", "Bianco", "Blue", 2);
        punti = punti + gioca_livello("Come si chiama il prof?", "Pippo", "Eolo", "Paolo", 3);
        printf("il tuo punteggio è %d\n\n\n", punti * 7);
        punti = 0;
    }

    return 0;
}