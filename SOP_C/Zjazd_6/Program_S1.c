#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void handleSignal(int signalNumber) {
    printf("Otrzymano sygnał %s\n", strsignal(signalNumber));
    exit(EXIT_SUCCESS);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Podaj opcję obsługi sygnału (default/ignore/handle) jako argument wywołania programu\n");
        return 1;
    }

    // Opcja obsługi sygnału przekazywana jako argument wywołania programu
    char *option = argv[1];
    int signalNumber;

    printf("PID procesu: %d\n\n", (int)getpid());
    printf("Program oczekuje na sygnały...\n");

    // Wykonanie operacji domyślnej dla sygnału
    if (strcmp(option, "default") == 0) {
        signalNumber = SIGQUIT;
        signal(SIGQUIT, SIG_DFL);

        signalNumber = SIGINT;
        signal(SIGINT, SIG_DFL);

        signalNumber = SIGUSR1;
        signal(SIGUSR1, SIG_DFL);
    }
    // Ignorowanie sygnałów
    else if (strcmp(option, "ignore") == 0) {
        signalNumber = SIGQUIT;
        signal(SIGQUIT, SIG_IGN);

        signalNumber = SIGINT;
        signal(SIGINT, SIG_IGN);

        signalNumber = SIGUSR1;
        signal(SIGUSR1, SIG_IGN);
    }
    // Przechwycenie i własna obsługa sygnału
    else if (strcmp(option, "handle") == 0) {
        signalNumber = SIGQUIT;
        signal(SIGQUIT, handleSignal);

        signalNumber = SIGINT;
        signal(SIGINT, handleSignal);

        signalNumber = SIGUSR1;
        signal(SIGUSR1, handleSignal);
    } else {
        printf("Nieprawidłowa opcja obsługi sygnału\n");
        return 1;
    }

    while (1) {
        sleep(1);
    }

    return 0;
}
