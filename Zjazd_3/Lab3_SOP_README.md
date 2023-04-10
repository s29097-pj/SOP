# LABORATORIUM 3 SOP
## BASH

##PARAMETRY zadania

**1.** Napisz program `zad1.sh` wyświetlający:
-a) jego nazwę
-b) kolejno wartości jego argumentów
-c) wszystkie argumenty
-d) liczbę podanych argumentów
-e) ID procesu

>PRZYKŁAD:
>XXXXX@szuflandia:~$ bash zad1.sh a b
>program nazywa się: zad1.sh
>param1: a
>param2: b
>param*: a b
>param#: 2
>proc PID: 25323

>Po uruchomieniu skryptu z argumentami np. ./zad1.sh a b, program wyświetli:

>program nazywa się: zad1.sh
>param1: a
>param2: b
>param*: a b
>param#: 2
>proc PID: 25323

**2.** Napisz program `zad2.sh`, który będzie działał jak *zad1.sh* obsługując dowolną liczbę parametrów

>PRZYKŁAD:
>XXXXX@szuflandia:~$ bash zad2.sh a b c d e f g h i j k
>program nazywa sie: zad2.sh
>param 1: a
>param 2: b
>param 3: c
>param 4: d
>param 5: e
>param 6: f
>param 7: g
>param 8: h
>param 9: i
>param 10: j
>param 11: k
>param*: a b c d e f g h i j k
>param#: 11
>proc PID: 25323

>Skrypt ten wyświetla nazwę programu, a następnie wyświetla pierwsze 9 parametrów (lub mniej, jeśli nie ma ich tyle), a następnie wypisuje pozostałe parametry w pętli. Na końcu wyświetla sumaryczną liczbę parametrów, ich wartości i numer PID procesu, który uruchomił skrypt.

>Przykładowe wywołanie skryptu:

>bash zad2.sh a b c d e f g h i j k

>Spowoduje to wyświetlenie:

>program nazywa sie: zad2.sh
>param 1: a
>param 2: b
>param 3: c
>param 4: d
>param 5: e
>param 6: f
>param 7: g
>param 8: h
>param 9: i
>param 10: j
>param 11: k
>param*: a b c d e f g h i j k
>param#: 11
>proc PID: 25323


##PLIKI I FOLDERY zadania

**3.** Napisz program `zad3.sh`, który sprawdzi czy w bieżącym katalogu istnieje plik podany jako argument wywołania.

>PRZYKŁAD:
>XXXXX@szuflandia:~$ ./zad2.sh maile.txt
>W biezacym folderze jest plik maile.txt
>XXXXX @szuflandia:~$ ./zad2.sh mailer.txt
>W biezacym folderze nie ma mailer.txt

>Kod ten używa warunkowego polecenia if, aby sprawdzić, czy plik istnieje w bieżącym katalogu. Funkcja -e służy do sprawdzenia, czy plik istnieje. 
>Jeśli plik istnieje, program wyświetli komunikat "W bieżącym folderze jest plik [nazwa_pliku]", 
>a jeśli plik nie istnieje, program wyświetli komunikat "W bieżącym folderze nie ma pliku [nazwa_pliku]".

>Aby uruchomić ten program, należy go uruchomić jako plik zad3.sh w bieżącym katalogu, a następnie wywołać go, podając nazwę pliku jako argument:

>$ bash zad3.sh maile.txt
>W bieżącym folderze jest plik maile.txt

>$ bash zad3.sh mailer.txt
>W bieżącym folderze nie ma pliku mailer.txt

**4.** Napisz program `zad4.sh`, który będzie wyświetlał menu wyboru oraz w zależności od wyboru:
-c – aktualny katalog
-u - nazwę użytkownika
-h - katalog domowy

>Kod ten wyświetla menu wyboru, pobiera wybór użytkownika i używa instrukcji case do wyświetlenia odpowiedniej informacji w zależności od wyboru. 
>Jeśli użytkownik wybierze inną opcję, niż 'c', 'u', lub 'h', program wyświetli informację o błędzie.


>warianty:

>**zad41.sh** 
– zastosować własne funkcje menu oraz wybor

>Kod ten wyświetla menu wyboru, pobiera wybór użytkownika i używa instrukcji case do wyświetlenia odpowiedniej informacji w zależności od wyboru. 
>Jeśli użytkownik wybierze inną opcję, niż 'c', 'u', lub 'h', program wyświetli informację o błędzie.

>**zad4s.sh** 
– funkcje menu oraz wybor czytać z własnej biblioteki `funkcje.f`

>Zmodyfikowany program zawiera dodatkowe funkcje menu: "d" (wolne miejsce na dysku) i "t" (aktualny czas) oraz opcję "q" (wyjście z programu). 
>Program wyświetla menu wyboru w nieskończonej pętli while, aż do momentu, gdy użytkownik wybierze opcję "q" i wyjdzie z programu.

>W tym przypadku używamy funkcji source, aby zaimportować funkcje z pliku funkcje.f. 
>Następnie, zamiast pobierać wybór użytkownika z wiersza poleceń, korzystamy z funkcji menu z pliku funkcje.f,
>aby wyświetlić menu i pobrać wybór użytkownika. Cała reszta programu jest taka sama jak w poprzedniej wersji.

>W pliku `funkcje.f` definiujemy dwie funkcje - menu i wolne_miejsce. Funkcja menu wyświetla menu wyboru i pobiera wybór użytkownika. Funkcja wolne_miejsce wywołuje polecenie df -h, aby wyświetlić informacje o wolnym miejscu na dysku.
>Następnie, aby umożliwić korzystanie z funkcji z poziomu innych skryptów, używamy polecenia export -f, 
>aby dodać funkcje menu i wolne_miejsce do listy funkcji, które są dostępne z poziomu innych skryptów.

>Dzięki takiemu podejściu, możemy zaimportować funkcje z pliku funkcje.f do innych skryptów, np. do programu zad4s.sh, który wykorzystuje funkcję menu.