#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/errno.h>

int main() {
    int a = 1;

    printf("PID procesu: %d\n\n", (int) getpid());
    printf("Program zignoruje sygnał (tam gdzie jest to możliwe)\n");

    // Ignorowanie sygnału SIGQUIT
    if (signal(SIGQUIT, SIG_IGN) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGQUIT");
        exit(EXIT_FAILURE);
    }

    // Ignorowanie sygnału SIGINT
    if (signal(SIGINT, SIG_IGN) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGINT");
        exit(EXIT_FAILURE);
    }

    // Ignorowanie sygnału SIGUSR1
    if (signal(SIGUSR1, SIG_IGN) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGUSR1");
        exit(EXIT_FAILURE);
    }

    // Oczekiwanie na sygnał
    if (pause() < 0) {
        perror("ERROR: sygnał nie powoduje zakończenia procesu");
        exit(EXIT_FAILURE);
    }

    return 0;
}
