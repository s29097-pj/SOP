#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/errno.h>

void my_SIGINT(int sig);
void my_SIGQUIT(int sig);
void my_SIGKILL(int sig);
void my_SIGUSR1(int sig);

int main() {
    int a = 1;

    printf("PID procesu: %d\n\n", (int) getpid());
    printf("Program przechwyci sygnał i wykona akcję użytkownika (tam gdzie jest to możliwe)\n");

    // Przechwytuje sygnał SIGQUIT i wywołuje funkcję my_SIGQUIT
    if (signal(SIGQUIT, my_SIGQUIT) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGQUIT");
        exit(EXIT_FAILURE);
    }

    // Przechwytuje sygnał SIGINT i wywołuje funkcję my_SIGINT
    if (signal(SIGINT, my_SIGINT) == SIG_ERR) {
        perror("Funkcja signal ma problem z SIGINT");
        exit(EXIT_FAILURE);
    }

    // Przechwytuje sygnał SIGUSR1 i wywołuje funkcję my_SIGUSR1
    if (signal(SIGUSR1, my_SIGUSR1) == SIG_ERR) {
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

void my_SIGINT(int sig) {
    printf("#### Otrzymano SIGINT\n");
    // exit(EXIT_SUCCESS);
}

void my_SIGQUIT(int sig) {
    printf("#### Otrzymano SIGQUIT\n");
    exit(EXIT_SUCCESS);
}

void my_SIGKILL(int sig) {
    printf("#### Otrzymano SIGKILL\n");
    exit(EXIT_SUCCESS);
}

void my_SIGSTOP(int sig) {
    printf("#### Otrzymano SIGQUIT\n");
    exit(EXIT_SUCCESS);
}

void my_SIGUSR1(int sig) {
    printf("#### Otrzymano SIGUSR1\n");
    // exit(EXIT_SUCCESS);
}
