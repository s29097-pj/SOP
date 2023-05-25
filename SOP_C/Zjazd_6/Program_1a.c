#include <signal.h>     // Biblioteka dla obsługi sygnałów
#include <stdio.h>      // Biblioteka do operacji wejścia/wyjścia
#include <stdlib.h>     // Biblioteka do funkcji ogólnego użytku, takich jak exit()
#include <sys/types.h>  // Biblioteka zawierająca definicje typów danych systemowych
#include <unistd.h>     // Biblioteka do operacji systemowych, takich jak getpid()
#include <sys/errno.h>  // Biblioteka zawierająca definicje kodów błędów

int main() {
    printf("PID procesu: %d\n\n", (int) getpid());   // Wyświetlanie PID procesu

    printf("Program odpowie domyslnie na sygnal\n");

    // Ustawienie domyślnej obsługi dla sygnału SIGQUIT
    if (signal(SIGQUIT, SIG_DFL) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGQUIT");
        exit(EXIT_FAILURE);
    }

    // Ustawienie domyślnej obsługi dla sygnału SIGINT
    if (signal(SIGINT, SIG_DFL) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGINT");
        exit(EXIT_FAILURE);
    }

    // Ustawienie domyślnej obsługi dla sygnału SIGUSR1
    if (signal(SIGUSR1, SIG_DFL) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGUSR1");
        exit(EXIT_FAILURE);
    }

    if (pause() < 0) {   // Oczekiwanie na otrzymanie sygnału
        perror("ERROR: sygnal nie powoduje zakonczenia procesu");
        exit(EXIT_FAILURE);
    }

    return 0;
}
