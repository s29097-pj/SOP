# Zadania w języku C - SOP Laboratorium 5
# Procesy w C

## Zadanie 1
## Wyświetlanie PID i PPID procesów

Utworzyć plik `zadanie1.c`:

```c
#include <stdio.h>  // biblioteka standardowa wejścia/wyjścia
#include <unistd.h> // biblioteka zawierająca funkcje do zarządzania procesami

int main () {
    printf("PID: %d\n", (int) getpid ()); // wypisuje ID bieżącego procesu
    printf("PPID: %d\n", (int) getppid ()); // wypisuje ID procesu nadrzędnego
    return 0; // zwraca wartość 0 jako kod wyjścia programu
}
```

Skompilować i uruchomić zadanie1:

```c
gcc -std=c99 zadanie1.c -o zadanie1
```

>przykładowy output:

```bash
PID: 4905
PPID: 4874
```

>(std=c99 - standard języka C ISO99 https://gcc.gnu.org/c99status.html)

> Opis działania programu:

Ten program wypisuje na standardowe wyjście numer PID (procesu) oraz numer PID procesu nadrzędnego (PPID) w którym został uruchomiony.

## Zadanie 2
## Tworzenie procesów potomnych przy użyciu funkcji fork()"

Utworzyć plik `zadanie2.c`:

```c
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
```

Aby skompilować i uruchomić zadanie2 w systemach Linux lub macOS, należy wykonać następujące kroki:

- Otwórz terminal i przejdź do folderu, w którym znajduje się plik zadanie2.c.

- Skompiluj plik zadanie2.c, wpisując w terminalu następującą komendę i naciskając Enter:

```bash
gcc -o zadanie2 zadanie2.c
```

- Uruchom plik wykonywalny zadanie2, wpisując w terminalu następującą komendę i naciskając Enter:

```bash
./zadanie2
```

>przykładowy output:

```bash
PID glownego programu: 4926
to jest proces macierzysty, a jego PID to: 4926
PID procesu potomnego: 4927
```

> Opis działania programu:

Ten program tworzy nowy proces potomny za pomocą funkcji `fork()`. Proces potomny dziedziczy wiele informacji po procesie macierzystym, takich jak kod, dane i deskryptory plików. Funkcja `getpid()` jest wykorzystywana do wyświetlenia PID procesu głównego. Następnie, funkcja `fork()` jest używana do utworzenia nowego procesu potomnego, a jego PID jest zapisywany do zmiennej `child_pid`. Program korzysta z instrukcji warunkowej `if do` sprawdzenia, czy znajduje się w procesie macierzystym czy potomnym. W przypadku procesu macierzystego, wyświetlane są PID procesów macierzystego i potomnego, a w przypadku procesu potomnego, wyświetlany jest tylko jego PID.

## Zadanie 3
## Wyświetlenie bieżącego katalogu

W tym programie używamy funkcji execl do wywołania programu /bin/pwd, który wyświetla bieżący katalog.

```c
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
```

Aby skompilować i uruchomić ten program, należy wykonać następujące kroki:
- Zapisz powyższy kod jako plik o nazwie `zadanie3.c`.
- Skompiluj plik za pomocą komendy `gcc zadanie3.c -o zadanie3`.
- Uruchom program wpisując `./zadanie3` w terminalu.

> Opis działania programu:

Po wykonaniu powyższych kroków powinien zostać wyświetlony bieżący katalog.

>przykładowy output:

```bash
Jesteś w katalogu:
/home/informatyk/Dokumenty/SOP/SOP_C/Zjazd_5
```

## Zadanie 4
## Program tworzący proces potomny i oczekujący na jego zakończenie

W tym zadaniu należy utworzyć plik `zadanie4.c`, który tworzy nowy proces potomny i czeka na jego zakończenie.

```c
#include <sys/wait.h>
#include <sys/types.h>
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
```

> Opis działania programu:

Program tworzy nowy proces potomny i czeka na jego zakończenie. Jeśli proces potomny zakończył działanie, to proces macierzysty wypisuje informację o jego zakończeniu wraz z kodem zwróconym przez funkcję exit().

> przykładowy output:

```bash
Czekam na zakończenie procesu potomnego...
Proces potomny (PID: 5018) zaczyna działanie...
Czekam na zakończenie procesu potomnego...
Czekam na zakończenie procesu potomnego...
Czekam na zakończenie procesu potomnego...
Czekam na zakończenie procesu potomnego...
Proces potomny (PID: 5018) kończy działanie...
Proces macierzysty: proces potomny (PID: 5018) zakończył działanie, zwracając kod 0
```

## Zadanie 5
## Uruchomienie programu ls za pomocą funkcji fork i execl

Poniższy program w języku C wykorzystuje funkcję `fork`, aby utworzyć proces potomny, a następnie funkcję `execl`, aby uruchomić program `ls -l -a` w procesie potomnym.

```c
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    pid_t mojpid, x;
    mojpid = getpid(); // uzyskanie identyfikatora procesu macierzystego
    printf("[%u]: Uruchamiam ls -l -a\n", mojpid);
    x = fork(); // utworzenie procesu potomnego

    if (x == 0) // kod dla procesu potomnego
    {
        if (execl("/bin/ls", "ls", "-l", "-a", NULL) == -1) // uruchomienie programu ls
        {
            printf("Uruchomienie ls nie powiodlo sie\n");
        }
    }
    else // kod dla procesu macierzystego
    {
        waitpid(x, NULL, 0); // czekanie na zakończenie procesu potomnego
        printf("[%u]: ls -l -a zakonczony\n", mojpid);
    }
    return 0;
}
```

> Opis działania programu:

Po uruchomieniu programu, proces macierzysty wyświetli na ekranie informacje o uruchomieniu programu ls -l -a i oczekuje na zakończenie procesu potomnego. Proces potomny uruchamia program `ls -l -a`, który wyświetla na ekranie listę plików i katalogów w bieżącym katalogu z ich szczegółowymi informacjami. Po zakończeniu procesu potomnego, proces macierzysty wyświetla informację o zakończeniu programu ls -l -a.

> przykładowy output:

```bash
[5073]: Uruchamiam ls -l -a
razem 696
drwxrwxr-x 2 informatyk informatyk   4096 maj 10 14:09 .
drwxrwxr-x 4 informatyk informatyk   4096 maj 10 10:00 ..
-rw-rw-r-- 1 informatyk informatyk   7822 maj 10 14:05 Lab5_SOP_C2_zadania_README.md
-rw-r--r-- 1 informatyk informatyk   9261 maj 10 11:03 Lab5_SOP_README.md
-rw-r--r-- 1 informatyk informatyk 580398 maj  8 00:53 SOP_C2.pdf
-rwxrwxr-x 1 informatyk informatyk  16048 maj 10 13:40 zadanie1
-rw-rw-r-- 1 informatyk informatyk    276 maj 10 13:25 zadanie1.c
-rwxrwxr-x 1 informatyk informatyk  16040 maj 10 13:44 zadanie2
-rw-rw-r-- 1 informatyk informatyk    881 maj 10 12:54 zadanie2.c
-rwxrwxr-x 1 informatyk informatyk  16040 maj 10 13:46 zadanie3
-rw-rw-r-- 1 informatyk informatyk    376 maj 10 13:16 zadanie3.c
-rwxrwxr-x 1 informatyk informatyk  16264 maj 10 13:56 zadanie4
-rw-rw-r-- 1 informatyk informatyk   1281 maj 10 13:55 zadanie4.c
-rwxrwxr-x 1 informatyk informatyk  16168 maj 10 14:09 zadanie5
-rw-rw-r-- 1 informatyk informatyk    757 maj 10 13:38 zadanie5.c
[5073]: ls -l -a zakonczony
```
