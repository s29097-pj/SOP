# LABORATORIUM 3 SOP
## BASH

## INFO 
### Uruchamianie skryptów Bash

Aby uruchamiać skrypty w Bashu, należy wykonać następujące kroki:

- Otwórz edytor tekstu (np. Notatnik, Nano, Visual Studio Code) i stwórz nowy plik.
- Zapisz plik z rozszerzeniem `.sh` (np. skrypt.sh).
- Wpisz kod skryptu w języku Bash w edytorze tekstu.
- Zapisz zmiany w pliku.
- Nadaj uprawnienia do wykonania skryptu za pomocą polecenia `chmod +x skrypt.sh`
- Uruchom skrypt, wpisując w terminalu `./skrypt.sh`

Ważne jest, aby upewnić się, że skrypt zawiera poprawną składnię Bash i jest zgodny z wymaganiami systemu operacyjnego, na którym ma być uruchomiony.

## PARAMETRY

### Zadania

---

1. Napisz program `zad1.sh` wyświetlający:
 
- a) jego nazwę
- b) kolejno wartości jego argumentów
- c) wszystkie argumenty
- d) liczbę podanych argumentów
- e) ID procesu

```shell
# przykładowe uruchomienie skryptu z argumentami
$ bash zad1.sh a b
```


```shell
# alternatywnie można też uruchomić w ten sposób
$ ./zad1.sh a b
```

```shell
# przykład wyniku działania programu
program nazywa się: zad1.sh
param1: a
param2: b
param*: a b
param#: 2
proc PID: 12345
```
---

**2.** Napisz program `zad2.sh`, który będzie działał jak **zad1.sh** obsługując dowolną liczbę parametrów.

```shell
# przykładowe uruchomienie skryptu z argumentami
$ bash zad2.sh a b c d e f g h i j k
```

```shell
# alternatywnie można też uruchomić w ten sposób
$ ./zad2.sh a b c d e f g h i j k
```

```shell
# przykład wyniku działania programu
program nazywa się: zad2.sh a b c d e f g h i j k
param 1: a
param 2: b
param 3: c
param 4: d
param 5: e
param 6: f
param 7: g
param 8: h
param 9: i
param 10: j
param 11: k
param*: a b c d e f g h i j k
param#: 11
proc PID: 12345
```

>Skrypt ten wyświetla nazwę programu, a następnie wyświetla pierwsze 9 parametrów (lub mniej, jeśli nie ma ich tyle), a następnie wypisuje pozostałe parametry w pętli. Na końcu wyświetla sumaryczną liczbę parametrów, ich wartości i numer PID procesu, który uruchomił skrypt.


## PLIKI I FOLDERY 
### Zadania

---

**3.** Napisz program `zad3.sh`, który sprawdzi czy w bieżącym katalogu istnieje plik podany jako argument wywołania.

```shell
# przykładowe uruchomienie skryptu z argumentami, kiedy jest plik maile.txt
$ bash zad3.sh maile.txt
```

```shell
# alternatywnie można też uruchomić w ten sposób, kiedy jest plik maile.txt
$ ./zad3.sh maile.txt
```

```shell
# przykład wyniku działania programu, kiedy jest plik maile.txt
w bieżącym folderze nie ma pliku maile.txt```

```shell
# przykładowe uruchomienie skryptu z argumentami, kiedy nie ma pliku mailer.txt
$ bash zad3.sh mailer.txt
```

```shell
# alternatywnie można też uruchomić w ten sposób, kiedy nie ma pliku mailer.txt
$ ./zad3.sh mailer.txt
```

```shell
# przykład wyniku działania programu, kiedy nie ma pliku mailer.txt
w bieżącym folderze nie ma pliku mailer.txt
```

>Kod ten używa warunkowego polecenia if, aby sprawdzić, czy plik istnieje w bieżącym katalogu. 
>Funkcja -e służy do sprawdzenia, czy plik istnieje. 
>Jeśli plik istnieje, program wyświetli komunikat "W bieżącym folderze jest plik [nazwa_pliku]", 
>a jeśli plik nie istnieje, program wyświetli komunikat "W bieżącym folderze nie ma pliku [nazwa_pliku]".

---

**4.** Napisz program `zad4.sh`, który będzie wyświetlał menu wyboru oraz w zależności od wyboru:
- c – aktualny katalog
- u - nazwę użytkownika
- h - katalog domowy

>Kod ten wyświetla menu wyboru, pobiera wybór użytkownika i używa instrukcji case do wyświetlenia odpowiedniej informacji w zależności od wyboru. 
>Jeśli użytkownik wybierze inną opcję, niż 'c', 'u', lub 'h', program wyświetli informację o błędzie.

```shell
# przykładowe uruchomienie skryptu z argumentami
$ bash zad4.sh mailer.txt
```

```shell
# alternatywnie można też uruchomić w ten sposób
$ ./zad4.sh mailer.txt
```

```shell
# przykład wyniku działania programu
Menu wyboru:
c - aktualny katalog
u - nazwa użytkownika
h - katalog domowy
Wybierz opcję: c
Aktualny katalog: /home/user/Projects
```

```shell
Menu wyboru:
c - aktualny katalog
u - nazwa użytkownika
h - katalog domowy
Wybierz opcję: u
Nazwa użytkownika: user
```

```shell
Menu wyboru:
c - aktualny katalog
u - nazwa użytkownika
h - katalog domowy
Wybierz opcję: h
Katalog domowy: /home/user
```

```shell
Menu wyboru:
c - aktualny katalog
u - nazwa użytkownika
h - katalog domowy
Wybierz opcję: x
Błędna opcja wyboru.
```
---

**Warianty:**

---

**zad41.sh** 
>Zastosować własne funkcje menu oraz wybor.

>Kod ten wyświetla menu wyboru, pobiera wybór użytkownika i używa instrukcji case do wyświetlenia odpowiedniej informacji w zależności od wyboru. 
>Jeśli użytkownik wybierze inną opcję, niż 'c', 'u', lub 'h', program wyświetli informację o błędzie.

```shell
# przykładowe uruchomienie skryptu
$ bash zad41.sh
```

```shell
# alternatywnie można też uruchomić w ten sposób
$ ./zad41.sh
```

```shell
# przykład wyniku działania programu
Menu wyboru:
c - aktualny katalog
u - nazwa użytkownika
h - katalog domowy
d - wolne miejsce na dysku
t - aktualny czas
q - wyjście z programu
Wybierz opcję: c
Aktualny katalog: /home/user/Projects
Wybierz opcję: u
Nazwa użytkownika: user
Wybierz opcję: h
Katalog domowy: /home/user
Wybierz opcję: d
Filesystem      Size  Used Avail Use% Mounted on
/dev/sda1        20G  7.9G   12G  41% /
tmpfs           1.6G   96K  1.6G   1% /dev/shm
/dev/sdb1       459G  135G  301G  31% /home
Wybierz opcję: t
Aktualny czas: 13:30:45
Wybierz opcję: x
Błędna opcja wyboru. Wybierz ponownie.
Wybierz opcję: q
Do widzenia!
```
---

**zad4s.sh** 
Funkcje menu oraz wybor czytać z własnej biblioteki `funkcje.f`

```shell
# przykładowe uruchomienie skryptu
$ bash zad4s.sh
```

```shell
# alternatywnie można też uruchomić w ten sposób
$ ./zad4s.sh
```

```shell
# przykład wyniku działania programu
Menu wyboru:
c - aktualny katalog
u - nazwa użytkownika
h - katalog domowy
d - wolne miejsce na dysku
t - aktualny czas
q - wyjście z programu

Wybierz opcję: c
Aktualny katalog: /home/user

Wybierz opcję: d
System plików    rozm. użyte dost. %uż. zamont. na
udev             7,9G     0  7,9G   0% /dev
tmpfs            1,6G  1,9M  1,6G   1% /run
/dev/sda1        229G   24G  193G  11% /
tmpfs            7,9G  320K  7,9G   1% /dev/shm
tmpfs            5,0M     0  5,0M   0% /run/lock
tmpfs            7,9G     0  7,9G   0% /sys/fs/cgroup
tmpfs            1,6G   24K  1,6G   1% /run/user/1000

Wybierz opcję: t
Aktualny czas: 11:32:45

Wybierz opcję: q
Do widzenia!
```

>Zmodyfikowany program zawiera dodatkowe funkcje menu: "d" (wolne miejsce na dysku) i "t" (aktualny czas) oraz opcję "q" (wyjście z programu). 
>Program wyświetla menu wyboru w nieskończonej pętli while, aż do momentu, gdy użytkownik wybierze opcję "q" i wyjdzie z programu.
>
>W tym przypadku używamy funkcji source, aby zaimportować funkcje z pliku funkcje.f. 
>Następnie, zamiast pobierać wybór użytkownika z wiersza poleceń, korzystamy z funkcji menu z pliku funkcje.f,
>aby wyświetlić menu i pobrać wybór użytkownika. Cała reszta programu jest taka sama jak w poprzedniej wersji.
>
>W pliku `funkcje.f` definiujemy dwie funkcje - menu i wolne_miejsce. Funkcja menu wyświetla menu wyboru i pobiera wybór użytkownika. Funkcja wolne_miejsce wywołuje polecenie df -h, aby wyświetlić informacje o wolnym miejscu na dysku.
>Następnie, aby umożliwić korzystanie z funkcji z poziomu innych skryptów, używamy polecenia export -f, 
>aby dodać funkcje menu i wolne_miejsce do listy funkcji, które są dostępne z poziomu innych skryptów.
>
>Dzięki takiemu podejściu, możemy zaimportować funkcje z pliku funkcje.f do innych skryptów, np. do programu zad4s.sh, który wykorzystuje funkcję menu.