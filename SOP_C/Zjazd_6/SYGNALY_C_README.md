# LABORATORIUM SOP C SYGNAŁY

## SYGNAŁY w UNIX'ach

Najprostszą metodą komunikacji międzyprocesowej w systemie UNIX są sygnały. Umożliwiają one asynchroniczne przerwanie działania procesu przez inny proces lub jądro, aby przerwany proces mógł zareagować na określone zdarzenie. Można je traktować jako software'owe wersje przerwań sprzętowych.

Sygnały mogą pochodzić z różnych źródeł:
- od sprzętu – np. gdy jakiś proces próbuje uzyskać dostęp do adresów spoza własnej przestrzeni adresowej lub kiedy zostanie w nim wykonane dzielenie przez zero.
- od jądra – są to sygnały powiadamiające proces o dostępności urządzeń wejścia wyjścia, na które proces czekał, np. o dostępności terminala.
- od innych procesów – proces potomny powiadamia swojego przodka o tym, że się zakończył.
- od użytkowników – użytkownicy mogą generować sygnały zakończenia, przerwania lub stopu za pomocą klawiatury (sekwencje klawiszy generujące sygnały można sprawdzić komendą `stty -a`).

Sygnały mają przypisane nazwy zaczynające się od sekwencji SIG i są odpowiednio ponumerowane – szczegółowy opis dla danego systemu można znaleźć w: `man 7 signal`. Definicje odpowiednich stałych znajdują się w pliku nagłówkowym `<signal.h>` (lub plikach włączanych w nim). Listę ważniejszych sygnałów została przedstawiona poniżej.

Proces, który otrzymał sygnał, może zareagować na trzy sposoby:
- wykonać operację domyślną:
  - dla większości sygnałów domyślną reakcją jest zakończenie działania procesu, po uprzednim powiadomieniu o tym procesu macierzystego;
  - czasem generowany jest plik zrzutu (ang. core), tzn. obraz pamięci zajmowanej przez proces.
- zignorować sygnał:
  - proces może to zrobić w reakcji na wszystkie sygnały z wyjątkiem dwóch:
    - SIGSTOP (zatrzymanie procesu)
    - SIGKILL (bezwarunkowe zakończenie procesu);
  - dzięki niemożności ignorowania tych dwóch sygnałów, system operacyjny jest zawsze w stanie usunąć niepożądane procesy.
- przechwycić sygnał:
  - przychwycenie sygnału oznacza wykonanie przez proces specjalnej procedury obsługi – po jej wykonaniu proces może powrócić do swojego zasadniczego działania (o ile jest to właściwe w danej sytuacji);
  - podobnie jak ignorować, przechwytywać można wszystkie sygnały z wyjątkiem SIGSTOP i SIGKILL.

Proces potomny dziedziczy po swoim przodku mechanizmy reagowania na wybrane sygnały. Jeżeli jednak potomek uruchomi nowy program przy pomocy funkcji `exec`, to przywrócone zostają domyślne procedury obsługi sygnałów.

## WYSYŁANIE SYGNAŁÓW

Do wysyłania sygnałów do procesów i ich grup służy funkcja systemowa `kill`.
- Pliki włączane: `<sys/types.h>`, `<signal.h>`
- Prototyp: `int kill(pid_t pid, int sig);`
- Zwracana wartość:
  - sukces: 0
  - porażka: -1
  - czy zmienia errno: Tak

Parametr `pid` określa proces lub grupę procesów, do których zostanie wysłany sygnał. Wartość `pid` definiuje, jakie procesy odbierają sygnał:
- `> 0`: Proces o PID = `pid`
- `= 0`: Procesy należące do tej samej grupy co proces wysyłający sygnał
- `< -1`: Procesy należące do grupy o PGID = `-pid`

Parametr `sig` oznacza numer wysyłanego sygnału (można używać nazw symbolicznych). Jeżeli `sig = 0`, to funkcja `kill` nie wysyła sygnału, ale wykonuje test błędów.

Z poziomu powłoki sygnały można wysyłać za pomocą polecenia:
```shell
kill -sig pid
```
Znaczenie parametrów `sig` i `pid` jest takie jak powyżej. Listę nazw symbolicznych sygnałów dla polecenia `kill` można uzyskać wykonując: `kill -l` (nazwy te różnią się od opisanych powyżej nazw sygnałów tym, że pominięto w nich człon SIG).

Sygnał SIGALRM można wysłać posługując się funkcją systemową `alarm`. Funkcja ta generuje sygnał kiedy minie ustalona liczba sekund przekazana przez parametr `sec`. Jeżeli `sec = 0`, to czasomierz zostanie wyzerowany.
- Pliki włączane: `<unistd.h>`
- Prototyp: `unsigned int alarm(unsigned int sec);`
- Zwracana wartość:
  - sukces: liczba pozostałych sekund
  - porażka
  - czy zmienia errno: nie

## OBSŁUGA SYGNAŁÓW

Do modyfikowania sposobu, w jaki proces zareaguje na sygnał, można użyć funkcji `signal`. Prototyp tej funkcji:
- Pliki włączane: `<signal.h>`
- Prototyp: `void (*signal(int sig, void (*handler)(int)))(int);`
- Zwracana wartość:
  - sukces: poprzednia dyspozycja sygnału
  - porażka: SIG_ERR (-1)
  - czy zmienia errno: tak

Łatwiej go zrozumieć posługując się pomocniczą definicją typu `sighandler_t`, będącego wkaźnikiem do funkcji:
```c
typedef void (*sighandler_t)(int);
sighandler_t signal(int sig, sighandler_t handler);
```
Pierwszym parametrem funkcji `signal` jest numer sygnału, który ma być obsłużony (za wyjątkiem SIGKILL i SIGSTOP). Drugim parametrem natomiast jest wskaźnik do funkcji, która ma być wywołana w chwili przybycia sygnału. Funkcja ta może być określona stałymi SIG_DFL, SIG_IGN lub zdefiniowana przez użytkownika. Stała SIG_DFL oznacza domyślną obsługę sygnału, natomiast SIG_IGN oznacza ignorowanie sygnału. Funkcja obsługi sygnału ma jeden parametr typu `int`, do którego zostanie automatycznie wstawiony numer sygnału.

Aby spowodować oczekiwanie procesu na pojawienie się sygnału, można użyć funkcji bibliotecznej `pause`. Funkcja ta zawiesza proces do czasu odebrania sygnału, który nie został zignorowany. Funkcja `pause` wraca tylko w przypadku przechwycenia sygnału i powrotu funkcji obsługi sygnału. Zwraca wtedy wartość -1 i ustawia zmienną `errno` na `EINTR`.

- Pliki włączane: `<unistd.h>`
- Prototyp: `int pause(void);`
- Zwracana wartość:
    - sukces: -1, jeśli sygnał nie powoduje zakończenia procesu
    - porażka
    - czy zmienia errno: tak

Funkcja `signal` występuje we wszystkich wersjach systemu UNIX, ale niestety nie jest niezawodna (może nie obsłużyć poprawnie wielu sygnałów, które następują w krótkim czasie po sobie). Dlatego w standardzie POSIX wprowadzono dodatkową, niezawodną funkcję do obsługi sygnałów o nazwie `sigaction`, ale jest ona niestety bardziej skomplikowana w użyciu od funkcji `signal`.
