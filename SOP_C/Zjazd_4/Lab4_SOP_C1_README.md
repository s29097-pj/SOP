# LABORATORIUM 4 SOP
## JĘZYK C

## WPROWADZENIE

### KOMPILACJA I URUCHAMIANIE

Po zapisaniu zmian w pliku `nazwa_pliku.c` nadchodzi czas na kompilację programu. W tym celu w powłoce linuxa wykonujemy polecenie:

```shell
gcc nazwa_pliku.c –o nazwa_pliku
```
Gdybyśmy potrzebowali uzyskać więcej informacji o błędach i ostrzeżeniach, wówczas pomocne byłoby wywołanie z parametrem `Wall`:

```shell
gcc –Wall nazwa_pliku.c –o nazwa_pliku
```

Aby uruchomić nasz program wykonujemy:

```shell
./nazwa_pliku
```

## PROGRAMY

### HELLO SOP C WORLD

**p11.c**

Pierwszy program w C polegający na wyświetleniu na ekranie tekstu **Hello SOP C World!**.
Został utworzony poprzez polecenie `touch p11.c` i edytowany za pomocą edytora ASCII (nano)

kompilacja:
```shell
gcc p11.c –o p11
```

uruchamianie:
```shell
./p11
```

### PRINTF do wyświetlania zmiennej

**p12.c**

Program wyświetla zawartość zmiennej dowolnego typu za pomocą instrukcji `printf()`

typy zmiennych:
- liczby całkowite (int);
- liczby zmiennoprzcinkowe (float);
- znaki (char);
- ciągi znaków;

_Analizując linię: `int num=1000`_

nazwa zmiennej:
- num

znak przypisania:
- =

wartość przypisana:
- 1000

deklaracja zmiennej:
- int num;

definicja zmiennej (wartość):
- num=1000

znak przekształcenia:
- %d- int;
- %f- float;
- %c- char;
- %s- string (ciąg znaków)

### DEFINE

```
// zmienna globalna:
`#define NUM 1000
```

Zdefiniowana została tutaj zmienna globalna. W tym celu posłużyliśmy się dyrektywą #define, w linijce z którą podaliśmy nazwę zmiennej- NUM, oraz jej wartość- 100.

### SCANF

**p13.c**

Działanie programu polega na wczytaniu dwóch liczb zmiennoprzecinkowych i wyświetleniu ich sumy.

W celu wczytania liczb posługujemy się funkcją `scanf()` z pliku nagłówkowego **stdio.h**.

```
scanf("%f",&l1);
```
```output
Podaj 1 liczbę:
...
Podaj 2 liczbę:
Suma: ...
```

**p14.c**

Program pozwala na obliczenie objętości prostopadłościanu dla podanych rozmiarów.

```output
jednostki musza byc zgodne!
podaj szerokosc prostopadloscianu:
...
podaj dlugosc prostopadloscianu:
...
podaj wysokosc prostopadloscianu:
...
objetosc wynosi: ... j^3
```

### FUNKCJE

**p15.c**

Program zawiera funkcję przeliczającą `float przelicz (float w_dolarach);`, `funty=przelicz(dolary);`

Program został wzbogacony o funkcję przeliczającą podaną kwotę w dolarach na kwotę w funtach.
Funkcja przeliczająca pobiera kwotę w dolarach, wykonuje na niej operację i zwraca jakąś wartość (w tym wypadku kwotę w funtach).

```output
podaj kwote w dolarach
...
... $ to ... funta/funtow
```

**p16.c**

Funkcje mogą być deklarowane i definiowane na kilka sposobów, dlatego możemy wyróżnić następujące możliwości:
- "pobieram wartość/wartości i zwracam wartość/wartości do programu głównego";
- "pobieram wartość/wartości, ale nic nie zwracam";
- "nie pobieram żadnych wartości, a mimo tego zwracam coś do programu głównego";
- "nic nie pobieram, ani nic nie zwracam".

```output
Podaj liczbe calkowita:
...
Podana liczba wynosi: ...
```

### IF... ELSE...

**p17.c**

Program sprawdza, czy podana liczba jest parzysta, czy nieparzysta.

instrukcje sterujące:
- `if` (warunek)

operator przypisania:
- `==`

instrukcje składowe:
- `else` (jeśli warunek zostanie spełniony)

Sprawdzanie parzystości liczby uzyskujemy za pomocą operatora reszty dzielenia %. Sprawdzamy, czy reszta z dzielenia podanej liczby wynosi 0.

```przykładowy output
Podaj liczbe calkowita: *1*
Liczba nieparzysta.
```
```przykładowy output
Podaj liczbe calkowita: *2*
Liczba parzysta.
```

### IF... ELSE... IF...

**p18.c**

Warunek instrukcji `else` jest prawdziwy, wtedy, kiedy warunki innych instrukcji sterujących `if, else if` nie są spełnione.

Program oblicza sumę lub różnicę podanych liczb.

```przykładowy output
podaj liczbe a
21
podaj liczbe b
4
wybierz operacje:
1- suma, 2- iloczyn
1
suma wynosi 25.000000
```

### FOR

**p19.c**

```
for(i=17;i<=100;i++)
```

Program wyświetla liczby podzielne przez 17 z przedziału [17,100].

Dodając instrukcję sterującą, posługujemy się warunkiem, który sprawdza, czy reszta z dzielenia kolejnych liczb z przedziału [17,100] wynosi zero. Jeśli tak, to liczba jest podzielna przez 17 i zostaje ona wyświetlona na ekranie.

```output
17 34 51 68 85
```

### WHILE

**p20.c**

Instrukcje zawarte w pętli `while` są wykonywane wówczas, gdy spełniony jest warunek.

```
while(a!=0)
```

Program pobiera od użytkownika znak, a następnie wyświetla ilość kropek równą liczbie w kodzie ASCII podanego znaku.

```przykładowy output
Podaj literę: a
.................................................................................................
```

### CONTINUE

**p21.c**

Program zawiera instrukcję sterującą `continue`. Jej działanie polega na przerwaniu aktualnego kroku przetwarzania pętli i automatycznego skoku do następnego kroku wykonywania. Instrukcja continue zamieszczona jest w instrukcji if, co oznacza, że będzie wykonana tylko gdy spełniony zostanie określony warunek.

Program wyświetla liczby nieparzyste z przedziału 1-100,a  instrukcja continue zostaje uruchomiona w momencie, kiedy reszta z dzielenia aktualnej liczby w pętli przez dwa wynosi zero, co nie pozwala na wyświetlenie liczb parzystych.

```output
Liczby nieparzyste z przedziału 1-100:
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99
```

### SWITCH... CASE...

**p22.c**

Działanie instrukcji `switch` polega na zdefiniowaniu działań dla różnych wyników jednego wyrażenia.

Program oblicza sinus lub cosinus kąta, a sterowanie odbywa się instrukcję switch.

W przypadku, gdy wartość zmiennej opcja wynosi 1 `case 1`, program pozwala obliczyć wartość funkcji sinus `sin()` dla podanego kąta, natomiast jeśli zmienna opcja ma wartość 2 `case 2`, to oblicza cosinus `cos()`. Wartość domyślna określona jest jako `default`. Program korzysta z pliku nagłówkowego `math.h` poprzedzoengo dyrektywą `#include`oraz stałej odpowiadającej liczbie pi `M_PI`.

**Do polecenia kompilacji w terminalu należy dodać flagę `-lm`, co spowoduje `dodanie biblioteki matematycznej` do programu, w celu znalezienia implementacji funkcji `sin` i `cos`**

Przykładowe polecenie kompilacji dla tego kodu wyglądałoby tak:

```
gcc p22.c -o p22 -lm
```

Flaga `-o p22` określa nazwę wyjściowego pliku wykonywalnego, natomiast `-lm` dodaje bibliotekę matematyczną. Po wykonaniu tego polecenia powinno być możliwe uruchomienie programu bez błędów.

```przykładowy output
ile stopni ma kat?
23
1- sinus, 2- cosinus
2
cos 23.000000 stopni=0.921
```

### DO... WHILE...

**p23.c**

```
do{
\\kod_programu
}while(i!=6);
```

Program zawiera pętlę `do while`. Instrukcje wykonywane są przed sprawdzeniem warunku.

Program pyta o tajną liczbę, a następnie sprawdza, czy podana liczba jest równa konkretnej, właściwej tajnej liczbie.

```przykładowy output
jaka jest tajna liczba?
3
jaka jest tajna liczba?
4
jaka jest tajna liczba?
6
zezwalam na dostep
```

### LOSOWANIE

**p24.c**

```
srand(time(NULL));
```

Działanie polega na wylosowaniu 20 mnożeń i podawaniu kolejnych wyników. W razie podania poprawnego wyniku, otrzymujemy pozytywny komunikat i zwiększana jest ilość zdobytych punktów. Po sprawdzeniu 20 działań program informuje nas, jaką ilość punktów zdobyliśmy na 20 możliwych i na jaką zasługujemy ocenę.

```przykładowy output
przed Toba 20 losowych pytan
1*6= ?
6
brawo!
5*8= ?
4
blad, poprawny wynik to 40
4*9= ?
...
```

### GO TO

**p25.c**

```
początek:
    \\kod_programu
goto początek;
```

Program, po każdym działaniu zadaje pytanie, czy chcemy kontynuować zabawę. Jeśli decydujemy się na dalsze dodawania, korzystamy z instrukcji `goto` w celu powrócenia do części programu, która znajduje się przed fragmentem zadającym pytania.

```przykładowy output
80+26= ?
106
brawo!
kontynuowac?1- tak, 2- koniec
2
Twoj wynik to 1/1
```

## ZADANIA

**z11.c**

Napisz w C program obliczający sumę dowolnie wielu liczb wprowadzonych przez użytkownika i wypisujący wynik na standardowe wyjście.

```przykładowy output
Podaj liczbę liczb do zsumowania: 2
Podaj liczbę nr 1: 2
Podaj liczbę nr 2: 3
Suma podanych liczb to: 5
```

**z12.c**

Napisz w C program kalkulator umożliwiający operacje dodawania, odejmowania, mnożenia i dzielenia.

```przykładowy output
Podaj operator (+, -, *, /): /
Podaj dwie liczby:
2
7
2.00 / 7.00 = 0.29
```
