# Zadania w języku C - SOP Laboratorium 6
# SYGNAŁY w UNIX’ach

## Lista sygnałów

**Przygotowanie listy sygnałów:**
```shell
kill -l >lista_sygnalow.txt
```

**Wyświetlenie listy sygnałów:**
```shell
cat lista_sygnalow.txt
```

**Output:**
```shell
 1) SIGHUP       2) SIGINT       3) SIGQUIT      4) SIGILL       5) SIGTRAP
 6) SIGABRT      7) SIGBUS       8) SIGFPE       9) SIGKILL     10) SIGUSR1
11) SIGSEGV     12) SIGUSR2     13) SIGPIPE     14) SIGALRM     15) SIGTERM
16) SIGSTKFLT   17) SIGCHLD     18) SIGCONT     19) SIGSTOP     20) SIGTSTP
21) SIGTTIN     22) SIGTTOU     23) SIGURG      24) SIGXCPU     25) SIGXFSZ
26) SIGVTALRM   27) SIGPROF     28) SIGWINCH    29) SIGIO       30) SIGPWR
31) SIGSYS      34) SIGRTMIN    35) SIGRTMIN+1  36) SIGRTMIN+2  37) SIGRTMIN+3
38) SIGRTMIN+4  39) SIGRTMIN+5  40) SIGRTMIN+6  41) SIGRTMIN+7  42) SIGRTMIN+8
43) SIGRTMIN+9  44) SIGRTMIN+10 45) SIGRTMIN+11 46) SIGRTMIN+12 47) SIGRTMIN+13
48) SIGRTMIN+14 49) SIGRTMIN+15 50) SIGRTMAX-14 51) SIGRTMAX-13 52) SIGRTMAX-12
53) SIGRTMAX-11 54) SIGRTMAX-10 55) SIGRTMAX-9  56) SIGRTMAX-8  57) SIGRTMAX-7
58) SIGRTMAX-6  59) SIGRTMAX-5  60) SIGRTMAX-4  61) SIGRTMAX-3  62) SIGRTMAX-2
63) SIGRTMAX-1  64) SIGRTMAX
```

Kompilacja programu Program_1:
```c
gcc Program_1.c -o Program_1
```

Uruchamianie programu Program_1:
```c
./Program_1
```

## Zadanie 1
## Program odpowie domyslnie na sygnal

### Program_1a.c
```c
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
```
### Opis działania programu:

Program wypisuje PID procesu oraz komunikat, a następnie zawiesza się, oczekując na sygnał. Po otrzymaniu sygnału program kontynuuje swoje działanie.

Aby wysłać sygnał do działającego programu, możesz otworzyć nowe okno terminala i użyć narzędzia `kill` lub `killall`.

**Oto kilka możliwości do przetestowania tego programu:**

1. Wysłanie sygnału `SIGINT` do procesu o PID `5862`, co powinno zakończyć działanie programu. Możesz także użyć kombinacji klawiszy `Ctrl+C` w tym samym oknie terminala, w którym uruchomiony jest program, aby wysłać sygnał `SIGINT`.

Na przykład, jeśli PID programu wynosi **5862**, wykonaj polecenie:
```shell
kill -SIGINT 5862
```

Wynik:
```bash
[1]+  Zakończono           ./program_1a
```

2. Wysłanie sygnału `SIGQUIT`.
Aby to zrobić, otwórz nowe okno terminala i wykonaj polecenie `kill -SIGQUIT <PID>`, gdzie `<PID>` to PID procesu uruchomionego programu. Spowoduje to wywołanie domyślnej obsługi sygnału SIGQUIT, która może skutkować zakończeniem programu.
Jeśli po wysłaniu sygnału SIGQUIT do programu otrzymujesz wyjście w postaci "Wyjście (zrzut pamięci)", oznacza to, że program reaguje na ten sygnał przez wygenerowanie zrzutu pamięci (ang. "core dump").

Przykład:
```shell
kill -SIGQUIT 5862
```

Wynik:
```shell
Wyjście (zrzut pamięci)
```

3. Wysłanie sygnału `SIGUSR1`.
Podobnie jak wyżej, użyj polecenia `kill -SIGUSR1 <PID>` w innym oknie terminala. Wywołanie domyślnej obsługi sygnału `SIGUSR1` może mieć różne skutki, w zależności od tego, jak program został napisany i jak obsługuje ten sygnał.

Przykład:
```shell
kill -SIGUSR1 5862
```

Wynik:
```shell
Sygnał użytkownika 1
```

4. Zakończenie programu kombinacją klawiszy `Ctrl+C`.
Zamiast wysyłania sygnałów z innego okna terminala, możesz przerwać działanie programu, naciskając Ctrl+C w tym samym oknie terminala, w którym program jest uruchomiony. Spowoduje to wysłanie sygnału SIGINT i może zakończyć działanie programu.

Przykład:
```bash
^C
```

Wynik:
```bash
[1]+  Zakończono           ./program_1a
```

Upewnij się, że podczas testowania dostarczasz poprawny `PID` procesu programu, który chcesz przetestować. Możesz go sprawdzić, wykonując program i zapisując wyświetlony PID.

## Zadanie 2
## Program zignoruje sygnały SIGQUIT, SIGINT i SIGUSR1 (tam gdzie jest to możliwe)

### Program_1b.c
```c
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
```
### Opis działania programu:

Ten program ignoruje sygnały `SIGQUIT`, `SIGINT` i `SIGUSR1`, jeśli to jest możliwe. Wykorzystuje funkcję `signal()` do ustawienia obsługi sygnałów na `SIG_IGN`, co oznacza, że te sygnały zostaną zignorowane. Następnie program zawiesza się, oczekując na sygnał. Jeśli otrzyma inny sygnał, program wyświetli odpowiedni błąd.

**Oto opis kolejnych możliwości testowania programu:**

1. Wysłanie sygnału `SIGQUIT`.
W innym oknie terminala wykonaj polecenie `kill -SIGQUIT <PID>`, gdzie <PID> to PID procesu uruchomionego programu. Spowoduje to wysłanie sygnału SIGQUIT do programu. W tym przypadku program zignoruje sygnał SIGQUIT (jeśli to jest możliwe) i będzie kontynuował swoje działanie.

Przykład:
```shell
kill -SIGQUIT 5862
```

Wynik:
Program zignoruje sygnał SIGQUIT i będzie kontynuować działanie.

2. Wysłanie sygnału `SIGINT`.
Podobnie jak wcześniej, użyj polecenia `kill -SIGINT <PID>` w innym oknie terminala, aby wysłać sygnał SIGINT do programu. Program zignoruje sygnał SIGINT (jeśli to jest możliwe) i będzie kontynuować swoje działanie.

Przykład:
```shell
kill -SIGINT 5862
```

Wynik:
Program zignoruje sygnał SIGINT i będzie kontynuować działanie.

3. Wysłanie sygnału `SIGUSR1`.
Podobnie jak wcześniej, użyj polecenia kill -SIGUSR1 <PID> w innym oknie terminala, aby wysłać sygnał SIGUSR1 do programu. Program zignoruje sygnał SIGUSR1 (jeśli to jest możliwe) i będzie kontynuować swoje działanie.

Przykład:
```shell
kill -SIGUSR1 5862
```

Wynik:
Program zignoruje sygnał SIGUSR1 i będzie kontynuować działanie.

4. Zatrzymanie programu kombinacją klawiszy `Ctrl+Z`.
Zamiast wysyłania sygnałów z innego okna terminala, możesz zatrzymać działanie programu, naciskając Ctrl+Z w tym samym oknie terminala, w którym program jest uruchomiony.

Przykład:
```shell
[naciśnij Ctrl+Z w oknie terminala, w którym program jest uruchomiony]
```
Wynik:
```shell
[3]+  Zatrzymano              ./Program_1b
```

Upewnij się, że podczas testowania podajesz poprawny PID procesu programu, który chcesz przetestować. Możesz go sprawdzić, wykonując program i zapisując wyświetlony PID.

## Zadanie 3
## Program przechwyci sygnał i wykona akcję użytkownika (tam gdzie jest to możliwe)

### Program_1c.c

```c
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
```
### Opis działania programu:

Ten program przechwytuje sygnały `SIGQUIT`, `SIGINT` i `SIGUSR1`, które są wywoływane w trakcie działania programu. W przypadku sygnałów `SIGQUIT` i `SIGINT` zostaną wykonane określone akcje przez zdefiniowane funkcje `my_SIGQUIT()` i `my_SIGINT()`. Sygnał `SIGUSR1` zostanie obsłużony przez funkcję `my_SIGUSR1()`, która wyświetli odpowiedni komunikat na ekranie. Po przechwyceniu sygnału program zawiesi się, oczekując na kolejne sygnały. Jeśli otrzyma inny sygnał, program wyświetli odpowiedni komunikat.

**Możliwości testowania programu:**

1. Wysłanie sygnału `SIGQUIT`.

```shell
kill -SIGQUIT <PID>
```

Wysłanie sygnału `SIGQUIT` do programu o podanym <PID> spowoduje wywołanie funkcji `my_SIGQUIT()`. Program wyświetli komunikat `"#### Otrzymano SIGQUIT"` i zakończy działanie poprzez wywołanie funkcji `exit(EXIT_SUCCESS)`.

2. Wysłanie sygnału `SIGINT`.

```shell
kill -SIGINT <PID>
```

Wysłanie sygnału `SIGINT` do programu o podanym <PID> spowoduje wywołanie funkcji `my_SIGINT()`. Program wyświetli komunikat `"#### Otrzymano SIGINT"` i kontynuować swoje działanie.

3. Wysłanie sygnału `SIGUSR1`.

```shell
kill -SIGUSR1 <PID>
```
Wysłanie sygnału `SIGUSR1` do programu o podanym <PID> spowoduje wywołanie funkcji `my_SIGUSR1()`. Program wyświetli komunikat `"#### Otrzymano SIGUSR1"` i będzie kontynuować swoje działanie.

Upewnij się, że podczas testowania dostarczasz poprawny PID procesu programu, który chcesz przetestować. Możesz go sprawdzić, wykonując program i zapisując wyświetlony PID.

## Zadanie S1
## Program do obsługi sygnałów

### Program_S1.c

Napisać program do obsługi sygnałów z możliwościami:
- wykonania operacji domyślnej;
- ignorowania;
- przechwycenia i własnej obsługi sygnału (np. numer sygnału oraz opcję obsługi przekazywać za
pomocą argumentów wywołania programu).

Uruchomić program i wysyłać do niego sygnały przy pomocy sekwencji klawiszy oraz przy pomocy polecenia `kill`.
Uruchomić powyższy program poprzez funkcję `exec` w procesie potomnym innego procesu i wysyłać do niego sygnały poprzez funkcję systemową `kill` z procesu macierzystego.
Uruchomić grupę kilku procesów i wysyłać sygnały do całej grupy procesów.

```c
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
```

**Możliwości testowania programu:**

Program obsługuje różne opcje obsługi sygnałów, które można przekazać jako argument wywołania programu.

Terminal 1:
```bash
./Program_S1
```
```bash
Podaj opcję obsługi sygnału (default/ignore/handle) jako argument wywołania programu
```

Poniżej przedstawiam przykładowe kody do wykonania w terminalu, aby przetestować poszczególne opcje.

1. Wykonanie operacji **domyślnej**:

Uruchomienie programu z opcją `default` spowoduje wykonanie domyślnej operacji:

Terminal 1:
```bash
./Program_S1 default
```

- dla sygnału `SIGINT`, czyli zazwyczaj zakończenie programu.

Terminal 2:
```bash
kill -SIGINT <pid_procesu>
```
Terminal 1:
```bash
<zakończenie_procesu>
```
W przypadku otrzymania sygnału `SIGINT` (np. poprzez naciśnięcie `Ctrl+C`), program również  zakończy swoje działanie.

- dla sygnału `SIGQUIT`, wyjście (zrzut pamięci):

Terminal 1:
```bash
./Program_S1 default
```
Output:
```bash
PID procesu: <pid_procesu>

Program oczekuje na sygnały...
```

Terminal 2:
```bash
kill -SIGQUIT <pid_procesu>
```
Terminal 1:
```bash
Wyjście (zrzut pamięci)
```

- dla sygnału `SIGUSR1`, Syganł użytkownika 1:

Terminal 2:
```bash
kill -SIGUSR1 <pid_procesu>
```
Terminal 1:
```bash
Sygnał użytkownika 1
```

2. **Ignorowanie** sygnału `SIGINT`:

Uruchomienie programu z opcją `ignore` spowoduje zignorowanie sygnału `SIGINT`.

Terminal 1:
```bash
./Program_S1 ignore
```

```bash
PID procesu: <pid_procesu>

Program oczekuje na sygnały...
```
Terminal 2:
```bash
kill -SIGUSR1 <pid_procesu>
```

W przypadku otrzymania sygnału `SIGINT`, `SIGQUIT`, `SIGUSR1` program go zignoruje i będzie kontynuował działanie.

W celu zatrzymania procesu należy użyć klawiszy `Ctrl+Z`.

Terminal 1:
```bash
[2]+  Zatrzymano              ./Program_S1 ignore
```

3. **Własna obsługa** sygnału `SIGINT`:

Uruchomienie programu z opcją `handle` spowoduje obsługę sygnału `SIGINT` przez własną funkcję `handle_SIGINT`.

Terminal 1:
```bash
./Program_S1 handle
```

```bash
PID procesu: <pid_procesu>

Program oczekuje na sygnały...
```

- dla sygnału `SIGINT`, program otrzyma sygnał `Interrupt`:

Terminal 1:
```bash
PID procesu: <pid_procesu>

Program oczekuje na sygnały...
```
Terminal 2:
```bash
kill -SIGINT <pid_procesu>
```
Terminal 1:
```bash
Otrzymano sygnał Interrupt

```

- dla sygnału `SIGQUIT`, program otrzyma sygnał `Quit`:

Terminal 1:
```bash
PID procesu: <pid_procesu>

Program oczekuje na sygnały...
```
Terminal 2:
```bash
kill -SIGQUIT <pid_procesu>
```
Terminal 1:
```bash
Otrzymano sygnał Quit

```

- dla sygnału `SIGUSR1`, program otrzyma sygnał `User defined signal 1`:

Terminal 1:
```bash
PID procesu: <pid_procesu>

Program oczekuje na sygnały...
```
Terminal 2:
```bash
kill -SIGINT <pid_procesu>
```
Terminal 1:
```bash
Otrzymano sygnał User defined signal 1

```
