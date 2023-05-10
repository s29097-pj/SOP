#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int status, exit_status;
    pid_t pid = fork(); // utworzenie nowego procesu potomnego

    if (pid < 0) // jeśli fork zwrócił wartość ujemną, oznacza to błąd
        printf("ERROR! Nie można utworzyć nowego procesu\n");

    if (pid == 0) // proces potomny
    {
        printf("Proces potomny (PID: %d) zaczyna działanie...\n", getpid());

        sleep(5); // proces potomny jest uśpiony na 5 sekund

        printf("Proces potomny (PID: %d) kończy działanie...\n", getpid());
        exit(0); // wyjście z procesu potomnego z kodem 0
    }

    // proces macierzysty
    while (waitpid(pid, &status, WNOHANG) == 0)
    {
        // jeśli waitpid zwróci 0, to oznacza to, że proces potomny wciąż działa
        printf("Czekam na zakończenie procesu potomnego...\n");
        sleep(1);
    }

    // jeśli waitpid zwróci wartość dodatnią, to oznacza to, że proces potomny zakończył działanie
    exit_status = WEXITSTATUS(status); // wyciągnięcie wartości ze zwracanej przez waitpid
    printf("Proces macierzysty: proces potomny (PID: %d) zakończył działanie, zwracając kod %d\n", pid, exit_status);

    return 0;
}
