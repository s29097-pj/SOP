#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main () {
    pid_t child_pid; // deklaracja zmiennej przechowującej PID procesu potomnego

    printf ("PID glownego programu: %d\n", (int) getpid ()); // wyświetlenie PID procesu głównego

    child_pid = fork (); // utworzenie nowego procesu potomnego i zapisanie jego PID do zmiennej child_pid

    if (child_pid != 0) { // jeśli jesteśmy w procesie macierzystym
        printf ("to jest proces macierzysty, a jego PID to: %d\n", (int) getpid()); // wyświetlenie PID procesu macierzystego
        printf ("PID procesu potomnego: %d\n", (int) child_pid); // wyświetlenie PID procesu potomnego
    }
    else {
        printf ("to jest proces potomny, a jego PID to: %d\n", (int) getpid ()); // jeśli jesteśmy w procesie potomnym, wyświetlenie jego PID
    }

    return 0; // zakończenie programu
}
