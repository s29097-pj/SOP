# REGEXP 

## Zadania A 

###**Zadanie 1**
 
Przygotuj wyrażenie regularne sprawdzające, czy tekst jest kodem pocztowym (cały tekst, czyli zaczyna się od cyfr i kończy się cyfrą).
Sprawdź, czy działa.

###**Zadanie 2**
 
Przygotuj wyrażenie regularne sprawdzające e-mail i zastosuj je do wykasowania wszystkich adresów e-mail w podanym pliku.

###**Zadanie 3**

Przygotuj wyrażenie regularne, które będzie sprawdzało, czy tekst jest poprawnie napisanym polskim imieniem
(od wielkiej litery, może mieć tylko literę i zawierać polskie znaki).

# PARAMETRY, PLIKI I FOLDERY

## Zadania B 

###**Zadanie 1**

Napisz skrypt, który sprawdzi, czy podano więcej niż jeden parametr. 
Jeśli tak, to niech wyświetli pierwszy parametr.
Jeśli nie to niech wyświetli komunikat, że nie podano parametrów.

###**Zadanie 2**

Napisz skrypt, który sprawdzi, czy istnieje plik SOP_display.sh w bieżącym katalogu.
Jeśli taki istnieje, to niech go wykona.
Jeśli nie istnieje, to niech sprawdzi, czy podano argument i wykona plik o nazwie takiej jak wartość argumentu (parametru) skryptu.
Jeśli żadne z powyższych nie nastąpiło, to niech wyświetli komunikat o błędzie.

###**Zadanie 3**

Napisz skrypt, który sprawdzi, czy jego nazwa kończy się na .sh.
Jeśli nie, to niech zmieni swoją nazwę poprzez dopisanie tego rozszerzenia (rozszerzenie nazwy pliku).
Sprawdzenie można zrobić na kilka sposobów, polecam przetestować 2. typowe:
- dopasowanie do wyrażenia regularnego (to jest bardziej uniwersalny sposób);
- porównanie ostatnich 3. liter nazwy skryptu.

###**Zadanie 4**

Napisz skrypt, który sprawdzi, czy w bieżącym katalogu jest więcej niż 5. pików.
Jeśli tak, to wypisze odpowiedni komunikat z informacją, że tak jest.
Podpowiem:
a) ls - wywietla listę pików;
b) wc - word count - zlicza znaki, słowa i linie.   