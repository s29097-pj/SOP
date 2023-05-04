#include <stdio.h>

int main()
{
    int liczba;

    // wyświetla tekst zachęty do wprowadzenia liczby
    printf("Podaj liczbe calkowita: ");

    // wczytuje liczbę wprowadzoną przez użytkownika i zapisuje ją w zmiennej liczba
    if (scanf("%d", &liczba) != 1) {
        // jeśli wartość zwrócona przez scanf() jest różna od 1, oznacza to, że wprowadzono nieprawidłowe dane
        // wyświetla komunikat o błędzie i kończy działanie programu z kodem 1 (błędem)
        printf("Nieprawidlowe dane wejsciowe. Koncze program.\n");
        return 1;
    }

    // sprawdza, czy liczba jest parzysta, i wyświetla odpowiedni komunikat
    if (liczba % 2 == 0) {
        printf("Liczba parzysta.\n");
    } else {
        printf("Liczba nieparzysta.\n");
    }

    // zwraca wartość 0, oznaczającą poprawne zakończenie działania programu
    return 0;
}