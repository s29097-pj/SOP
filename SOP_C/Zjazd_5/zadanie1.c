#include <stdio.h>
#include <unistd.h>

int main () {
    printf("PID: %d\n", (int) getpid ()); // wypisuje ID bieżącego procesu
    printf("PPID: %d\n", (int) getppid ()); // wypisuje ID procesu nadrzędnego
    return 0; // zwraca wartość 0 jako kod wyjścia programu
}
