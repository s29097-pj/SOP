# REGEXP 

## Zadania A 

### **Zadanie 1**
 
Przygotuj wyrażenie regularne sprawdzające, czy tekst jest kodem pocztowym (cały tekst, czyli zaczyna się od cyfr i kończy się cyfrą).
Sprawdź, czy działa.

>Uruchomienie:
Jeśli plik się nie wykonuje to może mieć, złe kodowanie i zawierać znaki końca linii typu CR (carriage return) zamiast LF (line feed).

>Rozwiązanie:
```bash
dos2unix ZadA1.sh
```
To powinno usunąć wszystkie niepotrzebne znaki CR z pliku.

>Przykładowy output:
```bash
Wprowadź kod pocztowy: 81-591
Wprowadzony kod pocztowy (81-591) jest poprawny.
```

### **Zadanie 2**
 
Przygotuj wyrażenie regularne sprawdzające e-mail i zastosuj je do wykasowania wszystkich adresów e-mail w podanym pliku.


### **Zadanie 3**

Przygotuj wyrażenie regularne, które będzie sprawdzało, czy tekst jest poprawnie napisanym polskim imieniem
(od wielkiej litery, może mieć tylko literę i zawierać polskie znaki).

>Przykładowy output:
```bash
Podaj imię i nazwisko: Jan Brzechwa
Wprowadzone imię i nazwisko są poprawne.
```
```
Podaj imię i nazwisko: jan brzechwa
Wprowadzone imię i nazwisko są niepoprawne.
```

# PARAMETRY, PLIKI I FOLDERY

## Zadania B 

### **Zadanie 1**

Napisz skrypt, który sprawdzi, czy podano więcej niż jeden parametr. 
Jeśli tak, to niech wyświetli pierwszy parametr.
Jeśli nie to niech wyświetli komunikat, że nie podano parametrów.

>Przy podaniu parametrów:
```
bash ZadB1.sh a b c
```

>Output:
```bash
Pierwszy parametr: a
```

>Output przy braku podanych parametrów:
```bash
Nie podano żadnych parametrów.
```

### **Zadanie 2**

Napisz skrypt, który sprawdzi, czy istnieje plik SOP_display.sh w bieżącym katalogu.
- [A] Jeśli taki istnieje, to niech go wykona.
- [B] Jeśli nie istnieje, to niech sprawdzi, czy podano argument i wykona plik o nazwie takiej jak wartość argumentu (parametru) skryptu.
- [C] Jeśli żadne z powyższych nie nastąpiło, to niech wyświetli komunikat o błędzie.

>Output przy opcji [C]
```bash
Błąd: Brak pliku SOP_display.sh lub podano złą liczbę argumentów
```

### **Zadanie 3**

Napisz skrypt, który sprawdzi, czy jego nazwa kończy się na .sh.
Jeśli nie, to niech zmieni swoją nazwę poprzez dopisanie tego rozszerzenia (rozszerzenie nazwy pliku).
Sprawdzenie można zrobić na kilka sposobów, polecam przetestować 2. typowe:
[A] dopasowanie do wyrażenia regularnego (to jest bardziej uniwersalny sposób);
[B] porównanie ostatnich 3. liter nazwy skryptu.

>Output przy opcji sprawdzenia [B]
```bash
Nazwa skryptu kończy się na .sh
```

### **Zadanie 4**

Napisz skrypt, który sprawdzi, czy w bieżącym katalogu jest więcej niż 5. pików.
Jeśli tak, to wypisze odpowiedni komunikat z informacją, że tak jest.

Podpowiedź:
- [A] ls - wywietla listę pików;
- [B] wc - word count - zlicza znaki, słowa i linie.

>Output przy liczbie plików > 5
```bash
W bieżącym katalogu jest więcej niż 5 plików.
```

>Output przy liczbie plików < 5
```bash
W bieżącym katalogu jest mniej niż 5 plików.
```