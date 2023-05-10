#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    // Wyświetlamy informację o bieżącym katalogu
    printf("Jesteś w katalogu:\n");

    // Wywołujemy program /bin/pwd przy użyciu funkcji execl
    execl("/bin/pwd", "pwd", (char *)0);

    // W przypadku błędu wyświetlamy komunikat
    perror("Błąd uruchamiania pwd");

    return 0;
}
