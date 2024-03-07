#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h> // Necessario per sleep

// Funzione eseguita dal thread 1
void *threadFunction1(void *arg) {
    printf("Thread 1 inizia\n");
    sleep(20); // Pausa di 20 secondi
    printf("Thread 1 riprende dopo 20 secondi\n");
    return NULL;
}

// Funzione eseguita dal thread 2
void *threadFunction2(void *arg) {
    printf("Thread 2 inizia\n");
    sleep(10); // Pausa di 10 secondi
    printf("Thread 2 riprende dopo 10 secondi\n");
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    int ret1, ret2;

    // Crea il thread 1
    ret1 = pthread_create(&thread1, NULL, threadFunction1, NULL);
    if (ret1) {
        fprintf(stderr, "Errore nella creazione del thread 1: %d\n", ret1);
        exit(EXIT_FAILURE);
    }

    // Crea il thread 2
    ret2 = pthread_create(&thread2, NULL, threadFunction2, NULL);
    if (ret2) {
        fprintf(stderr, "Errore nella creazione del thread 2: %d\n", ret2);
        exit(EXIT_FAILURE);
    }

    // Aspetta la fine dei thread
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Entrambi i thread sono terminati\n");
    return 0;
}
